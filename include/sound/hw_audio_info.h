#ifndef _HW_AUDIO_INFO_H
#define _HW_AUDIO_INFO_H

#define DSM_AUDIO_BUF_SIZE           (1024)   /*Byte*/

#define DSM_REPORT_DELAY_TIME        (40)
#define DSM_REPORT_BUF_SIZE          (512)

#define DSM_AUDIO_MOD_NAME           "dsm_audio_info"

#define DSM_AUDIO_LESS_HS_GAP        (500)     /*ms*/

int audio_dsm_register(void);
int audio_dsm_report_num(int error_no, unsigned int mesg_no);
int audio_dsm_report_info(int error_no, char *fmt, ...);

/* DSM audio error message level */
#define DSM_AUDIO_MESG_LEVEL_ERROR           (1)
#define DSM_AUDIO_MESG_LEVEL_INFO            (2)

/* DSM audio error message code */
#define DSM_AUDIO_MESG_GET_PINCRTL_FAIL    ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 1)
#define DSM_AUDIO_MESG_MACH_PROBE_FAIL     ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 2)
#define DSM_AUDIO_MESG_MEDOM_LOAD_FAIL     ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 3)
#define DSM_AUDIO_MESG_SPMI_GET_FAIL       ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 4)
#define DSM_AUDIO_MESG_SPMI_PROBE_FAIL     ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 5)
#define DSM_AUDIO_MESG_ALLOC_MEM_FAIL      ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 6)
#define DSM_AUDIO_MESG_IOREMAP_FAIL        ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 7)
#define DSM_AUDIO_MESG_MEDOM_REGIST_FAIL   ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 8)
#define DSM_AUDIO_MESG_HS_TYPE_DECT_FAIL   ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 9)
#define DSM_AUDIO_MESG_MODEM_CALLBACK      ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 10)
#define DSM_AUDIO_MESG_MODEM_STILL_NOTUP   ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 11)
#define DSM_AUDIO_MESG_MODEM_SHUTDOWN      ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 12)
#define DSM_AUDIO_MESG_MODEM_SMSM_RESET    ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 13)
#define DSM_AUDIO_MESG_Q6ASM_FALL          ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 14)
#define DSM_AUDIO_MESG_DSP_CMD_ERROR       ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 15)
#define DSM_AUDIO_MESG_MODEM_FATAL         ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 16)
#define DSM_AUDIO_MESG_MODEM_SSR_FAIL      ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 17)
#define DSM_AUDIO_MESG_SET_CODECCLK_FAIL   ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 18)
#define DSM_AUDIO_MESG_SET_LPASSCLK_FAIL   ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 19)
#define DSM_AUDIO_MESG_ASM_WRITE_FAIL      ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 20)
#define DSM_AUDIO_MESG_FAILED_LOAD_MODEM   ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 21)
#define DSM_AUDIO_MESG_PLUG_PRESS_ERROR    ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 22)
#define DSM_AUDIO_MESG_PRESS_RELEASE_ERROR ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 23)
#define DSM_AUDIO_MESG_MODEM_HAS_SSR       ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 24)
#define DSM_AUDIO_MESG_INSURT_TIME_SHORT   ((DSM_AUDIO_MESG_LEVEL_ERROR<<24) + 25)
#endif

