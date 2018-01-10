

//#define HW_CMR_LOGSWC 0   //file log switch set 0 off,default is 1 on
#define HW_CMR_LOG_TAG "sensor_otp_common_if"

#include <linux/hw_camera_common.h>
#include "msm_sensor.h"
#include "sensor_otp_common_if.h"
#define HI843S_OFILM_RG_RATIO_TYPICAL 0x0259
#define HI843S_OFILM_BG_RATIO_TYPICAL 0x0276

#define HI553S_QTECH_RG_RATIO_TYPICAL 0x028d
#define HI553S_QTECH_BG_RATIO_TYPICAL 0x0262

#define IMX219_LITEON_RG_RATIO_TYPICAL 0x220
#define IMX219_LITEON_BG_RATIO_TYPICAL 0x267
#define IMX219_SUNNY_RG_RATIO_TYPICAL  0x234
#define IMX219_SUNNY_BG_RATIO_TYPICAL  0x246
struct otp_function_t otp_function_lists[]=
{
	#include "sensor_otp_milan.h"
	#include "sensor_otp_kobe.h"
};

/*************************************************
  Function    : is_exist_otp_function
  Description: Detect the otp we support
  Calls:
  Called By  : msm_sensor_config
  Input       : s_ctrl
  Output     : index
  Return      : true describe the otp we support
                false describe the otp we don't support

*************************************************/
bool is_exist_otp_function( struct msm_sensor_ctrl_t *s_ctrl, int32_t *index)
{
	int32_t i = 0;

	for (i=0; i<(sizeof(otp_function_lists)/sizeof(otp_function_lists[0])); ++i)
	{
        if(strlen(s_ctrl->sensordata->sensor_name) != strlen(otp_function_lists[i].sensor_name))
        {
            continue;
        }
		if (0 == strncmp(s_ctrl->sensordata->sensor_name, otp_function_lists[i].sensor_name, strlen(s_ctrl->sensordata->sensor_name)))
		{
			*index = i;
			CMR_LOGI("is_exist_otp_function success i = %d\n", i);
			return true;
		}
	}
	return false;
}
