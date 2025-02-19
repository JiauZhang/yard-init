/* RT-Thread config file */
#ifndef __RTTHREAD_CFG_H__
#define __RTTHREAD_CFG_H__

/* RT_NAME_MAX*/
#define RT_NAME_MAX	32

/* RT_ALIGN_SIZE*/
#define RT_ALIGN_SIZE	4

/* PRIORITY_MAX */
#define RT_THREAD_PRIORITY_MAX	256

/* Tick per Second */
#define RT_TICK_PER_SECOND	100

/* SECTION: RT_DEBUG */
/* Thread Debug */
#define RT_DEBUG
#define SCHEDULER_DEBUG
/* #define RT_THREAD_DEBUG */

#define RT_USING_OVERFLOW_CHECK

/* Using Hook */
#define RT_USING_HOOK

/* Using Software Timer */
#define RT_USING_TIMER_SOFT
#define RT_TIMER_THREAD_PRIO		8
#define RT_TIMER_THREAD_STACK_SIZE	512
#define RT_TIMER_TICK_PER_SECOND	10

#define IDLE_THREAD_STACK_SIZE	1024


/* SECTION: IPC */
/* Using Semaphore */
#define RT_USING_SEMAPHORE

/* Using Mutex */
#define RT_USING_MUTEX

/* Using Event */
#define RT_USING_EVENT

/* Using MailBox */
#define RT_USING_MAILBOX

/* Using Message Queue */
#define RT_USING_MESSAGEQUEUE

/* SECTION: Memory Management */
/* Using Memory Pool Management*/
#define RT_USING_MEMPOOL

/* Using Dynamic Heap Management */
#define RT_USING_HEAP

/* Using Small MM */
/* #define RT_USING_SMALL_MEM */

/* Using SLAB Allocator */
#define RT_USING_SLAB

/* SECTION: Device System */
/* Using Device System */
#define RT_USING_DEVICE
#define RT_USING_DEVICE_IPC

/* Using Module System */
#define RT_USING_MODULE

/* Interrupt debug */
#define RT_USING_INTERRUPT_INFO

#define RT_USING_SERIAL
/* SECTION: Console options */
#define RT_USING_CONSOLE
/* the buffer size of console */
#define RT_CONSOLEBUF_SIZE	1024
#define RT_CONSOLE_DEVICE_NAME "uart0"

/* SECTION: finsh, a C-Express shell */
/* Using FinSH as Shell*/
#define RT_USING_FINSH
/* Using symbol table */
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
#define FINSH_THREAD_STACK_SIZE 4096
#define FINSH_USING_HISTORY 1
#define FINSH_USING_MSH

/* SECTION: the runtime libc library */
/* the runtime libc library */
#define RT_USING_LIBC
#define RT_USING_PTHREADS

/* SECTION: C++ support */
/* Using C++ support */
/* #define RT_USING_CPLUSPLUS */

/* SECTION: Device filesystem support */
/* using DFS support */
#define RT_USING_DFS
#define RT_USING_DFS_ELMFAT
/* use long file name feature 			*/
#define RT_DFS_ELM_USE_LFN			2
#define RT_DFS_ELM_REENTRANT
/* define OEM code page */
#define RT_DFS_ELM_CODE_PAGE	936
/* Using OEM code page file */
// #define RT_DFS_ELM_CODE_PAGE_FILE
/* the max number of file length 		*/
#define RT_DFS_ELM_MAX_LFN			128
/* #define RT_USING_DFS_YAFFS2 */
#define RT_USING_DFS_DEVFS

#define RT_USING_DFS_NFS
#define RT_NFS_HOST_EXPORT		"192.168.1.5:/"

#define DFS_USING_WORKDIR

/* the max number of mounted filesystem */
#define DFS_FILESYSTEMS_MAX		4
/* the max number of opened files 		*/
#define DFS_FD_MAX					16
/* the max number of cached sector 		*/
#define DFS_CACHE_MAX_NUM   		4

/* Enable freemodbus protocol stack*/
/* #define RT_USING_MODBUS */

/* USING CPU FFS */
#define RT_USING_CPU_FFS

/* MMU pte item size defined */
#define RT_MMU_PTE_SIZE		4096

#define RT_USING_GPIO

#define RT_USING_I2C

#define RT_USING_SPI

#define RT_USING_SDIO
#define RT_MMCSD_DBG

/* SECTION: lwip, a lightweight TCP/IP protocol stack */
/* Using lightweight TCP/IP protocol stack */
#define RT_USING_LWIP

/* Trace LwIP protocol */
/* #define RT_LWIP_DEBUG */

//#define RT_LWIP_REASSEMBLY_FRAG

#define SO_REUSE 1

#define RT_LWIP_DNS

/* Enable ICMP protocol */
#define RT_LWIP_ICMP

/* Enable IGMP protocol */
#define RT_LWIP_IGMP

/* Enable UDP protocol */
#define RT_LWIP_UDP

/* Enable TCP protocol */
#define RT_LWIP_TCP

/* the number of simulatenously active TCP connections*/
#define RT_LWIP_TCP_PCB_NUM	32

/* TCP sender buffer space */
#define RT_LWIP_TCP_SND_BUF	1460*10

/* TCP receive window. */
#define RT_LWIP_TCP_WND	1460*8

/* Enable SNMP protocol */
/* #define RT_LWIP_SNMP */

/* Using DHCP */
/* #define RT_LWIP_DHCP */

/* ip address of target */
#define RT_LWIP_IPADDR "192.168.1.30"

/* gateway address of target */
#define RT_LWIP_GWADDR "192.168.1.1"

/* mask address of target */
#define RT_LWIP_MSKADDR "255.255.255.0"

/* the number of blocks for pbuf */
#define RT_LWIP_PBUF_NUM	16

/* the number of simultaneously queued TCP */
#define RT_LWIP_TCP_SEG_NUM    40

/* thread priority of tcpip thread */
#define RT_LWIP_TCPTHREAD_PRIORITY	128

/* mail box size of tcpip thread to wait for */
#define RT_LWIP_TCPTHREAD_MBOX_SIZE	32

/* thread stack size of tcpip thread */
#define RT_LWIP_TCPTHREAD_STACKSIZE	4096

/* thread priority of ethnetif thread */
#define RT_LWIP_ETHTHREAD_PRIORITY	144

/* mail box size of ethnetif thread to wait for */
#define RT_LWIP_ETHTHREAD_MBOX_SIZE	32

/* thread stack size of ethnetif thread */
#define RT_LWIP_ETHTHREAD_STACKSIZE	1024

/* SECTION: RTGUI support */
/* using RTGUI support */
/* #define RT_USING_RTGUI */

/* name length of RTGUI object */
//#define RTGUI_NAME_MAX		16
/* support 16 weight font */
//#define RTGUI_USING_FONT16
/* support 16 weight font */
//#define RTGUI_USING_FONT12
/* support Chinese font */
//#define RTGUI_USING_FONTHZ
/* use DFS as file interface */
//#define RTGUI_USING_DFS_FILERW
/* use font file as Chinese font */
/* #define RTGUI_USING_HZ_FILE */
/* use Chinese bitmap font */
//#define RTGUI_USING_HZ_BMP
/* use small size in RTGUI */
/* #define RTGUI_USING_SMALL_SIZE */
/* use mouse cursor */
/* #define RTGUI_USING_MOUSE_CURSOR */

/* SECTION: FTK support */
/* using FTK support */
/* #define RT_USING_FTK */

/*
 * Note on FTK:
 *
 * FTK depends :
 * #define RT_USING_NEWLIB
 * #define DFS_USING_WORKDIR
 *
 * And the maximal length must great than 64
 * #define RT_DFS_ELM_MAX_LFN	128
 */

#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN

#endif
