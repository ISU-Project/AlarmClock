/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A65
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *     
 *     MODULE INCLUDES
 *     
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *     
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/family/arm/m3/Timer.h>
#include <ti/sysbios/family/arm/m3/TimestampProvider.h>
#include <ti/sysbios/family/arm/msp432/ClockFreqs.h>
#include <ti/sysbios/family/arm/msp432/Timer.h>
#include <ti/sysbios/family/arm/msp432/init/Boot.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/loggers/LoggerStopMode.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Types.h>

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_BIOS_RtsGateProxy___VERS
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_BIOS_RtsGateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Hwi___VERS
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Timer_Module__ ti_sysbios_family_arm_m3_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Object__ {
    const ti_sysbios_family_arm_m3_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_m3_Timer_RunMode runMode;
    ti_sysbios_family_arm_m3_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_m3_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
} ti_sysbios_family_arm_m3_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Timer_Object__ obj;
} ti_sysbios_family_arm_m3_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_m3_Timer___VERS
    #define ti_sysbios_family_arm_m3_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_m3_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.m3.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_msp432_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_msp432_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_msp432_Timer_Module__ ti_sysbios_family_arm_msp432_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_msp432_Timer_Object__ {
    const ti_sysbios_family_arm_msp432_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    xdc_UInt controlRegInit;
    ti_sysbios_interfaces_ITimer_RunMode runMode;
    ti_sysbios_interfaces_ITimer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_interfaces_ITimer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz frequency;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt savedCurrCount;
    xdc_UInt32 rollovers;
    xdc_Bool synchronous;
    xdc_UInt inputDivider;
    xdc_UInt inputDividerExp;
} ti_sysbios_family_arm_msp432_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_msp432_Timer_Object__ obj;
} ti_sysbios_family_arm_msp432_Timer_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_family_arm_msp432_Timer___VERS
    #define ti_sysbios_family_arm_msp432_Timer___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_family_arm_msp432_Timer___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateHwi___VERS
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateHwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_gates_GateMutex___VERS
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_gates_GateMutex___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi___VERS
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_hal_Hwi_HwiProxy___VERS
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem___VERS
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_heaps_HeapMem_Module_GateProxy___VERS
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock___VERS
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_msp432_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_msp432_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Clock_TimerProxy___VERS
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Clock_TimerProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Event___VERS
    #define ti_sysbios_knl_Event___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Event___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Queue___VERS
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Queue___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Semaphore___VERS
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Semaphore___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Swi___VERS
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Swi___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;

/* __ParamsPtr */
#ifdef ti_sysbios_knl_Task___VERS
    #define ti_sysbios_knl_Task___ParamsPtr xdc_UChar*
#else
    #define ti_sysbios_knl_Task___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_loggers_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_loggers_LoggerStopMode_Object__ {
    const ti_uia_loggers_LoggerStopMode_Fxns__ *__fxns;
    xdc_Bool enabled;
    xdc_Int16 instanceId;
    xdc_UInt32 bufSize;
    xdc_UInt32 *buffer;
    xdc_UInt32 *write;
    xdc_UInt32 *end;
    xdc_SizeT maxEventSizeInBits32;
    xdc_SizeT maxEventSize;
    xdc_UInt16 numBytesInPrevEvent;
    xdc_Bits32 droppedEvents;
    xdc_UInt16 eventSequenceNum;
    xdc_UInt16 pktSequenceNum;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__hdr hdr;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray packetArray;
} ti_uia_loggers_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_loggers_LoggerStopMode_Object__ obj;
} ti_uia_loggers_LoggerStopMode_Object2__;

/* __ParamsPtr */
#ifdef ti_uia_loggers_LoggerStopMode___VERS
    #define ti_uia_loggers_LoggerStopMode___ParamsPtr xdc_UChar*
#else
    #define ti_uia_loggers_LoggerStopMode___ParamsPtr xdc_Ptr
#endif


/*
 * ======== ti.uia.runtime.EventHdr INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Main_Module_GateProxy___VERS
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Main_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_Memory_HeapProxy___VERS
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_Memory_HeapProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;

/* __ParamsPtr */
#ifdef xdc_runtime_System_Module_GateProxy___VERS
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_UChar*
#else
    #define xdc_runtime_System_Module_GateProxy___ParamsPtr xdc_Ptr
#endif


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {0};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.sysbios.gates.GateHwi INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.sysbios.gates.GateMutex INHERITS ========
 */



/*
 * ======== ti.sysbios.heaps.HeapMem INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.uia.events.UIAErr INHERITS ========
 */

#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.uia.events.UIAEvt INHERITS ========
 */



/*
 * ======== ti.uia.loggers.LoggerStopMode INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {(void*)&xdc_runtime_ILogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {(void*)&xdc_runtime_IFilterLogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {(void*)&ti_uia_runtime_IUIATransfer_Interface__BASE__C};



/*
 * ======== xdc.runtime.SysMin INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== xdc.runtime.Timestamp INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {(void*)&xdc_runtime_IModule_Interface__BASE__C};



/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    (void*)&ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8031, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8036, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    (void*)&xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    (void*)&xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8025, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8029, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    (void*)&ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x802a, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_loggers_LoggerStopMode_Module__FXNS__C");
const ti_uia_loggers_LoggerStopMode_Fxns__ ti_uia_loggers_LoggerStopMode_Module__FXNS__C = {
    (void*)&ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* __base */
    &ti_uia_loggers_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_loggers_LoggerStopMode_enable__E,
    ti_uia_loggers_LoggerStopMode_disable__E,
    ti_uia_loggers_LoggerStopMode_write0__E,
    ti_uia_loggers_LoggerStopMode_write1__E,
    ti_uia_loggers_LoggerStopMode_write2__E,
    ti_uia_loggers_LoggerStopMode_write4__E,
    ti_uia_loggers_LoggerStopMode_write8__E,
    ti_uia_loggers_LoggerStopMode_setFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getTransferType__E,
    ti_uia_loggers_LoggerStopMode_getContents__E,
    ti_uia_loggers_LoggerStopMode_isEmpty__E,
    ti_uia_loggers_LoggerStopMode_getMaxLength__E,
    ti_uia_loggers_LoggerStopMode_getInstanceId__E,
    ti_uia_loggers_LoggerStopMode_getPriority__E,
    ti_uia_loggers_LoggerStopMode_setPriority__E,
    ti_uia_loggers_LoggerStopMode_reset__E,
    ti_uia_loggers_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_loggers_LoggerStopMode_Object__create__S,
        ti_uia_loggers_LoggerStopMode_Object__delete__S,
        ti_uia_loggers_LoggerStopMode_Handle__label__S,
        0x803b, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    (void*)&xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    (void*)&xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_SizeT isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Timer_Object__ ti_sysbios_family_arm_m3_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Timer_Module_State__ {
    volatile xdc_UInt tickCount;
    xdc_UInt availMask;
    ti_sysbios_family_arm_m3_Timer_Handle handle;
} ti_sysbios_family_arm_m3_Timer_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_m3_Timer_Handle timer;
} ti_sysbios_family_arm_m3_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_m3_TimestampProvider_Module_State__ ti_sysbios_family_arm_m3_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ {
    xdc_UInt32 ACLK;
    xdc_UInt32 SMCLK;
    xdc_UInt32 HSMCLK;
} ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.msp432.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_msp432_Timer_Object__ ti_sysbios_family_arm_msp432_Timer_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_msp432_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_msp432_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_msp432_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_msp432_Timer_Module_State__;

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__device ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A[4];

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__handles ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A[4];

/* Module__state__V */
ti_sysbios_family_arm_msp432_Timer_Module_State__ ti_sysbios_family_arm_msp432_Timer_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> Power_idleFunc */
extern xdc_Void Power_idleFunc(xdc_Void);

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif
/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_0_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_0_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((aligned(8)));
#endif
#endif

/* --> heartBeatFxn */
extern xdc_Void heartBeatFxn(xdc_UArg,xdc_UArg);
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=8
#endif

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];
#ifdef __ti__sect
    #pragma DATA_SECTION(ti_sysbios_knl_Task_Instance_State_1_stack__A, ".bss:taskStackSection");
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((section(".bss:taskStackSection")));
#endif
#endif
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_sysbios_knl_Task_Instance_State_1_stack__A, 8);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048] __attribute__ ((aligned(8)));
#endif
#endif

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode DECLARATIONS ========
 */

#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif
/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48] __attribute__ ((aligned(128)));
#endif
#endif
#ifdef __IAR_SYSTEMS_ICC__
    #pragma data_alignment=128
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024];
#ifdef __ti__align
    #pragma DATA_ALIGN(ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A, 128);
#endif
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif
#endif

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module_State__ {
    xdc_Bool enabled;
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} ti_uia_loggers_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.EventHdr DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_QueueDescriptor_Module_State__ {
    xdc_Ptr mPtrToFirstDescriptor;
    xdc_UInt mUpdateCount;
    xdc_UInt32 is5555ifInitialized;
} ti_uia_runtime_QueueDescriptor_Module_State__;

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V;


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Timer_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_m3_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_TimestampProvider_Module_startup__E(xdc_Int);

/* --> ti_sysbios_family_arm_msp432_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_msp432_Timer_Module_startup__E(xdc_Int);

/* --> ti_uia_loggers_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_loggers_LoggerStopMode_Module_startup__E(xdc_Int);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char*,xdc_UInt);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char**,xdc_CString*,xdc_VaList*,xdc_runtime_System_ParseData*);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_Ptr charBase;
    xdc_Ptr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7879];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[62];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__, Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__, Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__, Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__, Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__, Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = /home/burneykb/repos/AlarmClock/Debug/configPkg/package/cfg/alarm_clock_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.msp432");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = ti.targets.omf.elf.Elf32");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== ti.platforms.msp432.Platform TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32777, &xdc_runtime_Main_Module__root__V.mask},
    {32797, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32801, &ti_sysbios_knl_Task_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0;
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0;
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0;
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0;
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0;
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0;
}
xdc_Bool ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0;
}
xdc_Bool ti_sysbios_family_arm_msp432_Timer_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0;
}
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void) {
    return (&xdc_runtime_Startup_Module__state__V)->stateTab == 0 || (&xdc_runtime_Startup_Module__state__V)->stateTab[10] < 0;
}


/* 
 * Startup_exec__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_exec__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((externally_visible));
#endif
#endif

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[11];
    xdc_runtime_Startup_startModsFxn__C(state, 11);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/* 
 * Startup_reset__I is an internal entry point called by target/platform
 * boot code. Boot code is not brought into a partial-link assembly. So,
 * without this pragma, whole program optimizers would otherwise optimize-out
 * this function.
 */
#ifdef __ti__
#pragma FUNC_EXT_CALLED(xdc_runtime_Startup_reset__I);
#endif

#ifdef __GNUC__
#if __GNUC__ >= 4
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((externally_visible));
#endif
#endif

extern Void ti_sysbios_family_arm_msp432_init_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_sysbios_family_arm_msp432_init_Boot_init();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Assert.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *  
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
Int xdc_runtime_System_printfExtend__I(Char **pbuf, CString *pfmt, 
    VaList *pva, xdc_runtime_System_ParseData *parse)
{
    CString fmt = *pfmt;
    Int     res;
    Char    c;
    Bool    found = FALSE;
    
    /* 
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;
    
    res = 0;

    c = *fmt++;
    *pfmt = *pfmt + 1;

    
    if (c == '$') {
        c = *fmt++;
        *pfmt = *pfmt + 1;
        
        if (c == 'L') {
            xdc_runtime_Types_Label *lab = parse->aFlag ? 
                (xdc_runtime_Types_Label *)iargToPtr(va_arg(va, IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);
            
            /* 
             * Call Text_putLab to write out the label, taking the precision 
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
            
            /* Update the minimum width field. */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'F') {
            xdc_runtime_Types_Site site;
            
            /* Retrieve the file name string from the argument list */
            site.file = parse->aFlag ? (Char *) iargToPtr(va_arg(va, IArg)) :
                                       (Char *) va_arg(va, Char *);
            
            /* Retrieve the line number from the argument list. */
            site.line = parse->aFlag ? (Int) va_arg(va, IArg) : 
                                       (Int) va_arg(va, Int);
            
            /* 
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are 
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;
            
            /* 
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string lengrth.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;
       
            /* Update the minimum width field */
            parse->width -= res;
            
            found = TRUE;
        }
        
        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = parse->aFlag ? 
                (Char *) iargToPtr(va_arg(va, IArg)) :
                (Char *) va_arg(va, Char *);
            
            /* Update pva before passing it to doPrint. */
            *pva = va;
            
            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, parse->precis, 
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf) {
                *pbuf += res;
            }
            
            /* Update the temporary variable with any changes to *pva */
            va = *pva;
            
            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;
            
            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }
        
    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag) {
            (void)va_arg(va, IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }    

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining). 
     */
    goto end; 
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int, const char *, unsigned);
#elif (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined))
extern int _write(int, char *, int);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
Void xdc_runtime_SysMin_output__I(Char *buf, UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    Int printCount;
    
    while (size != 0) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || (printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= printCount;
        buf = buf + printCount;
    }    
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */


/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
Void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_Fxn visFxn, xdc_Ptr visState)
{
    xdc_String stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}


/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */

Void ti_sysbios_BIOS_atExitFunc__I(Int);

extern Void ti_sysbios_BIOS_registerRTSLock();
extern Void ti_sysbios_family_arm_m3_Timer_startup__E();
extern Void ti_sysbios_family_arm_msp432_Timer_startup__E();

Void ti_sysbios_BIOS_startFunc__I()
{
    xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_m3_Timer_startup__E();
    ti_sysbios_family_arm_msp432_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_knl_Task_startup();
}

#if defined(__ti__)
#include <_lock.h>
#endif

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    ti_sysbios_knl_Task_disable();
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

#if defined(__ti__)
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
#endif
}
#if defined(__ti__)

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I()
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}
#endif

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
#if defined(__ti__)
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();
#endif

    /* force thread type to 'Main' */
    ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
#if defined(__ti__)
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
#endif
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }

    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot TEMPLATE ========
 */

    extern Void ti_sysbios_family_arm_msp432_init_Boot_configureClocksHigh(Void);
    extern Void ti_sysbios_family_arm_msp432_init_Boot_configureClocksMed(Void);
    extern Void ti_sysbios_family_arm_msp432_init_Boot_configureClocksLow(Void);
    extern Void ti_sysbios_family_arm_msp432_init_Boot_disableWatchdog(Void);

#if defined(__ti__)
#pragma CODE_SECTION(ti_sysbios_family_arm_msp432_init_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_sysbios_family_arm_msp432_init_Boot_init ========
 */
Void ti_sysbios_family_arm_msp432_init_Boot_init()
{


    ti_sysbios_family_arm_msp432_init_Boot_configureClocksHigh();

    ti_sysbios_family_arm_msp432_init_Boot_disableWatchdog();
}

/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (!ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */



/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00();


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[80];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[80];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
        ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (SizeT)__section_size("CSTACK");
}
#endif

/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */




#if defined(__ti__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 *
 * On the MSP430 small model (MSP430X), size_t is 2 bytes, which makes
 * the size of this struct 6 bytes.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    xdc_runtime_Error_init(&eb);

    if (size == 0) {
        return (NULL);
    }

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    xdc_runtime_Error_init(&eb);

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    /*
     * return NULL if size is 0, or alignment is not a power of 2
     */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = malloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.uia.loggers.LoggerStopMode TEMPLATE ========
 */


#include <xdc/std.h>

#include <xdc/runtime/Log.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/UIAPacket.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/loggers/LoggerStopMode.h>

#include <string.h>  /* For memcpy */

#ifdef xdc_target__isaCompatible_64P
extern volatile cregister UInt32 TSCL, TSCH;
#endif

/*
 *  ======== ti_uia_loggers_LoggerStopMode_fillInTimestamp =========
 */
static inline UInt32 *ti_uia_loggers_LoggerStopMode_fillInTimestamp(UInt32 *writePtr)
{

#ifndef xdc_target__isaCompatible_64P
    xdc_runtime_Types_Timestamp64 tstamp;
    xdc_runtime_Timestamp_get64(&tstamp);
    *(writePtr++) = tstamp.lo;
    *(writePtr++) = tstamp.hi;
#else
    *(writePtr++) = TSCL;
    *(writePtr++) = TSCH;
#endif
    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeStart ========
 */
static inline Ptr ti_uia_loggers_LoggerStopMode_writeStart(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr, UInt32 numBytes,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid)
{


    *writePtr++ = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
        numBytes,
        obj->numBytesInPrevEvent,
        obj->eventSequenceNum,
        ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWith64bTimestamp);

    obj->numBytesInPrevEvent = numBytes;

    writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);
    *writePtr++ = xdc_runtime_Types_makeEvent(xdc_runtime_Log_getEventId(evt), mid);

    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeFinish ========
 */
static inline Void ti_uia_loggers_LoggerStopMode_writeFinish(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UInt32 *writePtr)
{
    if (writePtr > obj->end) {
        /* Set UIA packet length and sequence number */
        ti_uia_runtime_UIAPacket_setEventLengthFast(
                (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
                (UInt32)((writePtr - obj->buffer) * 4));

        /* Reset the write pointer to the beginning of the buffer */
        obj->write = obj->buffer + 4;

        /*
         *  Update the sequence count after the packet has been fully written
         *  in order to ensure that, if the target is halted it can decode the
         *  partially written packet correctly
         */
        obj->pktSequenceNum++;
        ti_uia_runtime_UIAPacket_setSequenceCounts(
            (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
            obj->pktSequenceNum,
            obj->eventSequenceNum);
    }
    else {
        obj->write = writePtr;
    }
    ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)obj->write;
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_filterOutEvent ========
 *  Returns TRUE if the event should be filtered out.
 */
Bool ti_uia_loggers_LoggerStopMode_filterOutEvent__I(xdc_runtime_Diags_Mask mask)
{
    return (FALSE);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write0__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write0__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            16, evt, mid);


    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            16,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write1__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write1__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            20, evt, mid);

    *writePtr++ = a1;

    obj->numBytesInPrevEvent = 20;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            20,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write2__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write2__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            24, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;

    obj->numBytesInPrevEvent = 24;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            24,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write4__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write4__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2, IArg a3, IArg a4)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            32, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;

    obj->numBytesInPrevEvent = 32;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            32,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write8__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write8__E(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid,
        IArg a1, IArg a2, IArg a3, IArg a4,
        IArg a5, IArg a6, IArg a7, IArg a8)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UInt32 *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            48, evt, mid);

    *writePtr++ = a1;
    *writePtr++ = a2;
    *writePtr++ = a3;
    *writePtr++ = a4;
    *writePtr++ = a5;
    *writePtr++ = a6;
    *writePtr++ = a7;
    *writePtr++ = a8;

    obj->numBytesInPrevEvent = 48;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            48,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_setFilterLevel__E ========
 *  Sets the filter level for the given diags level.
 *
 *  LoggerStopMode maintains a separate filter level for every diags category.
 *  This is accomplished by maintaining three masks, one for each of the levels
 *  1 - 3, wich store the diags categories which are currently at that level.
 *  There is no mask for level4; if the diags category is not found in levels
 *  1-3, it is  assumed that the filtering level is level4.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
Void ti_uia_loggers_LoggerStopMode_setFilterLevel__E(ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_Mask mask,
                xdc_runtime_Diags_EventLevel filterLevel)
{
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_getFilterLevel__E ========
 *  Returns the mask of diags categories which are set to the specified filter
 *  level.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
xdc_runtime_Diags_Mask ti_uia_loggers_LoggerStopMode_getFilterLevel__E (ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_EventLevel level)
{
    return (0);

}

/*  ======== writeMemoryRange =========
 *  logs a range of consecutive memory values.
 *
 *  Breaks up large blocks into a series of smaller blocks in order to limit the
 *  maximum amount of time that interrupts are disabled.
 */
Void ti_uia_loggers_LoggerStopMode_writeMemoryRange__E(ti_uia_loggers_LoggerStopMode_Object *obj, xdc_runtime_Log_Event evt,
                xdc_runtime_Types_ModuleId mid, UInt32 snapshotId,
                IArg fileName, IArg lineNum, IArg fmt,
                IArg startAdrs, UInt32 lengthInMAUs)
{
    Int i;
    UInt32 eventSizeBits32;
    UInt32 dataSizeBits32;
    Ptr pAdrs = iargToPtr(startAdrs);
    SizeT headerSizeBits32;
    SizeT lenAdjustedBits32;
    Int numRecords;
    UInt key;
    UInt32 *writePtr = obj->write;



    if (obj->maxEventSizeInBits32 == 0) {
        return;
    }

    /* Size of header in 32 bit words */
    headerSizeBits32 = 10;

    /* Round up to word boundary */
    lenAdjustedBits32 = (lengthInMAUs + sizeof(Bits32) - 1) / sizeof(Bits32);

    numRecords = (lenAdjustedBits32 / (obj->maxEventSizeInBits32 - headerSizeBits32)) + 1;

    for (i = 0; i < numRecords; i++) {
        if ((headerSizeBits32 + lenAdjustedBits32) > obj->maxEventSizeInBits32) {
            dataSizeBits32 = obj->maxEventSizeInBits32 - headerSizeBits32;
            lenAdjustedBits32 -= dataSizeBits32;
        }
        else {
            dataSizeBits32 = lenAdjustedBits32;
        }
        eventSizeBits32 = dataSizeBits32 + headerSizeBits32;

        key = ti_sysbios_hal_Hwi_disable();
        if ((writePtr + eventSizeBits32) >= obj->end) {
            ti_uia_loggers_LoggerStopMode_flush(obj);
            writePtr = obj->write;
        }

        if ((writePtr == NULL ) || ((writePtr + eventSizeBits32) >= obj->end)) {
            obj->droppedEvents++;
            ti_sysbios_hal_Hwi_restore(key);

            continue;
        }

        /*
         *  Fill in Snapshot header.
         *  Use events with previous event length in header to allow events
         *  to be read from partially written packets
         */
        *(writePtr++) = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            ((eventSizeBits32) * 4),
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum, ti_uia_runtime_EventHdr_HdrType_SnapshotEventWithPrevLenAnd64bTimestamp);

        writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);

        *(writePtr++) = ((evt) & 0xffff0000) | mid;
        *(writePtr++) = fileName;
        *(writePtr++) = lineNum;
        *(writePtr++) = snapshotId;
        *(writePtr++) = (Bits32)pAdrs;
        *(writePtr++) = (((((dataSizeBits32) * sizeof(Bits32)) & 0x0FFFF)<<16) | (lengthInMAUs & 0x0FFFF));
        *(writePtr++) = fmt;

        memcpy((Ptr)writePtr, pAdrs, ((dataSizeBits32) * sizeof(Bits32)));
        writePtr = (Ptr)((Char *)writePtr + ((dataSizeBits32) * sizeof(Bits32)));

        /*
         * Update serial number even if the buffer is full or disabled.
         * We do this because a reader (decoder) of the buffer needs to
         * know if events have been missed, and the buffer might become
         * un-FULL at some later time.
         */
        obj->eventSequenceNum++;

        obj->numBytesInPrevEvent = ((eventSizeBits32) * 4);
        *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            obj->numBytesInPrevEvent,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

        obj->write = writePtr;

        ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)writePtr;
        pAdrs = (Ptr)((Char *)pAdrs + ((dataSizeBits32) * sizeof(Bits32)));
        ti_sysbios_hal_Hwi_restore(key);
    }
    obj->write = writePtr;
}

/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}


/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_BIOS_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x2dc6c00,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int))((xdc_Fxn)ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((CT__ti_sysbios_BIOS_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((CT__ti_sysbios_BIOS_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((CT__ti_sysbios_BIOS_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8013;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((CT__ti_sysbios_BIOS_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((CT__ti_sysbios_BIOS_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__startupDoneFxn__C, ".const:ti_sysbios_BIOS_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__startupDoneFxn ti_sysbios_BIOS_Module__startupDoneFxn__C = ((CT__ti_sysbios_BIOS_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = 0;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0,  /* hi */
    (xdc_Bits32)0x2dc6c00,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((CT__ti_sysbios_BIOS_installedErrorHook)((xdc_Fxn)xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_m3_Timer_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_m3_Timer_periodicStub__I)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0xf,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)(0x0)),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_periodicStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xff,  /* priority */
        (xdc_Int16)0x18,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)0),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)0),  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)0),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)0),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    (xdc_SizeT)0x1000,  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext*))0),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x8030;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0x50;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)7149) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)7219) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)3191) << 16 | 16);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4289) << 16 | 0);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4337) << 16 | 0);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4385) << 16 | 0);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4590) << 16 | 0);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4618) << 16 | 0);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4628) << 16 | 0);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4644) << 16 | 0);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4674) << 16 | 0);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4704) << 16 | 0);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4721) << 16 | 0);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4742) << 16 | 0);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4757) << 16 | 0);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)0);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)((xdc_Fxn)ti_sysbios_knl_Swi_disable__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)((xdc_Fxn)ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8031;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = 0;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x8032;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TaskSupport_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = 0;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8;


/*
 * ======== ti.sysbios.family.arm.m3.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Timer_Params ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Timer_Module__ ti_sysbios_family_arm_m3_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Timer_Object__ ti_sysbios_family_arm_m3_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffff,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0xf,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_family_arm_m3_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x0,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_Timer_Module_State__ ti_sysbios_family_arm_m3_Timer_Module__state__V = {
    (xdc_UInt)0x0,  /* tickCount */
    (xdc_UInt)0x0,  /* availMask */
    (ti_sysbios_family_arm_m3_Timer_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0],  /* handle */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__diagsMask ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__gateObj ti_sysbios_family_arm_m3_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__gatePrms ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__id__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__id ti_sysbios_family_arm_m3_Timer_Module__id__C = (xdc_Bits16)0x8033;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerDefined ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerObj ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__count__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__count ti_sysbios_family_arm_m3_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__heap ti_sysbios_family_arm_m3_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__sizeof ti_sysbios_family_arm_m3_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__table__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_Object__table ti_sysbios_family_arm_m3_Timer_Object__table__C = ti_sysbios_family_arm_m3_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_invalidTimer ti_sysbios_family_arm_m3_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4775) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_m3_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_notAvailable ti_sysbios_family_arm_m3_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4811) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_E_cannotSupport ti_sysbios_family_arm_m3_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4850) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_anyMask__C, ".const:ti_sysbios_family_arm_m3_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_anyMask ti_sysbios_family_arm_m3_Timer_anyMask__C = (xdc_UInt)0x1;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_m3_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Timer_startupNeeded ti_sysbios_family_arm_m3_Timer_startupNeeded__C = (xdc_UInt)0x1;


/*
 * ======== ti.sysbios.family.arm.m3.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_m3_TimestampProvider_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_m3_TimestampProvider_Module_State__ ti_sysbios_family_arm_m3_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_TimestampProvider_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_m3_TimestampProvider_Module_State__ ti_sysbios_family_arm_m3_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_m3_Timer_Handle)&ti_sysbios_family_arm_m3_Timer_Object__table__V[0],  /* timer */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__gateObj ti_sysbios_family_arm_m3_TimestampProvider_Module__gateObj__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_m3_TimestampProvider_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__id ti_sysbios_family_arm_m3_TimestampProvider_Module__id__C = (xdc_Bits16)0x8034;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDoneFxn ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Object__count ti_sysbios_family_arm_m3_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Object__heap ti_sysbios_family_arm_m3_TimestampProvider_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Object__sizeof ti_sysbios_family_arm_m3_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_Object__table ti_sysbios_family_arm_m3_TimestampProvider_Object__table__C = 0;

/* configTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TimestampProvider_configTimer__C, ".const:ti_sysbios_family_arm_m3_TimestampProvider_configTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TimestampProvider_configTimer ti_sysbios_family_arm_m3_TimestampProvider_configTimer__C = 0;


/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_msp432_ClockFreqs_Module_State__ ti_sysbios_family_arm_msp432_ClockFreqs_Module__state__V = {
    (xdc_UInt32)0x8000,  /* ACLK */
    (xdc_UInt32)0xb71b00,  /* SMCLK */
    (xdc_UInt32)0x16e3600,  /* HSMCLK */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__id__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__id ti_sysbios_family_arm_msp432_ClockFreqs_Module__id__C = (xdc_Bits16)0x8039;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8 ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDoneFxn ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__count__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__count ti_sysbios_family_arm_msp432_ClockFreqs_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap ti_sysbios_family_arm_msp432_ClockFreqs_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof ti_sysbios_family_arm_msp432_ClockFreqs_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_Object__table__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_Object__table ti_sysbios_family_arm_msp432_ClockFreqs_Object__table__C = 0;

/* ACLK__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_ACLK__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_ACLK__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_ACLK ti_sysbios_family_arm_msp432_ClockFreqs_ACLK__C = (xdc_UInt32)0x8000;

/* SMCLK__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK ti_sysbios_family_arm_msp432_ClockFreqs_SMCLK__C = (xdc_UInt32)0xb71b00;

/* HSMCLK__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK__C, ".const:ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK ti_sysbios_family_arm_msp432_ClockFreqs_HSMCLK__C = (xdc_UInt32)0x16e3600;


/*
 * ======== ti.sysbios.family.arm.msp432.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_msp432_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_msp432_Timer_Params ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_msp432_Timer_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)0),  /* arg */
    (xdc_UInt32)0x0,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0,  /* hi */
        (xdc_Bits32)0x0,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)0),  /* hwiParams */
    ti_sysbios_family_arm_msp432_Timer_Source_ACLK,  /* clockSource */
    0,  /* synchronous */
    ti_sysbios_family_arm_msp432_Timer_ID_1,  /* inputDivider */
    ti_sysbios_family_arm_msp432_Timer_IDEX_1,  /* inputDividerExp */
    0,  /* nesting */
    (xdc_UInt)0x0,  /* prevThreshold */
    (xdc_UInt)0x100,  /* controlRegInit */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_msp432_Timer_Module__ ti_sysbios_family_arm_msp432_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_msp432_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_msp432_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_msp432_Timer_Object__ ti_sysbios_family_arm_msp432_Timer_Object__table__V[1] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        (xdc_UInt)0x100,  /* controlRegInit */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x20,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x18,  /* intNum */
        ((xdc_UArg)0),  /* arg */
        ((xdc_Void(*)(xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0,  /* hi */
            (xdc_Bits32)0x8000,  /* lo */
        },  /* frequency */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0x0,  /* prevThreshold */
        (xdc_UInt)0x0,  /* savedCurrCount */
        (xdc_UInt32)0x0,  /* rollovers */
        0,  /* synchronous */
        (xdc_UInt)0x0,  /* inputDivider */
        (xdc_UInt)0x0,  /* inputDividerExp */
    },
};

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__device ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A[4] = {
    {
        (xdc_UInt)0x18,  /* intNum */
        ((xdc_Ptr)(0x40000000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x1a,  /* intNum */
        ((xdc_Ptr)(0x40000400)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x1c,  /* intNum */
        ((xdc_Ptr)(0x40000800)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x1e,  /* intNum */
        ((xdc_Ptr)(0x40000c00)),  /* baseAddr */
    },  /* [3] */
};

/* --> ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_msp432_Timer_Module_State__handles ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A[4] = {
    (ti_sysbios_family_arm_msp432_Timer_Handle)&ti_sysbios_family_arm_msp432_Timer_Object__table__V[0],  /* [0] */
    0,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_family_arm_msp432_Timer_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_family_arm_msp432_Timer_Module_State__ ti_sysbios_family_arm_msp432_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_msp432_Timer_Module__state__V")));
#endif
#endif
ti_sysbios_family_arm_msp432_Timer_Module_State__ ti_sysbios_family_arm_msp432_Timer_Module__state__V = {
    (xdc_UInt)0xe,  /* availMask */
    ((void*)ti_sysbios_family_arm_msp432_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_msp432_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsMask ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__gateObj ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__gatePrms ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__id__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__id ti_sysbios_family_arm_msp432_Timer_Module__id__C = (xdc_Bits16)0x8038;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerObj ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_msp432_Timer_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Module__startupDoneFxn ti_sysbios_family_arm_msp432_Timer_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_msp432_Timer_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__count__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__count ti_sysbios_family_arm_msp432_Timer_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__heap ti_sysbios_family_arm_msp432_Timer_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__sizeof ti_sysbios_family_arm_msp432_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_msp432_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__table__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_Object__table ti_sysbios_family_arm_msp432_Timer_Object__table__C = ti_sysbios_family_arm_msp432_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_msp432_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_E_invalidTimer ti_sysbios_family_arm_msp432_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4775) << 16 | 0);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_msp432_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_E_notAvailable ti_sysbios_family_arm_msp432_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4811) << 16 | 0);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_msp432_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_E_cannotSupport ti_sysbios_family_arm_msp432_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)4850) << 16 | 0);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_anyMask__C, ".const:ti_sysbios_family_arm_msp432_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_anyMask ti_sysbios_family_arm_msp432_Timer_anyMask__C = (xdc_UInt)0xf;

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_msp432_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_startupNeeded ti_sysbios_family_arm_msp432_Timer_startupNeeded__C = (xdc_UInt)0x1;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_msp432_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_Timer_numTimerDevices ti_sysbios_family_arm_msp432_Timer_numTimerDevices__C = (xdc_Int)0x4;


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled ti_sysbios_family_arm_msp432_init_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded ti_sysbios_family_arm_msp432_init_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__id__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__id ti_sysbios_family_arm_msp432_init_Boot_Module__id__C = (xdc_Bits16)0x8018;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined ti_sysbios_family_arm_msp432_init_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8 ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Module__startupDoneFxn__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Module__startupDoneFxn ti_sysbios_family_arm_msp432_init_Boot_Module__startupDoneFxn__C = ((CT__ti_sysbios_family_arm_msp432_init_Boot_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__count__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__count ti_sysbios_family_arm_msp432_init_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__heap__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__heap ti_sysbios_family_arm_msp432_init_Boot_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof ti_sysbios_family_arm_msp432_init_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_init_Boot_Object__table__C, ".const:ti_sysbios_family_arm_msp432_init_Boot_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432_init_Boot_Object__table ti_sysbios_family_arm_msp432_init_Boot_Object__table__C = 0;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateHwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateHwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8036;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn ti_sysbios_gates_GateHwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateHwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((CT__ti_sysbios_gates_GateMutex_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((CT__ti_sysbios_gates_GateMutex_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8037;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C, ".const:ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn ti_sysbios_gates_GateMutex_Module__startupDoneFxn__C = ((CT__ti_sysbios_gates_GateMutex_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3604) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((CT__ti_sysbios_hal_Hwi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((CT__ti_sysbios_hal_Hwi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((CT__ti_sysbios_hal_Hwi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8023;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__startupDoneFxn__C, ".const:ti_sysbios_hal_Hwi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn ti_sysbios_hal_Hwi_Module__startupDoneFxn__C = ((CT__ti_sysbios_hal_Hwi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = 0;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4168) << 16 | 0);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A */
__T1_ti_sysbios_heaps_HeapMem_Instance_State__buf ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A[4096];

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)ti_sysbios_heaps_HeapMem_Instance_State_0_buf__A),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)0),  /* next */
            ((xdc_UArg)(0x1000)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8025;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C, ".const:ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn ti_sysbios_heaps_HeapMem_Module__startupDoneFxn__C = ((CT__ti_sysbios_heaps_HeapMem_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2414) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)2450) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)2495) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)4253) << 16 | 0);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2386) << 16 | 16);

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0,  /* period */
    ((xdc_UArg)0),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Clock_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0,  /* ticks */
    (xdc_UInt)0x0,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_msp432_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1,  /* numTickSkip */
    (xdc_UInt32)0x1,  /* nextScheduledTick */
    (xdc_UInt32)0x0,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((CT__ti_sysbios_knl_Clock_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((CT__ti_sysbios_knl_Clock_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((CT__ti_sysbios_knl_Clock_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((CT__ti_sysbios_knl_Clock_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Clock_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Clock_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__startupDoneFxn ti_sysbios_knl_Clock_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Clock_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = 0;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)5126) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)5148) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)5166) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)400) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)481) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((CT__ti_sysbios_knl_Clock_doTickFunc)((xdc_Fxn)ti_sysbios_knl_Clock_doTick__I));


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((CT__ti_sysbios_knl_Event_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((CT__ti_sysbios_knl_Event_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x801d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Event_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Event_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__startupDoneFxn ti_sysbios_knl_Event_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Event_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)5198) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)5252) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)551) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)598) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)637) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)680) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)743) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)Power_idleFunc)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_checkStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_utils_Load_idleFxn__E)),  /* [2] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3] = {
    (xdc_UInt)0x0,  /* [0] */
    (xdc_UInt)0x0,  /* [1] */
    (xdc_UInt)0x0,  /* [2] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((CT__ti_sysbios_knl_Idle_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((CT__ti_sysbios_knl_Idle_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((CT__ti_sysbios_knl_Idle_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((CT__ti_sysbios_knl_Idle_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Idle_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Idle_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__startupDoneFxn ti_sysbios_knl_Idle_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Idle_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = 0;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {3, ((__T1_ti_sysbios_knl_Idle_funcList*)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {3, ((__T1_ti_sysbios_knl_Idle_coreList*)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x801c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn ti_sysbios_knl_Intrinsics_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Intrinsics_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((CT__ti_sysbios_knl_Queue_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((CT__ti_sysbios_knl_Queue_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((CT__ti_sysbios_knl_Queue_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x801e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((CT__ti_sysbios_knl_Queue_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Queue_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Queue_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__startupDoneFxn ti_sysbios_knl_Queue_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Queue_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = 0;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((CT__ti_sysbios_knl_Semaphore_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((CT__ti_sysbios_knl_Semaphore_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x801f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn ti_sysbios_knl_Semaphore_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Semaphore_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = 0;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)5333) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)5363) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)891) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)946) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)680) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1011) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1065) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 1;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((CT__ti_sysbios_knl_Semaphore_eventPost)0);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((CT__ti_sysbios_knl_Semaphore_eventSync)0);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xf,  /* priority */
        (xdc_UInt)0x8000,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0,  /* initTrigger */
        (xdc_UInt)0x0,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Swi_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    (xdc_UInt)0x0,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((CT__ti_sysbios_knl_Swi_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((CT__ti_sysbios_knl_Swi_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((CT__ti_sysbios_knl_Swi_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8020;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((CT__ti_sysbios_knl_Swi_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Swi_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Swi_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__startupDoneFxn ti_sysbios_knl_Swi_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Swi_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)5406) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)5453) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)5471) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1159) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1216) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((CT__ti_sysbios_knl_Swi_taskDisable)((xdc_Fxn)ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((CT__ti_sysbios_knl_Swi_taskRestore)((xdc_Fxn)ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)0),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)0),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_1_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_1_stack__A[2048];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[2] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x1,  /* priority */
        (xdc_UInt)0x2,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)heartBeatFxn)),  /* fxn */
        ((xdc_UArg)(0x3e8)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
    {/* instance#1 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[1].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1,  /* mask */
        ((xdc_Ptr)0),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)0),  /* pendElem */
        (xdc_SizeT)0x800,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_1_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg,xdc_UArg))((xdc_Fxn)ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)0),  /* env */
        ((void*)0),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0,  /* curCoreId */
        (xdc_UInt)0x0,  /* affinity */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[1],  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_knl_Task_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x2,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((CT__ti_sysbios_knl_Task_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((CT__ti_sysbios_knl_Task_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8021;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((CT__ti_sysbios_knl_Task_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__startupDoneFxn__C, ".const:ti_sysbios_knl_Task_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__startupDoneFxn ti_sysbios_knl_Task_Module__startupDoneFxn__C = ((CT__ti_sysbios_knl_Task_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)5511) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)5579) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)5624) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)5665) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)5697) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)5745) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)5801) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)5832) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)5915) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)6001) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4043) << 16 | 0);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4086) << 16 | 0);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4137) << 16 | 0);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1265) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1334) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1388) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1442) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1505) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1555) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1590) << 16 | 16);

/* A_setAffinityTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_setAffinityTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_setAffinityTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_setAffinityTaskDisabled ti_sysbios_knl_Task_A_setAffinityTaskDisabled__C = (((xdc_runtime_Assert_Id)1623) << 16 | 16);

/* A_setPriTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_setPriTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_setPriTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_setPriTaskDisabled ti_sysbios_knl_Task_A_setPriTaskDisabled__C = (((xdc_runtime_Assert_Id)1719) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)1805) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)1889) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x800;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((CT__ti_sysbios_knl_Task_allBlockedFunc)0);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {0, 0};

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((CT__ti_sysbios_knl_Task_startupHookFunc)0);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_sysbios_utils_Load_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data_ti_sysbios_utils_Load_Module__state__V")));
#endif
#endif
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* swiEnv */
    ((void*)0),  /* taskEnv */
    (xdc_UInt32)0x0,  /* swiCnt */
    (xdc_UInt32)0x0,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0,  /* totalTimeElapsed */
        (xdc_UInt32)0x0,  /* totalTime */
        (xdc_UInt32)0x0,  /* nextTotalTime */
        (xdc_UInt32)0x0,  /* timeOfLastUpdate */
        ((xdc_Ptr)0),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0,  /* hwiCnt */
    (xdc_UInt32)0x0,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffff,  /* minLoop */
    (xdc_UInt32)0x0,  /* minIdle */
    (xdc_UInt32)0x0,  /* t0 */
    (xdc_UInt32)0x0,  /* idleCnt */
    (xdc_UInt32)0x0,  /* cpuLoad */
    (xdc_UInt32)0x0,  /* taskEnvLen */
    (xdc_UInt32)0x0,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0,  /* idleStartTime */
    (xdc_UInt32)0x0,  /* busyStartTime */
    (xdc_UInt32)0x0,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x890;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((CT__ti_sysbios_utils_Load_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((CT__ti_sysbios_utils_Load_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((CT__ti_sysbios_utils_Load_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x803d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((CT__ti_sysbios_utils_Load_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__startupDoneFxn__C, ".const:ti_sysbios_utils_Load_Module__startupDoneFxn__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__startupDoneFxn ti_sysbios_utils_Load_Module__startupDoneFxn__C = ((CT__ti_sysbios_utils_Load_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = 0;

/* LS_cpuLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)7257) << 16 | 2048);

/* LS_hwiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)7274) << 16 | 2048);

/* LS_swiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)7292) << 16 | 2048);

/* LS_taskLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)7310) << 16 | 2048);

/* postUpdate__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((CT__ti_sysbios_utils_Load_postUpdate)0);

/* updateInIdle__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4;

/* hwiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 0;

/* autoAddTasks__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 0;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((CT__ti_uia_events_DvtTypes_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((CT__ti_uia_events_DvtTypes_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((CT__ti_uia_events_DvtTypes_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x8028;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((CT__ti_uia_events_DvtTypes_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((CT__ti_uia_events_DvtTypes_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__startupDoneFxn__C, ".const:ti_uia_events_DvtTypes_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__startupDoneFxn ti_uia_events_DvtTypes_Module__startupDoneFxn__C = ((CT__ti_uia_events_DvtTypes_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = 0;


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((CT__ti_uia_events_UIAErr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((CT__ti_uia_events_UIAErr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((CT__ti_uia_events_UIAErr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x8029;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((CT__ti_uia_events_UIAErr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAErr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAErr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__startupDoneFxn ti_uia_events_UIAErr_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAErr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = 0;

/* error__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)6071) << 16 | 192);

/* errorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)6093) << 16 | 192);

/* hwError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)6120) << 16 | 192);

/* hwErrorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)6145) << 16 | 192);

/* fatal__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)6175) << 16 | 128);

/* fatalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)6203) << 16 | 128);

/* critical__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)6236) << 16 | 160);

/* criticalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)6267) << 16 | 160);

/* exception__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)6303) << 16 | 192);

/* uncaughtException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)6328) << 16 | 192);

/* nullPointerException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)6362) << 16 | 192);

/* unexpectedInterrupt__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)6400) << 16 | 192);

/* memoryAccessFault__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)6436) << 16 | 192);

/* securityException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)6482) << 16 | 192);

/* divisionByZero__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)6516) << 16 | 192);

/* overflowException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)6548) << 16 | 192);

/* indexOutOfRange__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)6582) << 16 | 192);

/* notImplemented__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)6628) << 16 | 192);

/* stackOverflow__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)6693) << 16 | 160);

/* illegalInstruction__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)6732) << 16 | 192);

/* entryPointNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)6776) << 16 | 192);

/* moduleNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)6813) << 16 | 192);

/* floatingPointError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)6862) << 16 | 192);

/* invalidParameter__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)6898) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((CT__ti_uia_events_UIAEvt_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((CT__ti_uia_events_UIAEvt_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((CT__ti_uia_events_UIAEvt_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x802a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((CT__ti_uia_events_UIAEvt_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((CT__ti_uia_events_UIAEvt_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__startupDoneFxn__C, ".const:ti_uia_events_UIAEvt_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__startupDoneFxn ti_uia_events_UIAEvt_Module__startupDoneFxn__C = ((CT__ti_uia_events_UIAEvt_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = 0;

/* warning__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)6961) << 16 | 224);

/* warningWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)6985) << 16 | 224);

/* info__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)7014) << 16 | 16384);

/* infoWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)7036) << 16 | 16384);

/* detail__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)7063) << 16 | 16480);

/* detailWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)7086) << 16 | 16480);

/* intWithKey__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)7115) << 16 | 32768);


/*
 * ======== ti.uia.loggers.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_loggers_LoggerStopMode_Object__PARAMS__C");
__FAR__ const ti_uia_loggers_LoggerStopMode_Params ti_uia_loggers_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_loggers_LoggerStopMode_Params), /* __size */
    0, /* __self */
    0, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_Int16)0x1,  /* instanceId */
    (xdc_SizeT)0x0,  /* transferBufSize */
    (xdc_SizeT)0x200,  /* maxEventSize */
    (xdc_SizeT)0x578,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024];

/* Module__root__V */
ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V = {
    {&ti_uia_loggers_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x1,  /* instanceId */
        (xdc_UInt32)0x200,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A),  /* packetArray */
    },
    {/* instance#1 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x2,  /* instanceId */
        (xdc_UInt32)0x400,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A),  /* packetArray */
    },
    {/* instance#2 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x3,  /* instanceId */
        (xdc_UInt32)0x400,  /* bufSize */
        ((xdc_UInt32*)0),  /* buffer */
        ((xdc_UInt32*)0),  /* write */
        ((xdc_UInt32*)0),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeInBits32 */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0,  /* droppedEvents */
        (xdc_UInt16)0x0,  /* eventSequenceNum */
        (xdc_UInt16)0x0,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A),  /* packetArray */
    },
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_loggers_LoggerStopMode_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data_ti_uia_loggers_LoggerStopMode_Module__state__V")));
#endif
#endif
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V = {
    1,  /* enabled */
    (xdc_Bits16)0x0,  /* level1 */
    (xdc_Bits16)0x0,  /* level2 */
    (xdc_Bits16)0x0,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsEnabled ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsIncluded ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsMask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask ti_uia_loggers_LoggerStopMode_Module__diagsMask__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gateObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj ti_uia_loggers_LoggerStopMode_Module__gateObj__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gatePrms__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms ti_uia_loggers_LoggerStopMode_Module__gatePrms__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__id__C, ".const:ti_uia_loggers_LoggerStopMode_Module__id__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__id ti_uia_loggers_LoggerStopMode_Module__id__C = (xdc_Bits16)0x803b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerDefined ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj ti_uia_loggers_LoggerStopMode_Module__loggerObj__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C, ".const:ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn__C = ((CT__ti_uia_loggers_LoggerStopMode_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__count__C, ".const:ti_uia_loggers_LoggerStopMode_Object__count__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__count ti_uia_loggers_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__heap__C, ".const:ti_uia_loggers_LoggerStopMode_Object__heap__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__heap ti_uia_loggers_LoggerStopMode_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_loggers_LoggerStopMode_Object__sizeof__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__sizeof ti_uia_loggers_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_loggers_LoggerStopMode_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__table__C, ".const:ti_uia_loggers_LoggerStopMode_Object__table__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__table ti_uia_loggers_LoggerStopMode_Object__table__C = ti_uia_loggers_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_filterByLevel__C, ".const:ti_uia_loggers_LoggerStopMode_filterByLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_filterByLevel ti_uia_loggers_LoggerStopMode_filterByLevel__C = 0;

/* isTimestampEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_isTimestampEnabled ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C = 1;

/* supportLoggerDisable__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C, ".const:ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_supportLoggerDisable ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level1Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level1Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level1Mask ti_uia_loggers_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0;

/* level2Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level2Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level2Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level2Mask ti_uia_loggers_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0;

/* level3Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level3Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level3Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level3Mask ti_uia_loggers_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0;

/* level4Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level4Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level4Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level4Mask ti_uia_loggers_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87;

/* L_test__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_L_test__C, ".const:ti_uia_loggers_LoggerStopMode_L_test__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_L_test ti_uia_loggers_LoggerStopMode_L_test__C = (((xdc_runtime_Log_Event)7237) << 16 | 256);

/* E_badLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_E_badLevel__C, ".const:ti_uia_loggers_LoggerStopMode_E_badLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_E_badLevel ti_uia_loggers_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)3871) << 16 | 0);

/* numCores__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_numCores__C, ".const:ti_uia_loggers_LoggerStopMode_numCores__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_numCores ti_uia_loggers_LoggerStopMode_numCores__C = (xdc_Int)0x1;


/*
 * ======== ti.uia.runtime.EventHdr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsEnabled__C, ".const:ti_uia_runtime_EventHdr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsEnabled ti_uia_runtime_EventHdr_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsIncluded__C, ".const:ti_uia_runtime_EventHdr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsIncluded ti_uia_runtime_EventHdr_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsMask__C, ".const:ti_uia_runtime_EventHdr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsMask ti_uia_runtime_EventHdr_Module__diagsMask__C = ((CT__ti_uia_runtime_EventHdr_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gateObj__C, ".const:ti_uia_runtime_EventHdr_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gateObj ti_uia_runtime_EventHdr_Module__gateObj__C = ((CT__ti_uia_runtime_EventHdr_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gatePrms__C, ".const:ti_uia_runtime_EventHdr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gatePrms ti_uia_runtime_EventHdr_Module__gatePrms__C = ((CT__ti_uia_runtime_EventHdr_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__id__C, ".const:ti_uia_runtime_EventHdr_Module__id__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__id ti_uia_runtime_EventHdr_Module__id__C = (xdc_Bits16)0x802c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerDefined__C, ".const:ti_uia_runtime_EventHdr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerDefined ti_uia_runtime_EventHdr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerObj__C, ".const:ti_uia_runtime_EventHdr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerObj ti_uia_runtime_EventHdr_Module__loggerObj__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn0__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0 ti_uia_runtime_EventHdr_Module__loggerFxn0__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn1__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1 ti_uia_runtime_EventHdr_Module__loggerFxn1__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn2__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2 ti_uia_runtime_EventHdr_Module__loggerFxn2__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn4__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4 ti_uia_runtime_EventHdr_Module__loggerFxn4__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn8__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8 ti_uia_runtime_EventHdr_Module__loggerFxn8__C = ((CT__ti_uia_runtime_EventHdr_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__startupDoneFxn__C, ".const:ti_uia_runtime_EventHdr_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn ti_uia_runtime_EventHdr_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_EventHdr_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__count__C, ".const:ti_uia_runtime_EventHdr_Object__count__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__count ti_uia_runtime_EventHdr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__heap__C, ".const:ti_uia_runtime_EventHdr_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__heap ti_uia_runtime_EventHdr_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__sizeof__C, ".const:ti_uia_runtime_EventHdr_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__sizeof ti_uia_runtime_EventHdr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__table__C, ".const:ti_uia_runtime_EventHdr_Object__table__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__table ti_uia_runtime_EventHdr_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_ti_uia_runtime_QueueDescriptor_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data_ti_uia_runtime_QueueDescriptor_Module__state__V")));
#endif
#endif
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V = {
    ((xdc_Ptr)0),  /* mPtrToFirstDescriptor */
    (xdc_UInt)0x0,  /* mUpdateCount */
    (xdc_UInt32)0x5555,  /* is5555ifInitialized */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x802d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C, ".const:ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_QueueDescriptor_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = 0;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x802e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C, ".const:ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn ti_uia_runtime_UIAMetaData_Module__startupDoneFxn__C = ((CT__ti_uia_runtime_UIAMetaData_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = 0;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((CT__xdc_runtime_Assert_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((CT__xdc_runtime_Assert_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((CT__xdc_runtime_Assert_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((CT__xdc_runtime_Assert_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((CT__xdc_runtime_Assert_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((CT__xdc_runtime_Assert_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((CT__xdc_runtime_Assert_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((CT__xdc_runtime_Assert_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((CT__xdc_runtime_Assert_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__startupDoneFxn__C, ".const:xdc_runtime_Assert_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Assert_Module__startupDoneFxn xdc_runtime_Assert_Module__startupDoneFxn__C = ((CT__xdc_runtime_Assert_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = 0;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3803) << 16 | 0);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((CT__xdc_runtime_Core_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((CT__xdc_runtime_Core_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((CT__xdc_runtime_Core_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((CT__xdc_runtime_Core_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((CT__xdc_runtime_Core_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((CT__xdc_runtime_Core_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((CT__xdc_runtime_Core_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((CT__xdc_runtime_Core_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((CT__xdc_runtime_Core_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__startupDoneFxn__C, ".const:xdc_runtime_Core_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Core_Module__startupDoneFxn xdc_runtime_Core_Module__startupDoneFxn__C = ((CT__xdc_runtime_Core_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = 0;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((CT__xdc_runtime_Defaults_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((CT__xdc_runtime_Defaults_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((CT__xdc_runtime_Defaults_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((CT__xdc_runtime_Defaults_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((CT__xdc_runtime_Defaults_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__startupDoneFxn__C, ".const:xdc_runtime_Defaults_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__startupDoneFxn xdc_runtime_Defaults_Module__startupDoneFxn__C = ((CT__xdc_runtime_Defaults_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = 0;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((CT__xdc_runtime_Diags_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((CT__xdc_runtime_Diags_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((CT__xdc_runtime_Diags_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((CT__xdc_runtime_Diags_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((CT__xdc_runtime_Diags_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((CT__xdc_runtime_Diags_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((CT__xdc_runtime_Diags_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((CT__xdc_runtime_Diags_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((CT__xdc_runtime_Diags_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__startupDoneFxn__C, ".const:xdc_runtime_Diags_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Diags_Module__startupDoneFxn xdc_runtime_Diags_Module__startupDoneFxn__C = ((CT__xdc_runtime_Diags_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = 0;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Error_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((CT__xdc_runtime_Error_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((CT__xdc_runtime_Error_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((CT__xdc_runtime_Error_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((CT__xdc_runtime_Error_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((CT__xdc_runtime_Error_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((CT__xdc_runtime_Error_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((CT__xdc_runtime_Error_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((CT__xdc_runtime_Error_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((CT__xdc_runtime_Error_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__startupDoneFxn__C, ".const:xdc_runtime_Error_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Error_Module__startupDoneFxn xdc_runtime_Error_Module__startupDoneFxn__C = ((CT__xdc_runtime_Error_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = 0;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((CT__xdc_runtime_Error_policyFxn)((xdc_Fxn)xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3825) << 16 | 0);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3829) << 16 | 0);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3863) << 16 | 0);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((CT__xdc_runtime_Error_raiseHook)((xdc_Fxn)ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x10;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((CT__xdc_runtime_Gate_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((CT__xdc_runtime_Gate_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((CT__xdc_runtime_Gate_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((CT__xdc_runtime_Gate_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((CT__xdc_runtime_Gate_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((CT__xdc_runtime_Gate_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((CT__xdc_runtime_Gate_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((CT__xdc_runtime_Gate_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((CT__xdc_runtime_Gate_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__startupDoneFxn__C, ".const:xdc_runtime_Gate_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Gate_Module__startupDoneFxn xdc_runtime_Gate_Module__startupDoneFxn__C = ((CT__xdc_runtime_Gate_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = 0;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((CT__xdc_runtime_Log_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((CT__xdc_runtime_Log_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((CT__xdc_runtime_Log_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((CT__xdc_runtime_Log_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((CT__xdc_runtime_Log_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((CT__xdc_runtime_Log_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((CT__xdc_runtime_Log_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((CT__xdc_runtime_Log_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((CT__xdc_runtime_Log_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__startupDoneFxn__C, ".const:xdc_runtime_Log_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Log_Module__startupDoneFxn xdc_runtime_Log_Module__startupDoneFxn__C = ((CT__xdc_runtime_Log_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = 0;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)4950) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)4974) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)4995) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5014) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5031) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5045) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5061) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5068) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5079) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5089) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5108) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((CT__xdc_runtime_Main_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((CT__xdc_runtime_Main_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((CT__xdc_runtime_Main_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((CT__xdc_runtime_Main_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((CT__xdc_runtime_Main_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((CT__xdc_runtime_Main_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__startupDoneFxn__C, ".const:xdc_runtime_Main_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Main_Module__startupDoneFxn xdc_runtime_Main_Module__startupDoneFxn__C = ((CT__xdc_runtime_Main_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = 0;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Memory_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((CT__xdc_runtime_Memory_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((CT__xdc_runtime_Memory_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((CT__xdc_runtime_Memory_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800a;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((CT__xdc_runtime_Memory_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((CT__xdc_runtime_Memory_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((CT__xdc_runtime_Memory_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((CT__xdc_runtime_Memory_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((CT__xdc_runtime_Memory_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((CT__xdc_runtime_Memory_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__startupDoneFxn__C, ".const:xdc_runtime_Memory_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Memory_Module__startupDoneFxn xdc_runtime_Memory_Module__startupDoneFxn__C = ((CT__xdc_runtime_Memory_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = 0;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Registry_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)0),  /* listHead */
    (xdc_Bits16)0x7fff,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((CT__xdc_runtime_Registry_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((CT__xdc_runtime_Registry_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((CT__xdc_runtime_Registry_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800b;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((CT__xdc_runtime_Registry_Module__loggerFxn0)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((CT__xdc_runtime_Registry_Module__loggerFxn1)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((CT__xdc_runtime_Registry_Module__loggerFxn2)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((CT__xdc_runtime_Registry_Module__loggerFxn4)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((CT__xdc_runtime_Registry_Module__loggerFxn8)((xdc_Fxn)ti_uia_loggers_LoggerStopMode_write8));

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__startupDoneFxn__C, ".const:xdc_runtime_Registry_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Registry_Module__startupDoneFxn xdc_runtime_Registry_Module__startupDoneFxn__C = ((CT__xdc_runtime_Registry_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = 0;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Startup_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)0),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[3] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_heaps_HeapMem_init__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_hal_Hwi_initStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [2] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))((xdc_Fxn)ti_sysbios_family_arm_m3_TimestampProvider_startTimer__E)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[11] = {
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Swi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_knl_Task_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_hal_Hwi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_m3_TimestampProvider_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Module_startup__E)),  /* [9] */
    ((xdc_Int(*)(xdc_Int))((xdc_Fxn)ti_uia_loggers_LoggerStopMode_Module_startup__E)),  /* [10] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[11] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
    1,  /* [8] */
    0,  /* [9] */
    1,  /* [10] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((CT__xdc_runtime_Startup_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((CT__xdc_runtime_Startup_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((CT__xdc_runtime_Startup_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800c;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((CT__xdc_runtime_Startup_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((CT__xdc_runtime_Startup_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((CT__xdc_runtime_Startup_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((CT__xdc_runtime_Startup_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((CT__xdc_runtime_Startup_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((CT__xdc_runtime_Startup_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__startupDoneFxn__C, ".const:xdc_runtime_Startup_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Startup_Module__startupDoneFxn xdc_runtime_Startup_Module__startupDoneFxn__C = ((CT__xdc_runtime_Startup_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = 0;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {3, ((__T1_xdc_runtime_Startup_firstFxns*)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns*)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((CT__xdc_runtime_Startup_startModsFxn)((xdc_Fxn)xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((CT__xdc_runtime_Startup_execImpl)((xdc_Fxn)xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[1024];

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_SysMin_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((CT__xdc_runtime_SysMin_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((CT__xdc_runtime_SysMin_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((CT__xdc_runtime_SysMin_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800e;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((CT__xdc_runtime_SysMin_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((CT__xdc_runtime_SysMin_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__startupDoneFxn__C, ".const:xdc_runtime_SysMin_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__startupDoneFxn xdc_runtime_SysMin_Module__startupDoneFxn__C = ((CT__xdc_runtime_SysMin_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = 0;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x400;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((CT__xdc_runtime_SysMin_outputFxn)0);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((CT__xdc_runtime_SysMin_outputFunc)((xdc_Fxn)xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[8] = {
    ((xdc_Void(*)(xdc_Int))0),  /* [0] */
    ((xdc_Void(*)(xdc_Int))0),  /* [1] */
    ((xdc_Void(*)(xdc_Int))0),  /* [2] */
    ((xdc_Void(*)(xdc_Int))0),  /* [3] */
    ((xdc_Void(*)(xdc_Int))0),  /* [4] */
    ((xdc_Void(*)(xdc_Int))0),  /* [5] */
    ((xdc_Void(*)(xdc_Int))0),  /* [6] */
    ((xdc_Void(*)(xdc_Int))0),  /* [7] */
};

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_System_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((CT__xdc_runtime_System_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((CT__xdc_runtime_System_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800d;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((CT__xdc_runtime_System_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((CT__xdc_runtime_System_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((CT__xdc_runtime_System_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((CT__xdc_runtime_System_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((CT__xdc_runtime_System_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((CT__xdc_runtime_System_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__startupDoneFxn__C, ".const:xdc_runtime_System_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_System_Module__startupDoneFxn xdc_runtime_System_Module__startupDoneFxn__C = ((CT__xdc_runtime_System_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = 0;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x8;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((CT__xdc_runtime_System_abortFxn)((xdc_Fxn)xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((CT__xdc_runtime_System_exitFxn)((xdc_Fxn)xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((CT__xdc_runtime_System_extendFxn)((xdc_Fxn)xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#if defined (__ICCARM__)
#pragma location = ".data_xdc_runtime_Text_Module__state__V"
#endif
#if defined(__GNUC__) && !(defined(__MACH__) && defined(__APPLE__))
#ifndef __TI_COMPILER_VERSION__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_Ptr)((void*)&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_Ptr)((void*)&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[7879] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x63,  /* [402] */
    (xdc_Char)0x6c,  /* [403] */
    (xdc_Char)0x6f,  /* [404] */
    (xdc_Char)0x63,  /* [405] */
    (xdc_Char)0x6b,  /* [406] */
    (xdc_Char)0x44,  /* [407] */
    (xdc_Char)0x69,  /* [408] */
    (xdc_Char)0x73,  /* [409] */
    (xdc_Char)0x61,  /* [410] */
    (xdc_Char)0x62,  /* [411] */
    (xdc_Char)0x6c,  /* [412] */
    (xdc_Char)0x65,  /* [413] */
    (xdc_Char)0x64,  /* [414] */
    (xdc_Char)0x3a,  /* [415] */
    (xdc_Char)0x20,  /* [416] */
    (xdc_Char)0x43,  /* [417] */
    (xdc_Char)0x61,  /* [418] */
    (xdc_Char)0x6e,  /* [419] */
    (xdc_Char)0x6e,  /* [420] */
    (xdc_Char)0x6f,  /* [421] */
    (xdc_Char)0x74,  /* [422] */
    (xdc_Char)0x20,  /* [423] */
    (xdc_Char)0x63,  /* [424] */
    (xdc_Char)0x72,  /* [425] */
    (xdc_Char)0x65,  /* [426] */
    (xdc_Char)0x61,  /* [427] */
    (xdc_Char)0x74,  /* [428] */
    (xdc_Char)0x65,  /* [429] */
    (xdc_Char)0x20,  /* [430] */
    (xdc_Char)0x61,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x63,  /* [433] */
    (xdc_Char)0x6c,  /* [434] */
    (xdc_Char)0x6f,  /* [435] */
    (xdc_Char)0x63,  /* [436] */
    (xdc_Char)0x6b,  /* [437] */
    (xdc_Char)0x20,  /* [438] */
    (xdc_Char)0x69,  /* [439] */
    (xdc_Char)0x6e,  /* [440] */
    (xdc_Char)0x73,  /* [441] */
    (xdc_Char)0x74,  /* [442] */
    (xdc_Char)0x61,  /* [443] */
    (xdc_Char)0x6e,  /* [444] */
    (xdc_Char)0x63,  /* [445] */
    (xdc_Char)0x65,  /* [446] */
    (xdc_Char)0x20,  /* [447] */
    (xdc_Char)0x77,  /* [448] */
    (xdc_Char)0x68,  /* [449] */
    (xdc_Char)0x65,  /* [450] */
    (xdc_Char)0x6e,  /* [451] */
    (xdc_Char)0x20,  /* [452] */
    (xdc_Char)0x42,  /* [453] */
    (xdc_Char)0x49,  /* [454] */
    (xdc_Char)0x4f,  /* [455] */
    (xdc_Char)0x53,  /* [456] */
    (xdc_Char)0x2e,  /* [457] */
    (xdc_Char)0x63,  /* [458] */
    (xdc_Char)0x6c,  /* [459] */
    (xdc_Char)0x6f,  /* [460] */
    (xdc_Char)0x63,  /* [461] */
    (xdc_Char)0x6b,  /* [462] */
    (xdc_Char)0x45,  /* [463] */
    (xdc_Char)0x6e,  /* [464] */
    (xdc_Char)0x61,  /* [465] */
    (xdc_Char)0x62,  /* [466] */
    (xdc_Char)0x6c,  /* [467] */
    (xdc_Char)0x65,  /* [468] */
    (xdc_Char)0x64,  /* [469] */
    (xdc_Char)0x20,  /* [470] */
    (xdc_Char)0x69,  /* [471] */
    (xdc_Char)0x73,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x66,  /* [474] */
    (xdc_Char)0x61,  /* [475] */
    (xdc_Char)0x6c,  /* [476] */
    (xdc_Char)0x73,  /* [477] */
    (xdc_Char)0x65,  /* [478] */
    (xdc_Char)0x2e,  /* [479] */
    (xdc_Char)0x0,  /* [480] */
    (xdc_Char)0x41,  /* [481] */
    (xdc_Char)0x5f,  /* [482] */
    (xdc_Char)0x62,  /* [483] */
    (xdc_Char)0x61,  /* [484] */
    (xdc_Char)0x64,  /* [485] */
    (xdc_Char)0x54,  /* [486] */
    (xdc_Char)0x68,  /* [487] */
    (xdc_Char)0x72,  /* [488] */
    (xdc_Char)0x65,  /* [489] */
    (xdc_Char)0x61,  /* [490] */
    (xdc_Char)0x64,  /* [491] */
    (xdc_Char)0x54,  /* [492] */
    (xdc_Char)0x79,  /* [493] */
    (xdc_Char)0x70,  /* [494] */
    (xdc_Char)0x65,  /* [495] */
    (xdc_Char)0x3a,  /* [496] */
    (xdc_Char)0x20,  /* [497] */
    (xdc_Char)0x43,  /* [498] */
    (xdc_Char)0x61,  /* [499] */
    (xdc_Char)0x6e,  /* [500] */
    (xdc_Char)0x6e,  /* [501] */
    (xdc_Char)0x6f,  /* [502] */
    (xdc_Char)0x74,  /* [503] */
    (xdc_Char)0x20,  /* [504] */
    (xdc_Char)0x63,  /* [505] */
    (xdc_Char)0x72,  /* [506] */
    (xdc_Char)0x65,  /* [507] */
    (xdc_Char)0x61,  /* [508] */
    (xdc_Char)0x74,  /* [509] */
    (xdc_Char)0x65,  /* [510] */
    (xdc_Char)0x2f,  /* [511] */
    (xdc_Char)0x64,  /* [512] */
    (xdc_Char)0x65,  /* [513] */
    (xdc_Char)0x6c,  /* [514] */
    (xdc_Char)0x65,  /* [515] */
    (xdc_Char)0x74,  /* [516] */
    (xdc_Char)0x65,  /* [517] */
    (xdc_Char)0x20,  /* [518] */
    (xdc_Char)0x61,  /* [519] */
    (xdc_Char)0x20,  /* [520] */
    (xdc_Char)0x43,  /* [521] */
    (xdc_Char)0x6c,  /* [522] */
    (xdc_Char)0x6f,  /* [523] */
    (xdc_Char)0x63,  /* [524] */
    (xdc_Char)0x6b,  /* [525] */
    (xdc_Char)0x20,  /* [526] */
    (xdc_Char)0x66,  /* [527] */
    (xdc_Char)0x72,  /* [528] */
    (xdc_Char)0x6f,  /* [529] */
    (xdc_Char)0x6d,  /* [530] */
    (xdc_Char)0x20,  /* [531] */
    (xdc_Char)0x48,  /* [532] */
    (xdc_Char)0x77,  /* [533] */
    (xdc_Char)0x69,  /* [534] */
    (xdc_Char)0x20,  /* [535] */
    (xdc_Char)0x6f,  /* [536] */
    (xdc_Char)0x72,  /* [537] */
    (xdc_Char)0x20,  /* [538] */
    (xdc_Char)0x53,  /* [539] */
    (xdc_Char)0x77,  /* [540] */
    (xdc_Char)0x69,  /* [541] */
    (xdc_Char)0x20,  /* [542] */
    (xdc_Char)0x74,  /* [543] */
    (xdc_Char)0x68,  /* [544] */
    (xdc_Char)0x72,  /* [545] */
    (xdc_Char)0x65,  /* [546] */
    (xdc_Char)0x61,  /* [547] */
    (xdc_Char)0x64,  /* [548] */
    (xdc_Char)0x2e,  /* [549] */
    (xdc_Char)0x0,  /* [550] */
    (xdc_Char)0x41,  /* [551] */
    (xdc_Char)0x5f,  /* [552] */
    (xdc_Char)0x6e,  /* [553] */
    (xdc_Char)0x75,  /* [554] */
    (xdc_Char)0x6c,  /* [555] */
    (xdc_Char)0x6c,  /* [556] */
    (xdc_Char)0x45,  /* [557] */
    (xdc_Char)0x76,  /* [558] */
    (xdc_Char)0x65,  /* [559] */
    (xdc_Char)0x6e,  /* [560] */
    (xdc_Char)0x74,  /* [561] */
    (xdc_Char)0x4d,  /* [562] */
    (xdc_Char)0x61,  /* [563] */
    (xdc_Char)0x73,  /* [564] */
    (xdc_Char)0x6b,  /* [565] */
    (xdc_Char)0x73,  /* [566] */
    (xdc_Char)0x3a,  /* [567] */
    (xdc_Char)0x20,  /* [568] */
    (xdc_Char)0x6f,  /* [569] */
    (xdc_Char)0x72,  /* [570] */
    (xdc_Char)0x4d,  /* [571] */
    (xdc_Char)0x61,  /* [572] */
    (xdc_Char)0x73,  /* [573] */
    (xdc_Char)0x6b,  /* [574] */
    (xdc_Char)0x20,  /* [575] */
    (xdc_Char)0x61,  /* [576] */
    (xdc_Char)0x6e,  /* [577] */
    (xdc_Char)0x64,  /* [578] */
    (xdc_Char)0x20,  /* [579] */
    (xdc_Char)0x61,  /* [580] */
    (xdc_Char)0x6e,  /* [581] */
    (xdc_Char)0x64,  /* [582] */
    (xdc_Char)0x4d,  /* [583] */
    (xdc_Char)0x61,  /* [584] */
    (xdc_Char)0x73,  /* [585] */
    (xdc_Char)0x6b,  /* [586] */
    (xdc_Char)0x20,  /* [587] */
    (xdc_Char)0x61,  /* [588] */
    (xdc_Char)0x72,  /* [589] */
    (xdc_Char)0x65,  /* [590] */
    (xdc_Char)0x20,  /* [591] */
    (xdc_Char)0x6e,  /* [592] */
    (xdc_Char)0x75,  /* [593] */
    (xdc_Char)0x6c,  /* [594] */
    (xdc_Char)0x6c,  /* [595] */
    (xdc_Char)0x2e,  /* [596] */
    (xdc_Char)0x0,  /* [597] */
    (xdc_Char)0x41,  /* [598] */
    (xdc_Char)0x5f,  /* [599] */
    (xdc_Char)0x6e,  /* [600] */
    (xdc_Char)0x75,  /* [601] */
    (xdc_Char)0x6c,  /* [602] */
    (xdc_Char)0x6c,  /* [603] */
    (xdc_Char)0x45,  /* [604] */
    (xdc_Char)0x76,  /* [605] */
    (xdc_Char)0x65,  /* [606] */
    (xdc_Char)0x6e,  /* [607] */
    (xdc_Char)0x74,  /* [608] */
    (xdc_Char)0x49,  /* [609] */
    (xdc_Char)0x64,  /* [610] */
    (xdc_Char)0x3a,  /* [611] */
    (xdc_Char)0x20,  /* [612] */
    (xdc_Char)0x70,  /* [613] */
    (xdc_Char)0x6f,  /* [614] */
    (xdc_Char)0x73,  /* [615] */
    (xdc_Char)0x74,  /* [616] */
    (xdc_Char)0x65,  /* [617] */
    (xdc_Char)0x64,  /* [618] */
    (xdc_Char)0x20,  /* [619] */
    (xdc_Char)0x65,  /* [620] */
    (xdc_Char)0x76,  /* [621] */
    (xdc_Char)0x65,  /* [622] */
    (xdc_Char)0x6e,  /* [623] */
    (xdc_Char)0x74,  /* [624] */
    (xdc_Char)0x49,  /* [625] */
    (xdc_Char)0x64,  /* [626] */
    (xdc_Char)0x20,  /* [627] */
    (xdc_Char)0x69,  /* [628] */
    (xdc_Char)0x73,  /* [629] */
    (xdc_Char)0x20,  /* [630] */
    (xdc_Char)0x6e,  /* [631] */
    (xdc_Char)0x75,  /* [632] */
    (xdc_Char)0x6c,  /* [633] */
    (xdc_Char)0x6c,  /* [634] */
    (xdc_Char)0x2e,  /* [635] */
    (xdc_Char)0x0,  /* [636] */
    (xdc_Char)0x41,  /* [637] */
    (xdc_Char)0x5f,  /* [638] */
    (xdc_Char)0x65,  /* [639] */
    (xdc_Char)0x76,  /* [640] */
    (xdc_Char)0x65,  /* [641] */
    (xdc_Char)0x6e,  /* [642] */
    (xdc_Char)0x74,  /* [643] */
    (xdc_Char)0x49,  /* [644] */
    (xdc_Char)0x6e,  /* [645] */
    (xdc_Char)0x55,  /* [646] */
    (xdc_Char)0x73,  /* [647] */
    (xdc_Char)0x65,  /* [648] */
    (xdc_Char)0x3a,  /* [649] */
    (xdc_Char)0x20,  /* [650] */
    (xdc_Char)0x45,  /* [651] */
    (xdc_Char)0x76,  /* [652] */
    (xdc_Char)0x65,  /* [653] */
    (xdc_Char)0x6e,  /* [654] */
    (xdc_Char)0x74,  /* [655] */
    (xdc_Char)0x20,  /* [656] */
    (xdc_Char)0x6f,  /* [657] */
    (xdc_Char)0x62,  /* [658] */
    (xdc_Char)0x6a,  /* [659] */
    (xdc_Char)0x65,  /* [660] */
    (xdc_Char)0x63,  /* [661] */
    (xdc_Char)0x74,  /* [662] */
    (xdc_Char)0x20,  /* [663] */
    (xdc_Char)0x61,  /* [664] */
    (xdc_Char)0x6c,  /* [665] */
    (xdc_Char)0x72,  /* [666] */
    (xdc_Char)0x65,  /* [667] */
    (xdc_Char)0x61,  /* [668] */
    (xdc_Char)0x64,  /* [669] */
    (xdc_Char)0x79,  /* [670] */
    (xdc_Char)0x20,  /* [671] */
    (xdc_Char)0x69,  /* [672] */
    (xdc_Char)0x6e,  /* [673] */
    (xdc_Char)0x20,  /* [674] */
    (xdc_Char)0x75,  /* [675] */
    (xdc_Char)0x73,  /* [676] */
    (xdc_Char)0x65,  /* [677] */
    (xdc_Char)0x2e,  /* [678] */
    (xdc_Char)0x0,  /* [679] */
    (xdc_Char)0x41,  /* [680] */
    (xdc_Char)0x5f,  /* [681] */
    (xdc_Char)0x62,  /* [682] */
    (xdc_Char)0x61,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x43,  /* [685] */
    (xdc_Char)0x6f,  /* [686] */
    (xdc_Char)0x6e,  /* [687] */
    (xdc_Char)0x74,  /* [688] */
    (xdc_Char)0x65,  /* [689] */
    (xdc_Char)0x78,  /* [690] */
    (xdc_Char)0x74,  /* [691] */
    (xdc_Char)0x3a,  /* [692] */
    (xdc_Char)0x20,  /* [693] */
    (xdc_Char)0x62,  /* [694] */
    (xdc_Char)0x61,  /* [695] */
    (xdc_Char)0x64,  /* [696] */
    (xdc_Char)0x20,  /* [697] */
    (xdc_Char)0x63,  /* [698] */
    (xdc_Char)0x61,  /* [699] */
    (xdc_Char)0x6c,  /* [700] */
    (xdc_Char)0x6c,  /* [701] */
    (xdc_Char)0x69,  /* [702] */
    (xdc_Char)0x6e,  /* [703] */
    (xdc_Char)0x67,  /* [704] */
    (xdc_Char)0x20,  /* [705] */
    (xdc_Char)0x63,  /* [706] */
    (xdc_Char)0x6f,  /* [707] */
    (xdc_Char)0x6e,  /* [708] */
    (xdc_Char)0x74,  /* [709] */
    (xdc_Char)0x65,  /* [710] */
    (xdc_Char)0x78,  /* [711] */
    (xdc_Char)0x74,  /* [712] */
    (xdc_Char)0x2e,  /* [713] */
    (xdc_Char)0x20,  /* [714] */
    (xdc_Char)0x4d,  /* [715] */
    (xdc_Char)0x75,  /* [716] */
    (xdc_Char)0x73,  /* [717] */
    (xdc_Char)0x74,  /* [718] */
    (xdc_Char)0x20,  /* [719] */
    (xdc_Char)0x62,  /* [720] */
    (xdc_Char)0x65,  /* [721] */
    (xdc_Char)0x20,  /* [722] */
    (xdc_Char)0x63,  /* [723] */
    (xdc_Char)0x61,  /* [724] */
    (xdc_Char)0x6c,  /* [725] */
    (xdc_Char)0x6c,  /* [726] */
    (xdc_Char)0x65,  /* [727] */
    (xdc_Char)0x64,  /* [728] */
    (xdc_Char)0x20,  /* [729] */
    (xdc_Char)0x66,  /* [730] */
    (xdc_Char)0x72,  /* [731] */
    (xdc_Char)0x6f,  /* [732] */
    (xdc_Char)0x6d,  /* [733] */
    (xdc_Char)0x20,  /* [734] */
    (xdc_Char)0x61,  /* [735] */
    (xdc_Char)0x20,  /* [736] */
    (xdc_Char)0x54,  /* [737] */
    (xdc_Char)0x61,  /* [738] */
    (xdc_Char)0x73,  /* [739] */
    (xdc_Char)0x6b,  /* [740] */
    (xdc_Char)0x2e,  /* [741] */
    (xdc_Char)0x0,  /* [742] */
    (xdc_Char)0x41,  /* [743] */
    (xdc_Char)0x5f,  /* [744] */
    (xdc_Char)0x70,  /* [745] */
    (xdc_Char)0x65,  /* [746] */
    (xdc_Char)0x6e,  /* [747] */
    (xdc_Char)0x64,  /* [748] */
    (xdc_Char)0x54,  /* [749] */
    (xdc_Char)0x61,  /* [750] */
    (xdc_Char)0x73,  /* [751] */
    (xdc_Char)0x6b,  /* [752] */
    (xdc_Char)0x44,  /* [753] */
    (xdc_Char)0x69,  /* [754] */
    (xdc_Char)0x73,  /* [755] */
    (xdc_Char)0x61,  /* [756] */
    (xdc_Char)0x62,  /* [757] */
    (xdc_Char)0x6c,  /* [758] */
    (xdc_Char)0x65,  /* [759] */
    (xdc_Char)0x64,  /* [760] */
    (xdc_Char)0x3a,  /* [761] */
    (xdc_Char)0x20,  /* [762] */
    (xdc_Char)0x43,  /* [763] */
    (xdc_Char)0x61,  /* [764] */
    (xdc_Char)0x6e,  /* [765] */
    (xdc_Char)0x6e,  /* [766] */
    (xdc_Char)0x6f,  /* [767] */
    (xdc_Char)0x74,  /* [768] */
    (xdc_Char)0x20,  /* [769] */
    (xdc_Char)0x63,  /* [770] */
    (xdc_Char)0x61,  /* [771] */
    (xdc_Char)0x6c,  /* [772] */
    (xdc_Char)0x6c,  /* [773] */
    (xdc_Char)0x20,  /* [774] */
    (xdc_Char)0x45,  /* [775] */
    (xdc_Char)0x76,  /* [776] */
    (xdc_Char)0x65,  /* [777] */
    (xdc_Char)0x6e,  /* [778] */
    (xdc_Char)0x74,  /* [779] */
    (xdc_Char)0x5f,  /* [780] */
    (xdc_Char)0x70,  /* [781] */
    (xdc_Char)0x65,  /* [782] */
    (xdc_Char)0x6e,  /* [783] */
    (xdc_Char)0x64,  /* [784] */
    (xdc_Char)0x28,  /* [785] */
    (xdc_Char)0x29,  /* [786] */
    (xdc_Char)0x20,  /* [787] */
    (xdc_Char)0x77,  /* [788] */
    (xdc_Char)0x68,  /* [789] */
    (xdc_Char)0x69,  /* [790] */
    (xdc_Char)0x6c,  /* [791] */
    (xdc_Char)0x65,  /* [792] */
    (xdc_Char)0x20,  /* [793] */
    (xdc_Char)0x74,  /* [794] */
    (xdc_Char)0x68,  /* [795] */
    (xdc_Char)0x65,  /* [796] */
    (xdc_Char)0x20,  /* [797] */
    (xdc_Char)0x54,  /* [798] */
    (xdc_Char)0x61,  /* [799] */
    (xdc_Char)0x73,  /* [800] */
    (xdc_Char)0x6b,  /* [801] */
    (xdc_Char)0x20,  /* [802] */
    (xdc_Char)0x6f,  /* [803] */
    (xdc_Char)0x72,  /* [804] */
    (xdc_Char)0x20,  /* [805] */
    (xdc_Char)0x53,  /* [806] */
    (xdc_Char)0x77,  /* [807] */
    (xdc_Char)0x69,  /* [808] */
    (xdc_Char)0x20,  /* [809] */
    (xdc_Char)0x73,  /* [810] */
    (xdc_Char)0x63,  /* [811] */
    (xdc_Char)0x68,  /* [812] */
    (xdc_Char)0x65,  /* [813] */
    (xdc_Char)0x64,  /* [814] */
    (xdc_Char)0x75,  /* [815] */
    (xdc_Char)0x6c,  /* [816] */
    (xdc_Char)0x65,  /* [817] */
    (xdc_Char)0x72,  /* [818] */
    (xdc_Char)0x20,  /* [819] */
    (xdc_Char)0x69,  /* [820] */
    (xdc_Char)0x73,  /* [821] */
    (xdc_Char)0x20,  /* [822] */
    (xdc_Char)0x64,  /* [823] */
    (xdc_Char)0x69,  /* [824] */
    (xdc_Char)0x73,  /* [825] */
    (xdc_Char)0x61,  /* [826] */
    (xdc_Char)0x62,  /* [827] */
    (xdc_Char)0x6c,  /* [828] */
    (xdc_Char)0x65,  /* [829] */
    (xdc_Char)0x64,  /* [830] */
    (xdc_Char)0x2e,  /* [831] */
    (xdc_Char)0x0,  /* [832] */
    (xdc_Char)0x4d,  /* [833] */
    (xdc_Char)0x61,  /* [834] */
    (xdc_Char)0x69,  /* [835] */
    (xdc_Char)0x6c,  /* [836] */
    (xdc_Char)0x62,  /* [837] */
    (xdc_Char)0x6f,  /* [838] */
    (xdc_Char)0x78,  /* [839] */
    (xdc_Char)0x5f,  /* [840] */
    (xdc_Char)0x63,  /* [841] */
    (xdc_Char)0x72,  /* [842] */
    (xdc_Char)0x65,  /* [843] */
    (xdc_Char)0x61,  /* [844] */
    (xdc_Char)0x74,  /* [845] */
    (xdc_Char)0x65,  /* [846] */
    (xdc_Char)0x27,  /* [847] */
    (xdc_Char)0x73,  /* [848] */
    (xdc_Char)0x20,  /* [849] */
    (xdc_Char)0x62,  /* [850] */
    (xdc_Char)0x75,  /* [851] */
    (xdc_Char)0x66,  /* [852] */
    (xdc_Char)0x53,  /* [853] */
    (xdc_Char)0x69,  /* [854] */
    (xdc_Char)0x7a,  /* [855] */
    (xdc_Char)0x65,  /* [856] */
    (xdc_Char)0x20,  /* [857] */
    (xdc_Char)0x70,  /* [858] */
    (xdc_Char)0x61,  /* [859] */
    (xdc_Char)0x72,  /* [860] */
    (xdc_Char)0x61,  /* [861] */
    (xdc_Char)0x6d,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x74,  /* [864] */
    (xdc_Char)0x65,  /* [865] */
    (xdc_Char)0x72,  /* [866] */
    (xdc_Char)0x20,  /* [867] */
    (xdc_Char)0x69,  /* [868] */
    (xdc_Char)0x73,  /* [869] */
    (xdc_Char)0x20,  /* [870] */
    (xdc_Char)0x69,  /* [871] */
    (xdc_Char)0x6e,  /* [872] */
    (xdc_Char)0x76,  /* [873] */
    (xdc_Char)0x61,  /* [874] */
    (xdc_Char)0x6c,  /* [875] */
    (xdc_Char)0x69,  /* [876] */
    (xdc_Char)0x64,  /* [877] */
    (xdc_Char)0x20,  /* [878] */
    (xdc_Char)0x28,  /* [879] */
    (xdc_Char)0x74,  /* [880] */
    (xdc_Char)0x6f,  /* [881] */
    (xdc_Char)0x6f,  /* [882] */
    (xdc_Char)0x20,  /* [883] */
    (xdc_Char)0x73,  /* [884] */
    (xdc_Char)0x6d,  /* [885] */
    (xdc_Char)0x61,  /* [886] */
    (xdc_Char)0x6c,  /* [887] */
    (xdc_Char)0x6c,  /* [888] */
    (xdc_Char)0x29,  /* [889] */
    (xdc_Char)0x0,  /* [890] */
    (xdc_Char)0x41,  /* [891] */
    (xdc_Char)0x5f,  /* [892] */
    (xdc_Char)0x6e,  /* [893] */
    (xdc_Char)0x6f,  /* [894] */
    (xdc_Char)0x45,  /* [895] */
    (xdc_Char)0x76,  /* [896] */
    (xdc_Char)0x65,  /* [897] */
    (xdc_Char)0x6e,  /* [898] */
    (xdc_Char)0x74,  /* [899] */
    (xdc_Char)0x73,  /* [900] */
    (xdc_Char)0x3a,  /* [901] */
    (xdc_Char)0x20,  /* [902] */
    (xdc_Char)0x54,  /* [903] */
    (xdc_Char)0x68,  /* [904] */
    (xdc_Char)0x65,  /* [905] */
    (xdc_Char)0x20,  /* [906] */
    (xdc_Char)0x45,  /* [907] */
    (xdc_Char)0x76,  /* [908] */
    (xdc_Char)0x65,  /* [909] */
    (xdc_Char)0x6e,  /* [910] */
    (xdc_Char)0x74,  /* [911] */
    (xdc_Char)0x2e,  /* [912] */
    (xdc_Char)0x73,  /* [913] */
    (xdc_Char)0x75,  /* [914] */
    (xdc_Char)0x70,  /* [915] */
    (xdc_Char)0x70,  /* [916] */
    (xdc_Char)0x6f,  /* [917] */
    (xdc_Char)0x72,  /* [918] */
    (xdc_Char)0x74,  /* [919] */
    (xdc_Char)0x73,  /* [920] */
    (xdc_Char)0x45,  /* [921] */
    (xdc_Char)0x76,  /* [922] */
    (xdc_Char)0x65,  /* [923] */
    (xdc_Char)0x6e,  /* [924] */
    (xdc_Char)0x74,  /* [925] */
    (xdc_Char)0x73,  /* [926] */
    (xdc_Char)0x20,  /* [927] */
    (xdc_Char)0x66,  /* [928] */
    (xdc_Char)0x6c,  /* [929] */
    (xdc_Char)0x61,  /* [930] */
    (xdc_Char)0x67,  /* [931] */
    (xdc_Char)0x20,  /* [932] */
    (xdc_Char)0x69,  /* [933] */
    (xdc_Char)0x73,  /* [934] */
    (xdc_Char)0x20,  /* [935] */
    (xdc_Char)0x64,  /* [936] */
    (xdc_Char)0x69,  /* [937] */
    (xdc_Char)0x73,  /* [938] */
    (xdc_Char)0x61,  /* [939] */
    (xdc_Char)0x62,  /* [940] */
    (xdc_Char)0x6c,  /* [941] */
    (xdc_Char)0x65,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x2e,  /* [944] */
    (xdc_Char)0x0,  /* [945] */
    (xdc_Char)0x41,  /* [946] */
    (xdc_Char)0x5f,  /* [947] */
    (xdc_Char)0x69,  /* [948] */
    (xdc_Char)0x6e,  /* [949] */
    (xdc_Char)0x76,  /* [950] */
    (xdc_Char)0x54,  /* [951] */
    (xdc_Char)0x69,  /* [952] */
    (xdc_Char)0x6d,  /* [953] */
    (xdc_Char)0x65,  /* [954] */
    (xdc_Char)0x6f,  /* [955] */
    (xdc_Char)0x75,  /* [956] */
    (xdc_Char)0x74,  /* [957] */
    (xdc_Char)0x3a,  /* [958] */
    (xdc_Char)0x20,  /* [959] */
    (xdc_Char)0x43,  /* [960] */
    (xdc_Char)0x61,  /* [961] */
    (xdc_Char)0x6e,  /* [962] */
    (xdc_Char)0x27,  /* [963] */
    (xdc_Char)0x74,  /* [964] */
    (xdc_Char)0x20,  /* [965] */
    (xdc_Char)0x75,  /* [966] */
    (xdc_Char)0x73,  /* [967] */
    (xdc_Char)0x65,  /* [968] */
    (xdc_Char)0x20,  /* [969] */
    (xdc_Char)0x42,  /* [970] */
    (xdc_Char)0x49,  /* [971] */
    (xdc_Char)0x4f,  /* [972] */
    (xdc_Char)0x53,  /* [973] */
    (xdc_Char)0x5f,  /* [974] */
    (xdc_Char)0x45,  /* [975] */
    (xdc_Char)0x56,  /* [976] */
    (xdc_Char)0x45,  /* [977] */
    (xdc_Char)0x4e,  /* [978] */
    (xdc_Char)0x54,  /* [979] */
    (xdc_Char)0x5f,  /* [980] */
    (xdc_Char)0x41,  /* [981] */
    (xdc_Char)0x43,  /* [982] */
    (xdc_Char)0x51,  /* [983] */
    (xdc_Char)0x55,  /* [984] */
    (xdc_Char)0x49,  /* [985] */
    (xdc_Char)0x52,  /* [986] */
    (xdc_Char)0x45,  /* [987] */
    (xdc_Char)0x44,  /* [988] */
    (xdc_Char)0x20,  /* [989] */
    (xdc_Char)0x77,  /* [990] */
    (xdc_Char)0x69,  /* [991] */
    (xdc_Char)0x74,  /* [992] */
    (xdc_Char)0x68,  /* [993] */
    (xdc_Char)0x20,  /* [994] */
    (xdc_Char)0x74,  /* [995] */
    (xdc_Char)0x68,  /* [996] */
    (xdc_Char)0x69,  /* [997] */
    (xdc_Char)0x73,  /* [998] */
    (xdc_Char)0x20,  /* [999] */
    (xdc_Char)0x53,  /* [1000] */
    (xdc_Char)0x65,  /* [1001] */
    (xdc_Char)0x6d,  /* [1002] */
    (xdc_Char)0x61,  /* [1003] */
    (xdc_Char)0x70,  /* [1004] */
    (xdc_Char)0x68,  /* [1005] */
    (xdc_Char)0x6f,  /* [1006] */
    (xdc_Char)0x72,  /* [1007] */
    (xdc_Char)0x65,  /* [1008] */
    (xdc_Char)0x2e,  /* [1009] */
    (xdc_Char)0x0,  /* [1010] */
    (xdc_Char)0x41,  /* [1011] */
    (xdc_Char)0x5f,  /* [1012] */
    (xdc_Char)0x6f,  /* [1013] */
    (xdc_Char)0x76,  /* [1014] */
    (xdc_Char)0x65,  /* [1015] */
    (xdc_Char)0x72,  /* [1016] */
    (xdc_Char)0x66,  /* [1017] */
    (xdc_Char)0x6c,  /* [1018] */
    (xdc_Char)0x6f,  /* [1019] */
    (xdc_Char)0x77,  /* [1020] */
    (xdc_Char)0x3a,  /* [1021] */
    (xdc_Char)0x20,  /* [1022] */
    (xdc_Char)0x43,  /* [1023] */
    (xdc_Char)0x6f,  /* [1024] */
    (xdc_Char)0x75,  /* [1025] */
    (xdc_Char)0x6e,  /* [1026] */
    (xdc_Char)0x74,  /* [1027] */
    (xdc_Char)0x20,  /* [1028] */
    (xdc_Char)0x68,  /* [1029] */
    (xdc_Char)0x61,  /* [1030] */
    (xdc_Char)0x73,  /* [1031] */
    (xdc_Char)0x20,  /* [1032] */
    (xdc_Char)0x65,  /* [1033] */
    (xdc_Char)0x78,  /* [1034] */
    (xdc_Char)0x63,  /* [1035] */
    (xdc_Char)0x65,  /* [1036] */
    (xdc_Char)0x65,  /* [1037] */
    (xdc_Char)0x64,  /* [1038] */
    (xdc_Char)0x65,  /* [1039] */
    (xdc_Char)0x64,  /* [1040] */
    (xdc_Char)0x20,  /* [1041] */
    (xdc_Char)0x36,  /* [1042] */
    (xdc_Char)0x35,  /* [1043] */
    (xdc_Char)0x35,  /* [1044] */
    (xdc_Char)0x33,  /* [1045] */
    (xdc_Char)0x35,  /* [1046] */
    (xdc_Char)0x20,  /* [1047] */
    (xdc_Char)0x61,  /* [1048] */
    (xdc_Char)0x6e,  /* [1049] */
    (xdc_Char)0x64,  /* [1050] */
    (xdc_Char)0x20,  /* [1051] */
    (xdc_Char)0x72,  /* [1052] */
    (xdc_Char)0x6f,  /* [1053] */
    (xdc_Char)0x6c,  /* [1054] */
    (xdc_Char)0x6c,  /* [1055] */
    (xdc_Char)0x65,  /* [1056] */
    (xdc_Char)0x64,  /* [1057] */
    (xdc_Char)0x20,  /* [1058] */
    (xdc_Char)0x6f,  /* [1059] */
    (xdc_Char)0x76,  /* [1060] */
    (xdc_Char)0x65,  /* [1061] */
    (xdc_Char)0x72,  /* [1062] */
    (xdc_Char)0x2e,  /* [1063] */
    (xdc_Char)0x0,  /* [1064] */
    (xdc_Char)0x41,  /* [1065] */
    (xdc_Char)0x5f,  /* [1066] */
    (xdc_Char)0x70,  /* [1067] */
    (xdc_Char)0x65,  /* [1068] */
    (xdc_Char)0x6e,  /* [1069] */
    (xdc_Char)0x64,  /* [1070] */
    (xdc_Char)0x54,  /* [1071] */
    (xdc_Char)0x61,  /* [1072] */
    (xdc_Char)0x73,  /* [1073] */
    (xdc_Char)0x6b,  /* [1074] */
    (xdc_Char)0x44,  /* [1075] */
    (xdc_Char)0x69,  /* [1076] */
    (xdc_Char)0x73,  /* [1077] */
    (xdc_Char)0x61,  /* [1078] */
    (xdc_Char)0x62,  /* [1079] */
    (xdc_Char)0x6c,  /* [1080] */
    (xdc_Char)0x65,  /* [1081] */
    (xdc_Char)0x64,  /* [1082] */
    (xdc_Char)0x3a,  /* [1083] */
    (xdc_Char)0x20,  /* [1084] */
    (xdc_Char)0x43,  /* [1085] */
    (xdc_Char)0x61,  /* [1086] */
    (xdc_Char)0x6e,  /* [1087] */
    (xdc_Char)0x6e,  /* [1088] */
    (xdc_Char)0x6f,  /* [1089] */
    (xdc_Char)0x74,  /* [1090] */
    (xdc_Char)0x20,  /* [1091] */
    (xdc_Char)0x63,  /* [1092] */
    (xdc_Char)0x61,  /* [1093] */
    (xdc_Char)0x6c,  /* [1094] */
    (xdc_Char)0x6c,  /* [1095] */
    (xdc_Char)0x20,  /* [1096] */
    (xdc_Char)0x53,  /* [1097] */
    (xdc_Char)0x65,  /* [1098] */
    (xdc_Char)0x6d,  /* [1099] */
    (xdc_Char)0x61,  /* [1100] */
    (xdc_Char)0x70,  /* [1101] */
    (xdc_Char)0x68,  /* [1102] */
    (xdc_Char)0x6f,  /* [1103] */
    (xdc_Char)0x72,  /* [1104] */
    (xdc_Char)0x65,  /* [1105] */
    (xdc_Char)0x5f,  /* [1106] */
    (xdc_Char)0x70,  /* [1107] */
    (xdc_Char)0x65,  /* [1108] */
    (xdc_Char)0x6e,  /* [1109] */
    (xdc_Char)0x64,  /* [1110] */
    (xdc_Char)0x28,  /* [1111] */
    (xdc_Char)0x29,  /* [1112] */
    (xdc_Char)0x20,  /* [1113] */
    (xdc_Char)0x77,  /* [1114] */
    (xdc_Char)0x68,  /* [1115] */
    (xdc_Char)0x69,  /* [1116] */
    (xdc_Char)0x6c,  /* [1117] */
    (xdc_Char)0x65,  /* [1118] */
    (xdc_Char)0x20,  /* [1119] */
    (xdc_Char)0x74,  /* [1120] */
    (xdc_Char)0x68,  /* [1121] */
    (xdc_Char)0x65,  /* [1122] */
    (xdc_Char)0x20,  /* [1123] */
    (xdc_Char)0x54,  /* [1124] */
    (xdc_Char)0x61,  /* [1125] */
    (xdc_Char)0x73,  /* [1126] */
    (xdc_Char)0x6b,  /* [1127] */
    (xdc_Char)0x20,  /* [1128] */
    (xdc_Char)0x6f,  /* [1129] */
    (xdc_Char)0x72,  /* [1130] */
    (xdc_Char)0x20,  /* [1131] */
    (xdc_Char)0x53,  /* [1132] */
    (xdc_Char)0x77,  /* [1133] */
    (xdc_Char)0x69,  /* [1134] */
    (xdc_Char)0x20,  /* [1135] */
    (xdc_Char)0x73,  /* [1136] */
    (xdc_Char)0x63,  /* [1137] */
    (xdc_Char)0x68,  /* [1138] */
    (xdc_Char)0x65,  /* [1139] */
    (xdc_Char)0x64,  /* [1140] */
    (xdc_Char)0x75,  /* [1141] */
    (xdc_Char)0x6c,  /* [1142] */
    (xdc_Char)0x65,  /* [1143] */
    (xdc_Char)0x72,  /* [1144] */
    (xdc_Char)0x20,  /* [1145] */
    (xdc_Char)0x69,  /* [1146] */
    (xdc_Char)0x73,  /* [1147] */
    (xdc_Char)0x20,  /* [1148] */
    (xdc_Char)0x64,  /* [1149] */
    (xdc_Char)0x69,  /* [1150] */
    (xdc_Char)0x73,  /* [1151] */
    (xdc_Char)0x61,  /* [1152] */
    (xdc_Char)0x62,  /* [1153] */
    (xdc_Char)0x6c,  /* [1154] */
    (xdc_Char)0x65,  /* [1155] */
    (xdc_Char)0x64,  /* [1156] */
    (xdc_Char)0x2e,  /* [1157] */
    (xdc_Char)0x0,  /* [1158] */
    (xdc_Char)0x41,  /* [1159] */
    (xdc_Char)0x5f,  /* [1160] */
    (xdc_Char)0x73,  /* [1161] */
    (xdc_Char)0x77,  /* [1162] */
    (xdc_Char)0x69,  /* [1163] */
    (xdc_Char)0x44,  /* [1164] */
    (xdc_Char)0x69,  /* [1165] */
    (xdc_Char)0x73,  /* [1166] */
    (xdc_Char)0x61,  /* [1167] */
    (xdc_Char)0x62,  /* [1168] */
    (xdc_Char)0x6c,  /* [1169] */
    (xdc_Char)0x65,  /* [1170] */
    (xdc_Char)0x64,  /* [1171] */
    (xdc_Char)0x3a,  /* [1172] */
    (xdc_Char)0x20,  /* [1173] */
    (xdc_Char)0x43,  /* [1174] */
    (xdc_Char)0x61,  /* [1175] */
    (xdc_Char)0x6e,  /* [1176] */
    (xdc_Char)0x6e,  /* [1177] */
    (xdc_Char)0x6f,  /* [1178] */
    (xdc_Char)0x74,  /* [1179] */
    (xdc_Char)0x20,  /* [1180] */
    (xdc_Char)0x63,  /* [1181] */
    (xdc_Char)0x72,  /* [1182] */
    (xdc_Char)0x65,  /* [1183] */
    (xdc_Char)0x61,  /* [1184] */
    (xdc_Char)0x74,  /* [1185] */
    (xdc_Char)0x65,  /* [1186] */
    (xdc_Char)0x20,  /* [1187] */
    (xdc_Char)0x61,  /* [1188] */
    (xdc_Char)0x20,  /* [1189] */
    (xdc_Char)0x53,  /* [1190] */
    (xdc_Char)0x77,  /* [1191] */
    (xdc_Char)0x69,  /* [1192] */
    (xdc_Char)0x20,  /* [1193] */
    (xdc_Char)0x77,  /* [1194] */
    (xdc_Char)0x68,  /* [1195] */
    (xdc_Char)0x65,  /* [1196] */
    (xdc_Char)0x6e,  /* [1197] */
    (xdc_Char)0x20,  /* [1198] */
    (xdc_Char)0x53,  /* [1199] */
    (xdc_Char)0x77,  /* [1200] */
    (xdc_Char)0x69,  /* [1201] */
    (xdc_Char)0x20,  /* [1202] */
    (xdc_Char)0x69,  /* [1203] */
    (xdc_Char)0x73,  /* [1204] */
    (xdc_Char)0x20,  /* [1205] */
    (xdc_Char)0x64,  /* [1206] */
    (xdc_Char)0x69,  /* [1207] */
    (xdc_Char)0x73,  /* [1208] */
    (xdc_Char)0x61,  /* [1209] */
    (xdc_Char)0x62,  /* [1210] */
    (xdc_Char)0x6c,  /* [1211] */
    (xdc_Char)0x65,  /* [1212] */
    (xdc_Char)0x64,  /* [1213] */
    (xdc_Char)0x2e,  /* [1214] */
    (xdc_Char)0x0,  /* [1215] */
    (xdc_Char)0x41,  /* [1216] */
    (xdc_Char)0x5f,  /* [1217] */
    (xdc_Char)0x62,  /* [1218] */
    (xdc_Char)0x61,  /* [1219] */
    (xdc_Char)0x64,  /* [1220] */
    (xdc_Char)0x50,  /* [1221] */
    (xdc_Char)0x72,  /* [1222] */
    (xdc_Char)0x69,  /* [1223] */
    (xdc_Char)0x6f,  /* [1224] */
    (xdc_Char)0x72,  /* [1225] */
    (xdc_Char)0x69,  /* [1226] */
    (xdc_Char)0x74,  /* [1227] */
    (xdc_Char)0x79,  /* [1228] */
    (xdc_Char)0x3a,  /* [1229] */
    (xdc_Char)0x20,  /* [1230] */
    (xdc_Char)0x41,  /* [1231] */
    (xdc_Char)0x6e,  /* [1232] */
    (xdc_Char)0x20,  /* [1233] */
    (xdc_Char)0x69,  /* [1234] */
    (xdc_Char)0x6e,  /* [1235] */
    (xdc_Char)0x76,  /* [1236] */
    (xdc_Char)0x61,  /* [1237] */
    (xdc_Char)0x6c,  /* [1238] */
    (xdc_Char)0x69,  /* [1239] */
    (xdc_Char)0x64,  /* [1240] */
    (xdc_Char)0x20,  /* [1241] */
    (xdc_Char)0x53,  /* [1242] */
    (xdc_Char)0x77,  /* [1243] */
    (xdc_Char)0x69,  /* [1244] */
    (xdc_Char)0x20,  /* [1245] */
    (xdc_Char)0x70,  /* [1246] */
    (xdc_Char)0x72,  /* [1247] */
    (xdc_Char)0x69,  /* [1248] */
    (xdc_Char)0x6f,  /* [1249] */
    (xdc_Char)0x72,  /* [1250] */
    (xdc_Char)0x69,  /* [1251] */
    (xdc_Char)0x74,  /* [1252] */
    (xdc_Char)0x79,  /* [1253] */
    (xdc_Char)0x20,  /* [1254] */
    (xdc_Char)0x77,  /* [1255] */
    (xdc_Char)0x61,  /* [1256] */
    (xdc_Char)0x73,  /* [1257] */
    (xdc_Char)0x20,  /* [1258] */
    (xdc_Char)0x75,  /* [1259] */
    (xdc_Char)0x73,  /* [1260] */
    (xdc_Char)0x65,  /* [1261] */
    (xdc_Char)0x64,  /* [1262] */
    (xdc_Char)0x2e,  /* [1263] */
    (xdc_Char)0x0,  /* [1264] */
    (xdc_Char)0x41,  /* [1265] */
    (xdc_Char)0x5f,  /* [1266] */
    (xdc_Char)0x62,  /* [1267] */
    (xdc_Char)0x61,  /* [1268] */
    (xdc_Char)0x64,  /* [1269] */
    (xdc_Char)0x54,  /* [1270] */
    (xdc_Char)0x68,  /* [1271] */
    (xdc_Char)0x72,  /* [1272] */
    (xdc_Char)0x65,  /* [1273] */
    (xdc_Char)0x61,  /* [1274] */
    (xdc_Char)0x64,  /* [1275] */
    (xdc_Char)0x54,  /* [1276] */
    (xdc_Char)0x79,  /* [1277] */
    (xdc_Char)0x70,  /* [1278] */
    (xdc_Char)0x65,  /* [1279] */
    (xdc_Char)0x3a,  /* [1280] */
    (xdc_Char)0x20,  /* [1281] */
    (xdc_Char)0x43,  /* [1282] */
    (xdc_Char)0x61,  /* [1283] */
    (xdc_Char)0x6e,  /* [1284] */
    (xdc_Char)0x6e,  /* [1285] */
    (xdc_Char)0x6f,  /* [1286] */
    (xdc_Char)0x74,  /* [1287] */
    (xdc_Char)0x20,  /* [1288] */
    (xdc_Char)0x63,  /* [1289] */
    (xdc_Char)0x72,  /* [1290] */
    (xdc_Char)0x65,  /* [1291] */
    (xdc_Char)0x61,  /* [1292] */
    (xdc_Char)0x74,  /* [1293] */
    (xdc_Char)0x65,  /* [1294] */
    (xdc_Char)0x2f,  /* [1295] */
    (xdc_Char)0x64,  /* [1296] */
    (xdc_Char)0x65,  /* [1297] */
    (xdc_Char)0x6c,  /* [1298] */
    (xdc_Char)0x65,  /* [1299] */
    (xdc_Char)0x74,  /* [1300] */
    (xdc_Char)0x65,  /* [1301] */
    (xdc_Char)0x20,  /* [1302] */
    (xdc_Char)0x61,  /* [1303] */
    (xdc_Char)0x20,  /* [1304] */
    (xdc_Char)0x74,  /* [1305] */
    (xdc_Char)0x61,  /* [1306] */
    (xdc_Char)0x73,  /* [1307] */
    (xdc_Char)0x6b,  /* [1308] */
    (xdc_Char)0x20,  /* [1309] */
    (xdc_Char)0x66,  /* [1310] */
    (xdc_Char)0x72,  /* [1311] */
    (xdc_Char)0x6f,  /* [1312] */
    (xdc_Char)0x6d,  /* [1313] */
    (xdc_Char)0x20,  /* [1314] */
    (xdc_Char)0x48,  /* [1315] */
    (xdc_Char)0x77,  /* [1316] */
    (xdc_Char)0x69,  /* [1317] */
    (xdc_Char)0x20,  /* [1318] */
    (xdc_Char)0x6f,  /* [1319] */
    (xdc_Char)0x72,  /* [1320] */
    (xdc_Char)0x20,  /* [1321] */
    (xdc_Char)0x53,  /* [1322] */
    (xdc_Char)0x77,  /* [1323] */
    (xdc_Char)0x69,  /* [1324] */
    (xdc_Char)0x20,  /* [1325] */
    (xdc_Char)0x74,  /* [1326] */
    (xdc_Char)0x68,  /* [1327] */
    (xdc_Char)0x72,  /* [1328] */
    (xdc_Char)0x65,  /* [1329] */
    (xdc_Char)0x61,  /* [1330] */
    (xdc_Char)0x64,  /* [1331] */
    (xdc_Char)0x2e,  /* [1332] */
    (xdc_Char)0x0,  /* [1333] */
    (xdc_Char)0x41,  /* [1334] */
    (xdc_Char)0x5f,  /* [1335] */
    (xdc_Char)0x62,  /* [1336] */
    (xdc_Char)0x61,  /* [1337] */
    (xdc_Char)0x64,  /* [1338] */
    (xdc_Char)0x54,  /* [1339] */
    (xdc_Char)0x61,  /* [1340] */
    (xdc_Char)0x73,  /* [1341] */
    (xdc_Char)0x6b,  /* [1342] */
    (xdc_Char)0x53,  /* [1343] */
    (xdc_Char)0x74,  /* [1344] */
    (xdc_Char)0x61,  /* [1345] */
    (xdc_Char)0x74,  /* [1346] */
    (xdc_Char)0x65,  /* [1347] */
    (xdc_Char)0x3a,  /* [1348] */
    (xdc_Char)0x20,  /* [1349] */
    (xdc_Char)0x43,  /* [1350] */
    (xdc_Char)0x61,  /* [1351] */
    (xdc_Char)0x6e,  /* [1352] */
    (xdc_Char)0x27,  /* [1353] */
    (xdc_Char)0x74,  /* [1354] */
    (xdc_Char)0x20,  /* [1355] */
    (xdc_Char)0x64,  /* [1356] */
    (xdc_Char)0x65,  /* [1357] */
    (xdc_Char)0x6c,  /* [1358] */
    (xdc_Char)0x65,  /* [1359] */
    (xdc_Char)0x74,  /* [1360] */
    (xdc_Char)0x65,  /* [1361] */
    (xdc_Char)0x20,  /* [1362] */
    (xdc_Char)0x61,  /* [1363] */
    (xdc_Char)0x20,  /* [1364] */
    (xdc_Char)0x74,  /* [1365] */
    (xdc_Char)0x61,  /* [1366] */
    (xdc_Char)0x73,  /* [1367] */
    (xdc_Char)0x6b,  /* [1368] */
    (xdc_Char)0x20,  /* [1369] */
    (xdc_Char)0x69,  /* [1370] */
    (xdc_Char)0x6e,  /* [1371] */
    (xdc_Char)0x20,  /* [1372] */
    (xdc_Char)0x52,  /* [1373] */
    (xdc_Char)0x55,  /* [1374] */
    (xdc_Char)0x4e,  /* [1375] */
    (xdc_Char)0x4e,  /* [1376] */
    (xdc_Char)0x49,  /* [1377] */
    (xdc_Char)0x4e,  /* [1378] */
    (xdc_Char)0x47,  /* [1379] */
    (xdc_Char)0x20,  /* [1380] */
    (xdc_Char)0x73,  /* [1381] */
    (xdc_Char)0x74,  /* [1382] */
    (xdc_Char)0x61,  /* [1383] */
    (xdc_Char)0x74,  /* [1384] */
    (xdc_Char)0x65,  /* [1385] */
    (xdc_Char)0x2e,  /* [1386] */
    (xdc_Char)0x0,  /* [1387] */
    (xdc_Char)0x41,  /* [1388] */
    (xdc_Char)0x5f,  /* [1389] */
    (xdc_Char)0x6e,  /* [1390] */
    (xdc_Char)0x6f,  /* [1391] */
    (xdc_Char)0x50,  /* [1392] */
    (xdc_Char)0x65,  /* [1393] */
    (xdc_Char)0x6e,  /* [1394] */
    (xdc_Char)0x64,  /* [1395] */
    (xdc_Char)0x45,  /* [1396] */
    (xdc_Char)0x6c,  /* [1397] */
    (xdc_Char)0x65,  /* [1398] */
    (xdc_Char)0x6d,  /* [1399] */
    (xdc_Char)0x3a,  /* [1400] */
    (xdc_Char)0x20,  /* [1401] */
    (xdc_Char)0x4e,  /* [1402] */
    (xdc_Char)0x6f,  /* [1403] */
    (xdc_Char)0x74,  /* [1404] */
    (xdc_Char)0x20,  /* [1405] */
    (xdc_Char)0x65,  /* [1406] */
    (xdc_Char)0x6e,  /* [1407] */
    (xdc_Char)0x6f,  /* [1408] */
    (xdc_Char)0x75,  /* [1409] */
    (xdc_Char)0x67,  /* [1410] */
    (xdc_Char)0x68,  /* [1411] */
    (xdc_Char)0x20,  /* [1412] */
    (xdc_Char)0x69,  /* [1413] */
    (xdc_Char)0x6e,  /* [1414] */
    (xdc_Char)0x66,  /* [1415] */
    (xdc_Char)0x6f,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x74,  /* [1418] */
    (xdc_Char)0x6f,  /* [1419] */
    (xdc_Char)0x20,  /* [1420] */
    (xdc_Char)0x64,  /* [1421] */
    (xdc_Char)0x65,  /* [1422] */
    (xdc_Char)0x6c,  /* [1423] */
    (xdc_Char)0x65,  /* [1424] */
    (xdc_Char)0x74,  /* [1425] */
    (xdc_Char)0x65,  /* [1426] */
    (xdc_Char)0x20,  /* [1427] */
    (xdc_Char)0x42,  /* [1428] */
    (xdc_Char)0x4c,  /* [1429] */
    (xdc_Char)0x4f,  /* [1430] */
    (xdc_Char)0x43,  /* [1431] */
    (xdc_Char)0x4b,  /* [1432] */
    (xdc_Char)0x45,  /* [1433] */
    (xdc_Char)0x44,  /* [1434] */
    (xdc_Char)0x20,  /* [1435] */
    (xdc_Char)0x74,  /* [1436] */
    (xdc_Char)0x61,  /* [1437] */
    (xdc_Char)0x73,  /* [1438] */
    (xdc_Char)0x6b,  /* [1439] */
    (xdc_Char)0x2e,  /* [1440] */
    (xdc_Char)0x0,  /* [1441] */
    (xdc_Char)0x41,  /* [1442] */
    (xdc_Char)0x5f,  /* [1443] */
    (xdc_Char)0x74,  /* [1444] */
    (xdc_Char)0x61,  /* [1445] */
    (xdc_Char)0x73,  /* [1446] */
    (xdc_Char)0x6b,  /* [1447] */
    (xdc_Char)0x44,  /* [1448] */
    (xdc_Char)0x69,  /* [1449] */
    (xdc_Char)0x73,  /* [1450] */
    (xdc_Char)0x61,  /* [1451] */
    (xdc_Char)0x62,  /* [1452] */
    (xdc_Char)0x6c,  /* [1453] */
    (xdc_Char)0x65,  /* [1454] */
    (xdc_Char)0x64,  /* [1455] */
    (xdc_Char)0x3a,  /* [1456] */
    (xdc_Char)0x20,  /* [1457] */
    (xdc_Char)0x43,  /* [1458] */
    (xdc_Char)0x61,  /* [1459] */
    (xdc_Char)0x6e,  /* [1460] */
    (xdc_Char)0x6e,  /* [1461] */
    (xdc_Char)0x6f,  /* [1462] */
    (xdc_Char)0x74,  /* [1463] */
    (xdc_Char)0x20,  /* [1464] */
    (xdc_Char)0x63,  /* [1465] */
    (xdc_Char)0x72,  /* [1466] */
    (xdc_Char)0x65,  /* [1467] */
    (xdc_Char)0x61,  /* [1468] */
    (xdc_Char)0x74,  /* [1469] */
    (xdc_Char)0x65,  /* [1470] */
    (xdc_Char)0x20,  /* [1471] */
    (xdc_Char)0x61,  /* [1472] */
    (xdc_Char)0x20,  /* [1473] */
    (xdc_Char)0x74,  /* [1474] */
    (xdc_Char)0x61,  /* [1475] */
    (xdc_Char)0x73,  /* [1476] */
    (xdc_Char)0x6b,  /* [1477] */
    (xdc_Char)0x20,  /* [1478] */
    (xdc_Char)0x77,  /* [1479] */
    (xdc_Char)0x68,  /* [1480] */
    (xdc_Char)0x65,  /* [1481] */
    (xdc_Char)0x6e,  /* [1482] */
    (xdc_Char)0x20,  /* [1483] */
    (xdc_Char)0x74,  /* [1484] */
    (xdc_Char)0x61,  /* [1485] */
    (xdc_Char)0x73,  /* [1486] */
    (xdc_Char)0x6b,  /* [1487] */
    (xdc_Char)0x69,  /* [1488] */
    (xdc_Char)0x6e,  /* [1489] */
    (xdc_Char)0x67,  /* [1490] */
    (xdc_Char)0x20,  /* [1491] */
    (xdc_Char)0x69,  /* [1492] */
    (xdc_Char)0x73,  /* [1493] */
    (xdc_Char)0x20,  /* [1494] */
    (xdc_Char)0x64,  /* [1495] */
    (xdc_Char)0x69,  /* [1496] */
    (xdc_Char)0x73,  /* [1497] */
    (xdc_Char)0x61,  /* [1498] */
    (xdc_Char)0x62,  /* [1499] */
    (xdc_Char)0x6c,  /* [1500] */
    (xdc_Char)0x65,  /* [1501] */
    (xdc_Char)0x64,  /* [1502] */
    (xdc_Char)0x2e,  /* [1503] */
    (xdc_Char)0x0,  /* [1504] */
    (xdc_Char)0x41,  /* [1505] */
    (xdc_Char)0x5f,  /* [1506] */
    (xdc_Char)0x62,  /* [1507] */
    (xdc_Char)0x61,  /* [1508] */
    (xdc_Char)0x64,  /* [1509] */
    (xdc_Char)0x50,  /* [1510] */
    (xdc_Char)0x72,  /* [1511] */
    (xdc_Char)0x69,  /* [1512] */
    (xdc_Char)0x6f,  /* [1513] */
    (xdc_Char)0x72,  /* [1514] */
    (xdc_Char)0x69,  /* [1515] */
    (xdc_Char)0x74,  /* [1516] */
    (xdc_Char)0x79,  /* [1517] */
    (xdc_Char)0x3a,  /* [1518] */
    (xdc_Char)0x20,  /* [1519] */
    (xdc_Char)0x41,  /* [1520] */
    (xdc_Char)0x6e,  /* [1521] */
    (xdc_Char)0x20,  /* [1522] */
    (xdc_Char)0x69,  /* [1523] */
    (xdc_Char)0x6e,  /* [1524] */
    (xdc_Char)0x76,  /* [1525] */
    (xdc_Char)0x61,  /* [1526] */
    (xdc_Char)0x6c,  /* [1527] */
    (xdc_Char)0x69,  /* [1528] */
    (xdc_Char)0x64,  /* [1529] */
    (xdc_Char)0x20,  /* [1530] */
    (xdc_Char)0x74,  /* [1531] */
    (xdc_Char)0x61,  /* [1532] */
    (xdc_Char)0x73,  /* [1533] */
    (xdc_Char)0x6b,  /* [1534] */
    (xdc_Char)0x20,  /* [1535] */
    (xdc_Char)0x70,  /* [1536] */
    (xdc_Char)0x72,  /* [1537] */
    (xdc_Char)0x69,  /* [1538] */
    (xdc_Char)0x6f,  /* [1539] */
    (xdc_Char)0x72,  /* [1540] */
    (xdc_Char)0x69,  /* [1541] */
    (xdc_Char)0x74,  /* [1542] */
    (xdc_Char)0x79,  /* [1543] */
    (xdc_Char)0x20,  /* [1544] */
    (xdc_Char)0x77,  /* [1545] */
    (xdc_Char)0x61,  /* [1546] */
    (xdc_Char)0x73,  /* [1547] */
    (xdc_Char)0x20,  /* [1548] */
    (xdc_Char)0x75,  /* [1549] */
    (xdc_Char)0x73,  /* [1550] */
    (xdc_Char)0x65,  /* [1551] */
    (xdc_Char)0x64,  /* [1552] */
    (xdc_Char)0x2e,  /* [1553] */
    (xdc_Char)0x0,  /* [1554] */
    (xdc_Char)0x41,  /* [1555] */
    (xdc_Char)0x5f,  /* [1556] */
    (xdc_Char)0x62,  /* [1557] */
    (xdc_Char)0x61,  /* [1558] */
    (xdc_Char)0x64,  /* [1559] */
    (xdc_Char)0x54,  /* [1560] */
    (xdc_Char)0x69,  /* [1561] */
    (xdc_Char)0x6d,  /* [1562] */
    (xdc_Char)0x65,  /* [1563] */
    (xdc_Char)0x6f,  /* [1564] */
    (xdc_Char)0x75,  /* [1565] */
    (xdc_Char)0x74,  /* [1566] */
    (xdc_Char)0x3a,  /* [1567] */
    (xdc_Char)0x20,  /* [1568] */
    (xdc_Char)0x43,  /* [1569] */
    (xdc_Char)0x61,  /* [1570] */
    (xdc_Char)0x6e,  /* [1571] */
    (xdc_Char)0x27,  /* [1572] */
    (xdc_Char)0x74,  /* [1573] */
    (xdc_Char)0x20,  /* [1574] */
    (xdc_Char)0x73,  /* [1575] */
    (xdc_Char)0x6c,  /* [1576] */
    (xdc_Char)0x65,  /* [1577] */
    (xdc_Char)0x65,  /* [1578] */
    (xdc_Char)0x70,  /* [1579] */
    (xdc_Char)0x20,  /* [1580] */
    (xdc_Char)0x46,  /* [1581] */
    (xdc_Char)0x4f,  /* [1582] */
    (xdc_Char)0x52,  /* [1583] */
    (xdc_Char)0x45,  /* [1584] */
    (xdc_Char)0x56,  /* [1585] */
    (xdc_Char)0x45,  /* [1586] */
    (xdc_Char)0x52,  /* [1587] */
    (xdc_Char)0x2e,  /* [1588] */
    (xdc_Char)0x0,  /* [1589] */
    (xdc_Char)0x41,  /* [1590] */
    (xdc_Char)0x5f,  /* [1591] */
    (xdc_Char)0x62,  /* [1592] */
    (xdc_Char)0x61,  /* [1593] */
    (xdc_Char)0x64,  /* [1594] */
    (xdc_Char)0x41,  /* [1595] */
    (xdc_Char)0x66,  /* [1596] */
    (xdc_Char)0x66,  /* [1597] */
    (xdc_Char)0x69,  /* [1598] */
    (xdc_Char)0x6e,  /* [1599] */
    (xdc_Char)0x69,  /* [1600] */
    (xdc_Char)0x74,  /* [1601] */
    (xdc_Char)0x79,  /* [1602] */
    (xdc_Char)0x3a,  /* [1603] */
    (xdc_Char)0x20,  /* [1604] */
    (xdc_Char)0x49,  /* [1605] */
    (xdc_Char)0x6e,  /* [1606] */
    (xdc_Char)0x76,  /* [1607] */
    (xdc_Char)0x61,  /* [1608] */
    (xdc_Char)0x6c,  /* [1609] */
    (xdc_Char)0x69,  /* [1610] */
    (xdc_Char)0x64,  /* [1611] */
    (xdc_Char)0x20,  /* [1612] */
    (xdc_Char)0x61,  /* [1613] */
    (xdc_Char)0x66,  /* [1614] */
    (xdc_Char)0x66,  /* [1615] */
    (xdc_Char)0x69,  /* [1616] */
    (xdc_Char)0x6e,  /* [1617] */
    (xdc_Char)0x69,  /* [1618] */
    (xdc_Char)0x74,  /* [1619] */
    (xdc_Char)0x79,  /* [1620] */
    (xdc_Char)0x2e,  /* [1621] */
    (xdc_Char)0x0,  /* [1622] */
    (xdc_Char)0x41,  /* [1623] */
    (xdc_Char)0x5f,  /* [1624] */
    (xdc_Char)0x73,  /* [1625] */
    (xdc_Char)0x65,  /* [1626] */
    (xdc_Char)0x74,  /* [1627] */
    (xdc_Char)0x41,  /* [1628] */
    (xdc_Char)0x66,  /* [1629] */
    (xdc_Char)0x66,  /* [1630] */
    (xdc_Char)0x69,  /* [1631] */
    (xdc_Char)0x6e,  /* [1632] */
    (xdc_Char)0x69,  /* [1633] */
    (xdc_Char)0x74,  /* [1634] */
    (xdc_Char)0x79,  /* [1635] */
    (xdc_Char)0x54,  /* [1636] */
    (xdc_Char)0x61,  /* [1637] */
    (xdc_Char)0x73,  /* [1638] */
    (xdc_Char)0x6b,  /* [1639] */
    (xdc_Char)0x44,  /* [1640] */
    (xdc_Char)0x69,  /* [1641] */
    (xdc_Char)0x73,  /* [1642] */
    (xdc_Char)0x61,  /* [1643] */
    (xdc_Char)0x62,  /* [1644] */
    (xdc_Char)0x6c,  /* [1645] */
    (xdc_Char)0x65,  /* [1646] */
    (xdc_Char)0x64,  /* [1647] */
    (xdc_Char)0x3a,  /* [1648] */
    (xdc_Char)0x20,  /* [1649] */
    (xdc_Char)0x43,  /* [1650] */
    (xdc_Char)0x61,  /* [1651] */
    (xdc_Char)0x6e,  /* [1652] */
    (xdc_Char)0x6e,  /* [1653] */
    (xdc_Char)0x6f,  /* [1654] */
    (xdc_Char)0x74,  /* [1655] */
    (xdc_Char)0x20,  /* [1656] */
    (xdc_Char)0x63,  /* [1657] */
    (xdc_Char)0x61,  /* [1658] */
    (xdc_Char)0x6c,  /* [1659] */
    (xdc_Char)0x6c,  /* [1660] */
    (xdc_Char)0x20,  /* [1661] */
    (xdc_Char)0x54,  /* [1662] */
    (xdc_Char)0x61,  /* [1663] */
    (xdc_Char)0x73,  /* [1664] */
    (xdc_Char)0x6b,  /* [1665] */
    (xdc_Char)0x5f,  /* [1666] */
    (xdc_Char)0x73,  /* [1667] */
    (xdc_Char)0x65,  /* [1668] */
    (xdc_Char)0x74,  /* [1669] */
    (xdc_Char)0x41,  /* [1670] */
    (xdc_Char)0x66,  /* [1671] */
    (xdc_Char)0x66,  /* [1672] */
    (xdc_Char)0x69,  /* [1673] */
    (xdc_Char)0x6e,  /* [1674] */
    (xdc_Char)0x69,  /* [1675] */
    (xdc_Char)0x74,  /* [1676] */
    (xdc_Char)0x79,  /* [1677] */
    (xdc_Char)0x28,  /* [1678] */
    (xdc_Char)0x29,  /* [1679] */
    (xdc_Char)0x20,  /* [1680] */
    (xdc_Char)0x77,  /* [1681] */
    (xdc_Char)0x68,  /* [1682] */
    (xdc_Char)0x69,  /* [1683] */
    (xdc_Char)0x6c,  /* [1684] */
    (xdc_Char)0x65,  /* [1685] */
    (xdc_Char)0x20,  /* [1686] */
    (xdc_Char)0x74,  /* [1687] */
    (xdc_Char)0x68,  /* [1688] */
    (xdc_Char)0x65,  /* [1689] */
    (xdc_Char)0x20,  /* [1690] */
    (xdc_Char)0x54,  /* [1691] */
    (xdc_Char)0x61,  /* [1692] */
    (xdc_Char)0x73,  /* [1693] */
    (xdc_Char)0x6b,  /* [1694] */
    (xdc_Char)0x20,  /* [1695] */
    (xdc_Char)0x73,  /* [1696] */
    (xdc_Char)0x63,  /* [1697] */
    (xdc_Char)0x68,  /* [1698] */
    (xdc_Char)0x65,  /* [1699] */
    (xdc_Char)0x64,  /* [1700] */
    (xdc_Char)0x75,  /* [1701] */
    (xdc_Char)0x6c,  /* [1702] */
    (xdc_Char)0x65,  /* [1703] */
    (xdc_Char)0x72,  /* [1704] */
    (xdc_Char)0x20,  /* [1705] */
    (xdc_Char)0x69,  /* [1706] */
    (xdc_Char)0x73,  /* [1707] */
    (xdc_Char)0x20,  /* [1708] */
    (xdc_Char)0x64,  /* [1709] */
    (xdc_Char)0x69,  /* [1710] */
    (xdc_Char)0x73,  /* [1711] */
    (xdc_Char)0x61,  /* [1712] */
    (xdc_Char)0x62,  /* [1713] */
    (xdc_Char)0x6c,  /* [1714] */
    (xdc_Char)0x65,  /* [1715] */
    (xdc_Char)0x64,  /* [1716] */
    (xdc_Char)0x2e,  /* [1717] */
    (xdc_Char)0x0,  /* [1718] */
    (xdc_Char)0x41,  /* [1719] */
    (xdc_Char)0x5f,  /* [1720] */
    (xdc_Char)0x73,  /* [1721] */
    (xdc_Char)0x65,  /* [1722] */
    (xdc_Char)0x74,  /* [1723] */
    (xdc_Char)0x50,  /* [1724] */
    (xdc_Char)0x72,  /* [1725] */
    (xdc_Char)0x69,  /* [1726] */
    (xdc_Char)0x54,  /* [1727] */
    (xdc_Char)0x61,  /* [1728] */
    (xdc_Char)0x73,  /* [1729] */
    (xdc_Char)0x6b,  /* [1730] */
    (xdc_Char)0x44,  /* [1731] */
    (xdc_Char)0x69,  /* [1732] */
    (xdc_Char)0x73,  /* [1733] */
    (xdc_Char)0x61,  /* [1734] */
    (xdc_Char)0x62,  /* [1735] */
    (xdc_Char)0x6c,  /* [1736] */
    (xdc_Char)0x65,  /* [1737] */
    (xdc_Char)0x64,  /* [1738] */
    (xdc_Char)0x3a,  /* [1739] */
    (xdc_Char)0x20,  /* [1740] */
    (xdc_Char)0x43,  /* [1741] */
    (xdc_Char)0x61,  /* [1742] */
    (xdc_Char)0x6e,  /* [1743] */
    (xdc_Char)0x6e,  /* [1744] */
    (xdc_Char)0x6f,  /* [1745] */
    (xdc_Char)0x74,  /* [1746] */
    (xdc_Char)0x20,  /* [1747] */
    (xdc_Char)0x63,  /* [1748] */
    (xdc_Char)0x61,  /* [1749] */
    (xdc_Char)0x6c,  /* [1750] */
    (xdc_Char)0x6c,  /* [1751] */
    (xdc_Char)0x20,  /* [1752] */
    (xdc_Char)0x54,  /* [1753] */
    (xdc_Char)0x61,  /* [1754] */
    (xdc_Char)0x73,  /* [1755] */
    (xdc_Char)0x6b,  /* [1756] */
    (xdc_Char)0x5f,  /* [1757] */
    (xdc_Char)0x73,  /* [1758] */
    (xdc_Char)0x65,  /* [1759] */
    (xdc_Char)0x74,  /* [1760] */
    (xdc_Char)0x50,  /* [1761] */
    (xdc_Char)0x72,  /* [1762] */
    (xdc_Char)0x69,  /* [1763] */
    (xdc_Char)0x28,  /* [1764] */
    (xdc_Char)0x29,  /* [1765] */
    (xdc_Char)0x20,  /* [1766] */
    (xdc_Char)0x77,  /* [1767] */
    (xdc_Char)0x68,  /* [1768] */
    (xdc_Char)0x69,  /* [1769] */
    (xdc_Char)0x6c,  /* [1770] */
    (xdc_Char)0x65,  /* [1771] */
    (xdc_Char)0x20,  /* [1772] */
    (xdc_Char)0x74,  /* [1773] */
    (xdc_Char)0x68,  /* [1774] */
    (xdc_Char)0x65,  /* [1775] */
    (xdc_Char)0x20,  /* [1776] */
    (xdc_Char)0x54,  /* [1777] */
    (xdc_Char)0x61,  /* [1778] */
    (xdc_Char)0x73,  /* [1779] */
    (xdc_Char)0x6b,  /* [1780] */
    (xdc_Char)0x20,  /* [1781] */
    (xdc_Char)0x73,  /* [1782] */
    (xdc_Char)0x63,  /* [1783] */
    (xdc_Char)0x68,  /* [1784] */
    (xdc_Char)0x65,  /* [1785] */
    (xdc_Char)0x64,  /* [1786] */
    (xdc_Char)0x75,  /* [1787] */
    (xdc_Char)0x6c,  /* [1788] */
    (xdc_Char)0x65,  /* [1789] */
    (xdc_Char)0x72,  /* [1790] */
    (xdc_Char)0x20,  /* [1791] */
    (xdc_Char)0x69,  /* [1792] */
    (xdc_Char)0x73,  /* [1793] */
    (xdc_Char)0x20,  /* [1794] */
    (xdc_Char)0x64,  /* [1795] */
    (xdc_Char)0x69,  /* [1796] */
    (xdc_Char)0x73,  /* [1797] */
    (xdc_Char)0x61,  /* [1798] */
    (xdc_Char)0x62,  /* [1799] */
    (xdc_Char)0x6c,  /* [1800] */
    (xdc_Char)0x65,  /* [1801] */
    (xdc_Char)0x64,  /* [1802] */
    (xdc_Char)0x2e,  /* [1803] */
    (xdc_Char)0x0,  /* [1804] */
    (xdc_Char)0x41,  /* [1805] */
    (xdc_Char)0x5f,  /* [1806] */
    (xdc_Char)0x73,  /* [1807] */
    (xdc_Char)0x6c,  /* [1808] */
    (xdc_Char)0x65,  /* [1809] */
    (xdc_Char)0x65,  /* [1810] */
    (xdc_Char)0x70,  /* [1811] */
    (xdc_Char)0x54,  /* [1812] */
    (xdc_Char)0x61,  /* [1813] */
    (xdc_Char)0x73,  /* [1814] */
    (xdc_Char)0x6b,  /* [1815] */
    (xdc_Char)0x44,  /* [1816] */
    (xdc_Char)0x69,  /* [1817] */
    (xdc_Char)0x73,  /* [1818] */
    (xdc_Char)0x61,  /* [1819] */
    (xdc_Char)0x62,  /* [1820] */
    (xdc_Char)0x6c,  /* [1821] */
    (xdc_Char)0x65,  /* [1822] */
    (xdc_Char)0x64,  /* [1823] */
    (xdc_Char)0x3a,  /* [1824] */
    (xdc_Char)0x20,  /* [1825] */
    (xdc_Char)0x43,  /* [1826] */
    (xdc_Char)0x61,  /* [1827] */
    (xdc_Char)0x6e,  /* [1828] */
    (xdc_Char)0x6e,  /* [1829] */
    (xdc_Char)0x6f,  /* [1830] */
    (xdc_Char)0x74,  /* [1831] */
    (xdc_Char)0x20,  /* [1832] */
    (xdc_Char)0x63,  /* [1833] */
    (xdc_Char)0x61,  /* [1834] */
    (xdc_Char)0x6c,  /* [1835] */
    (xdc_Char)0x6c,  /* [1836] */
    (xdc_Char)0x20,  /* [1837] */
    (xdc_Char)0x54,  /* [1838] */
    (xdc_Char)0x61,  /* [1839] */
    (xdc_Char)0x73,  /* [1840] */
    (xdc_Char)0x6b,  /* [1841] */
    (xdc_Char)0x5f,  /* [1842] */
    (xdc_Char)0x73,  /* [1843] */
    (xdc_Char)0x6c,  /* [1844] */
    (xdc_Char)0x65,  /* [1845] */
    (xdc_Char)0x65,  /* [1846] */
    (xdc_Char)0x70,  /* [1847] */
    (xdc_Char)0x28,  /* [1848] */
    (xdc_Char)0x29,  /* [1849] */
    (xdc_Char)0x20,  /* [1850] */
    (xdc_Char)0x77,  /* [1851] */
    (xdc_Char)0x68,  /* [1852] */
    (xdc_Char)0x69,  /* [1853] */
    (xdc_Char)0x6c,  /* [1854] */
    (xdc_Char)0x65,  /* [1855] */
    (xdc_Char)0x20,  /* [1856] */
    (xdc_Char)0x74,  /* [1857] */
    (xdc_Char)0x68,  /* [1858] */
    (xdc_Char)0x65,  /* [1859] */
    (xdc_Char)0x20,  /* [1860] */
    (xdc_Char)0x54,  /* [1861] */
    (xdc_Char)0x61,  /* [1862] */
    (xdc_Char)0x73,  /* [1863] */
    (xdc_Char)0x6b,  /* [1864] */
    (xdc_Char)0x20,  /* [1865] */
    (xdc_Char)0x73,  /* [1866] */
    (xdc_Char)0x63,  /* [1867] */
    (xdc_Char)0x68,  /* [1868] */
    (xdc_Char)0x65,  /* [1869] */
    (xdc_Char)0x64,  /* [1870] */
    (xdc_Char)0x75,  /* [1871] */
    (xdc_Char)0x6c,  /* [1872] */
    (xdc_Char)0x65,  /* [1873] */
    (xdc_Char)0x72,  /* [1874] */
    (xdc_Char)0x20,  /* [1875] */
    (xdc_Char)0x69,  /* [1876] */
    (xdc_Char)0x73,  /* [1877] */
    (xdc_Char)0x20,  /* [1878] */
    (xdc_Char)0x64,  /* [1879] */
    (xdc_Char)0x69,  /* [1880] */
    (xdc_Char)0x73,  /* [1881] */
    (xdc_Char)0x61,  /* [1882] */
    (xdc_Char)0x62,  /* [1883] */
    (xdc_Char)0x6c,  /* [1884] */
    (xdc_Char)0x65,  /* [1885] */
    (xdc_Char)0x64,  /* [1886] */
    (xdc_Char)0x2e,  /* [1887] */
    (xdc_Char)0x0,  /* [1888] */
    (xdc_Char)0x41,  /* [1889] */
    (xdc_Char)0x5f,  /* [1890] */
    (xdc_Char)0x69,  /* [1891] */
    (xdc_Char)0x6e,  /* [1892] */
    (xdc_Char)0x76,  /* [1893] */
    (xdc_Char)0x61,  /* [1894] */
    (xdc_Char)0x6c,  /* [1895] */
    (xdc_Char)0x69,  /* [1896] */
    (xdc_Char)0x64,  /* [1897] */
    (xdc_Char)0x43,  /* [1898] */
    (xdc_Char)0x6f,  /* [1899] */
    (xdc_Char)0x72,  /* [1900] */
    (xdc_Char)0x65,  /* [1901] */
    (xdc_Char)0x49,  /* [1902] */
    (xdc_Char)0x64,  /* [1903] */
    (xdc_Char)0x3a,  /* [1904] */
    (xdc_Char)0x20,  /* [1905] */
    (xdc_Char)0x43,  /* [1906] */
    (xdc_Char)0x61,  /* [1907] */
    (xdc_Char)0x6e,  /* [1908] */
    (xdc_Char)0x6e,  /* [1909] */
    (xdc_Char)0x6f,  /* [1910] */
    (xdc_Char)0x74,  /* [1911] */
    (xdc_Char)0x20,  /* [1912] */
    (xdc_Char)0x70,  /* [1913] */
    (xdc_Char)0x61,  /* [1914] */
    (xdc_Char)0x73,  /* [1915] */
    (xdc_Char)0x73,  /* [1916] */
    (xdc_Char)0x20,  /* [1917] */
    (xdc_Char)0x61,  /* [1918] */
    (xdc_Char)0x20,  /* [1919] */
    (xdc_Char)0x6e,  /* [1920] */
    (xdc_Char)0x6f,  /* [1921] */
    (xdc_Char)0x6e,  /* [1922] */
    (xdc_Char)0x2d,  /* [1923] */
    (xdc_Char)0x7a,  /* [1924] */
    (xdc_Char)0x65,  /* [1925] */
    (xdc_Char)0x72,  /* [1926] */
    (xdc_Char)0x6f,  /* [1927] */
    (xdc_Char)0x20,  /* [1928] */
    (xdc_Char)0x43,  /* [1929] */
    (xdc_Char)0x6f,  /* [1930] */
    (xdc_Char)0x72,  /* [1931] */
    (xdc_Char)0x65,  /* [1932] */
    (xdc_Char)0x49,  /* [1933] */
    (xdc_Char)0x64,  /* [1934] */
    (xdc_Char)0x20,  /* [1935] */
    (xdc_Char)0x69,  /* [1936] */
    (xdc_Char)0x6e,  /* [1937] */
    (xdc_Char)0x20,  /* [1938] */
    (xdc_Char)0x61,  /* [1939] */
    (xdc_Char)0x20,  /* [1940] */
    (xdc_Char)0x6e,  /* [1941] */
    (xdc_Char)0x6f,  /* [1942] */
    (xdc_Char)0x6e,  /* [1943] */
    (xdc_Char)0x2d,  /* [1944] */
    (xdc_Char)0x53,  /* [1945] */
    (xdc_Char)0x4d,  /* [1946] */
    (xdc_Char)0x50,  /* [1947] */
    (xdc_Char)0x20,  /* [1948] */
    (xdc_Char)0x61,  /* [1949] */
    (xdc_Char)0x70,  /* [1950] */
    (xdc_Char)0x70,  /* [1951] */
    (xdc_Char)0x6c,  /* [1952] */
    (xdc_Char)0x69,  /* [1953] */
    (xdc_Char)0x63,  /* [1954] */
    (xdc_Char)0x61,  /* [1955] */
    (xdc_Char)0x74,  /* [1956] */
    (xdc_Char)0x69,  /* [1957] */
    (xdc_Char)0x6f,  /* [1958] */
    (xdc_Char)0x6e,  /* [1959] */
    (xdc_Char)0x2e,  /* [1960] */
    (xdc_Char)0x0,  /* [1961] */
    (xdc_Char)0x62,  /* [1962] */
    (xdc_Char)0x75,  /* [1963] */
    (xdc_Char)0x66,  /* [1964] */
    (xdc_Char)0x20,  /* [1965] */
    (xdc_Char)0x70,  /* [1966] */
    (xdc_Char)0x61,  /* [1967] */
    (xdc_Char)0x72,  /* [1968] */
    (xdc_Char)0x61,  /* [1969] */
    (xdc_Char)0x6d,  /* [1970] */
    (xdc_Char)0x65,  /* [1971] */
    (xdc_Char)0x74,  /* [1972] */
    (xdc_Char)0x65,  /* [1973] */
    (xdc_Char)0x72,  /* [1974] */
    (xdc_Char)0x20,  /* [1975] */
    (xdc_Char)0x63,  /* [1976] */
    (xdc_Char)0x61,  /* [1977] */
    (xdc_Char)0x6e,  /* [1978] */
    (xdc_Char)0x6e,  /* [1979] */
    (xdc_Char)0x6f,  /* [1980] */
    (xdc_Char)0x74,  /* [1981] */
    (xdc_Char)0x20,  /* [1982] */
    (xdc_Char)0x62,  /* [1983] */
    (xdc_Char)0x65,  /* [1984] */
    (xdc_Char)0x20,  /* [1985] */
    (xdc_Char)0x6e,  /* [1986] */
    (xdc_Char)0x75,  /* [1987] */
    (xdc_Char)0x6c,  /* [1988] */
    (xdc_Char)0x6c,  /* [1989] */
    (xdc_Char)0x0,  /* [1990] */
    (xdc_Char)0x62,  /* [1991] */
    (xdc_Char)0x75,  /* [1992] */
    (xdc_Char)0x66,  /* [1993] */
    (xdc_Char)0x20,  /* [1994] */
    (xdc_Char)0x6e,  /* [1995] */
    (xdc_Char)0x6f,  /* [1996] */
    (xdc_Char)0x74,  /* [1997] */
    (xdc_Char)0x20,  /* [1998] */
    (xdc_Char)0x70,  /* [1999] */
    (xdc_Char)0x72,  /* [2000] */
    (xdc_Char)0x6f,  /* [2001] */
    (xdc_Char)0x70,  /* [2002] */
    (xdc_Char)0x65,  /* [2003] */
    (xdc_Char)0x72,  /* [2004] */
    (xdc_Char)0x6c,  /* [2005] */
    (xdc_Char)0x79,  /* [2006] */
    (xdc_Char)0x20,  /* [2007] */
    (xdc_Char)0x61,  /* [2008] */
    (xdc_Char)0x6c,  /* [2009] */
    (xdc_Char)0x69,  /* [2010] */
    (xdc_Char)0x67,  /* [2011] */
    (xdc_Char)0x6e,  /* [2012] */
    (xdc_Char)0x65,  /* [2013] */
    (xdc_Char)0x64,  /* [2014] */
    (xdc_Char)0x0,  /* [2015] */
    (xdc_Char)0x61,  /* [2016] */
    (xdc_Char)0x6c,  /* [2017] */
    (xdc_Char)0x69,  /* [2018] */
    (xdc_Char)0x67,  /* [2019] */
    (xdc_Char)0x6e,  /* [2020] */
    (xdc_Char)0x20,  /* [2021] */
    (xdc_Char)0x70,  /* [2022] */
    (xdc_Char)0x61,  /* [2023] */
    (xdc_Char)0x72,  /* [2024] */
    (xdc_Char)0x61,  /* [2025] */
    (xdc_Char)0x6d,  /* [2026] */
    (xdc_Char)0x65,  /* [2027] */
    (xdc_Char)0x74,  /* [2028] */
    (xdc_Char)0x65,  /* [2029] */
    (xdc_Char)0x72,  /* [2030] */
    (xdc_Char)0x20,  /* [2031] */
    (xdc_Char)0x6d,  /* [2032] */
    (xdc_Char)0x75,  /* [2033] */
    (xdc_Char)0x73,  /* [2034] */
    (xdc_Char)0x74,  /* [2035] */
    (xdc_Char)0x20,  /* [2036] */
    (xdc_Char)0x62,  /* [2037] */
    (xdc_Char)0x65,  /* [2038] */
    (xdc_Char)0x20,  /* [2039] */
    (xdc_Char)0x30,  /* [2040] */
    (xdc_Char)0x20,  /* [2041] */
    (xdc_Char)0x6f,  /* [2042] */
    (xdc_Char)0x72,  /* [2043] */
    (xdc_Char)0x20,  /* [2044] */
    (xdc_Char)0x61,  /* [2045] */
    (xdc_Char)0x20,  /* [2046] */
    (xdc_Char)0x70,  /* [2047] */
    (xdc_Char)0x6f,  /* [2048] */
    (xdc_Char)0x77,  /* [2049] */
    (xdc_Char)0x65,  /* [2050] */
    (xdc_Char)0x72,  /* [2051] */
    (xdc_Char)0x20,  /* [2052] */
    (xdc_Char)0x6f,  /* [2053] */
    (xdc_Char)0x66,  /* [2054] */
    (xdc_Char)0x20,  /* [2055] */
    (xdc_Char)0x32,  /* [2056] */
    (xdc_Char)0x20,  /* [2057] */
    (xdc_Char)0x3e,  /* [2058] */
    (xdc_Char)0x3d,  /* [2059] */
    (xdc_Char)0x20,  /* [2060] */
    (xdc_Char)0x74,  /* [2061] */
    (xdc_Char)0x68,  /* [2062] */
    (xdc_Char)0x65,  /* [2063] */
    (xdc_Char)0x20,  /* [2064] */
    (xdc_Char)0x76,  /* [2065] */
    (xdc_Char)0x61,  /* [2066] */
    (xdc_Char)0x6c,  /* [2067] */
    (xdc_Char)0x75,  /* [2068] */
    (xdc_Char)0x65,  /* [2069] */
    (xdc_Char)0x20,  /* [2070] */
    (xdc_Char)0x6f,  /* [2071] */
    (xdc_Char)0x66,  /* [2072] */
    (xdc_Char)0x20,  /* [2073] */
    (xdc_Char)0x4d,  /* [2074] */
    (xdc_Char)0x65,  /* [2075] */
    (xdc_Char)0x6d,  /* [2076] */
    (xdc_Char)0x6f,  /* [2077] */
    (xdc_Char)0x72,  /* [2078] */
    (xdc_Char)0x79,  /* [2079] */
    (xdc_Char)0x5f,  /* [2080] */
    (xdc_Char)0x67,  /* [2081] */
    (xdc_Char)0x65,  /* [2082] */
    (xdc_Char)0x74,  /* [2083] */
    (xdc_Char)0x4d,  /* [2084] */
    (xdc_Char)0x61,  /* [2085] */
    (xdc_Char)0x78,  /* [2086] */
    (xdc_Char)0x44,  /* [2087] */
    (xdc_Char)0x65,  /* [2088] */
    (xdc_Char)0x66,  /* [2089] */
    (xdc_Char)0x61,  /* [2090] */
    (xdc_Char)0x75,  /* [2091] */
    (xdc_Char)0x6c,  /* [2092] */
    (xdc_Char)0x74,  /* [2093] */
    (xdc_Char)0x54,  /* [2094] */
    (xdc_Char)0x79,  /* [2095] */
    (xdc_Char)0x70,  /* [2096] */
    (xdc_Char)0x65,  /* [2097] */
    (xdc_Char)0x41,  /* [2098] */
    (xdc_Char)0x6c,  /* [2099] */
    (xdc_Char)0x69,  /* [2100] */
    (xdc_Char)0x67,  /* [2101] */
    (xdc_Char)0x6e,  /* [2102] */
    (xdc_Char)0x28,  /* [2103] */
    (xdc_Char)0x29,  /* [2104] */
    (xdc_Char)0x0,  /* [2105] */
    (xdc_Char)0x61,  /* [2106] */
    (xdc_Char)0x6c,  /* [2107] */
    (xdc_Char)0x69,  /* [2108] */
    (xdc_Char)0x67,  /* [2109] */
    (xdc_Char)0x6e,  /* [2110] */
    (xdc_Char)0x20,  /* [2111] */
    (xdc_Char)0x70,  /* [2112] */
    (xdc_Char)0x61,  /* [2113] */
    (xdc_Char)0x72,  /* [2114] */
    (xdc_Char)0x61,  /* [2115] */
    (xdc_Char)0x6d,  /* [2116] */
    (xdc_Char)0x65,  /* [2117] */
    (xdc_Char)0x74,  /* [2118] */
    (xdc_Char)0x65,  /* [2119] */
    (xdc_Char)0x72,  /* [2120] */
    (xdc_Char)0x20,  /* [2121] */
    (xdc_Char)0x31,  /* [2122] */
    (xdc_Char)0x29,  /* [2123] */
    (xdc_Char)0x20,  /* [2124] */
    (xdc_Char)0x6d,  /* [2125] */
    (xdc_Char)0x75,  /* [2126] */
    (xdc_Char)0x73,  /* [2127] */
    (xdc_Char)0x74,  /* [2128] */
    (xdc_Char)0x20,  /* [2129] */
    (xdc_Char)0x62,  /* [2130] */
    (xdc_Char)0x65,  /* [2131] */
    (xdc_Char)0x20,  /* [2132] */
    (xdc_Char)0x30,  /* [2133] */
    (xdc_Char)0x20,  /* [2134] */
    (xdc_Char)0x6f,  /* [2135] */
    (xdc_Char)0x72,  /* [2136] */
    (xdc_Char)0x20,  /* [2137] */
    (xdc_Char)0x61,  /* [2138] */
    (xdc_Char)0x20,  /* [2139] */
    (xdc_Char)0x70,  /* [2140] */
    (xdc_Char)0x6f,  /* [2141] */
    (xdc_Char)0x77,  /* [2142] */
    (xdc_Char)0x65,  /* [2143] */
    (xdc_Char)0x72,  /* [2144] */
    (xdc_Char)0x20,  /* [2145] */
    (xdc_Char)0x6f,  /* [2146] */
    (xdc_Char)0x66,  /* [2147] */
    (xdc_Char)0x20,  /* [2148] */
    (xdc_Char)0x32,  /* [2149] */
    (xdc_Char)0x20,  /* [2150] */
    (xdc_Char)0x61,  /* [2151] */
    (xdc_Char)0x6e,  /* [2152] */
    (xdc_Char)0x64,  /* [2153] */
    (xdc_Char)0x20,  /* [2154] */
    (xdc_Char)0x32,  /* [2155] */
    (xdc_Char)0x29,  /* [2156] */
    (xdc_Char)0x20,  /* [2157] */
    (xdc_Char)0x6e,  /* [2158] */
    (xdc_Char)0x6f,  /* [2159] */
    (xdc_Char)0x74,  /* [2160] */
    (xdc_Char)0x20,  /* [2161] */
    (xdc_Char)0x67,  /* [2162] */
    (xdc_Char)0x72,  /* [2163] */
    (xdc_Char)0x65,  /* [2164] */
    (xdc_Char)0x61,  /* [2165] */
    (xdc_Char)0x74,  /* [2166] */
    (xdc_Char)0x65,  /* [2167] */
    (xdc_Char)0x72,  /* [2168] */
    (xdc_Char)0x20,  /* [2169] */
    (xdc_Char)0x74,  /* [2170] */
    (xdc_Char)0x68,  /* [2171] */
    (xdc_Char)0x61,  /* [2172] */
    (xdc_Char)0x6e,  /* [2173] */
    (xdc_Char)0x20,  /* [2174] */
    (xdc_Char)0x74,  /* [2175] */
    (xdc_Char)0x68,  /* [2176] */
    (xdc_Char)0x65,  /* [2177] */
    (xdc_Char)0x20,  /* [2178] */
    (xdc_Char)0x68,  /* [2179] */
    (xdc_Char)0x65,  /* [2180] */
    (xdc_Char)0x61,  /* [2181] */
    (xdc_Char)0x70,  /* [2182] */
    (xdc_Char)0x73,  /* [2183] */
    (xdc_Char)0x20,  /* [2184] */
    (xdc_Char)0x61,  /* [2185] */
    (xdc_Char)0x6c,  /* [2186] */
    (xdc_Char)0x69,  /* [2187] */
    (xdc_Char)0x67,  /* [2188] */
    (xdc_Char)0x6e,  /* [2189] */
    (xdc_Char)0x6d,  /* [2190] */
    (xdc_Char)0x65,  /* [2191] */
    (xdc_Char)0x6e,  /* [2192] */
    (xdc_Char)0x74,  /* [2193] */
    (xdc_Char)0x0,  /* [2194] */
    (xdc_Char)0x62,  /* [2195] */
    (xdc_Char)0x6c,  /* [2196] */
    (xdc_Char)0x6f,  /* [2197] */
    (xdc_Char)0x63,  /* [2198] */
    (xdc_Char)0x6b,  /* [2199] */
    (xdc_Char)0x53,  /* [2200] */
    (xdc_Char)0x69,  /* [2201] */
    (xdc_Char)0x7a,  /* [2202] */
    (xdc_Char)0x65,  /* [2203] */
    (xdc_Char)0x20,  /* [2204] */
    (xdc_Char)0x63,  /* [2205] */
    (xdc_Char)0x61,  /* [2206] */
    (xdc_Char)0x6e,  /* [2207] */
    (xdc_Char)0x6e,  /* [2208] */
    (xdc_Char)0x6f,  /* [2209] */
    (xdc_Char)0x74,  /* [2210] */
    (xdc_Char)0x20,  /* [2211] */
    (xdc_Char)0x62,  /* [2212] */
    (xdc_Char)0x65,  /* [2213] */
    (xdc_Char)0x20,  /* [2214] */
    (xdc_Char)0x7a,  /* [2215] */
    (xdc_Char)0x65,  /* [2216] */
    (xdc_Char)0x72,  /* [2217] */
    (xdc_Char)0x6f,  /* [2218] */
    (xdc_Char)0x0,  /* [2219] */
    (xdc_Char)0x6e,  /* [2220] */
    (xdc_Char)0x75,  /* [2221] */
    (xdc_Char)0x6d,  /* [2222] */
    (xdc_Char)0x42,  /* [2223] */
    (xdc_Char)0x6c,  /* [2224] */
    (xdc_Char)0x6f,  /* [2225] */
    (xdc_Char)0x63,  /* [2226] */
    (xdc_Char)0x6b,  /* [2227] */
    (xdc_Char)0x73,  /* [2228] */
    (xdc_Char)0x20,  /* [2229] */
    (xdc_Char)0x63,  /* [2230] */
    (xdc_Char)0x61,  /* [2231] */
    (xdc_Char)0x6e,  /* [2232] */
    (xdc_Char)0x6e,  /* [2233] */
    (xdc_Char)0x6f,  /* [2234] */
    (xdc_Char)0x74,  /* [2235] */
    (xdc_Char)0x20,  /* [2236] */
    (xdc_Char)0x62,  /* [2237] */
    (xdc_Char)0x65,  /* [2238] */
    (xdc_Char)0x20,  /* [2239] */
    (xdc_Char)0x7a,  /* [2240] */
    (xdc_Char)0x65,  /* [2241] */
    (xdc_Char)0x72,  /* [2242] */
    (xdc_Char)0x6f,  /* [2243] */
    (xdc_Char)0x0,  /* [2244] */
    (xdc_Char)0x62,  /* [2245] */
    (xdc_Char)0x75,  /* [2246] */
    (xdc_Char)0x66,  /* [2247] */
    (xdc_Char)0x53,  /* [2248] */
    (xdc_Char)0x69,  /* [2249] */
    (xdc_Char)0x7a,  /* [2250] */
    (xdc_Char)0x65,  /* [2251] */
    (xdc_Char)0x20,  /* [2252] */
    (xdc_Char)0x63,  /* [2253] */
    (xdc_Char)0x61,  /* [2254] */
    (xdc_Char)0x6e,  /* [2255] */
    (xdc_Char)0x6e,  /* [2256] */
    (xdc_Char)0x6f,  /* [2257] */
    (xdc_Char)0x74,  /* [2258] */
    (xdc_Char)0x20,  /* [2259] */
    (xdc_Char)0x62,  /* [2260] */
    (xdc_Char)0x65,  /* [2261] */
    (xdc_Char)0x20,  /* [2262] */
    (xdc_Char)0x7a,  /* [2263] */
    (xdc_Char)0x65,  /* [2264] */
    (xdc_Char)0x72,  /* [2265] */
    (xdc_Char)0x6f,  /* [2266] */
    (xdc_Char)0x0,  /* [2267] */
    (xdc_Char)0x48,  /* [2268] */
    (xdc_Char)0x65,  /* [2269] */
    (xdc_Char)0x61,  /* [2270] */
    (xdc_Char)0x70,  /* [2271] */
    (xdc_Char)0x42,  /* [2272] */
    (xdc_Char)0x75,  /* [2273] */
    (xdc_Char)0x66,  /* [2274] */
    (xdc_Char)0x5f,  /* [2275] */
    (xdc_Char)0x63,  /* [2276] */
    (xdc_Char)0x72,  /* [2277] */
    (xdc_Char)0x65,  /* [2278] */
    (xdc_Char)0x61,  /* [2279] */
    (xdc_Char)0x74,  /* [2280] */
    (xdc_Char)0x65,  /* [2281] */
    (xdc_Char)0x27,  /* [2282] */
    (xdc_Char)0x73,  /* [2283] */
    (xdc_Char)0x20,  /* [2284] */
    (xdc_Char)0x62,  /* [2285] */
    (xdc_Char)0x75,  /* [2286] */
    (xdc_Char)0x66,  /* [2287] */
    (xdc_Char)0x53,  /* [2288] */
    (xdc_Char)0x69,  /* [2289] */
    (xdc_Char)0x7a,  /* [2290] */
    (xdc_Char)0x65,  /* [2291] */
    (xdc_Char)0x20,  /* [2292] */
    (xdc_Char)0x70,  /* [2293] */
    (xdc_Char)0x61,  /* [2294] */
    (xdc_Char)0x72,  /* [2295] */
    (xdc_Char)0x61,  /* [2296] */
    (xdc_Char)0x6d,  /* [2297] */
    (xdc_Char)0x65,  /* [2298] */
    (xdc_Char)0x74,  /* [2299] */
    (xdc_Char)0x65,  /* [2300] */
    (xdc_Char)0x72,  /* [2301] */
    (xdc_Char)0x20,  /* [2302] */
    (xdc_Char)0x69,  /* [2303] */
    (xdc_Char)0x73,  /* [2304] */
    (xdc_Char)0x20,  /* [2305] */
    (xdc_Char)0x69,  /* [2306] */
    (xdc_Char)0x6e,  /* [2307] */
    (xdc_Char)0x76,  /* [2308] */
    (xdc_Char)0x61,  /* [2309] */
    (xdc_Char)0x6c,  /* [2310] */
    (xdc_Char)0x69,  /* [2311] */
    (xdc_Char)0x64,  /* [2312] */
    (xdc_Char)0x20,  /* [2313] */
    (xdc_Char)0x28,  /* [2314] */
    (xdc_Char)0x74,  /* [2315] */
    (xdc_Char)0x6f,  /* [2316] */
    (xdc_Char)0x6f,  /* [2317] */
    (xdc_Char)0x20,  /* [2318] */
    (xdc_Char)0x73,  /* [2319] */
    (xdc_Char)0x6d,  /* [2320] */
    (xdc_Char)0x61,  /* [2321] */
    (xdc_Char)0x6c,  /* [2322] */
    (xdc_Char)0x6c,  /* [2323] */
    (xdc_Char)0x29,  /* [2324] */
    (xdc_Char)0x0,  /* [2325] */
    (xdc_Char)0x43,  /* [2326] */
    (xdc_Char)0x61,  /* [2327] */
    (xdc_Char)0x6e,  /* [2328] */
    (xdc_Char)0x6e,  /* [2329] */
    (xdc_Char)0x6f,  /* [2330] */
    (xdc_Char)0x74,  /* [2331] */
    (xdc_Char)0x20,  /* [2332] */
    (xdc_Char)0x63,  /* [2333] */
    (xdc_Char)0x61,  /* [2334] */
    (xdc_Char)0x6c,  /* [2335] */
    (xdc_Char)0x6c,  /* [2336] */
    (xdc_Char)0x20,  /* [2337] */
    (xdc_Char)0x48,  /* [2338] */
    (xdc_Char)0x65,  /* [2339] */
    (xdc_Char)0x61,  /* [2340] */
    (xdc_Char)0x70,  /* [2341] */
    (xdc_Char)0x42,  /* [2342] */
    (xdc_Char)0x75,  /* [2343] */
    (xdc_Char)0x66,  /* [2344] */
    (xdc_Char)0x5f,  /* [2345] */
    (xdc_Char)0x66,  /* [2346] */
    (xdc_Char)0x72,  /* [2347] */
    (xdc_Char)0x65,  /* [2348] */
    (xdc_Char)0x65,  /* [2349] */
    (xdc_Char)0x20,  /* [2350] */
    (xdc_Char)0x77,  /* [2351] */
    (xdc_Char)0x68,  /* [2352] */
    (xdc_Char)0x65,  /* [2353] */
    (xdc_Char)0x6e,  /* [2354] */
    (xdc_Char)0x20,  /* [2355] */
    (xdc_Char)0x6e,  /* [2356] */
    (xdc_Char)0x6f,  /* [2357] */
    (xdc_Char)0x20,  /* [2358] */
    (xdc_Char)0x62,  /* [2359] */
    (xdc_Char)0x6c,  /* [2360] */
    (xdc_Char)0x6f,  /* [2361] */
    (xdc_Char)0x63,  /* [2362] */
    (xdc_Char)0x6b,  /* [2363] */
    (xdc_Char)0x73,  /* [2364] */
    (xdc_Char)0x20,  /* [2365] */
    (xdc_Char)0x68,  /* [2366] */
    (xdc_Char)0x61,  /* [2367] */
    (xdc_Char)0x76,  /* [2368] */
    (xdc_Char)0x65,  /* [2369] */
    (xdc_Char)0x20,  /* [2370] */
    (xdc_Char)0x62,  /* [2371] */
    (xdc_Char)0x65,  /* [2372] */
    (xdc_Char)0x65,  /* [2373] */
    (xdc_Char)0x6e,  /* [2374] */
    (xdc_Char)0x20,  /* [2375] */
    (xdc_Char)0x61,  /* [2376] */
    (xdc_Char)0x6c,  /* [2377] */
    (xdc_Char)0x6c,  /* [2378] */
    (xdc_Char)0x6f,  /* [2379] */
    (xdc_Char)0x63,  /* [2380] */
    (xdc_Char)0x61,  /* [2381] */
    (xdc_Char)0x74,  /* [2382] */
    (xdc_Char)0x65,  /* [2383] */
    (xdc_Char)0x64,  /* [2384] */
    (xdc_Char)0x0,  /* [2385] */
    (xdc_Char)0x41,  /* [2386] */
    (xdc_Char)0x5f,  /* [2387] */
    (xdc_Char)0x69,  /* [2388] */
    (xdc_Char)0x6e,  /* [2389] */
    (xdc_Char)0x76,  /* [2390] */
    (xdc_Char)0x61,  /* [2391] */
    (xdc_Char)0x6c,  /* [2392] */
    (xdc_Char)0x69,  /* [2393] */
    (xdc_Char)0x64,  /* [2394] */
    (xdc_Char)0x46,  /* [2395] */
    (xdc_Char)0x72,  /* [2396] */
    (xdc_Char)0x65,  /* [2397] */
    (xdc_Char)0x65,  /* [2398] */
    (xdc_Char)0x3a,  /* [2399] */
    (xdc_Char)0x20,  /* [2400] */
    (xdc_Char)0x49,  /* [2401] */
    (xdc_Char)0x6e,  /* [2402] */
    (xdc_Char)0x76,  /* [2403] */
    (xdc_Char)0x61,  /* [2404] */
    (xdc_Char)0x6c,  /* [2405] */
    (xdc_Char)0x69,  /* [2406] */
    (xdc_Char)0x64,  /* [2407] */
    (xdc_Char)0x20,  /* [2408] */
    (xdc_Char)0x66,  /* [2409] */
    (xdc_Char)0x72,  /* [2410] */
    (xdc_Char)0x65,  /* [2411] */
    (xdc_Char)0x65,  /* [2412] */
    (xdc_Char)0x0,  /* [2413] */
    (xdc_Char)0x41,  /* [2414] */
    (xdc_Char)0x5f,  /* [2415] */
    (xdc_Char)0x7a,  /* [2416] */
    (xdc_Char)0x65,  /* [2417] */
    (xdc_Char)0x72,  /* [2418] */
    (xdc_Char)0x6f,  /* [2419] */
    (xdc_Char)0x42,  /* [2420] */
    (xdc_Char)0x6c,  /* [2421] */
    (xdc_Char)0x6f,  /* [2422] */
    (xdc_Char)0x63,  /* [2423] */
    (xdc_Char)0x6b,  /* [2424] */
    (xdc_Char)0x3a,  /* [2425] */
    (xdc_Char)0x20,  /* [2426] */
    (xdc_Char)0x43,  /* [2427] */
    (xdc_Char)0x61,  /* [2428] */
    (xdc_Char)0x6e,  /* [2429] */
    (xdc_Char)0x6e,  /* [2430] */
    (xdc_Char)0x6f,  /* [2431] */
    (xdc_Char)0x74,  /* [2432] */
    (xdc_Char)0x20,  /* [2433] */
    (xdc_Char)0x61,  /* [2434] */
    (xdc_Char)0x6c,  /* [2435] */
    (xdc_Char)0x6c,  /* [2436] */
    (xdc_Char)0x6f,  /* [2437] */
    (xdc_Char)0x63,  /* [2438] */
    (xdc_Char)0x61,  /* [2439] */
    (xdc_Char)0x74,  /* [2440] */
    (xdc_Char)0x65,  /* [2441] */
    (xdc_Char)0x20,  /* [2442] */
    (xdc_Char)0x73,  /* [2443] */
    (xdc_Char)0x69,  /* [2444] */
    (xdc_Char)0x7a,  /* [2445] */
    (xdc_Char)0x65,  /* [2446] */
    (xdc_Char)0x20,  /* [2447] */
    (xdc_Char)0x30,  /* [2448] */
    (xdc_Char)0x0,  /* [2449] */
    (xdc_Char)0x41,  /* [2450] */
    (xdc_Char)0x5f,  /* [2451] */
    (xdc_Char)0x68,  /* [2452] */
    (xdc_Char)0x65,  /* [2453] */
    (xdc_Char)0x61,  /* [2454] */
    (xdc_Char)0x70,  /* [2455] */
    (xdc_Char)0x53,  /* [2456] */
    (xdc_Char)0x69,  /* [2457] */
    (xdc_Char)0x7a,  /* [2458] */
    (xdc_Char)0x65,  /* [2459] */
    (xdc_Char)0x3a,  /* [2460] */
    (xdc_Char)0x20,  /* [2461] */
    (xdc_Char)0x52,  /* [2462] */
    (xdc_Char)0x65,  /* [2463] */
    (xdc_Char)0x71,  /* [2464] */
    (xdc_Char)0x75,  /* [2465] */
    (xdc_Char)0x65,  /* [2466] */
    (xdc_Char)0x73,  /* [2467] */
    (xdc_Char)0x74,  /* [2468] */
    (xdc_Char)0x65,  /* [2469] */
    (xdc_Char)0x64,  /* [2470] */
    (xdc_Char)0x20,  /* [2471] */
    (xdc_Char)0x68,  /* [2472] */
    (xdc_Char)0x65,  /* [2473] */
    (xdc_Char)0x61,  /* [2474] */
    (xdc_Char)0x70,  /* [2475] */
    (xdc_Char)0x20,  /* [2476] */
    (xdc_Char)0x73,  /* [2477] */
    (xdc_Char)0x69,  /* [2478] */
    (xdc_Char)0x7a,  /* [2479] */
    (xdc_Char)0x65,  /* [2480] */
    (xdc_Char)0x20,  /* [2481] */
    (xdc_Char)0x69,  /* [2482] */
    (xdc_Char)0x73,  /* [2483] */
    (xdc_Char)0x20,  /* [2484] */
    (xdc_Char)0x74,  /* [2485] */
    (xdc_Char)0x6f,  /* [2486] */
    (xdc_Char)0x6f,  /* [2487] */
    (xdc_Char)0x20,  /* [2488] */
    (xdc_Char)0x73,  /* [2489] */
    (xdc_Char)0x6d,  /* [2490] */
    (xdc_Char)0x61,  /* [2491] */
    (xdc_Char)0x6c,  /* [2492] */
    (xdc_Char)0x6c,  /* [2493] */
    (xdc_Char)0x0,  /* [2494] */
    (xdc_Char)0x41,  /* [2495] */
    (xdc_Char)0x5f,  /* [2496] */
    (xdc_Char)0x61,  /* [2497] */
    (xdc_Char)0x6c,  /* [2498] */
    (xdc_Char)0x69,  /* [2499] */
    (xdc_Char)0x67,  /* [2500] */
    (xdc_Char)0x6e,  /* [2501] */
    (xdc_Char)0x3a,  /* [2502] */
    (xdc_Char)0x20,  /* [2503] */
    (xdc_Char)0x52,  /* [2504] */
    (xdc_Char)0x65,  /* [2505] */
    (xdc_Char)0x71,  /* [2506] */
    (xdc_Char)0x75,  /* [2507] */
    (xdc_Char)0x65,  /* [2508] */
    (xdc_Char)0x73,  /* [2509] */
    (xdc_Char)0x74,  /* [2510] */
    (xdc_Char)0x65,  /* [2511] */
    (xdc_Char)0x64,  /* [2512] */
    (xdc_Char)0x20,  /* [2513] */
    (xdc_Char)0x61,  /* [2514] */
    (xdc_Char)0x6c,  /* [2515] */
    (xdc_Char)0x69,  /* [2516] */
    (xdc_Char)0x67,  /* [2517] */
    (xdc_Char)0x6e,  /* [2518] */
    (xdc_Char)0x20,  /* [2519] */
    (xdc_Char)0x69,  /* [2520] */
    (xdc_Char)0x73,  /* [2521] */
    (xdc_Char)0x20,  /* [2522] */
    (xdc_Char)0x6e,  /* [2523] */
    (xdc_Char)0x6f,  /* [2524] */
    (xdc_Char)0x74,  /* [2525] */
    (xdc_Char)0x20,  /* [2526] */
    (xdc_Char)0x61,  /* [2527] */
    (xdc_Char)0x20,  /* [2528] */
    (xdc_Char)0x70,  /* [2529] */
    (xdc_Char)0x6f,  /* [2530] */
    (xdc_Char)0x77,  /* [2531] */
    (xdc_Char)0x65,  /* [2532] */
    (xdc_Char)0x72,  /* [2533] */
    (xdc_Char)0x20,  /* [2534] */
    (xdc_Char)0x6f,  /* [2535] */
    (xdc_Char)0x66,  /* [2536] */
    (xdc_Char)0x20,  /* [2537] */
    (xdc_Char)0x32,  /* [2538] */
    (xdc_Char)0x0,  /* [2539] */
    (xdc_Char)0x49,  /* [2540] */
    (xdc_Char)0x6e,  /* [2541] */
    (xdc_Char)0x76,  /* [2542] */
    (xdc_Char)0x61,  /* [2543] */
    (xdc_Char)0x6c,  /* [2544] */
    (xdc_Char)0x69,  /* [2545] */
    (xdc_Char)0x64,  /* [2546] */
    (xdc_Char)0x20,  /* [2547] */
    (xdc_Char)0x62,  /* [2548] */
    (xdc_Char)0x6c,  /* [2549] */
    (xdc_Char)0x6f,  /* [2550] */
    (xdc_Char)0x63,  /* [2551] */
    (xdc_Char)0x6b,  /* [2552] */
    (xdc_Char)0x20,  /* [2553] */
    (xdc_Char)0x61,  /* [2554] */
    (xdc_Char)0x64,  /* [2555] */
    (xdc_Char)0x64,  /* [2556] */
    (xdc_Char)0x72,  /* [2557] */
    (xdc_Char)0x65,  /* [2558] */
    (xdc_Char)0x73,  /* [2559] */
    (xdc_Char)0x73,  /* [2560] */
    (xdc_Char)0x20,  /* [2561] */
    (xdc_Char)0x6f,  /* [2562] */
    (xdc_Char)0x6e,  /* [2563] */
    (xdc_Char)0x20,  /* [2564] */
    (xdc_Char)0x74,  /* [2565] */
    (xdc_Char)0x68,  /* [2566] */
    (xdc_Char)0x65,  /* [2567] */
    (xdc_Char)0x20,  /* [2568] */
    (xdc_Char)0x66,  /* [2569] */
    (xdc_Char)0x72,  /* [2570] */
    (xdc_Char)0x65,  /* [2571] */
    (xdc_Char)0x65,  /* [2572] */
    (xdc_Char)0x2e,  /* [2573] */
    (xdc_Char)0x20,  /* [2574] */
    (xdc_Char)0x46,  /* [2575] */
    (xdc_Char)0x61,  /* [2576] */
    (xdc_Char)0x69,  /* [2577] */
    (xdc_Char)0x6c,  /* [2578] */
    (xdc_Char)0x65,  /* [2579] */
    (xdc_Char)0x64,  /* [2580] */
    (xdc_Char)0x20,  /* [2581] */
    (xdc_Char)0x74,  /* [2582] */
    (xdc_Char)0x6f,  /* [2583] */
    (xdc_Char)0x20,  /* [2584] */
    (xdc_Char)0x66,  /* [2585] */
    (xdc_Char)0x72,  /* [2586] */
    (xdc_Char)0x65,  /* [2587] */
    (xdc_Char)0x65,  /* [2588] */
    (xdc_Char)0x20,  /* [2589] */
    (xdc_Char)0x62,  /* [2590] */
    (xdc_Char)0x6c,  /* [2591] */
    (xdc_Char)0x6f,  /* [2592] */
    (xdc_Char)0x63,  /* [2593] */
    (xdc_Char)0x6b,  /* [2594] */
    (xdc_Char)0x20,  /* [2595] */
    (xdc_Char)0x62,  /* [2596] */
    (xdc_Char)0x61,  /* [2597] */
    (xdc_Char)0x63,  /* [2598] */
    (xdc_Char)0x6b,  /* [2599] */
    (xdc_Char)0x20,  /* [2600] */
    (xdc_Char)0x74,  /* [2601] */
    (xdc_Char)0x6f,  /* [2602] */
    (xdc_Char)0x20,  /* [2603] */
    (xdc_Char)0x68,  /* [2604] */
    (xdc_Char)0x65,  /* [2605] */
    (xdc_Char)0x61,  /* [2606] */
    (xdc_Char)0x70,  /* [2607] */
    (xdc_Char)0x2e,  /* [2608] */
    (xdc_Char)0x0,  /* [2609] */
    (xdc_Char)0x41,  /* [2610] */
    (xdc_Char)0x5f,  /* [2611] */
    (xdc_Char)0x64,  /* [2612] */
    (xdc_Char)0x6f,  /* [2613] */
    (xdc_Char)0x75,  /* [2614] */
    (xdc_Char)0x62,  /* [2615] */
    (xdc_Char)0x6c,  /* [2616] */
    (xdc_Char)0x65,  /* [2617] */
    (xdc_Char)0x46,  /* [2618] */
    (xdc_Char)0x72,  /* [2619] */
    (xdc_Char)0x65,  /* [2620] */
    (xdc_Char)0x65,  /* [2621] */
    (xdc_Char)0x3a,  /* [2622] */
    (xdc_Char)0x20,  /* [2623] */
    (xdc_Char)0x42,  /* [2624] */
    (xdc_Char)0x75,  /* [2625] */
    (xdc_Char)0x66,  /* [2626] */
    (xdc_Char)0x66,  /* [2627] */
    (xdc_Char)0x65,  /* [2628] */
    (xdc_Char)0x72,  /* [2629] */
    (xdc_Char)0x20,  /* [2630] */
    (xdc_Char)0x61,  /* [2631] */
    (xdc_Char)0x6c,  /* [2632] */
    (xdc_Char)0x72,  /* [2633] */
    (xdc_Char)0x65,  /* [2634] */
    (xdc_Char)0x61,  /* [2635] */
    (xdc_Char)0x64,  /* [2636] */
    (xdc_Char)0x79,  /* [2637] */
    (xdc_Char)0x20,  /* [2638] */
    (xdc_Char)0x66,  /* [2639] */
    (xdc_Char)0x72,  /* [2640] */
    (xdc_Char)0x65,  /* [2641] */
    (xdc_Char)0x65,  /* [2642] */
    (xdc_Char)0x0,  /* [2643] */
    (xdc_Char)0x41,  /* [2644] */
    (xdc_Char)0x5f,  /* [2645] */
    (xdc_Char)0x62,  /* [2646] */
    (xdc_Char)0x75,  /* [2647] */
    (xdc_Char)0x66,  /* [2648] */
    (xdc_Char)0x4f,  /* [2649] */
    (xdc_Char)0x76,  /* [2650] */
    (xdc_Char)0x65,  /* [2651] */
    (xdc_Char)0x72,  /* [2652] */
    (xdc_Char)0x66,  /* [2653] */
    (xdc_Char)0x6c,  /* [2654] */
    (xdc_Char)0x6f,  /* [2655] */
    (xdc_Char)0x77,  /* [2656] */
    (xdc_Char)0x3a,  /* [2657] */
    (xdc_Char)0x20,  /* [2658] */
    (xdc_Char)0x42,  /* [2659] */
    (xdc_Char)0x75,  /* [2660] */
    (xdc_Char)0x66,  /* [2661] */
    (xdc_Char)0x66,  /* [2662] */
    (xdc_Char)0x65,  /* [2663] */
    (xdc_Char)0x72,  /* [2664] */
    (xdc_Char)0x20,  /* [2665] */
    (xdc_Char)0x6f,  /* [2666] */
    (xdc_Char)0x76,  /* [2667] */
    (xdc_Char)0x65,  /* [2668] */
    (xdc_Char)0x72,  /* [2669] */
    (xdc_Char)0x66,  /* [2670] */
    (xdc_Char)0x6c,  /* [2671] */
    (xdc_Char)0x6f,  /* [2672] */
    (xdc_Char)0x77,  /* [2673] */
    (xdc_Char)0x0,  /* [2674] */
    (xdc_Char)0x41,  /* [2675] */
    (xdc_Char)0x5f,  /* [2676] */
    (xdc_Char)0x6e,  /* [2677] */
    (xdc_Char)0x6f,  /* [2678] */
    (xdc_Char)0x74,  /* [2679] */
    (xdc_Char)0x45,  /* [2680] */
    (xdc_Char)0x6d,  /* [2681] */
    (xdc_Char)0x70,  /* [2682] */
    (xdc_Char)0x74,  /* [2683] */
    (xdc_Char)0x79,  /* [2684] */
    (xdc_Char)0x3a,  /* [2685] */
    (xdc_Char)0x20,  /* [2686] */
    (xdc_Char)0x48,  /* [2687] */
    (xdc_Char)0x65,  /* [2688] */
    (xdc_Char)0x61,  /* [2689] */
    (xdc_Char)0x70,  /* [2690] */
    (xdc_Char)0x20,  /* [2691] */
    (xdc_Char)0x6e,  /* [2692] */
    (xdc_Char)0x6f,  /* [2693] */
    (xdc_Char)0x74,  /* [2694] */
    (xdc_Char)0x20,  /* [2695] */
    (xdc_Char)0x65,  /* [2696] */
    (xdc_Char)0x6d,  /* [2697] */
    (xdc_Char)0x70,  /* [2698] */
    (xdc_Char)0x74,  /* [2699] */
    (xdc_Char)0x79,  /* [2700] */
    (xdc_Char)0x0,  /* [2701] */
    (xdc_Char)0x41,  /* [2702] */
    (xdc_Char)0x5f,  /* [2703] */
    (xdc_Char)0x6e,  /* [2704] */
    (xdc_Char)0x75,  /* [2705] */
    (xdc_Char)0x6c,  /* [2706] */
    (xdc_Char)0x6c,  /* [2707] */
    (xdc_Char)0x4f,  /* [2708] */
    (xdc_Char)0x62,  /* [2709] */
    (xdc_Char)0x6a,  /* [2710] */
    (xdc_Char)0x65,  /* [2711] */
    (xdc_Char)0x63,  /* [2712] */
    (xdc_Char)0x74,  /* [2713] */
    (xdc_Char)0x3a,  /* [2714] */
    (xdc_Char)0x20,  /* [2715] */
    (xdc_Char)0x48,  /* [2716] */
    (xdc_Char)0x65,  /* [2717] */
    (xdc_Char)0x61,  /* [2718] */
    (xdc_Char)0x70,  /* [2719] */
    (xdc_Char)0x54,  /* [2720] */
    (xdc_Char)0x72,  /* [2721] */
    (xdc_Char)0x61,  /* [2722] */
    (xdc_Char)0x63,  /* [2723] */
    (xdc_Char)0x6b,  /* [2724] */
    (xdc_Char)0x5f,  /* [2725] */
    (xdc_Char)0x70,  /* [2726] */
    (xdc_Char)0x72,  /* [2727] */
    (xdc_Char)0x69,  /* [2728] */
    (xdc_Char)0x6e,  /* [2729] */
    (xdc_Char)0x74,  /* [2730] */
    (xdc_Char)0x48,  /* [2731] */
    (xdc_Char)0x65,  /* [2732] */
    (xdc_Char)0x61,  /* [2733] */
    (xdc_Char)0x70,  /* [2734] */
    (xdc_Char)0x20,  /* [2735] */
    (xdc_Char)0x63,  /* [2736] */
    (xdc_Char)0x61,  /* [2737] */
    (xdc_Char)0x6c,  /* [2738] */
    (xdc_Char)0x6c,  /* [2739] */
    (xdc_Char)0x65,  /* [2740] */
    (xdc_Char)0x64,  /* [2741] */
    (xdc_Char)0x20,  /* [2742] */
    (xdc_Char)0x77,  /* [2743] */
    (xdc_Char)0x69,  /* [2744] */
    (xdc_Char)0x74,  /* [2745] */
    (xdc_Char)0x68,  /* [2746] */
    (xdc_Char)0x20,  /* [2747] */
    (xdc_Char)0x6e,  /* [2748] */
    (xdc_Char)0x75,  /* [2749] */
    (xdc_Char)0x6c,  /* [2750] */
    (xdc_Char)0x6c,  /* [2751] */
    (xdc_Char)0x20,  /* [2752] */
    (xdc_Char)0x6f,  /* [2753] */
    (xdc_Char)0x62,  /* [2754] */
    (xdc_Char)0x6a,  /* [2755] */
    (xdc_Char)0x0,  /* [2756] */
    (xdc_Char)0x41,  /* [2757] */
    (xdc_Char)0x5f,  /* [2758] */
    (xdc_Char)0x69,  /* [2759] */
    (xdc_Char)0x70,  /* [2760] */
    (xdc_Char)0x63,  /* [2761] */
    (xdc_Char)0x46,  /* [2762] */
    (xdc_Char)0x61,  /* [2763] */
    (xdc_Char)0x69,  /* [2764] */
    (xdc_Char)0x6c,  /* [2765] */
    (xdc_Char)0x65,  /* [2766] */
    (xdc_Char)0x64,  /* [2767] */
    (xdc_Char)0x3a,  /* [2768] */
    (xdc_Char)0x20,  /* [2769] */
    (xdc_Char)0x55,  /* [2770] */
    (xdc_Char)0x6e,  /* [2771] */
    (xdc_Char)0x65,  /* [2772] */
    (xdc_Char)0x78,  /* [2773] */
    (xdc_Char)0x70,  /* [2774] */
    (xdc_Char)0x65,  /* [2775] */
    (xdc_Char)0x63,  /* [2776] */
    (xdc_Char)0x74,  /* [2777] */
    (xdc_Char)0x65,  /* [2778] */
    (xdc_Char)0x64,  /* [2779] */
    (xdc_Char)0x20,  /* [2780] */
    (xdc_Char)0x4d,  /* [2781] */
    (xdc_Char)0x65,  /* [2782] */
    (xdc_Char)0x73,  /* [2783] */
    (xdc_Char)0x73,  /* [2784] */
    (xdc_Char)0x61,  /* [2785] */
    (xdc_Char)0x67,  /* [2786] */
    (xdc_Char)0x65,  /* [2787] */
    (xdc_Char)0x51,  /* [2788] */
    (xdc_Char)0x20,  /* [2789] */
    (xdc_Char)0x66,  /* [2790] */
    (xdc_Char)0x61,  /* [2791] */
    (xdc_Char)0x69,  /* [2792] */
    (xdc_Char)0x6c,  /* [2793] */
    (xdc_Char)0x65,  /* [2794] */
    (xdc_Char)0x64,  /* [2795] */
    (xdc_Char)0x0,  /* [2796] */
    (xdc_Char)0x41,  /* [2797] */
    (xdc_Char)0x5f,  /* [2798] */
    (xdc_Char)0x69,  /* [2799] */
    (xdc_Char)0x6e,  /* [2800] */
    (xdc_Char)0x76,  /* [2801] */
    (xdc_Char)0x61,  /* [2802] */
    (xdc_Char)0x6c,  /* [2803] */
    (xdc_Char)0x69,  /* [2804] */
    (xdc_Char)0x64,  /* [2805] */
    (xdc_Char)0x48,  /* [2806] */
    (xdc_Char)0x64,  /* [2807] */
    (xdc_Char)0x72,  /* [2808] */
    (xdc_Char)0x54,  /* [2809] */
    (xdc_Char)0x79,  /* [2810] */
    (xdc_Char)0x70,  /* [2811] */
    (xdc_Char)0x65,  /* [2812] */
    (xdc_Char)0x3a,  /* [2813] */
    (xdc_Char)0x20,  /* [2814] */
    (xdc_Char)0x49,  /* [2815] */
    (xdc_Char)0x6e,  /* [2816] */
    (xdc_Char)0x76,  /* [2817] */
    (xdc_Char)0x61,  /* [2818] */
    (xdc_Char)0x6c,  /* [2819] */
    (xdc_Char)0x69,  /* [2820] */
    (xdc_Char)0x64,  /* [2821] */
    (xdc_Char)0x20,  /* [2822] */
    (xdc_Char)0x48,  /* [2823] */
    (xdc_Char)0x64,  /* [2824] */
    (xdc_Char)0x72,  /* [2825] */
    (xdc_Char)0x54,  /* [2826] */
    (xdc_Char)0x79,  /* [2827] */
    (xdc_Char)0x70,  /* [2828] */
    (xdc_Char)0x65,  /* [2829] */
    (xdc_Char)0x20,  /* [2830] */
    (xdc_Char)0x73,  /* [2831] */
    (xdc_Char)0x70,  /* [2832] */
    (xdc_Char)0x65,  /* [2833] */
    (xdc_Char)0x63,  /* [2834] */
    (xdc_Char)0x69,  /* [2835] */
    (xdc_Char)0x66,  /* [2836] */
    (xdc_Char)0x69,  /* [2837] */
    (xdc_Char)0x65,  /* [2838] */
    (xdc_Char)0x64,  /* [2839] */
    (xdc_Char)0x0,  /* [2840] */
    (xdc_Char)0x41,  /* [2841] */
    (xdc_Char)0x5f,  /* [2842] */
    (xdc_Char)0x69,  /* [2843] */
    (xdc_Char)0x6e,  /* [2844] */
    (xdc_Char)0x76,  /* [2845] */
    (xdc_Char)0x61,  /* [2846] */
    (xdc_Char)0x6c,  /* [2847] */
    (xdc_Char)0x69,  /* [2848] */
    (xdc_Char)0x64,  /* [2849] */
    (xdc_Char)0x53,  /* [2850] */
    (xdc_Char)0x65,  /* [2851] */
    (xdc_Char)0x72,  /* [2852] */
    (xdc_Char)0x76,  /* [2853] */
    (xdc_Char)0x69,  /* [2854] */
    (xdc_Char)0x63,  /* [2855] */
    (xdc_Char)0x65,  /* [2856] */
    (xdc_Char)0x49,  /* [2857] */
    (xdc_Char)0x64,  /* [2858] */
    (xdc_Char)0x3a,  /* [2859] */
    (xdc_Char)0x20,  /* [2860] */
    (xdc_Char)0x53,  /* [2861] */
    (xdc_Char)0x65,  /* [2862] */
    (xdc_Char)0x72,  /* [2863] */
    (xdc_Char)0x76,  /* [2864] */
    (xdc_Char)0x69,  /* [2865] */
    (xdc_Char)0x63,  /* [2866] */
    (xdc_Char)0x65,  /* [2867] */
    (xdc_Char)0x49,  /* [2868] */
    (xdc_Char)0x64,  /* [2869] */
    (xdc_Char)0x20,  /* [2870] */
    (xdc_Char)0x6f,  /* [2871] */
    (xdc_Char)0x75,  /* [2872] */
    (xdc_Char)0x74,  /* [2873] */
    (xdc_Char)0x20,  /* [2874] */
    (xdc_Char)0x6f,  /* [2875] */
    (xdc_Char)0x66,  /* [2876] */
    (xdc_Char)0x20,  /* [2877] */
    (xdc_Char)0x72,  /* [2878] */
    (xdc_Char)0x61,  /* [2879] */
    (xdc_Char)0x6e,  /* [2880] */
    (xdc_Char)0x67,  /* [2881] */
    (xdc_Char)0x65,  /* [2882] */
    (xdc_Char)0x0,  /* [2883] */
    (xdc_Char)0x41,  /* [2884] */
    (xdc_Char)0x5f,  /* [2885] */
    (xdc_Char)0x69,  /* [2886] */
    (xdc_Char)0x6e,  /* [2887] */
    (xdc_Char)0x76,  /* [2888] */
    (xdc_Char)0x61,  /* [2889] */
    (xdc_Char)0x6c,  /* [2890] */
    (xdc_Char)0x69,  /* [2891] */
    (xdc_Char)0x64,  /* [2892] */
    (xdc_Char)0x50,  /* [2893] */
    (xdc_Char)0x72,  /* [2894] */
    (xdc_Char)0x6f,  /* [2895] */
    (xdc_Char)0x63,  /* [2896] */
    (xdc_Char)0x65,  /* [2897] */
    (xdc_Char)0x73,  /* [2898] */
    (xdc_Char)0x73,  /* [2899] */
    (xdc_Char)0x43,  /* [2900] */
    (xdc_Char)0x61,  /* [2901] */
    (xdc_Char)0x6c,  /* [2902] */
    (xdc_Char)0x6c,  /* [2903] */
    (xdc_Char)0x62,  /* [2904] */
    (xdc_Char)0x61,  /* [2905] */
    (xdc_Char)0x63,  /* [2906] */
    (xdc_Char)0x6b,  /* [2907] */
    (xdc_Char)0x46,  /* [2908] */
    (xdc_Char)0x78,  /* [2909] */
    (xdc_Char)0x6e,  /* [2910] */
    (xdc_Char)0x3a,  /* [2911] */
    (xdc_Char)0x20,  /* [2912] */
    (xdc_Char)0x43,  /* [2913] */
    (xdc_Char)0x61,  /* [2914] */
    (xdc_Char)0x6c,  /* [2915] */
    (xdc_Char)0x6c,  /* [2916] */
    (xdc_Char)0x62,  /* [2917] */
    (xdc_Char)0x61,  /* [2918] */
    (xdc_Char)0x63,  /* [2919] */
    (xdc_Char)0x6b,  /* [2920] */
    (xdc_Char)0x20,  /* [2921] */
    (xdc_Char)0x63,  /* [2922] */
    (xdc_Char)0x61,  /* [2923] */
    (xdc_Char)0x6e,  /* [2924] */
    (xdc_Char)0x6e,  /* [2925] */
    (xdc_Char)0x6f,  /* [2926] */
    (xdc_Char)0x74,  /* [2927] */
    (xdc_Char)0x20,  /* [2928] */
    (xdc_Char)0x62,  /* [2929] */
    (xdc_Char)0x65,  /* [2930] */
    (xdc_Char)0x20,  /* [2931] */
    (xdc_Char)0x4e,  /* [2932] */
    (xdc_Char)0x55,  /* [2933] */
    (xdc_Char)0x4c,  /* [2934] */
    (xdc_Char)0x4c,  /* [2935] */
    (xdc_Char)0x0,  /* [2936] */
    (xdc_Char)0x41,  /* [2937] */
    (xdc_Char)0x5f,  /* [2938] */
    (xdc_Char)0x7a,  /* [2939] */
    (xdc_Char)0x65,  /* [2940] */
    (xdc_Char)0x72,  /* [2941] */
    (xdc_Char)0x6f,  /* [2942] */
    (xdc_Char)0x54,  /* [2943] */
    (xdc_Char)0x69,  /* [2944] */
    (xdc_Char)0x6d,  /* [2945] */
    (xdc_Char)0x65,  /* [2946] */
    (xdc_Char)0x6f,  /* [2947] */
    (xdc_Char)0x75,  /* [2948] */
    (xdc_Char)0x74,  /* [2949] */
    (xdc_Char)0x3a,  /* [2950] */
    (xdc_Char)0x20,  /* [2951] */
    (xdc_Char)0x54,  /* [2952] */
    (xdc_Char)0x69,  /* [2953] */
    (xdc_Char)0x6d,  /* [2954] */
    (xdc_Char)0x65,  /* [2955] */
    (xdc_Char)0x6f,  /* [2956] */
    (xdc_Char)0x75,  /* [2957] */
    (xdc_Char)0x74,  /* [2958] */
    (xdc_Char)0x20,  /* [2959] */
    (xdc_Char)0x76,  /* [2960] */
    (xdc_Char)0x61,  /* [2961] */
    (xdc_Char)0x6c,  /* [2962] */
    (xdc_Char)0x75,  /* [2963] */
    (xdc_Char)0x65,  /* [2964] */
    (xdc_Char)0x20,  /* [2965] */
    (xdc_Char)0x61,  /* [2966] */
    (xdc_Char)0x6e,  /* [2967] */
    (xdc_Char)0x6e,  /* [2968] */
    (xdc_Char)0x6f,  /* [2969] */
    (xdc_Char)0x74,  /* [2970] */
    (xdc_Char)0x20,  /* [2971] */
    (xdc_Char)0x62,  /* [2972] */
    (xdc_Char)0x65,  /* [2973] */
    (xdc_Char)0x20,  /* [2974] */
    (xdc_Char)0x7a,  /* [2975] */
    (xdc_Char)0x65,  /* [2976] */
    (xdc_Char)0x72,  /* [2977] */
    (xdc_Char)0x6f,  /* [2978] */
    (xdc_Char)0x0,  /* [2979] */
    (xdc_Char)0x41,  /* [2980] */
    (xdc_Char)0x5f,  /* [2981] */
    (xdc_Char)0x69,  /* [2982] */
    (xdc_Char)0x6e,  /* [2983] */
    (xdc_Char)0x76,  /* [2984] */
    (xdc_Char)0x61,  /* [2985] */
    (xdc_Char)0x6c,  /* [2986] */
    (xdc_Char)0x69,  /* [2987] */
    (xdc_Char)0x64,  /* [2988] */
    (xdc_Char)0x4b,  /* [2989] */
    (xdc_Char)0x65,  /* [2990] */
    (xdc_Char)0x79,  /* [2991] */
    (xdc_Char)0x3a,  /* [2992] */
    (xdc_Char)0x20,  /* [2993] */
    (xdc_Char)0x74,  /* [2994] */
    (xdc_Char)0x68,  /* [2995] */
    (xdc_Char)0x65,  /* [2996] */
    (xdc_Char)0x20,  /* [2997] */
    (xdc_Char)0x6b,  /* [2998] */
    (xdc_Char)0x65,  /* [2999] */
    (xdc_Char)0x79,  /* [3000] */
    (xdc_Char)0x20,  /* [3001] */
    (xdc_Char)0x6d,  /* [3002] */
    (xdc_Char)0x75,  /* [3003] */
    (xdc_Char)0x73,  /* [3004] */
    (xdc_Char)0x74,  /* [3005] */
    (xdc_Char)0x20,  /* [3006] */
    (xdc_Char)0x62,  /* [3007] */
    (xdc_Char)0x65,  /* [3008] */
    (xdc_Char)0x20,  /* [3009] */
    (xdc_Char)0x73,  /* [3010] */
    (xdc_Char)0x65,  /* [3011] */
    (xdc_Char)0x74,  /* [3012] */
    (xdc_Char)0x20,  /* [3013] */
    (xdc_Char)0x74,  /* [3014] */
    (xdc_Char)0x6f,  /* [3015] */
    (xdc_Char)0x20,  /* [3016] */
    (xdc_Char)0x61,  /* [3017] */
    (xdc_Char)0x20,  /* [3018] */
    (xdc_Char)0x6e,  /* [3019] */
    (xdc_Char)0x6f,  /* [3020] */
    (xdc_Char)0x6e,  /* [3021] */
    (xdc_Char)0x2d,  /* [3022] */
    (xdc_Char)0x64,  /* [3023] */
    (xdc_Char)0x65,  /* [3024] */
    (xdc_Char)0x66,  /* [3025] */
    (xdc_Char)0x61,  /* [3026] */
    (xdc_Char)0x75,  /* [3027] */
    (xdc_Char)0x6c,  /* [3028] */
    (xdc_Char)0x74,  /* [3029] */
    (xdc_Char)0x20,  /* [3030] */
    (xdc_Char)0x76,  /* [3031] */
    (xdc_Char)0x61,  /* [3032] */
    (xdc_Char)0x6c,  /* [3033] */
    (xdc_Char)0x75,  /* [3034] */
    (xdc_Char)0x65,  /* [3035] */
    (xdc_Char)0x0,  /* [3036] */
    (xdc_Char)0x41,  /* [3037] */
    (xdc_Char)0x5f,  /* [3038] */
    (xdc_Char)0x6e,  /* [3039] */
    (xdc_Char)0x75,  /* [3040] */
    (xdc_Char)0x6c,  /* [3041] */
    (xdc_Char)0x6c,  /* [3042] */
    (xdc_Char)0x48,  /* [3043] */
    (xdc_Char)0x61,  /* [3044] */
    (xdc_Char)0x6e,  /* [3045] */
    (xdc_Char)0x64,  /* [3046] */
    (xdc_Char)0x6c,  /* [3047] */
    (xdc_Char)0x65,  /* [3048] */
    (xdc_Char)0x3a,  /* [3049] */
    (xdc_Char)0x20,  /* [3050] */
    (xdc_Char)0x4e,  /* [3051] */
    (xdc_Char)0x75,  /* [3052] */
    (xdc_Char)0x6c,  /* [3053] */
    (xdc_Char)0x6c,  /* [3054] */
    (xdc_Char)0x20,  /* [3055] */
    (xdc_Char)0x68,  /* [3056] */
    (xdc_Char)0x61,  /* [3057] */
    (xdc_Char)0x6e,  /* [3058] */
    (xdc_Char)0x64,  /* [3059] */
    (xdc_Char)0x6c,  /* [3060] */
    (xdc_Char)0x65,  /* [3061] */
    (xdc_Char)0x20,  /* [3062] */
    (xdc_Char)0x70,  /* [3063] */
    (xdc_Char)0x61,  /* [3064] */
    (xdc_Char)0x73,  /* [3065] */
    (xdc_Char)0x73,  /* [3066] */
    (xdc_Char)0x65,  /* [3067] */
    (xdc_Char)0x64,  /* [3068] */
    (xdc_Char)0x20,  /* [3069] */
    (xdc_Char)0x74,  /* [3070] */
    (xdc_Char)0x6f,  /* [3071] */
    (xdc_Char)0x20,  /* [3072] */
    (xdc_Char)0x63,  /* [3073] */
    (xdc_Char)0x72,  /* [3074] */
    (xdc_Char)0x65,  /* [3075] */
    (xdc_Char)0x61,  /* [3076] */
    (xdc_Char)0x74,  /* [3077] */
    (xdc_Char)0x65,  /* [3078] */
    (xdc_Char)0x0,  /* [3079] */
    (xdc_Char)0x41,  /* [3080] */
    (xdc_Char)0x5f,  /* [3081] */
    (xdc_Char)0x49,  /* [3082] */
    (xdc_Char)0x70,  /* [3083] */
    (xdc_Char)0x63,  /* [3084] */
    (xdc_Char)0x4d,  /* [3085] */
    (xdc_Char)0x50,  /* [3086] */
    (xdc_Char)0x46,  /* [3087] */
    (xdc_Char)0x61,  /* [3088] */
    (xdc_Char)0x69,  /* [3089] */
    (xdc_Char)0x6c,  /* [3090] */
    (xdc_Char)0x75,  /* [3091] */
    (xdc_Char)0x72,  /* [3092] */
    (xdc_Char)0x65,  /* [3093] */
    (xdc_Char)0x3a,  /* [3094] */
    (xdc_Char)0x20,  /* [3095] */
    (xdc_Char)0x55,  /* [3096] */
    (xdc_Char)0x6e,  /* [3097] */
    (xdc_Char)0x65,  /* [3098] */
    (xdc_Char)0x78,  /* [3099] */
    (xdc_Char)0x70,  /* [3100] */
    (xdc_Char)0x65,  /* [3101] */
    (xdc_Char)0x63,  /* [3102] */
    (xdc_Char)0x74,  /* [3103] */
    (xdc_Char)0x65,  /* [3104] */
    (xdc_Char)0x64,  /* [3105] */
    (xdc_Char)0x20,  /* [3106] */
    (xdc_Char)0x66,  /* [3107] */
    (xdc_Char)0x61,  /* [3108] */
    (xdc_Char)0x69,  /* [3109] */
    (xdc_Char)0x6c,  /* [3110] */
    (xdc_Char)0x75,  /* [3111] */
    (xdc_Char)0x72,  /* [3112] */
    (xdc_Char)0x65,  /* [3113] */
    (xdc_Char)0x20,  /* [3114] */
    (xdc_Char)0x77,  /* [3115] */
    (xdc_Char)0x69,  /* [3116] */
    (xdc_Char)0x74,  /* [3117] */
    (xdc_Char)0x68,  /* [3118] */
    (xdc_Char)0x20,  /* [3119] */
    (xdc_Char)0x74,  /* [3120] */
    (xdc_Char)0x68,  /* [3121] */
    (xdc_Char)0x65,  /* [3122] */
    (xdc_Char)0x20,  /* [3123] */
    (xdc_Char)0x49,  /* [3124] */
    (xdc_Char)0x70,  /* [3125] */
    (xdc_Char)0x63,  /* [3126] */
    (xdc_Char)0x4d,  /* [3127] */
    (xdc_Char)0x50,  /* [3128] */
    (xdc_Char)0x0,  /* [3129] */
    (xdc_Char)0x4c,  /* [3130] */
    (xdc_Char)0x6f,  /* [3131] */
    (xdc_Char)0x67,  /* [3132] */
    (xdc_Char)0x67,  /* [3133] */
    (xdc_Char)0x65,  /* [3134] */
    (xdc_Char)0x72,  /* [3135] */
    (xdc_Char)0x53,  /* [3136] */
    (xdc_Char)0x74,  /* [3137] */
    (xdc_Char)0x72,  /* [3138] */
    (xdc_Char)0x65,  /* [3139] */
    (xdc_Char)0x61,  /* [3140] */
    (xdc_Char)0x6d,  /* [3141] */
    (xdc_Char)0x65,  /* [3142] */
    (xdc_Char)0x72,  /* [3143] */
    (xdc_Char)0x32,  /* [3144] */
    (xdc_Char)0x5f,  /* [3145] */
    (xdc_Char)0x63,  /* [3146] */
    (xdc_Char)0x72,  /* [3147] */
    (xdc_Char)0x65,  /* [3148] */
    (xdc_Char)0x61,  /* [3149] */
    (xdc_Char)0x74,  /* [3150] */
    (xdc_Char)0x65,  /* [3151] */
    (xdc_Char)0x27,  /* [3152] */
    (xdc_Char)0x73,  /* [3153] */
    (xdc_Char)0x20,  /* [3154] */
    (xdc_Char)0x62,  /* [3155] */
    (xdc_Char)0x75,  /* [3156] */
    (xdc_Char)0x66,  /* [3157] */
    (xdc_Char)0x66,  /* [3158] */
    (xdc_Char)0x65,  /* [3159] */
    (xdc_Char)0x72,  /* [3160] */
    (xdc_Char)0x20,  /* [3161] */
    (xdc_Char)0x72,  /* [3162] */
    (xdc_Char)0x65,  /* [3163] */
    (xdc_Char)0x74,  /* [3164] */
    (xdc_Char)0x75,  /* [3165] */
    (xdc_Char)0x72,  /* [3166] */
    (xdc_Char)0x6e,  /* [3167] */
    (xdc_Char)0x65,  /* [3168] */
    (xdc_Char)0x64,  /* [3169] */
    (xdc_Char)0x20,  /* [3170] */
    (xdc_Char)0x62,  /* [3171] */
    (xdc_Char)0x79,  /* [3172] */
    (xdc_Char)0x20,  /* [3173] */
    (xdc_Char)0x70,  /* [3174] */
    (xdc_Char)0x72,  /* [3175] */
    (xdc_Char)0x69,  /* [3176] */
    (xdc_Char)0x6d,  /* [3177] */
    (xdc_Char)0x65,  /* [3178] */
    (xdc_Char)0x46,  /* [3179] */
    (xdc_Char)0x78,  /* [3180] */
    (xdc_Char)0x6e,  /* [3181] */
    (xdc_Char)0x20,  /* [3182] */
    (xdc_Char)0x69,  /* [3183] */
    (xdc_Char)0x73,  /* [3184] */
    (xdc_Char)0x20,  /* [3185] */
    (xdc_Char)0x4e,  /* [3186] */
    (xdc_Char)0x55,  /* [3187] */
    (xdc_Char)0x4c,  /* [3188] */
    (xdc_Char)0x4c,  /* [3189] */
    (xdc_Char)0x0,  /* [3190] */
    (xdc_Char)0x41,  /* [3191] */
    (xdc_Char)0x5f,  /* [3192] */
    (xdc_Char)0x75,  /* [3193] */
    (xdc_Char)0x6e,  /* [3194] */
    (xdc_Char)0x73,  /* [3195] */
    (xdc_Char)0x75,  /* [3196] */
    (xdc_Char)0x70,  /* [3197] */
    (xdc_Char)0x70,  /* [3198] */
    (xdc_Char)0x6f,  /* [3199] */
    (xdc_Char)0x72,  /* [3200] */
    (xdc_Char)0x74,  /* [3201] */
    (xdc_Char)0x65,  /* [3202] */
    (xdc_Char)0x64,  /* [3203] */
    (xdc_Char)0x4d,  /* [3204] */
    (xdc_Char)0x61,  /* [3205] */
    (xdc_Char)0x73,  /* [3206] */
    (xdc_Char)0x6b,  /* [3207] */
    (xdc_Char)0x69,  /* [3208] */
    (xdc_Char)0x6e,  /* [3209] */
    (xdc_Char)0x67,  /* [3210] */
    (xdc_Char)0x4f,  /* [3211] */
    (xdc_Char)0x70,  /* [3212] */
    (xdc_Char)0x74,  /* [3213] */
    (xdc_Char)0x69,  /* [3214] */
    (xdc_Char)0x6f,  /* [3215] */
    (xdc_Char)0x6e,  /* [3216] */
    (xdc_Char)0x3a,  /* [3217] */
    (xdc_Char)0x20,  /* [3218] */
    (xdc_Char)0x75,  /* [3219] */
    (xdc_Char)0x6e,  /* [3220] */
    (xdc_Char)0x73,  /* [3221] */
    (xdc_Char)0x75,  /* [3222] */
    (xdc_Char)0x70,  /* [3223] */
    (xdc_Char)0x70,  /* [3224] */
    (xdc_Char)0x6f,  /* [3225] */
    (xdc_Char)0x72,  /* [3226] */
    (xdc_Char)0x74,  /* [3227] */
    (xdc_Char)0x65,  /* [3228] */
    (xdc_Char)0x64,  /* [3229] */
    (xdc_Char)0x20,  /* [3230] */
    (xdc_Char)0x6d,  /* [3231] */
    (xdc_Char)0x61,  /* [3232] */
    (xdc_Char)0x73,  /* [3233] */
    (xdc_Char)0x6b,  /* [3234] */
    (xdc_Char)0x53,  /* [3235] */
    (xdc_Char)0x65,  /* [3236] */
    (xdc_Char)0x74,  /* [3237] */
    (xdc_Char)0x74,  /* [3238] */
    (xdc_Char)0x69,  /* [3239] */
    (xdc_Char)0x6e,  /* [3240] */
    (xdc_Char)0x67,  /* [3241] */
    (xdc_Char)0x2e,  /* [3242] */
    (xdc_Char)0x0,  /* [3243] */
    (xdc_Char)0x41,  /* [3244] */
    (xdc_Char)0x5f,  /* [3245] */
    (xdc_Char)0x62,  /* [3246] */
    (xdc_Char)0x61,  /* [3247] */
    (xdc_Char)0x64,  /* [3248] */
    (xdc_Char)0x43,  /* [3249] */
    (xdc_Char)0x6f,  /* [3250] */
    (xdc_Char)0x6e,  /* [3251] */
    (xdc_Char)0x74,  /* [3252] */
    (xdc_Char)0x65,  /* [3253] */
    (xdc_Char)0x78,  /* [3254] */
    (xdc_Char)0x74,  /* [3255] */
    (xdc_Char)0x3a,  /* [3256] */
    (xdc_Char)0x20,  /* [3257] */
    (xdc_Char)0x62,  /* [3258] */
    (xdc_Char)0x61,  /* [3259] */
    (xdc_Char)0x64,  /* [3260] */
    (xdc_Char)0x20,  /* [3261] */
    (xdc_Char)0x63,  /* [3262] */
    (xdc_Char)0x61,  /* [3263] */
    (xdc_Char)0x6c,  /* [3264] */
    (xdc_Char)0x6c,  /* [3265] */
    (xdc_Char)0x69,  /* [3266] */
    (xdc_Char)0x6e,  /* [3267] */
    (xdc_Char)0x67,  /* [3268] */
    (xdc_Char)0x20,  /* [3269] */
    (xdc_Char)0x63,  /* [3270] */
    (xdc_Char)0x6f,  /* [3271] */
    (xdc_Char)0x6e,  /* [3272] */
    (xdc_Char)0x74,  /* [3273] */
    (xdc_Char)0x65,  /* [3274] */
    (xdc_Char)0x78,  /* [3275] */
    (xdc_Char)0x74,  /* [3276] */
    (xdc_Char)0x2e,  /* [3277] */
    (xdc_Char)0x20,  /* [3278] */
    (xdc_Char)0x4d,  /* [3279] */
    (xdc_Char)0x61,  /* [3280] */
    (xdc_Char)0x79,  /* [3281] */
    (xdc_Char)0x20,  /* [3282] */
    (xdc_Char)0x6e,  /* [3283] */
    (xdc_Char)0x6f,  /* [3284] */
    (xdc_Char)0x74,  /* [3285] */
    (xdc_Char)0x20,  /* [3286] */
    (xdc_Char)0x62,  /* [3287] */
    (xdc_Char)0x65,  /* [3288] */
    (xdc_Char)0x20,  /* [3289] */
    (xdc_Char)0x65,  /* [3290] */
    (xdc_Char)0x6e,  /* [3291] */
    (xdc_Char)0x74,  /* [3292] */
    (xdc_Char)0x65,  /* [3293] */
    (xdc_Char)0x72,  /* [3294] */
    (xdc_Char)0x65,  /* [3295] */
    (xdc_Char)0x64,  /* [3296] */
    (xdc_Char)0x20,  /* [3297] */
    (xdc_Char)0x66,  /* [3298] */
    (xdc_Char)0x72,  /* [3299] */
    (xdc_Char)0x6f,  /* [3300] */
    (xdc_Char)0x6d,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x61,  /* [3303] */
    (xdc_Char)0x20,  /* [3304] */
    (xdc_Char)0x68,  /* [3305] */
    (xdc_Char)0x61,  /* [3306] */
    (xdc_Char)0x72,  /* [3307] */
    (xdc_Char)0x64,  /* [3308] */
    (xdc_Char)0x77,  /* [3309] */
    (xdc_Char)0x61,  /* [3310] */
    (xdc_Char)0x72,  /* [3311] */
    (xdc_Char)0x65,  /* [3312] */
    (xdc_Char)0x20,  /* [3313] */
    (xdc_Char)0x69,  /* [3314] */
    (xdc_Char)0x6e,  /* [3315] */
    (xdc_Char)0x74,  /* [3316] */
    (xdc_Char)0x65,  /* [3317] */
    (xdc_Char)0x72,  /* [3318] */
    (xdc_Char)0x72,  /* [3319] */
    (xdc_Char)0x75,  /* [3320] */
    (xdc_Char)0x70,  /* [3321] */
    (xdc_Char)0x74,  /* [3322] */
    (xdc_Char)0x20,  /* [3323] */
    (xdc_Char)0x74,  /* [3324] */
    (xdc_Char)0x68,  /* [3325] */
    (xdc_Char)0x72,  /* [3326] */
    (xdc_Char)0x65,  /* [3327] */
    (xdc_Char)0x61,  /* [3328] */
    (xdc_Char)0x64,  /* [3329] */
    (xdc_Char)0x2e,  /* [3330] */
    (xdc_Char)0x0,  /* [3331] */
    (xdc_Char)0x41,  /* [3332] */
    (xdc_Char)0x5f,  /* [3333] */
    (xdc_Char)0x62,  /* [3334] */
    (xdc_Char)0x61,  /* [3335] */
    (xdc_Char)0x64,  /* [3336] */
    (xdc_Char)0x43,  /* [3337] */
    (xdc_Char)0x6f,  /* [3338] */
    (xdc_Char)0x6e,  /* [3339] */
    (xdc_Char)0x74,  /* [3340] */
    (xdc_Char)0x65,  /* [3341] */
    (xdc_Char)0x78,  /* [3342] */
    (xdc_Char)0x74,  /* [3343] */
    (xdc_Char)0x3a,  /* [3344] */
    (xdc_Char)0x20,  /* [3345] */
    (xdc_Char)0x62,  /* [3346] */
    (xdc_Char)0x61,  /* [3347] */
    (xdc_Char)0x64,  /* [3348] */
    (xdc_Char)0x20,  /* [3349] */
    (xdc_Char)0x63,  /* [3350] */
    (xdc_Char)0x61,  /* [3351] */
    (xdc_Char)0x6c,  /* [3352] */
    (xdc_Char)0x6c,  /* [3353] */
    (xdc_Char)0x69,  /* [3354] */
    (xdc_Char)0x6e,  /* [3355] */
    (xdc_Char)0x67,  /* [3356] */
    (xdc_Char)0x20,  /* [3357] */
    (xdc_Char)0x63,  /* [3358] */
    (xdc_Char)0x6f,  /* [3359] */
    (xdc_Char)0x6e,  /* [3360] */
    (xdc_Char)0x74,  /* [3361] */
    (xdc_Char)0x65,  /* [3362] */
    (xdc_Char)0x78,  /* [3363] */
    (xdc_Char)0x74,  /* [3364] */
    (xdc_Char)0x2e,  /* [3365] */
    (xdc_Char)0x20,  /* [3366] */
    (xdc_Char)0x4d,  /* [3367] */
    (xdc_Char)0x61,  /* [3368] */
    (xdc_Char)0x79,  /* [3369] */
    (xdc_Char)0x20,  /* [3370] */
    (xdc_Char)0x6e,  /* [3371] */
    (xdc_Char)0x6f,  /* [3372] */
    (xdc_Char)0x74,  /* [3373] */
    (xdc_Char)0x20,  /* [3374] */
    (xdc_Char)0x62,  /* [3375] */
    (xdc_Char)0x65,  /* [3376] */
    (xdc_Char)0x20,  /* [3377] */
    (xdc_Char)0x65,  /* [3378] */
    (xdc_Char)0x6e,  /* [3379] */
    (xdc_Char)0x74,  /* [3380] */
    (xdc_Char)0x65,  /* [3381] */
    (xdc_Char)0x72,  /* [3382] */
    (xdc_Char)0x65,  /* [3383] */
    (xdc_Char)0x64,  /* [3384] */
    (xdc_Char)0x20,  /* [3385] */
    (xdc_Char)0x66,  /* [3386] */
    (xdc_Char)0x72,  /* [3387] */
    (xdc_Char)0x6f,  /* [3388] */
    (xdc_Char)0x6d,  /* [3389] */
    (xdc_Char)0x20,  /* [3390] */
    (xdc_Char)0x61,  /* [3391] */
    (xdc_Char)0x20,  /* [3392] */
    (xdc_Char)0x73,  /* [3393] */
    (xdc_Char)0x6f,  /* [3394] */
    (xdc_Char)0x66,  /* [3395] */
    (xdc_Char)0x74,  /* [3396] */
    (xdc_Char)0x77,  /* [3397] */
    (xdc_Char)0x61,  /* [3398] */
    (xdc_Char)0x72,  /* [3399] */
    (xdc_Char)0x65,  /* [3400] */
    (xdc_Char)0x20,  /* [3401] */
    (xdc_Char)0x6f,  /* [3402] */
    (xdc_Char)0x72,  /* [3403] */
    (xdc_Char)0x20,  /* [3404] */
    (xdc_Char)0x68,  /* [3405] */
    (xdc_Char)0x61,  /* [3406] */
    (xdc_Char)0x72,  /* [3407] */
    (xdc_Char)0x64,  /* [3408] */
    (xdc_Char)0x77,  /* [3409] */
    (xdc_Char)0x61,  /* [3410] */
    (xdc_Char)0x72,  /* [3411] */
    (xdc_Char)0x65,  /* [3412] */
    (xdc_Char)0x20,  /* [3413] */
    (xdc_Char)0x69,  /* [3414] */
    (xdc_Char)0x6e,  /* [3415] */
    (xdc_Char)0x74,  /* [3416] */
    (xdc_Char)0x65,  /* [3417] */
    (xdc_Char)0x72,  /* [3418] */
    (xdc_Char)0x72,  /* [3419] */
    (xdc_Char)0x75,  /* [3420] */
    (xdc_Char)0x70,  /* [3421] */
    (xdc_Char)0x74,  /* [3422] */
    (xdc_Char)0x20,  /* [3423] */
    (xdc_Char)0x74,  /* [3424] */
    (xdc_Char)0x68,  /* [3425] */
    (xdc_Char)0x72,  /* [3426] */
    (xdc_Char)0x65,  /* [3427] */
    (xdc_Char)0x61,  /* [3428] */
    (xdc_Char)0x64,  /* [3429] */
    (xdc_Char)0x2e,  /* [3430] */
    (xdc_Char)0x0,  /* [3431] */
    (xdc_Char)0x41,  /* [3432] */
    (xdc_Char)0x5f,  /* [3433] */
    (xdc_Char)0x62,  /* [3434] */
    (xdc_Char)0x61,  /* [3435] */
    (xdc_Char)0x64,  /* [3436] */
    (xdc_Char)0x43,  /* [3437] */
    (xdc_Char)0x6f,  /* [3438] */
    (xdc_Char)0x6e,  /* [3439] */
    (xdc_Char)0x74,  /* [3440] */
    (xdc_Char)0x65,  /* [3441] */
    (xdc_Char)0x78,  /* [3442] */
    (xdc_Char)0x74,  /* [3443] */
    (xdc_Char)0x3a,  /* [3444] */
    (xdc_Char)0x20,  /* [3445] */
    (xdc_Char)0x62,  /* [3446] */
    (xdc_Char)0x61,  /* [3447] */
    (xdc_Char)0x64,  /* [3448] */
    (xdc_Char)0x20,  /* [3449] */
    (xdc_Char)0x63,  /* [3450] */
    (xdc_Char)0x61,  /* [3451] */
    (xdc_Char)0x6c,  /* [3452] */
    (xdc_Char)0x6c,  /* [3453] */
    (xdc_Char)0x69,  /* [3454] */
    (xdc_Char)0x6e,  /* [3455] */
    (xdc_Char)0x67,  /* [3456] */
    (xdc_Char)0x20,  /* [3457] */
    (xdc_Char)0x63,  /* [3458] */
    (xdc_Char)0x6f,  /* [3459] */
    (xdc_Char)0x6e,  /* [3460] */
    (xdc_Char)0x74,  /* [3461] */
    (xdc_Char)0x65,  /* [3462] */
    (xdc_Char)0x78,  /* [3463] */
    (xdc_Char)0x74,  /* [3464] */
    (xdc_Char)0x2e,  /* [3465] */
    (xdc_Char)0x20,  /* [3466] */
    (xdc_Char)0x53,  /* [3467] */
    (xdc_Char)0x65,  /* [3468] */
    (xdc_Char)0x65,  /* [3469] */
    (xdc_Char)0x20,  /* [3470] */
    (xdc_Char)0x47,  /* [3471] */
    (xdc_Char)0x61,  /* [3472] */
    (xdc_Char)0x74,  /* [3473] */
    (xdc_Char)0x65,  /* [3474] */
    (xdc_Char)0x4d,  /* [3475] */
    (xdc_Char)0x75,  /* [3476] */
    (xdc_Char)0x74,  /* [3477] */
    (xdc_Char)0x65,  /* [3478] */
    (xdc_Char)0x78,  /* [3479] */
    (xdc_Char)0x50,  /* [3480] */
    (xdc_Char)0x72,  /* [3481] */
    (xdc_Char)0x69,  /* [3482] */
    (xdc_Char)0x20,  /* [3483] */
    (xdc_Char)0x41,  /* [3484] */
    (xdc_Char)0x50,  /* [3485] */
    (xdc_Char)0x49,  /* [3486] */
    (xdc_Char)0x20,  /* [3487] */
    (xdc_Char)0x64,  /* [3488] */
    (xdc_Char)0x6f,  /* [3489] */
    (xdc_Char)0x63,  /* [3490] */
    (xdc_Char)0x20,  /* [3491] */
    (xdc_Char)0x66,  /* [3492] */
    (xdc_Char)0x6f,  /* [3493] */
    (xdc_Char)0x72,  /* [3494] */
    (xdc_Char)0x20,  /* [3495] */
    (xdc_Char)0x64,  /* [3496] */
    (xdc_Char)0x65,  /* [3497] */
    (xdc_Char)0x74,  /* [3498] */
    (xdc_Char)0x61,  /* [3499] */
    (xdc_Char)0x69,  /* [3500] */
    (xdc_Char)0x6c,  /* [3501] */
    (xdc_Char)0x73,  /* [3502] */
    (xdc_Char)0x2e,  /* [3503] */
    (xdc_Char)0x0,  /* [3504] */
    (xdc_Char)0x41,  /* [3505] */
    (xdc_Char)0x5f,  /* [3506] */
    (xdc_Char)0x65,  /* [3507] */
    (xdc_Char)0x6e,  /* [3508] */
    (xdc_Char)0x74,  /* [3509] */
    (xdc_Char)0x65,  /* [3510] */
    (xdc_Char)0x72,  /* [3511] */
    (xdc_Char)0x54,  /* [3512] */
    (xdc_Char)0x61,  /* [3513] */
    (xdc_Char)0x73,  /* [3514] */
    (xdc_Char)0x6b,  /* [3515] */
    (xdc_Char)0x44,  /* [3516] */
    (xdc_Char)0x69,  /* [3517] */
    (xdc_Char)0x73,  /* [3518] */
    (xdc_Char)0x61,  /* [3519] */
    (xdc_Char)0x62,  /* [3520] */
    (xdc_Char)0x6c,  /* [3521] */
    (xdc_Char)0x65,  /* [3522] */
    (xdc_Char)0x64,  /* [3523] */
    (xdc_Char)0x3a,  /* [3524] */
    (xdc_Char)0x20,  /* [3525] */
    (xdc_Char)0x43,  /* [3526] */
    (xdc_Char)0x61,  /* [3527] */
    (xdc_Char)0x6e,  /* [3528] */
    (xdc_Char)0x6e,  /* [3529] */
    (xdc_Char)0x6f,  /* [3530] */
    (xdc_Char)0x74,  /* [3531] */
    (xdc_Char)0x20,  /* [3532] */
    (xdc_Char)0x63,  /* [3533] */
    (xdc_Char)0x61,  /* [3534] */
    (xdc_Char)0x6c,  /* [3535] */
    (xdc_Char)0x6c,  /* [3536] */
    (xdc_Char)0x20,  /* [3537] */
    (xdc_Char)0x47,  /* [3538] */
    (xdc_Char)0x61,  /* [3539] */
    (xdc_Char)0x74,  /* [3540] */
    (xdc_Char)0x65,  /* [3541] */
    (xdc_Char)0x4d,  /* [3542] */
    (xdc_Char)0x75,  /* [3543] */
    (xdc_Char)0x74,  /* [3544] */
    (xdc_Char)0x65,  /* [3545] */
    (xdc_Char)0x78,  /* [3546] */
    (xdc_Char)0x50,  /* [3547] */
    (xdc_Char)0x72,  /* [3548] */
    (xdc_Char)0x69,  /* [3549] */
    (xdc_Char)0x5f,  /* [3550] */
    (xdc_Char)0x65,  /* [3551] */
    (xdc_Char)0x6e,  /* [3552] */
    (xdc_Char)0x74,  /* [3553] */
    (xdc_Char)0x65,  /* [3554] */
    (xdc_Char)0x72,  /* [3555] */
    (xdc_Char)0x28,  /* [3556] */
    (xdc_Char)0x29,  /* [3557] */
    (xdc_Char)0x20,  /* [3558] */
    (xdc_Char)0x77,  /* [3559] */
    (xdc_Char)0x68,  /* [3560] */
    (xdc_Char)0x69,  /* [3561] */
    (xdc_Char)0x6c,  /* [3562] */
    (xdc_Char)0x65,  /* [3563] */
    (xdc_Char)0x20,  /* [3564] */
    (xdc_Char)0x74,  /* [3565] */
    (xdc_Char)0x68,  /* [3566] */
    (xdc_Char)0x65,  /* [3567] */
    (xdc_Char)0x20,  /* [3568] */
    (xdc_Char)0x54,  /* [3569] */
    (xdc_Char)0x61,  /* [3570] */
    (xdc_Char)0x73,  /* [3571] */
    (xdc_Char)0x6b,  /* [3572] */
    (xdc_Char)0x20,  /* [3573] */
    (xdc_Char)0x6f,  /* [3574] */
    (xdc_Char)0x72,  /* [3575] */
    (xdc_Char)0x20,  /* [3576] */
    (xdc_Char)0x53,  /* [3577] */
    (xdc_Char)0x77,  /* [3578] */
    (xdc_Char)0x69,  /* [3579] */
    (xdc_Char)0x20,  /* [3580] */
    (xdc_Char)0x73,  /* [3581] */
    (xdc_Char)0x63,  /* [3582] */
    (xdc_Char)0x68,  /* [3583] */
    (xdc_Char)0x65,  /* [3584] */
    (xdc_Char)0x64,  /* [3585] */
    (xdc_Char)0x75,  /* [3586] */
    (xdc_Char)0x6c,  /* [3587] */
    (xdc_Char)0x65,  /* [3588] */
    (xdc_Char)0x72,  /* [3589] */
    (xdc_Char)0x20,  /* [3590] */
    (xdc_Char)0x69,  /* [3591] */
    (xdc_Char)0x73,  /* [3592] */
    (xdc_Char)0x20,  /* [3593] */
    (xdc_Char)0x64,  /* [3594] */
    (xdc_Char)0x69,  /* [3595] */
    (xdc_Char)0x73,  /* [3596] */
    (xdc_Char)0x61,  /* [3597] */
    (xdc_Char)0x62,  /* [3598] */
    (xdc_Char)0x6c,  /* [3599] */
    (xdc_Char)0x65,  /* [3600] */
    (xdc_Char)0x64,  /* [3601] */
    (xdc_Char)0x2e,  /* [3602] */
    (xdc_Char)0x0,  /* [3603] */
    (xdc_Char)0x41,  /* [3604] */
    (xdc_Char)0x5f,  /* [3605] */
    (xdc_Char)0x62,  /* [3606] */
    (xdc_Char)0x61,  /* [3607] */
    (xdc_Char)0x64,  /* [3608] */
    (xdc_Char)0x43,  /* [3609] */
    (xdc_Char)0x6f,  /* [3610] */
    (xdc_Char)0x6e,  /* [3611] */
    (xdc_Char)0x74,  /* [3612] */
    (xdc_Char)0x65,  /* [3613] */
    (xdc_Char)0x78,  /* [3614] */
    (xdc_Char)0x74,  /* [3615] */
    (xdc_Char)0x3a,  /* [3616] */
    (xdc_Char)0x20,  /* [3617] */
    (xdc_Char)0x62,  /* [3618] */
    (xdc_Char)0x61,  /* [3619] */
    (xdc_Char)0x64,  /* [3620] */
    (xdc_Char)0x20,  /* [3621] */
    (xdc_Char)0x63,  /* [3622] */
    (xdc_Char)0x61,  /* [3623] */
    (xdc_Char)0x6c,  /* [3624] */
    (xdc_Char)0x6c,  /* [3625] */
    (xdc_Char)0x69,  /* [3626] */
    (xdc_Char)0x6e,  /* [3627] */
    (xdc_Char)0x67,  /* [3628] */
    (xdc_Char)0x20,  /* [3629] */
    (xdc_Char)0x63,  /* [3630] */
    (xdc_Char)0x6f,  /* [3631] */
    (xdc_Char)0x6e,  /* [3632] */
    (xdc_Char)0x74,  /* [3633] */
    (xdc_Char)0x65,  /* [3634] */
    (xdc_Char)0x78,  /* [3635] */
    (xdc_Char)0x74,  /* [3636] */
    (xdc_Char)0x2e,  /* [3637] */
    (xdc_Char)0x20,  /* [3638] */
    (xdc_Char)0x53,  /* [3639] */
    (xdc_Char)0x65,  /* [3640] */
    (xdc_Char)0x65,  /* [3641] */
    (xdc_Char)0x20,  /* [3642] */
    (xdc_Char)0x47,  /* [3643] */
    (xdc_Char)0x61,  /* [3644] */
    (xdc_Char)0x74,  /* [3645] */
    (xdc_Char)0x65,  /* [3646] */
    (xdc_Char)0x4d,  /* [3647] */
    (xdc_Char)0x75,  /* [3648] */
    (xdc_Char)0x74,  /* [3649] */
    (xdc_Char)0x65,  /* [3650] */
    (xdc_Char)0x78,  /* [3651] */
    (xdc_Char)0x20,  /* [3652] */
    (xdc_Char)0x41,  /* [3653] */
    (xdc_Char)0x50,  /* [3654] */
    (xdc_Char)0x49,  /* [3655] */
    (xdc_Char)0x20,  /* [3656] */
    (xdc_Char)0x64,  /* [3657] */
    (xdc_Char)0x6f,  /* [3658] */
    (xdc_Char)0x63,  /* [3659] */
    (xdc_Char)0x20,  /* [3660] */
    (xdc_Char)0x66,  /* [3661] */
    (xdc_Char)0x6f,  /* [3662] */
    (xdc_Char)0x72,  /* [3663] */
    (xdc_Char)0x20,  /* [3664] */
    (xdc_Char)0x64,  /* [3665] */
    (xdc_Char)0x65,  /* [3666] */
    (xdc_Char)0x74,  /* [3667] */
    (xdc_Char)0x61,  /* [3668] */
    (xdc_Char)0x69,  /* [3669] */
    (xdc_Char)0x6c,  /* [3670] */
    (xdc_Char)0x73,  /* [3671] */
    (xdc_Char)0x2e,  /* [3672] */
    (xdc_Char)0x0,  /* [3673] */
    (xdc_Char)0x41,  /* [3674] */
    (xdc_Char)0x5f,  /* [3675] */
    (xdc_Char)0x62,  /* [3676] */
    (xdc_Char)0x61,  /* [3677] */
    (xdc_Char)0x64,  /* [3678] */
    (xdc_Char)0x43,  /* [3679] */
    (xdc_Char)0x6f,  /* [3680] */
    (xdc_Char)0x6e,  /* [3681] */
    (xdc_Char)0x74,  /* [3682] */
    (xdc_Char)0x65,  /* [3683] */
    (xdc_Char)0x78,  /* [3684] */
    (xdc_Char)0x74,  /* [3685] */
    (xdc_Char)0x3a,  /* [3686] */
    (xdc_Char)0x20,  /* [3687] */
    (xdc_Char)0x62,  /* [3688] */
    (xdc_Char)0x61,  /* [3689] */
    (xdc_Char)0x64,  /* [3690] */
    (xdc_Char)0x20,  /* [3691] */
    (xdc_Char)0x63,  /* [3692] */
    (xdc_Char)0x61,  /* [3693] */
    (xdc_Char)0x6c,  /* [3694] */
    (xdc_Char)0x6c,  /* [3695] */
    (xdc_Char)0x69,  /* [3696] */
    (xdc_Char)0x6e,  /* [3697] */
    (xdc_Char)0x67,  /* [3698] */
    (xdc_Char)0x20,  /* [3699] */
    (xdc_Char)0x63,  /* [3700] */
    (xdc_Char)0x6f,  /* [3701] */
    (xdc_Char)0x6e,  /* [3702] */
    (xdc_Char)0x74,  /* [3703] */
    (xdc_Char)0x65,  /* [3704] */
    (xdc_Char)0x78,  /* [3705] */
    (xdc_Char)0x74,  /* [3706] */
    (xdc_Char)0x2e,  /* [3707] */
    (xdc_Char)0x20,  /* [3708] */
    (xdc_Char)0x53,  /* [3709] */
    (xdc_Char)0x65,  /* [3710] */
    (xdc_Char)0x65,  /* [3711] */
    (xdc_Char)0x20,  /* [3712] */
    (xdc_Char)0x47,  /* [3713] */
    (xdc_Char)0x61,  /* [3714] */
    (xdc_Char)0x74,  /* [3715] */
    (xdc_Char)0x65,  /* [3716] */
    (xdc_Char)0x53,  /* [3717] */
    (xdc_Char)0x70,  /* [3718] */
    (xdc_Char)0x69,  /* [3719] */
    (xdc_Char)0x6e,  /* [3720] */
    (xdc_Char)0x6c,  /* [3721] */
    (xdc_Char)0x6f,  /* [3722] */
    (xdc_Char)0x63,  /* [3723] */
    (xdc_Char)0x6b,  /* [3724] */
    (xdc_Char)0x20,  /* [3725] */
    (xdc_Char)0x41,  /* [3726] */
    (xdc_Char)0x50,  /* [3727] */
    (xdc_Char)0x49,  /* [3728] */
    (xdc_Char)0x20,  /* [3729] */
    (xdc_Char)0x64,  /* [3730] */
    (xdc_Char)0x6f,  /* [3731] */
    (xdc_Char)0x63,  /* [3732] */
    (xdc_Char)0x20,  /* [3733] */
    (xdc_Char)0x66,  /* [3734] */
    (xdc_Char)0x6f,  /* [3735] */
    (xdc_Char)0x72,  /* [3736] */
    (xdc_Char)0x20,  /* [3737] */
    (xdc_Char)0x64,  /* [3738] */
    (xdc_Char)0x65,  /* [3739] */
    (xdc_Char)0x74,  /* [3740] */
    (xdc_Char)0x61,  /* [3741] */
    (xdc_Char)0x69,  /* [3742] */
    (xdc_Char)0x6c,  /* [3743] */
    (xdc_Char)0x73,  /* [3744] */
    (xdc_Char)0x2e,  /* [3745] */
    (xdc_Char)0x0,  /* [3746] */
    (xdc_Char)0x41,  /* [3747] */
    (xdc_Char)0x5f,  /* [3748] */
    (xdc_Char)0x69,  /* [3749] */
    (xdc_Char)0x6e,  /* [3750] */
    (xdc_Char)0x76,  /* [3751] */
    (xdc_Char)0x61,  /* [3752] */
    (xdc_Char)0x6c,  /* [3753] */
    (xdc_Char)0x69,  /* [3754] */
    (xdc_Char)0x64,  /* [3755] */
    (xdc_Char)0x51,  /* [3756] */
    (xdc_Char)0x75,  /* [3757] */
    (xdc_Char)0x61,  /* [3758] */
    (xdc_Char)0x6c,  /* [3759] */
    (xdc_Char)0x69,  /* [3760] */
    (xdc_Char)0x74,  /* [3761] */
    (xdc_Char)0x79,  /* [3762] */
    (xdc_Char)0x3a,  /* [3763] */
    (xdc_Char)0x20,  /* [3764] */
    (xdc_Char)0x53,  /* [3765] */
    (xdc_Char)0x65,  /* [3766] */
    (xdc_Char)0x65,  /* [3767] */
    (xdc_Char)0x20,  /* [3768] */
    (xdc_Char)0x47,  /* [3769] */
    (xdc_Char)0x61,  /* [3770] */
    (xdc_Char)0x74,  /* [3771] */
    (xdc_Char)0x65,  /* [3772] */
    (xdc_Char)0x53,  /* [3773] */
    (xdc_Char)0x70,  /* [3774] */
    (xdc_Char)0x69,  /* [3775] */
    (xdc_Char)0x6e,  /* [3776] */
    (xdc_Char)0x6c,  /* [3777] */
    (xdc_Char)0x6f,  /* [3778] */
    (xdc_Char)0x63,  /* [3779] */
    (xdc_Char)0x6b,  /* [3780] */
    (xdc_Char)0x20,  /* [3781] */
    (xdc_Char)0x41,  /* [3782] */
    (xdc_Char)0x50,  /* [3783] */
    (xdc_Char)0x49,  /* [3784] */
    (xdc_Char)0x20,  /* [3785] */
    (xdc_Char)0x64,  /* [3786] */
    (xdc_Char)0x6f,  /* [3787] */
    (xdc_Char)0x63,  /* [3788] */
    (xdc_Char)0x20,  /* [3789] */
    (xdc_Char)0x66,  /* [3790] */
    (xdc_Char)0x6f,  /* [3791] */
    (xdc_Char)0x72,  /* [3792] */
    (xdc_Char)0x20,  /* [3793] */
    (xdc_Char)0x64,  /* [3794] */
    (xdc_Char)0x65,  /* [3795] */
    (xdc_Char)0x74,  /* [3796] */
    (xdc_Char)0x61,  /* [3797] */
    (xdc_Char)0x69,  /* [3798] */
    (xdc_Char)0x6c,  /* [3799] */
    (xdc_Char)0x73,  /* [3800] */
    (xdc_Char)0x2e,  /* [3801] */
    (xdc_Char)0x0,  /* [3802] */
    (xdc_Char)0x61,  /* [3803] */
    (xdc_Char)0x73,  /* [3804] */
    (xdc_Char)0x73,  /* [3805] */
    (xdc_Char)0x65,  /* [3806] */
    (xdc_Char)0x72,  /* [3807] */
    (xdc_Char)0x74,  /* [3808] */
    (xdc_Char)0x69,  /* [3809] */
    (xdc_Char)0x6f,  /* [3810] */
    (xdc_Char)0x6e,  /* [3811] */
    (xdc_Char)0x20,  /* [3812] */
    (xdc_Char)0x66,  /* [3813] */
    (xdc_Char)0x61,  /* [3814] */
    (xdc_Char)0x69,  /* [3815] */
    (xdc_Char)0x6c,  /* [3816] */
    (xdc_Char)0x75,  /* [3817] */
    (xdc_Char)0x72,  /* [3818] */
    (xdc_Char)0x65,  /* [3819] */
    (xdc_Char)0x25,  /* [3820] */
    (xdc_Char)0x73,  /* [3821] */
    (xdc_Char)0x25,  /* [3822] */
    (xdc_Char)0x73,  /* [3823] */
    (xdc_Char)0x0,  /* [3824] */
    (xdc_Char)0x25,  /* [3825] */
    (xdc_Char)0x24,  /* [3826] */
    (xdc_Char)0x53,  /* [3827] */
    (xdc_Char)0x0,  /* [3828] */
    (xdc_Char)0x6f,  /* [3829] */
    (xdc_Char)0x75,  /* [3830] */
    (xdc_Char)0x74,  /* [3831] */
    (xdc_Char)0x20,  /* [3832] */
    (xdc_Char)0x6f,  /* [3833] */
    (xdc_Char)0x66,  /* [3834] */
    (xdc_Char)0x20,  /* [3835] */
    (xdc_Char)0x6d,  /* [3836] */
    (xdc_Char)0x65,  /* [3837] */
    (xdc_Char)0x6d,  /* [3838] */
    (xdc_Char)0x6f,  /* [3839] */
    (xdc_Char)0x72,  /* [3840] */
    (xdc_Char)0x79,  /* [3841] */
    (xdc_Char)0x3a,  /* [3842] */
    (xdc_Char)0x20,  /* [3843] */
    (xdc_Char)0x68,  /* [3844] */
    (xdc_Char)0x65,  /* [3845] */
    (xdc_Char)0x61,  /* [3846] */
    (xdc_Char)0x70,  /* [3847] */
    (xdc_Char)0x3d,  /* [3848] */
    (xdc_Char)0x30,  /* [3849] */
    (xdc_Char)0x78,  /* [3850] */
    (xdc_Char)0x25,  /* [3851] */
    (xdc_Char)0x78,  /* [3852] */
    (xdc_Char)0x2c,  /* [3853] */
    (xdc_Char)0x20,  /* [3854] */
    (xdc_Char)0x73,  /* [3855] */
    (xdc_Char)0x69,  /* [3856] */
    (xdc_Char)0x7a,  /* [3857] */
    (xdc_Char)0x65,  /* [3858] */
    (xdc_Char)0x3d,  /* [3859] */
    (xdc_Char)0x25,  /* [3860] */
    (xdc_Char)0x75,  /* [3861] */
    (xdc_Char)0x0,  /* [3862] */
    (xdc_Char)0x25,  /* [3863] */
    (xdc_Char)0x73,  /* [3864] */
    (xdc_Char)0x20,  /* [3865] */
    (xdc_Char)0x30,  /* [3866] */
    (xdc_Char)0x78,  /* [3867] */
    (xdc_Char)0x25,  /* [3868] */
    (xdc_Char)0x78,  /* [3869] */
    (xdc_Char)0x0,  /* [3870] */
    (xdc_Char)0x45,  /* [3871] */
    (xdc_Char)0x5f,  /* [3872] */
    (xdc_Char)0x62,  /* [3873] */
    (xdc_Char)0x61,  /* [3874] */
    (xdc_Char)0x64,  /* [3875] */
    (xdc_Char)0x4c,  /* [3876] */
    (xdc_Char)0x65,  /* [3877] */
    (xdc_Char)0x76,  /* [3878] */
    (xdc_Char)0x65,  /* [3879] */
    (xdc_Char)0x6c,  /* [3880] */
    (xdc_Char)0x3a,  /* [3881] */
    (xdc_Char)0x20,  /* [3882] */
    (xdc_Char)0x42,  /* [3883] */
    (xdc_Char)0x61,  /* [3884] */
    (xdc_Char)0x64,  /* [3885] */
    (xdc_Char)0x20,  /* [3886] */
    (xdc_Char)0x66,  /* [3887] */
    (xdc_Char)0x69,  /* [3888] */
    (xdc_Char)0x6c,  /* [3889] */
    (xdc_Char)0x74,  /* [3890] */
    (xdc_Char)0x65,  /* [3891] */
    (xdc_Char)0x72,  /* [3892] */
    (xdc_Char)0x20,  /* [3893] */
    (xdc_Char)0x6c,  /* [3894] */
    (xdc_Char)0x65,  /* [3895] */
    (xdc_Char)0x76,  /* [3896] */
    (xdc_Char)0x65,  /* [3897] */
    (xdc_Char)0x6c,  /* [3898] */
    (xdc_Char)0x20,  /* [3899] */
    (xdc_Char)0x76,  /* [3900] */
    (xdc_Char)0x61,  /* [3901] */
    (xdc_Char)0x6c,  /* [3902] */
    (xdc_Char)0x75,  /* [3903] */
    (xdc_Char)0x65,  /* [3904] */
    (xdc_Char)0x3a,  /* [3905] */
    (xdc_Char)0x20,  /* [3906] */
    (xdc_Char)0x25,  /* [3907] */
    (xdc_Char)0x64,  /* [3908] */
    (xdc_Char)0x0,  /* [3909] */
    (xdc_Char)0x66,  /* [3910] */
    (xdc_Char)0x72,  /* [3911] */
    (xdc_Char)0x65,  /* [3912] */
    (xdc_Char)0x65,  /* [3913] */
    (xdc_Char)0x28,  /* [3914] */
    (xdc_Char)0x29,  /* [3915] */
    (xdc_Char)0x20,  /* [3916] */
    (xdc_Char)0x69,  /* [3917] */
    (xdc_Char)0x6e,  /* [3918] */
    (xdc_Char)0x76,  /* [3919] */
    (xdc_Char)0x61,  /* [3920] */
    (xdc_Char)0x6c,  /* [3921] */
    (xdc_Char)0x69,  /* [3922] */
    (xdc_Char)0x64,  /* [3923] */
    (xdc_Char)0x20,  /* [3924] */
    (xdc_Char)0x69,  /* [3925] */
    (xdc_Char)0x6e,  /* [3926] */
    (xdc_Char)0x20,  /* [3927] */
    (xdc_Char)0x67,  /* [3928] */
    (xdc_Char)0x72,  /* [3929] */
    (xdc_Char)0x6f,  /* [3930] */
    (xdc_Char)0x77,  /* [3931] */
    (xdc_Char)0x74,  /* [3932] */
    (xdc_Char)0x68,  /* [3933] */
    (xdc_Char)0x2d,  /* [3934] */
    (xdc_Char)0x6f,  /* [3935] */
    (xdc_Char)0x6e,  /* [3936] */
    (xdc_Char)0x6c,  /* [3937] */
    (xdc_Char)0x79,  /* [3938] */
    (xdc_Char)0x20,  /* [3939] */
    (xdc_Char)0x48,  /* [3940] */
    (xdc_Char)0x65,  /* [3941] */
    (xdc_Char)0x61,  /* [3942] */
    (xdc_Char)0x70,  /* [3943] */
    (xdc_Char)0x4d,  /* [3944] */
    (xdc_Char)0x69,  /* [3945] */
    (xdc_Char)0x6e,  /* [3946] */
    (xdc_Char)0x0,  /* [3947] */
    (xdc_Char)0x54,  /* [3948] */
    (xdc_Char)0x68,  /* [3949] */
    (xdc_Char)0x65,  /* [3950] */
    (xdc_Char)0x20,  /* [3951] */
    (xdc_Char)0x52,  /* [3952] */
    (xdc_Char)0x54,  /* [3953] */
    (xdc_Char)0x53,  /* [3954] */
    (xdc_Char)0x20,  /* [3955] */
    (xdc_Char)0x68,  /* [3956] */
    (xdc_Char)0x65,  /* [3957] */
    (xdc_Char)0x61,  /* [3958] */
    (xdc_Char)0x70,  /* [3959] */
    (xdc_Char)0x20,  /* [3960] */
    (xdc_Char)0x69,  /* [3961] */
    (xdc_Char)0x73,  /* [3962] */
    (xdc_Char)0x20,  /* [3963] */
    (xdc_Char)0x75,  /* [3964] */
    (xdc_Char)0x73,  /* [3965] */
    (xdc_Char)0x65,  /* [3966] */
    (xdc_Char)0x64,  /* [3967] */
    (xdc_Char)0x20,  /* [3968] */
    (xdc_Char)0x75,  /* [3969] */
    (xdc_Char)0x70,  /* [3970] */
    (xdc_Char)0x2e,  /* [3971] */
    (xdc_Char)0x20,  /* [3972] */
    (xdc_Char)0x45,  /* [3973] */
    (xdc_Char)0x78,  /* [3974] */
    (xdc_Char)0x61,  /* [3975] */
    (xdc_Char)0x6d,  /* [3976] */
    (xdc_Char)0x69,  /* [3977] */
    (xdc_Char)0x6e,  /* [3978] */
    (xdc_Char)0x65,  /* [3979] */
    (xdc_Char)0x20,  /* [3980] */
    (xdc_Char)0x50,  /* [3981] */
    (xdc_Char)0x72,  /* [3982] */
    (xdc_Char)0x6f,  /* [3983] */
    (xdc_Char)0x67,  /* [3984] */
    (xdc_Char)0x72,  /* [3985] */
    (xdc_Char)0x61,  /* [3986] */
    (xdc_Char)0x6d,  /* [3987] */
    (xdc_Char)0x2e,  /* [3988] */
    (xdc_Char)0x68,  /* [3989] */
    (xdc_Char)0x65,  /* [3990] */
    (xdc_Char)0x61,  /* [3991] */
    (xdc_Char)0x70,  /* [3992] */
    (xdc_Char)0x2e,  /* [3993] */
    (xdc_Char)0x0,  /* [3994] */
    (xdc_Char)0x45,  /* [3995] */
    (xdc_Char)0x5f,  /* [3996] */
    (xdc_Char)0x62,  /* [3997] */
    (xdc_Char)0x61,  /* [3998] */
    (xdc_Char)0x64,  /* [3999] */
    (xdc_Char)0x43,  /* [4000] */
    (xdc_Char)0x6f,  /* [4001] */
    (xdc_Char)0x6d,  /* [4002] */
    (xdc_Char)0x6d,  /* [4003] */
    (xdc_Char)0x61,  /* [4004] */
    (xdc_Char)0x6e,  /* [4005] */
    (xdc_Char)0x64,  /* [4006] */
    (xdc_Char)0x3a,  /* [4007] */
    (xdc_Char)0x20,  /* [4008] */
    (xdc_Char)0x52,  /* [4009] */
    (xdc_Char)0x65,  /* [4010] */
    (xdc_Char)0x63,  /* [4011] */
    (xdc_Char)0x65,  /* [4012] */
    (xdc_Char)0x69,  /* [4013] */
    (xdc_Char)0x76,  /* [4014] */
    (xdc_Char)0x65,  /* [4015] */
    (xdc_Char)0x64,  /* [4016] */
    (xdc_Char)0x20,  /* [4017] */
    (xdc_Char)0x69,  /* [4018] */
    (xdc_Char)0x6e,  /* [4019] */
    (xdc_Char)0x76,  /* [4020] */
    (xdc_Char)0x61,  /* [4021] */
    (xdc_Char)0x6c,  /* [4022] */
    (xdc_Char)0x69,  /* [4023] */
    (xdc_Char)0x64,  /* [4024] */
    (xdc_Char)0x20,  /* [4025] */
    (xdc_Char)0x63,  /* [4026] */
    (xdc_Char)0x6f,  /* [4027] */
    (xdc_Char)0x6d,  /* [4028] */
    (xdc_Char)0x6d,  /* [4029] */
    (xdc_Char)0x61,  /* [4030] */
    (xdc_Char)0x6e,  /* [4031] */
    (xdc_Char)0x64,  /* [4032] */
    (xdc_Char)0x2c,  /* [4033] */
    (xdc_Char)0x20,  /* [4034] */
    (xdc_Char)0x69,  /* [4035] */
    (xdc_Char)0x64,  /* [4036] */
    (xdc_Char)0x3a,  /* [4037] */
    (xdc_Char)0x20,  /* [4038] */
    (xdc_Char)0x25,  /* [4039] */
    (xdc_Char)0x64,  /* [4040] */
    (xdc_Char)0x2e,  /* [4041] */
    (xdc_Char)0x0,  /* [4042] */
    (xdc_Char)0x45,  /* [4043] */
    (xdc_Char)0x5f,  /* [4044] */
    (xdc_Char)0x73,  /* [4045] */
    (xdc_Char)0x74,  /* [4046] */
    (xdc_Char)0x61,  /* [4047] */
    (xdc_Char)0x63,  /* [4048] */
    (xdc_Char)0x6b,  /* [4049] */
    (xdc_Char)0x4f,  /* [4050] */
    (xdc_Char)0x76,  /* [4051] */
    (xdc_Char)0x65,  /* [4052] */
    (xdc_Char)0x72,  /* [4053] */
    (xdc_Char)0x66,  /* [4054] */
    (xdc_Char)0x6c,  /* [4055] */
    (xdc_Char)0x6f,  /* [4056] */
    (xdc_Char)0x77,  /* [4057] */
    (xdc_Char)0x3a,  /* [4058] */
    (xdc_Char)0x20,  /* [4059] */
    (xdc_Char)0x54,  /* [4060] */
    (xdc_Char)0x61,  /* [4061] */
    (xdc_Char)0x73,  /* [4062] */
    (xdc_Char)0x6b,  /* [4063] */
    (xdc_Char)0x20,  /* [4064] */
    (xdc_Char)0x30,  /* [4065] */
    (xdc_Char)0x78,  /* [4066] */
    (xdc_Char)0x25,  /* [4067] */
    (xdc_Char)0x78,  /* [4068] */
    (xdc_Char)0x20,  /* [4069] */
    (xdc_Char)0x73,  /* [4070] */
    (xdc_Char)0x74,  /* [4071] */
    (xdc_Char)0x61,  /* [4072] */
    (xdc_Char)0x63,  /* [4073] */
    (xdc_Char)0x6b,  /* [4074] */
    (xdc_Char)0x20,  /* [4075] */
    (xdc_Char)0x6f,  /* [4076] */
    (xdc_Char)0x76,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x72,  /* [4079] */
    (xdc_Char)0x66,  /* [4080] */
    (xdc_Char)0x6c,  /* [4081] */
    (xdc_Char)0x6f,  /* [4082] */
    (xdc_Char)0x77,  /* [4083] */
    (xdc_Char)0x2e,  /* [4084] */
    (xdc_Char)0x0,  /* [4085] */
    (xdc_Char)0x45,  /* [4086] */
    (xdc_Char)0x5f,  /* [4087] */
    (xdc_Char)0x73,  /* [4088] */
    (xdc_Char)0x70,  /* [4089] */
    (xdc_Char)0x4f,  /* [4090] */
    (xdc_Char)0x75,  /* [4091] */
    (xdc_Char)0x74,  /* [4092] */
    (xdc_Char)0x4f,  /* [4093] */
    (xdc_Char)0x66,  /* [4094] */
    (xdc_Char)0x42,  /* [4095] */
    (xdc_Char)0x6f,  /* [4096] */
    (xdc_Char)0x75,  /* [4097] */
    (xdc_Char)0x6e,  /* [4098] */
    (xdc_Char)0x64,  /* [4099] */
    (xdc_Char)0x73,  /* [4100] */
    (xdc_Char)0x3a,  /* [4101] */
    (xdc_Char)0x20,  /* [4102] */
    (xdc_Char)0x54,  /* [4103] */
    (xdc_Char)0x61,  /* [4104] */
    (xdc_Char)0x73,  /* [4105] */
    (xdc_Char)0x6b,  /* [4106] */
    (xdc_Char)0x20,  /* [4107] */
    (xdc_Char)0x30,  /* [4108] */
    (xdc_Char)0x78,  /* [4109] */
    (xdc_Char)0x25,  /* [4110] */
    (xdc_Char)0x78,  /* [4111] */
    (xdc_Char)0x20,  /* [4112] */
    (xdc_Char)0x73,  /* [4113] */
    (xdc_Char)0x74,  /* [4114] */
    (xdc_Char)0x61,  /* [4115] */
    (xdc_Char)0x63,  /* [4116] */
    (xdc_Char)0x6b,  /* [4117] */
    (xdc_Char)0x20,  /* [4118] */
    (xdc_Char)0x65,  /* [4119] */
    (xdc_Char)0x72,  /* [4120] */
    (xdc_Char)0x72,  /* [4121] */
    (xdc_Char)0x6f,  /* [4122] */
    (xdc_Char)0x72,  /* [4123] */
    (xdc_Char)0x2c,  /* [4124] */
    (xdc_Char)0x20,  /* [4125] */
    (xdc_Char)0x53,  /* [4126] */
    (xdc_Char)0x50,  /* [4127] */
    (xdc_Char)0x20,  /* [4128] */
    (xdc_Char)0x3d,  /* [4129] */
    (xdc_Char)0x20,  /* [4130] */
    (xdc_Char)0x30,  /* [4131] */
    (xdc_Char)0x78,  /* [4132] */
    (xdc_Char)0x25,  /* [4133] */
    (xdc_Char)0x78,  /* [4134] */
    (xdc_Char)0x2e,  /* [4135] */
    (xdc_Char)0x0,  /* [4136] */
    (xdc_Char)0x45,  /* [4137] */
    (xdc_Char)0x5f,  /* [4138] */
    (xdc_Char)0x64,  /* [4139] */
    (xdc_Char)0x65,  /* [4140] */
    (xdc_Char)0x6c,  /* [4141] */
    (xdc_Char)0x65,  /* [4142] */
    (xdc_Char)0x74,  /* [4143] */
    (xdc_Char)0x65,  /* [4144] */
    (xdc_Char)0x4e,  /* [4145] */
    (xdc_Char)0x6f,  /* [4146] */
    (xdc_Char)0x74,  /* [4147] */
    (xdc_Char)0x41,  /* [4148] */
    (xdc_Char)0x6c,  /* [4149] */
    (xdc_Char)0x6c,  /* [4150] */
    (xdc_Char)0x6f,  /* [4151] */
    (xdc_Char)0x77,  /* [4152] */
    (xdc_Char)0x65,  /* [4153] */
    (xdc_Char)0x64,  /* [4154] */
    (xdc_Char)0x3a,  /* [4155] */
    (xdc_Char)0x20,  /* [4156] */
    (xdc_Char)0x54,  /* [4157] */
    (xdc_Char)0x61,  /* [4158] */
    (xdc_Char)0x73,  /* [4159] */
    (xdc_Char)0x6b,  /* [4160] */
    (xdc_Char)0x20,  /* [4161] */
    (xdc_Char)0x30,  /* [4162] */
    (xdc_Char)0x78,  /* [4163] */
    (xdc_Char)0x25,  /* [4164] */
    (xdc_Char)0x78,  /* [4165] */
    (xdc_Char)0x2e,  /* [4166] */
    (xdc_Char)0x0,  /* [4167] */
    (xdc_Char)0x45,  /* [4168] */
    (xdc_Char)0x5f,  /* [4169] */
    (xdc_Char)0x73,  /* [4170] */
    (xdc_Char)0x74,  /* [4171] */
    (xdc_Char)0x61,  /* [4172] */
    (xdc_Char)0x63,  /* [4173] */
    (xdc_Char)0x6b,  /* [4174] */
    (xdc_Char)0x4f,  /* [4175] */
    (xdc_Char)0x76,  /* [4176] */
    (xdc_Char)0x65,  /* [4177] */
    (xdc_Char)0x72,  /* [4178] */
    (xdc_Char)0x66,  /* [4179] */
    (xdc_Char)0x6c,  /* [4180] */
    (xdc_Char)0x6f,  /* [4181] */
    (xdc_Char)0x77,  /* [4182] */
    (xdc_Char)0x3a,  /* [4183] */
    (xdc_Char)0x20,  /* [4184] */
    (xdc_Char)0x49,  /* [4185] */
    (xdc_Char)0x53,  /* [4186] */
    (xdc_Char)0x52,  /* [4187] */
    (xdc_Char)0x20,  /* [4188] */
    (xdc_Char)0x73,  /* [4189] */
    (xdc_Char)0x74,  /* [4190] */
    (xdc_Char)0x61,  /* [4191] */
    (xdc_Char)0x63,  /* [4192] */
    (xdc_Char)0x6b,  /* [4193] */
    (xdc_Char)0x20,  /* [4194] */
    (xdc_Char)0x6f,  /* [4195] */
    (xdc_Char)0x76,  /* [4196] */
    (xdc_Char)0x65,  /* [4197] */
    (xdc_Char)0x72,  /* [4198] */
    (xdc_Char)0x66,  /* [4199] */
    (xdc_Char)0x6c,  /* [4200] */
    (xdc_Char)0x6f,  /* [4201] */
    (xdc_Char)0x77,  /* [4202] */
    (xdc_Char)0x2e,  /* [4203] */
    (xdc_Char)0x0,  /* [4204] */
    (xdc_Char)0x72,  /* [4205] */
    (xdc_Char)0x65,  /* [4206] */
    (xdc_Char)0x71,  /* [4207] */
    (xdc_Char)0x75,  /* [4208] */
    (xdc_Char)0x65,  /* [4209] */
    (xdc_Char)0x73,  /* [4210] */
    (xdc_Char)0x74,  /* [4211] */
    (xdc_Char)0x65,  /* [4212] */
    (xdc_Char)0x64,  /* [4213] */
    (xdc_Char)0x20,  /* [4214] */
    (xdc_Char)0x73,  /* [4215] */
    (xdc_Char)0x69,  /* [4216] */
    (xdc_Char)0x7a,  /* [4217] */
    (xdc_Char)0x65,  /* [4218] */
    (xdc_Char)0x20,  /* [4219] */
    (xdc_Char)0x69,  /* [4220] */
    (xdc_Char)0x73,  /* [4221] */
    (xdc_Char)0x20,  /* [4222] */
    (xdc_Char)0x74,  /* [4223] */
    (xdc_Char)0x6f,  /* [4224] */
    (xdc_Char)0x6f,  /* [4225] */
    (xdc_Char)0x20,  /* [4226] */
    (xdc_Char)0x62,  /* [4227] */
    (xdc_Char)0x69,  /* [4228] */
    (xdc_Char)0x67,  /* [4229] */
    (xdc_Char)0x3a,  /* [4230] */
    (xdc_Char)0x20,  /* [4231] */
    (xdc_Char)0x68,  /* [4232] */
    (xdc_Char)0x61,  /* [4233] */
    (xdc_Char)0x6e,  /* [4234] */
    (xdc_Char)0x64,  /* [4235] */
    (xdc_Char)0x6c,  /* [4236] */
    (xdc_Char)0x65,  /* [4237] */
    (xdc_Char)0x3d,  /* [4238] */
    (xdc_Char)0x30,  /* [4239] */
    (xdc_Char)0x78,  /* [4240] */
    (xdc_Char)0x25,  /* [4241] */
    (xdc_Char)0x78,  /* [4242] */
    (xdc_Char)0x2c,  /* [4243] */
    (xdc_Char)0x20,  /* [4244] */
    (xdc_Char)0x73,  /* [4245] */
    (xdc_Char)0x69,  /* [4246] */
    (xdc_Char)0x7a,  /* [4247] */
    (xdc_Char)0x65,  /* [4248] */
    (xdc_Char)0x3d,  /* [4249] */
    (xdc_Char)0x25,  /* [4250] */
    (xdc_Char)0x75,  /* [4251] */
    (xdc_Char)0x0,  /* [4252] */
    (xdc_Char)0x6f,  /* [4253] */
    (xdc_Char)0x75,  /* [4254] */
    (xdc_Char)0x74,  /* [4255] */
    (xdc_Char)0x20,  /* [4256] */
    (xdc_Char)0x6f,  /* [4257] */
    (xdc_Char)0x66,  /* [4258] */
    (xdc_Char)0x20,  /* [4259] */
    (xdc_Char)0x6d,  /* [4260] */
    (xdc_Char)0x65,  /* [4261] */
    (xdc_Char)0x6d,  /* [4262] */
    (xdc_Char)0x6f,  /* [4263] */
    (xdc_Char)0x72,  /* [4264] */
    (xdc_Char)0x79,  /* [4265] */
    (xdc_Char)0x3a,  /* [4266] */
    (xdc_Char)0x20,  /* [4267] */
    (xdc_Char)0x68,  /* [4268] */
    (xdc_Char)0x61,  /* [4269] */
    (xdc_Char)0x6e,  /* [4270] */
    (xdc_Char)0x64,  /* [4271] */
    (xdc_Char)0x6c,  /* [4272] */
    (xdc_Char)0x65,  /* [4273] */
    (xdc_Char)0x3d,  /* [4274] */
    (xdc_Char)0x30,  /* [4275] */
    (xdc_Char)0x78,  /* [4276] */
    (xdc_Char)0x25,  /* [4277] */
    (xdc_Char)0x78,  /* [4278] */
    (xdc_Char)0x2c,  /* [4279] */
    (xdc_Char)0x20,  /* [4280] */
    (xdc_Char)0x73,  /* [4281] */
    (xdc_Char)0x69,  /* [4282] */
    (xdc_Char)0x7a,  /* [4283] */
    (xdc_Char)0x65,  /* [4284] */
    (xdc_Char)0x3d,  /* [4285] */
    (xdc_Char)0x25,  /* [4286] */
    (xdc_Char)0x75,  /* [4287] */
    (xdc_Char)0x0,  /* [4288] */
    (xdc_Char)0x45,  /* [4289] */
    (xdc_Char)0x5f,  /* [4290] */
    (xdc_Char)0x61,  /* [4291] */
    (xdc_Char)0x6c,  /* [4292] */
    (xdc_Char)0x72,  /* [4293] */
    (xdc_Char)0x65,  /* [4294] */
    (xdc_Char)0x61,  /* [4295] */
    (xdc_Char)0x64,  /* [4296] */
    (xdc_Char)0x79,  /* [4297] */
    (xdc_Char)0x44,  /* [4298] */
    (xdc_Char)0x65,  /* [4299] */
    (xdc_Char)0x66,  /* [4300] */
    (xdc_Char)0x69,  /* [4301] */
    (xdc_Char)0x6e,  /* [4302] */
    (xdc_Char)0x65,  /* [4303] */
    (xdc_Char)0x64,  /* [4304] */
    (xdc_Char)0x3a,  /* [4305] */
    (xdc_Char)0x20,  /* [4306] */
    (xdc_Char)0x48,  /* [4307] */
    (xdc_Char)0x77,  /* [4308] */
    (xdc_Char)0x69,  /* [4309] */
    (xdc_Char)0x20,  /* [4310] */
    (xdc_Char)0x61,  /* [4311] */
    (xdc_Char)0x6c,  /* [4312] */
    (xdc_Char)0x72,  /* [4313] */
    (xdc_Char)0x65,  /* [4314] */
    (xdc_Char)0x61,  /* [4315] */
    (xdc_Char)0x64,  /* [4316] */
    (xdc_Char)0x79,  /* [4317] */
    (xdc_Char)0x20,  /* [4318] */
    (xdc_Char)0x64,  /* [4319] */
    (xdc_Char)0x65,  /* [4320] */
    (xdc_Char)0x66,  /* [4321] */
    (xdc_Char)0x69,  /* [4322] */
    (xdc_Char)0x6e,  /* [4323] */
    (xdc_Char)0x65,  /* [4324] */
    (xdc_Char)0x64,  /* [4325] */
    (xdc_Char)0x3a,  /* [4326] */
    (xdc_Char)0x20,  /* [4327] */
    (xdc_Char)0x69,  /* [4328] */
    (xdc_Char)0x6e,  /* [4329] */
    (xdc_Char)0x74,  /* [4330] */
    (xdc_Char)0x72,  /* [4331] */
    (xdc_Char)0x23,  /* [4332] */
    (xdc_Char)0x20,  /* [4333] */
    (xdc_Char)0x25,  /* [4334] */
    (xdc_Char)0x64,  /* [4335] */
    (xdc_Char)0x0,  /* [4336] */
    (xdc_Char)0x45,  /* [4337] */
    (xdc_Char)0x5f,  /* [4338] */
    (xdc_Char)0x68,  /* [4339] */
    (xdc_Char)0x77,  /* [4340] */
    (xdc_Char)0x69,  /* [4341] */
    (xdc_Char)0x4c,  /* [4342] */
    (xdc_Char)0x69,  /* [4343] */
    (xdc_Char)0x6d,  /* [4344] */
    (xdc_Char)0x69,  /* [4345] */
    (xdc_Char)0x74,  /* [4346] */
    (xdc_Char)0x45,  /* [4347] */
    (xdc_Char)0x78,  /* [4348] */
    (xdc_Char)0x63,  /* [4349] */
    (xdc_Char)0x65,  /* [4350] */
    (xdc_Char)0x65,  /* [4351] */
    (xdc_Char)0x64,  /* [4352] */
    (xdc_Char)0x65,  /* [4353] */
    (xdc_Char)0x64,  /* [4354] */
    (xdc_Char)0x3a,  /* [4355] */
    (xdc_Char)0x20,  /* [4356] */
    (xdc_Char)0x54,  /* [4357] */
    (xdc_Char)0x6f,  /* [4358] */
    (xdc_Char)0x6f,  /* [4359] */
    (xdc_Char)0x20,  /* [4360] */
    (xdc_Char)0x6d,  /* [4361] */
    (xdc_Char)0x61,  /* [4362] */
    (xdc_Char)0x6e,  /* [4363] */
    (xdc_Char)0x79,  /* [4364] */
    (xdc_Char)0x20,  /* [4365] */
    (xdc_Char)0x69,  /* [4366] */
    (xdc_Char)0x6e,  /* [4367] */
    (xdc_Char)0x74,  /* [4368] */
    (xdc_Char)0x65,  /* [4369] */
    (xdc_Char)0x72,  /* [4370] */
    (xdc_Char)0x72,  /* [4371] */
    (xdc_Char)0x75,  /* [4372] */
    (xdc_Char)0x70,  /* [4373] */
    (xdc_Char)0x74,  /* [4374] */
    (xdc_Char)0x73,  /* [4375] */
    (xdc_Char)0x20,  /* [4376] */
    (xdc_Char)0x64,  /* [4377] */
    (xdc_Char)0x65,  /* [4378] */
    (xdc_Char)0x66,  /* [4379] */
    (xdc_Char)0x69,  /* [4380] */
    (xdc_Char)0x6e,  /* [4381] */
    (xdc_Char)0x65,  /* [4382] */
    (xdc_Char)0x64,  /* [4383] */
    (xdc_Char)0x0,  /* [4384] */
    (xdc_Char)0x45,  /* [4385] */
    (xdc_Char)0x5f,  /* [4386] */
    (xdc_Char)0x65,  /* [4387] */
    (xdc_Char)0x78,  /* [4388] */
    (xdc_Char)0x63,  /* [4389] */
    (xdc_Char)0x65,  /* [4390] */
    (xdc_Char)0x70,  /* [4391] */
    (xdc_Char)0x74,  /* [4392] */
    (xdc_Char)0x69,  /* [4393] */
    (xdc_Char)0x6f,  /* [4394] */
    (xdc_Char)0x6e,  /* [4395] */
    (xdc_Char)0x3a,  /* [4396] */
    (xdc_Char)0x20,  /* [4397] */
    (xdc_Char)0x69,  /* [4398] */
    (xdc_Char)0x64,  /* [4399] */
    (xdc_Char)0x20,  /* [4400] */
    (xdc_Char)0x3d,  /* [4401] */
    (xdc_Char)0x20,  /* [4402] */
    (xdc_Char)0x25,  /* [4403] */
    (xdc_Char)0x64,  /* [4404] */
    (xdc_Char)0x2c,  /* [4405] */
    (xdc_Char)0x20,  /* [4406] */
    (xdc_Char)0x70,  /* [4407] */
    (xdc_Char)0x63,  /* [4408] */
    (xdc_Char)0x20,  /* [4409] */
    (xdc_Char)0x3d,  /* [4410] */
    (xdc_Char)0x20,  /* [4411] */
    (xdc_Char)0x25,  /* [4412] */
    (xdc_Char)0x30,  /* [4413] */
    (xdc_Char)0x38,  /* [4414] */
    (xdc_Char)0x78,  /* [4415] */
    (xdc_Char)0x2e,  /* [4416] */
    (xdc_Char)0xa,  /* [4417] */
    (xdc_Char)0x54,  /* [4418] */
    (xdc_Char)0x6f,  /* [4419] */
    (xdc_Char)0x20,  /* [4420] */
    (xdc_Char)0x73,  /* [4421] */
    (xdc_Char)0x65,  /* [4422] */
    (xdc_Char)0x65,  /* [4423] */
    (xdc_Char)0x20,  /* [4424] */
    (xdc_Char)0x6d,  /* [4425] */
    (xdc_Char)0x6f,  /* [4426] */
    (xdc_Char)0x72,  /* [4427] */
    (xdc_Char)0x65,  /* [4428] */
    (xdc_Char)0x20,  /* [4429] */
    (xdc_Char)0x65,  /* [4430] */
    (xdc_Char)0x78,  /* [4431] */
    (xdc_Char)0x63,  /* [4432] */
    (xdc_Char)0x65,  /* [4433] */
    (xdc_Char)0x70,  /* [4434] */
    (xdc_Char)0x74,  /* [4435] */
    (xdc_Char)0x69,  /* [4436] */
    (xdc_Char)0x6f,  /* [4437] */
    (xdc_Char)0x6e,  /* [4438] */
    (xdc_Char)0x20,  /* [4439] */
    (xdc_Char)0x64,  /* [4440] */
    (xdc_Char)0x65,  /* [4441] */
    (xdc_Char)0x74,  /* [4442] */
    (xdc_Char)0x61,  /* [4443] */
    (xdc_Char)0x69,  /* [4444] */
    (xdc_Char)0x6c,  /* [4445] */
    (xdc_Char)0x2c,  /* [4446] */
    (xdc_Char)0x20,  /* [4447] */
    (xdc_Char)0x73,  /* [4448] */
    (xdc_Char)0x65,  /* [4449] */
    (xdc_Char)0x74,  /* [4450] */
    (xdc_Char)0x20,  /* [4451] */
    (xdc_Char)0x74,  /* [4452] */
    (xdc_Char)0x69,  /* [4453] */
    (xdc_Char)0x2e,  /* [4454] */
    (xdc_Char)0x73,  /* [4455] */
    (xdc_Char)0x79,  /* [4456] */
    (xdc_Char)0x73,  /* [4457] */
    (xdc_Char)0x62,  /* [4458] */
    (xdc_Char)0x69,  /* [4459] */
    (xdc_Char)0x6f,  /* [4460] */
    (xdc_Char)0x73,  /* [4461] */
    (xdc_Char)0x2e,  /* [4462] */
    (xdc_Char)0x66,  /* [4463] */
    (xdc_Char)0x61,  /* [4464] */
    (xdc_Char)0x6d,  /* [4465] */
    (xdc_Char)0x69,  /* [4466] */
    (xdc_Char)0x6c,  /* [4467] */
    (xdc_Char)0x79,  /* [4468] */
    (xdc_Char)0x2e,  /* [4469] */
    (xdc_Char)0x61,  /* [4470] */
    (xdc_Char)0x72,  /* [4471] */
    (xdc_Char)0x6d,  /* [4472] */
    (xdc_Char)0x2e,  /* [4473] */
    (xdc_Char)0x6d,  /* [4474] */
    (xdc_Char)0x33,  /* [4475] */
    (xdc_Char)0x2e,  /* [4476] */
    (xdc_Char)0x48,  /* [4477] */
    (xdc_Char)0x77,  /* [4478] */
    (xdc_Char)0x69,  /* [4479] */
    (xdc_Char)0x2e,  /* [4480] */
    (xdc_Char)0x65,  /* [4481] */
    (xdc_Char)0x6e,  /* [4482] */
    (xdc_Char)0x61,  /* [4483] */
    (xdc_Char)0x62,  /* [4484] */
    (xdc_Char)0x6c,  /* [4485] */
    (xdc_Char)0x65,  /* [4486] */
    (xdc_Char)0x45,  /* [4487] */
    (xdc_Char)0x78,  /* [4488] */
    (xdc_Char)0x63,  /* [4489] */
    (xdc_Char)0x65,  /* [4490] */
    (xdc_Char)0x70,  /* [4491] */
    (xdc_Char)0x74,  /* [4492] */
    (xdc_Char)0x69,  /* [4493] */
    (xdc_Char)0x6f,  /* [4494] */
    (xdc_Char)0x6e,  /* [4495] */
    (xdc_Char)0x20,  /* [4496] */
    (xdc_Char)0x3d,  /* [4497] */
    (xdc_Char)0x20,  /* [4498] */
    (xdc_Char)0x74,  /* [4499] */
    (xdc_Char)0x72,  /* [4500] */
    (xdc_Char)0x75,  /* [4501] */
    (xdc_Char)0x65,  /* [4502] */
    (xdc_Char)0x20,  /* [4503] */
    (xdc_Char)0x6f,  /* [4504] */
    (xdc_Char)0x72,  /* [4505] */
    (xdc_Char)0x2c,  /* [4506] */
    (xdc_Char)0xa,  /* [4507] */
    (xdc_Char)0x65,  /* [4508] */
    (xdc_Char)0x78,  /* [4509] */
    (xdc_Char)0x61,  /* [4510] */
    (xdc_Char)0x6d,  /* [4511] */
    (xdc_Char)0x69,  /* [4512] */
    (xdc_Char)0x6e,  /* [4513] */
    (xdc_Char)0x65,  /* [4514] */
    (xdc_Char)0x20,  /* [4515] */
    (xdc_Char)0x74,  /* [4516] */
    (xdc_Char)0x68,  /* [4517] */
    (xdc_Char)0x65,  /* [4518] */
    (xdc_Char)0x20,  /* [4519] */
    (xdc_Char)0x45,  /* [4520] */
    (xdc_Char)0x78,  /* [4521] */
    (xdc_Char)0x63,  /* [4522] */
    (xdc_Char)0x65,  /* [4523] */
    (xdc_Char)0x70,  /* [4524] */
    (xdc_Char)0x74,  /* [4525] */
    (xdc_Char)0x69,  /* [4526] */
    (xdc_Char)0x6f,  /* [4527] */
    (xdc_Char)0x6e,  /* [4528] */
    (xdc_Char)0x20,  /* [4529] */
    (xdc_Char)0x76,  /* [4530] */
    (xdc_Char)0x69,  /* [4531] */
    (xdc_Char)0x65,  /* [4532] */
    (xdc_Char)0x77,  /* [4533] */
    (xdc_Char)0x20,  /* [4534] */
    (xdc_Char)0x66,  /* [4535] */
    (xdc_Char)0x6f,  /* [4536] */
    (xdc_Char)0x72,  /* [4537] */
    (xdc_Char)0x20,  /* [4538] */
    (xdc_Char)0x74,  /* [4539] */
    (xdc_Char)0x68,  /* [4540] */
    (xdc_Char)0x65,  /* [4541] */
    (xdc_Char)0x20,  /* [4542] */
    (xdc_Char)0x74,  /* [4543] */
    (xdc_Char)0x69,  /* [4544] */
    (xdc_Char)0x2e,  /* [4545] */
    (xdc_Char)0x73,  /* [4546] */
    (xdc_Char)0x79,  /* [4547] */
    (xdc_Char)0x73,  /* [4548] */
    (xdc_Char)0x62,  /* [4549] */
    (xdc_Char)0x69,  /* [4550] */
    (xdc_Char)0x6f,  /* [4551] */
    (xdc_Char)0x73,  /* [4552] */
    (xdc_Char)0x2e,  /* [4553] */
    (xdc_Char)0x66,  /* [4554] */
    (xdc_Char)0x61,  /* [4555] */
    (xdc_Char)0x6d,  /* [4556] */
    (xdc_Char)0x69,  /* [4557] */
    (xdc_Char)0x6c,  /* [4558] */
    (xdc_Char)0x79,  /* [4559] */
    (xdc_Char)0x2e,  /* [4560] */
    (xdc_Char)0x61,  /* [4561] */
    (xdc_Char)0x72,  /* [4562] */
    (xdc_Char)0x6d,  /* [4563] */
    (xdc_Char)0x2e,  /* [4564] */
    (xdc_Char)0x6d,  /* [4565] */
    (xdc_Char)0x33,  /* [4566] */
    (xdc_Char)0x2e,  /* [4567] */
    (xdc_Char)0x48,  /* [4568] */
    (xdc_Char)0x77,  /* [4569] */
    (xdc_Char)0x69,  /* [4570] */
    (xdc_Char)0x20,  /* [4571] */
    (xdc_Char)0x6d,  /* [4572] */
    (xdc_Char)0x6f,  /* [4573] */
    (xdc_Char)0x64,  /* [4574] */
    (xdc_Char)0x75,  /* [4575] */
    (xdc_Char)0x6c,  /* [4576] */
    (xdc_Char)0x65,  /* [4577] */
    (xdc_Char)0x20,  /* [4578] */
    (xdc_Char)0x75,  /* [4579] */
    (xdc_Char)0x73,  /* [4580] */
    (xdc_Char)0x69,  /* [4581] */
    (xdc_Char)0x6e,  /* [4582] */
    (xdc_Char)0x67,  /* [4583] */
    (xdc_Char)0x20,  /* [4584] */
    (xdc_Char)0x52,  /* [4585] */
    (xdc_Char)0x4f,  /* [4586] */
    (xdc_Char)0x56,  /* [4587] */
    (xdc_Char)0x2e,  /* [4588] */
    (xdc_Char)0x0,  /* [4589] */
    (xdc_Char)0x45,  /* [4590] */
    (xdc_Char)0x5f,  /* [4591] */
    (xdc_Char)0x6e,  /* [4592] */
    (xdc_Char)0x6f,  /* [4593] */
    (xdc_Char)0x49,  /* [4594] */
    (xdc_Char)0x73,  /* [4595] */
    (xdc_Char)0x72,  /* [4596] */
    (xdc_Char)0x3a,  /* [4597] */
    (xdc_Char)0x20,  /* [4598] */
    (xdc_Char)0x69,  /* [4599] */
    (xdc_Char)0x64,  /* [4600] */
    (xdc_Char)0x20,  /* [4601] */
    (xdc_Char)0x3d,  /* [4602] */
    (xdc_Char)0x20,  /* [4603] */
    (xdc_Char)0x25,  /* [4604] */
    (xdc_Char)0x64,  /* [4605] */
    (xdc_Char)0x2c,  /* [4606] */
    (xdc_Char)0x20,  /* [4607] */
    (xdc_Char)0x70,  /* [4608] */
    (xdc_Char)0x63,  /* [4609] */
    (xdc_Char)0x20,  /* [4610] */
    (xdc_Char)0x3d,  /* [4611] */
    (xdc_Char)0x20,  /* [4612] */
    (xdc_Char)0x25,  /* [4613] */
    (xdc_Char)0x30,  /* [4614] */
    (xdc_Char)0x38,  /* [4615] */
    (xdc_Char)0x78,  /* [4616] */
    (xdc_Char)0x0,  /* [4617] */
    (xdc_Char)0x45,  /* [4618] */
    (xdc_Char)0x5f,  /* [4619] */
    (xdc_Char)0x4e,  /* [4620] */
    (xdc_Char)0x4d,  /* [4621] */
    (xdc_Char)0x49,  /* [4622] */
    (xdc_Char)0x3a,  /* [4623] */
    (xdc_Char)0x20,  /* [4624] */
    (xdc_Char)0x25,  /* [4625] */
    (xdc_Char)0x73,  /* [4626] */
    (xdc_Char)0x0,  /* [4627] */
    (xdc_Char)0x45,  /* [4628] */
    (xdc_Char)0x5f,  /* [4629] */
    (xdc_Char)0x68,  /* [4630] */
    (xdc_Char)0x61,  /* [4631] */
    (xdc_Char)0x72,  /* [4632] */
    (xdc_Char)0x64,  /* [4633] */
    (xdc_Char)0x46,  /* [4634] */
    (xdc_Char)0x61,  /* [4635] */
    (xdc_Char)0x75,  /* [4636] */
    (xdc_Char)0x6c,  /* [4637] */
    (xdc_Char)0x74,  /* [4638] */
    (xdc_Char)0x3a,  /* [4639] */
    (xdc_Char)0x20,  /* [4640] */
    (xdc_Char)0x25,  /* [4641] */
    (xdc_Char)0x73,  /* [4642] */
    (xdc_Char)0x0,  /* [4643] */
    (xdc_Char)0x45,  /* [4644] */
    (xdc_Char)0x5f,  /* [4645] */
    (xdc_Char)0x6d,  /* [4646] */
    (xdc_Char)0x65,  /* [4647] */
    (xdc_Char)0x6d,  /* [4648] */
    (xdc_Char)0x46,  /* [4649] */
    (xdc_Char)0x61,  /* [4650] */
    (xdc_Char)0x75,  /* [4651] */
    (xdc_Char)0x6c,  /* [4652] */
    (xdc_Char)0x74,  /* [4653] */
    (xdc_Char)0x3a,  /* [4654] */
    (xdc_Char)0x20,  /* [4655] */
    (xdc_Char)0x25,  /* [4656] */
    (xdc_Char)0x73,  /* [4657] */
    (xdc_Char)0x2c,  /* [4658] */
    (xdc_Char)0x20,  /* [4659] */
    (xdc_Char)0x61,  /* [4660] */
    (xdc_Char)0x64,  /* [4661] */
    (xdc_Char)0x64,  /* [4662] */
    (xdc_Char)0x72,  /* [4663] */
    (xdc_Char)0x65,  /* [4664] */
    (xdc_Char)0x73,  /* [4665] */
    (xdc_Char)0x73,  /* [4666] */
    (xdc_Char)0x3a,  /* [4667] */
    (xdc_Char)0x20,  /* [4668] */
    (xdc_Char)0x25,  /* [4669] */
    (xdc_Char)0x30,  /* [4670] */
    (xdc_Char)0x38,  /* [4671] */
    (xdc_Char)0x78,  /* [4672] */
    (xdc_Char)0x0,  /* [4673] */
    (xdc_Char)0x45,  /* [4674] */
    (xdc_Char)0x5f,  /* [4675] */
    (xdc_Char)0x62,  /* [4676] */
    (xdc_Char)0x75,  /* [4677] */
    (xdc_Char)0x73,  /* [4678] */
    (xdc_Char)0x46,  /* [4679] */
    (xdc_Char)0x61,  /* [4680] */
    (xdc_Char)0x75,  /* [4681] */
    (xdc_Char)0x6c,  /* [4682] */
    (xdc_Char)0x74,  /* [4683] */
    (xdc_Char)0x3a,  /* [4684] */
    (xdc_Char)0x20,  /* [4685] */
    (xdc_Char)0x25,  /* [4686] */
    (xdc_Char)0x73,  /* [4687] */
    (xdc_Char)0x2c,  /* [4688] */
    (xdc_Char)0x20,  /* [4689] */
    (xdc_Char)0x61,  /* [4690] */
    (xdc_Char)0x64,  /* [4691] */
    (xdc_Char)0x64,  /* [4692] */
    (xdc_Char)0x72,  /* [4693] */
    (xdc_Char)0x65,  /* [4694] */
    (xdc_Char)0x73,  /* [4695] */
    (xdc_Char)0x73,  /* [4696] */
    (xdc_Char)0x3a,  /* [4697] */
    (xdc_Char)0x20,  /* [4698] */
    (xdc_Char)0x25,  /* [4699] */
    (xdc_Char)0x30,  /* [4700] */
    (xdc_Char)0x38,  /* [4701] */
    (xdc_Char)0x78,  /* [4702] */
    (xdc_Char)0x0,  /* [4703] */
    (xdc_Char)0x45,  /* [4704] */
    (xdc_Char)0x5f,  /* [4705] */
    (xdc_Char)0x75,  /* [4706] */
    (xdc_Char)0x73,  /* [4707] */
    (xdc_Char)0x61,  /* [4708] */
    (xdc_Char)0x67,  /* [4709] */
    (xdc_Char)0x65,  /* [4710] */
    (xdc_Char)0x46,  /* [4711] */
    (xdc_Char)0x61,  /* [4712] */
    (xdc_Char)0x75,  /* [4713] */
    (xdc_Char)0x6c,  /* [4714] */
    (xdc_Char)0x74,  /* [4715] */
    (xdc_Char)0x3a,  /* [4716] */
    (xdc_Char)0x20,  /* [4717] */
    (xdc_Char)0x25,  /* [4718] */
    (xdc_Char)0x73,  /* [4719] */
    (xdc_Char)0x0,  /* [4720] */
    (xdc_Char)0x45,  /* [4721] */
    (xdc_Char)0x5f,  /* [4722] */
    (xdc_Char)0x73,  /* [4723] */
    (xdc_Char)0x76,  /* [4724] */
    (xdc_Char)0x43,  /* [4725] */
    (xdc_Char)0x61,  /* [4726] */
    (xdc_Char)0x6c,  /* [4727] */
    (xdc_Char)0x6c,  /* [4728] */
    (xdc_Char)0x3a,  /* [4729] */
    (xdc_Char)0x20,  /* [4730] */
    (xdc_Char)0x73,  /* [4731] */
    (xdc_Char)0x76,  /* [4732] */
    (xdc_Char)0x4e,  /* [4733] */
    (xdc_Char)0x75,  /* [4734] */
    (xdc_Char)0x6d,  /* [4735] */
    (xdc_Char)0x20,  /* [4736] */
    (xdc_Char)0x3d,  /* [4737] */
    (xdc_Char)0x20,  /* [4738] */
    (xdc_Char)0x25,  /* [4739] */
    (xdc_Char)0x64,  /* [4740] */
    (xdc_Char)0x0,  /* [4741] */
    (xdc_Char)0x45,  /* [4742] */
    (xdc_Char)0x5f,  /* [4743] */
    (xdc_Char)0x64,  /* [4744] */
    (xdc_Char)0x65,  /* [4745] */
    (xdc_Char)0x62,  /* [4746] */
    (xdc_Char)0x75,  /* [4747] */
    (xdc_Char)0x67,  /* [4748] */
    (xdc_Char)0x4d,  /* [4749] */
    (xdc_Char)0x6f,  /* [4750] */
    (xdc_Char)0x6e,  /* [4751] */
    (xdc_Char)0x3a,  /* [4752] */
    (xdc_Char)0x20,  /* [4753] */
    (xdc_Char)0x25,  /* [4754] */
    (xdc_Char)0x73,  /* [4755] */
    (xdc_Char)0x0,  /* [4756] */
    (xdc_Char)0x45,  /* [4757] */
    (xdc_Char)0x5f,  /* [4758] */
    (xdc_Char)0x72,  /* [4759] */
    (xdc_Char)0x65,  /* [4760] */
    (xdc_Char)0x73,  /* [4761] */
    (xdc_Char)0x65,  /* [4762] */
    (xdc_Char)0x72,  /* [4763] */
    (xdc_Char)0x76,  /* [4764] */
    (xdc_Char)0x65,  /* [4765] */
    (xdc_Char)0x64,  /* [4766] */
    (xdc_Char)0x3a,  /* [4767] */
    (xdc_Char)0x20,  /* [4768] */
    (xdc_Char)0x25,  /* [4769] */
    (xdc_Char)0x73,  /* [4770] */
    (xdc_Char)0x20,  /* [4771] */
    (xdc_Char)0x25,  /* [4772] */
    (xdc_Char)0x64,  /* [4773] */
    (xdc_Char)0x0,  /* [4774] */
    (xdc_Char)0x45,  /* [4775] */
    (xdc_Char)0x5f,  /* [4776] */
    (xdc_Char)0x69,  /* [4777] */
    (xdc_Char)0x6e,  /* [4778] */
    (xdc_Char)0x76,  /* [4779] */
    (xdc_Char)0x61,  /* [4780] */
    (xdc_Char)0x6c,  /* [4781] */
    (xdc_Char)0x69,  /* [4782] */
    (xdc_Char)0x64,  /* [4783] */
    (xdc_Char)0x54,  /* [4784] */
    (xdc_Char)0x69,  /* [4785] */
    (xdc_Char)0x6d,  /* [4786] */
    (xdc_Char)0x65,  /* [4787] */
    (xdc_Char)0x72,  /* [4788] */
    (xdc_Char)0x3a,  /* [4789] */
    (xdc_Char)0x20,  /* [4790] */
    (xdc_Char)0x49,  /* [4791] */
    (xdc_Char)0x6e,  /* [4792] */
    (xdc_Char)0x76,  /* [4793] */
    (xdc_Char)0x61,  /* [4794] */
    (xdc_Char)0x6c,  /* [4795] */
    (xdc_Char)0x69,  /* [4796] */
    (xdc_Char)0x64,  /* [4797] */
    (xdc_Char)0x20,  /* [4798] */
    (xdc_Char)0x54,  /* [4799] */
    (xdc_Char)0x69,  /* [4800] */
    (xdc_Char)0x6d,  /* [4801] */
    (xdc_Char)0x65,  /* [4802] */
    (xdc_Char)0x72,  /* [4803] */
    (xdc_Char)0x20,  /* [4804] */
    (xdc_Char)0x49,  /* [4805] */
    (xdc_Char)0x64,  /* [4806] */
    (xdc_Char)0x20,  /* [4807] */
    (xdc_Char)0x25,  /* [4808] */
    (xdc_Char)0x64,  /* [4809] */
    (xdc_Char)0x0,  /* [4810] */
    (xdc_Char)0x45,  /* [4811] */
    (xdc_Char)0x5f,  /* [4812] */
    (xdc_Char)0x6e,  /* [4813] */
    (xdc_Char)0x6f,  /* [4814] */
    (xdc_Char)0x74,  /* [4815] */
    (xdc_Char)0x41,  /* [4816] */
    (xdc_Char)0x76,  /* [4817] */
    (xdc_Char)0x61,  /* [4818] */
    (xdc_Char)0x69,  /* [4819] */
    (xdc_Char)0x6c,  /* [4820] */
    (xdc_Char)0x61,  /* [4821] */
    (xdc_Char)0x62,  /* [4822] */
    (xdc_Char)0x6c,  /* [4823] */
    (xdc_Char)0x65,  /* [4824] */
    (xdc_Char)0x3a,  /* [4825] */
    (xdc_Char)0x20,  /* [4826] */
    (xdc_Char)0x54,  /* [4827] */
    (xdc_Char)0x69,  /* [4828] */
    (xdc_Char)0x6d,  /* [4829] */
    (xdc_Char)0x65,  /* [4830] */
    (xdc_Char)0x72,  /* [4831] */
    (xdc_Char)0x20,  /* [4832] */
    (xdc_Char)0x6e,  /* [4833] */
    (xdc_Char)0x6f,  /* [4834] */
    (xdc_Char)0x74,  /* [4835] */
    (xdc_Char)0x20,  /* [4836] */
    (xdc_Char)0x61,  /* [4837] */
    (xdc_Char)0x76,  /* [4838] */
    (xdc_Char)0x61,  /* [4839] */
    (xdc_Char)0x69,  /* [4840] */
    (xdc_Char)0x6c,  /* [4841] */
    (xdc_Char)0x61,  /* [4842] */
    (xdc_Char)0x62,  /* [4843] */
    (xdc_Char)0x6c,  /* [4844] */
    (xdc_Char)0x65,  /* [4845] */
    (xdc_Char)0x20,  /* [4846] */
    (xdc_Char)0x25,  /* [4847] */
    (xdc_Char)0x64,  /* [4848] */
    (xdc_Char)0x0,  /* [4849] */
    (xdc_Char)0x45,  /* [4850] */
    (xdc_Char)0x5f,  /* [4851] */
    (xdc_Char)0x63,  /* [4852] */
    (xdc_Char)0x61,  /* [4853] */
    (xdc_Char)0x6e,  /* [4854] */
    (xdc_Char)0x6e,  /* [4855] */
    (xdc_Char)0x6f,  /* [4856] */
    (xdc_Char)0x74,  /* [4857] */
    (xdc_Char)0x53,  /* [4858] */
    (xdc_Char)0x75,  /* [4859] */
    (xdc_Char)0x70,  /* [4860] */
    (xdc_Char)0x70,  /* [4861] */
    (xdc_Char)0x6f,  /* [4862] */
    (xdc_Char)0x72,  /* [4863] */
    (xdc_Char)0x74,  /* [4864] */
    (xdc_Char)0x3a,  /* [4865] */
    (xdc_Char)0x20,  /* [4866] */
    (xdc_Char)0x54,  /* [4867] */
    (xdc_Char)0x69,  /* [4868] */
    (xdc_Char)0x6d,  /* [4869] */
    (xdc_Char)0x65,  /* [4870] */
    (xdc_Char)0x72,  /* [4871] */
    (xdc_Char)0x20,  /* [4872] */
    (xdc_Char)0x63,  /* [4873] */
    (xdc_Char)0x61,  /* [4874] */
    (xdc_Char)0x6e,  /* [4875] */
    (xdc_Char)0x6e,  /* [4876] */
    (xdc_Char)0x6f,  /* [4877] */
    (xdc_Char)0x74,  /* [4878] */
    (xdc_Char)0x20,  /* [4879] */
    (xdc_Char)0x73,  /* [4880] */
    (xdc_Char)0x75,  /* [4881] */
    (xdc_Char)0x70,  /* [4882] */
    (xdc_Char)0x70,  /* [4883] */
    (xdc_Char)0x6f,  /* [4884] */
    (xdc_Char)0x72,  /* [4885] */
    (xdc_Char)0x74,  /* [4886] */
    (xdc_Char)0x20,  /* [4887] */
    (xdc_Char)0x72,  /* [4888] */
    (xdc_Char)0x65,  /* [4889] */
    (xdc_Char)0x71,  /* [4890] */
    (xdc_Char)0x75,  /* [4891] */
    (xdc_Char)0x65,  /* [4892] */
    (xdc_Char)0x73,  /* [4893] */
    (xdc_Char)0x74,  /* [4894] */
    (xdc_Char)0x65,  /* [4895] */
    (xdc_Char)0x64,  /* [4896] */
    (xdc_Char)0x20,  /* [4897] */
    (xdc_Char)0x70,  /* [4898] */
    (xdc_Char)0x65,  /* [4899] */
    (xdc_Char)0x72,  /* [4900] */
    (xdc_Char)0x69,  /* [4901] */
    (xdc_Char)0x6f,  /* [4902] */
    (xdc_Char)0x64,  /* [4903] */
    (xdc_Char)0x20,  /* [4904] */
    (xdc_Char)0x25,  /* [4905] */
    (xdc_Char)0x64,  /* [4906] */
    (xdc_Char)0x0,  /* [4907] */
    (xdc_Char)0x45,  /* [4908] */
    (xdc_Char)0x5f,  /* [4909] */
    (xdc_Char)0x70,  /* [4910] */
    (xdc_Char)0x72,  /* [4911] */
    (xdc_Char)0x69,  /* [4912] */
    (xdc_Char)0x6f,  /* [4913] */
    (xdc_Char)0x72,  /* [4914] */
    (xdc_Char)0x69,  /* [4915] */
    (xdc_Char)0x74,  /* [4916] */
    (xdc_Char)0x79,  /* [4917] */
    (xdc_Char)0x3a,  /* [4918] */
    (xdc_Char)0x20,  /* [4919] */
    (xdc_Char)0x54,  /* [4920] */
    (xdc_Char)0x68,  /* [4921] */
    (xdc_Char)0x72,  /* [4922] */
    (xdc_Char)0x65,  /* [4923] */
    (xdc_Char)0x61,  /* [4924] */
    (xdc_Char)0x64,  /* [4925] */
    (xdc_Char)0x20,  /* [4926] */
    (xdc_Char)0x70,  /* [4927] */
    (xdc_Char)0x72,  /* [4928] */
    (xdc_Char)0x69,  /* [4929] */
    (xdc_Char)0x6f,  /* [4930] */
    (xdc_Char)0x72,  /* [4931] */
    (xdc_Char)0x69,  /* [4932] */
    (xdc_Char)0x74,  /* [4933] */
    (xdc_Char)0x79,  /* [4934] */
    (xdc_Char)0x20,  /* [4935] */
    (xdc_Char)0x69,  /* [4936] */
    (xdc_Char)0x73,  /* [4937] */
    (xdc_Char)0x20,  /* [4938] */
    (xdc_Char)0x69,  /* [4939] */
    (xdc_Char)0x6e,  /* [4940] */
    (xdc_Char)0x76,  /* [4941] */
    (xdc_Char)0x61,  /* [4942] */
    (xdc_Char)0x6c,  /* [4943] */
    (xdc_Char)0x69,  /* [4944] */
    (xdc_Char)0x64,  /* [4945] */
    (xdc_Char)0x20,  /* [4946] */
    (xdc_Char)0x25,  /* [4947] */
    (xdc_Char)0x64,  /* [4948] */
    (xdc_Char)0x0,  /* [4949] */
    (xdc_Char)0x3c,  /* [4950] */
    (xdc_Char)0x2d,  /* [4951] */
    (xdc_Char)0x2d,  /* [4952] */
    (xdc_Char)0x20,  /* [4953] */
    (xdc_Char)0x63,  /* [4954] */
    (xdc_Char)0x6f,  /* [4955] */
    (xdc_Char)0x6e,  /* [4956] */
    (xdc_Char)0x73,  /* [4957] */
    (xdc_Char)0x74,  /* [4958] */
    (xdc_Char)0x72,  /* [4959] */
    (xdc_Char)0x75,  /* [4960] */
    (xdc_Char)0x63,  /* [4961] */
    (xdc_Char)0x74,  /* [4962] */
    (xdc_Char)0x3a,  /* [4963] */
    (xdc_Char)0x20,  /* [4964] */
    (xdc_Char)0x25,  /* [4965] */
    (xdc_Char)0x70,  /* [4966] */
    (xdc_Char)0x28,  /* [4967] */
    (xdc_Char)0x27,  /* [4968] */
    (xdc_Char)0x25,  /* [4969] */
    (xdc_Char)0x73,  /* [4970] */
    (xdc_Char)0x27,  /* [4971] */
    (xdc_Char)0x29,  /* [4972] */
    (xdc_Char)0x0,  /* [4973] */
    (xdc_Char)0x3c,  /* [4974] */
    (xdc_Char)0x2d,  /* [4975] */
    (xdc_Char)0x2d,  /* [4976] */
    (xdc_Char)0x20,  /* [4977] */
    (xdc_Char)0x63,  /* [4978] */
    (xdc_Char)0x72,  /* [4979] */
    (xdc_Char)0x65,  /* [4980] */
    (xdc_Char)0x61,  /* [4981] */
    (xdc_Char)0x74,  /* [4982] */
    (xdc_Char)0x65,  /* [4983] */
    (xdc_Char)0x3a,  /* [4984] */
    (xdc_Char)0x20,  /* [4985] */
    (xdc_Char)0x25,  /* [4986] */
    (xdc_Char)0x70,  /* [4987] */
    (xdc_Char)0x28,  /* [4988] */
    (xdc_Char)0x27,  /* [4989] */
    (xdc_Char)0x25,  /* [4990] */
    (xdc_Char)0x73,  /* [4991] */
    (xdc_Char)0x27,  /* [4992] */
    (xdc_Char)0x29,  /* [4993] */
    (xdc_Char)0x0,  /* [4994] */
    (xdc_Char)0x2d,  /* [4995] */
    (xdc_Char)0x2d,  /* [4996] */
    (xdc_Char)0x3e,  /* [4997] */
    (xdc_Char)0x20,  /* [4998] */
    (xdc_Char)0x64,  /* [4999] */
    (xdc_Char)0x65,  /* [5000] */
    (xdc_Char)0x73,  /* [5001] */
    (xdc_Char)0x74,  /* [5002] */
    (xdc_Char)0x72,  /* [5003] */
    (xdc_Char)0x75,  /* [5004] */
    (xdc_Char)0x63,  /* [5005] */
    (xdc_Char)0x74,  /* [5006] */
    (xdc_Char)0x3a,  /* [5007] */
    (xdc_Char)0x20,  /* [5008] */
    (xdc_Char)0x28,  /* [5009] */
    (xdc_Char)0x25,  /* [5010] */
    (xdc_Char)0x70,  /* [5011] */
    (xdc_Char)0x29,  /* [5012] */
    (xdc_Char)0x0,  /* [5013] */
    (xdc_Char)0x2d,  /* [5014] */
    (xdc_Char)0x2d,  /* [5015] */
    (xdc_Char)0x3e,  /* [5016] */
    (xdc_Char)0x20,  /* [5017] */
    (xdc_Char)0x64,  /* [5018] */
    (xdc_Char)0x65,  /* [5019] */
    (xdc_Char)0x6c,  /* [5020] */
    (xdc_Char)0x65,  /* [5021] */
    (xdc_Char)0x74,  /* [5022] */
    (xdc_Char)0x65,  /* [5023] */
    (xdc_Char)0x3a,  /* [5024] */
    (xdc_Char)0x20,  /* [5025] */
    (xdc_Char)0x28,  /* [5026] */
    (xdc_Char)0x25,  /* [5027] */
    (xdc_Char)0x70,  /* [5028] */
    (xdc_Char)0x29,  /* [5029] */
    (xdc_Char)0x0,  /* [5030] */
    (xdc_Char)0x45,  /* [5031] */
    (xdc_Char)0x52,  /* [5032] */
    (xdc_Char)0x52,  /* [5033] */
    (xdc_Char)0x4f,  /* [5034] */
    (xdc_Char)0x52,  /* [5035] */
    (xdc_Char)0x3a,  /* [5036] */
    (xdc_Char)0x20,  /* [5037] */
    (xdc_Char)0x25,  /* [5038] */
    (xdc_Char)0x24,  /* [5039] */
    (xdc_Char)0x46,  /* [5040] */
    (xdc_Char)0x25,  /* [5041] */
    (xdc_Char)0x24,  /* [5042] */
    (xdc_Char)0x53,  /* [5043] */
    (xdc_Char)0x0,  /* [5044] */
    (xdc_Char)0x57,  /* [5045] */
    (xdc_Char)0x41,  /* [5046] */
    (xdc_Char)0x52,  /* [5047] */
    (xdc_Char)0x4e,  /* [5048] */
    (xdc_Char)0x49,  /* [5049] */
    (xdc_Char)0x4e,  /* [5050] */
    (xdc_Char)0x47,  /* [5051] */
    (xdc_Char)0x3a,  /* [5052] */
    (xdc_Char)0x20,  /* [5053] */
    (xdc_Char)0x25,  /* [5054] */
    (xdc_Char)0x24,  /* [5055] */
    (xdc_Char)0x46,  /* [5056] */
    (xdc_Char)0x25,  /* [5057] */
    (xdc_Char)0x24,  /* [5058] */
    (xdc_Char)0x53,  /* [5059] */
    (xdc_Char)0x0,  /* [5060] */
    (xdc_Char)0x25,  /* [5061] */
    (xdc_Char)0x24,  /* [5062] */
    (xdc_Char)0x46,  /* [5063] */
    (xdc_Char)0x25,  /* [5064] */
    (xdc_Char)0x24,  /* [5065] */
    (xdc_Char)0x53,  /* [5066] */
    (xdc_Char)0x0,  /* [5067] */
    (xdc_Char)0x53,  /* [5068] */
    (xdc_Char)0x74,  /* [5069] */
    (xdc_Char)0x61,  /* [5070] */
    (xdc_Char)0x72,  /* [5071] */
    (xdc_Char)0x74,  /* [5072] */
    (xdc_Char)0x3a,  /* [5073] */
    (xdc_Char)0x20,  /* [5074] */
    (xdc_Char)0x25,  /* [5075] */
    (xdc_Char)0x24,  /* [5076] */
    (xdc_Char)0x53,  /* [5077] */
    (xdc_Char)0x0,  /* [5078] */
    (xdc_Char)0x53,  /* [5079] */
    (xdc_Char)0x74,  /* [5080] */
    (xdc_Char)0x6f,  /* [5081] */
    (xdc_Char)0x70,  /* [5082] */
    (xdc_Char)0x3a,  /* [5083] */
    (xdc_Char)0x20,  /* [5084] */
    (xdc_Char)0x25,  /* [5085] */
    (xdc_Char)0x24,  /* [5086] */
    (xdc_Char)0x53,  /* [5087] */
    (xdc_Char)0x0,  /* [5088] */
    (xdc_Char)0x53,  /* [5089] */
    (xdc_Char)0x74,  /* [5090] */
    (xdc_Char)0x61,  /* [5091] */
    (xdc_Char)0x72,  /* [5092] */
    (xdc_Char)0x74,  /* [5093] */
    (xdc_Char)0x49,  /* [5094] */
    (xdc_Char)0x6e,  /* [5095] */
    (xdc_Char)0x73,  /* [5096] */
    (xdc_Char)0x74,  /* [5097] */
    (xdc_Char)0x61,  /* [5098] */
    (xdc_Char)0x6e,  /* [5099] */
    (xdc_Char)0x63,  /* [5100] */
    (xdc_Char)0x65,  /* [5101] */
    (xdc_Char)0x3a,  /* [5102] */
    (xdc_Char)0x20,  /* [5103] */
    (xdc_Char)0x25,  /* [5104] */
    (xdc_Char)0x24,  /* [5105] */
    (xdc_Char)0x53,  /* [5106] */
    (xdc_Char)0x0,  /* [5107] */
    (xdc_Char)0x53,  /* [5108] */
    (xdc_Char)0x74,  /* [5109] */
    (xdc_Char)0x6f,  /* [5110] */
    (xdc_Char)0x70,  /* [5111] */
    (xdc_Char)0x49,  /* [5112] */
    (xdc_Char)0x6e,  /* [5113] */
    (xdc_Char)0x73,  /* [5114] */
    (xdc_Char)0x74,  /* [5115] */
    (xdc_Char)0x61,  /* [5116] */
    (xdc_Char)0x6e,  /* [5117] */
    (xdc_Char)0x63,  /* [5118] */
    (xdc_Char)0x65,  /* [5119] */
    (xdc_Char)0x3a,  /* [5120] */
    (xdc_Char)0x20,  /* [5121] */
    (xdc_Char)0x25,  /* [5122] */
    (xdc_Char)0x24,  /* [5123] */
    (xdc_Char)0x53,  /* [5124] */
    (xdc_Char)0x0,  /* [5125] */
    (xdc_Char)0x4c,  /* [5126] */
    (xdc_Char)0x57,  /* [5127] */
    (xdc_Char)0x5f,  /* [5128] */
    (xdc_Char)0x64,  /* [5129] */
    (xdc_Char)0x65,  /* [5130] */
    (xdc_Char)0x6c,  /* [5131] */
    (xdc_Char)0x61,  /* [5132] */
    (xdc_Char)0x79,  /* [5133] */
    (xdc_Char)0x65,  /* [5134] */
    (xdc_Char)0x64,  /* [5135] */
    (xdc_Char)0x3a,  /* [5136] */
    (xdc_Char)0x20,  /* [5137] */
    (xdc_Char)0x64,  /* [5138] */
    (xdc_Char)0x65,  /* [5139] */
    (xdc_Char)0x6c,  /* [5140] */
    (xdc_Char)0x61,  /* [5141] */
    (xdc_Char)0x79,  /* [5142] */
    (xdc_Char)0x3a,  /* [5143] */
    (xdc_Char)0x20,  /* [5144] */
    (xdc_Char)0x25,  /* [5145] */
    (xdc_Char)0x64,  /* [5146] */
    (xdc_Char)0x0,  /* [5147] */
    (xdc_Char)0x4c,  /* [5148] */
    (xdc_Char)0x4d,  /* [5149] */
    (xdc_Char)0x5f,  /* [5150] */
    (xdc_Char)0x74,  /* [5151] */
    (xdc_Char)0x69,  /* [5152] */
    (xdc_Char)0x63,  /* [5153] */
    (xdc_Char)0x6b,  /* [5154] */
    (xdc_Char)0x3a,  /* [5155] */
    (xdc_Char)0x20,  /* [5156] */
    (xdc_Char)0x74,  /* [5157] */
    (xdc_Char)0x69,  /* [5158] */
    (xdc_Char)0x63,  /* [5159] */
    (xdc_Char)0x6b,  /* [5160] */
    (xdc_Char)0x3a,  /* [5161] */
    (xdc_Char)0x20,  /* [5162] */
    (xdc_Char)0x25,  /* [5163] */
    (xdc_Char)0x64,  /* [5164] */
    (xdc_Char)0x0,  /* [5165] */
    (xdc_Char)0x4c,  /* [5166] */
    (xdc_Char)0x4d,  /* [5167] */
    (xdc_Char)0x5f,  /* [5168] */
    (xdc_Char)0x62,  /* [5169] */
    (xdc_Char)0x65,  /* [5170] */
    (xdc_Char)0x67,  /* [5171] */
    (xdc_Char)0x69,  /* [5172] */
    (xdc_Char)0x6e,  /* [5173] */
    (xdc_Char)0x3a,  /* [5174] */
    (xdc_Char)0x20,  /* [5175] */
    (xdc_Char)0x63,  /* [5176] */
    (xdc_Char)0x6c,  /* [5177] */
    (xdc_Char)0x6b,  /* [5178] */
    (xdc_Char)0x3a,  /* [5179] */
    (xdc_Char)0x20,  /* [5180] */
    (xdc_Char)0x30,  /* [5181] */
    (xdc_Char)0x78,  /* [5182] */
    (xdc_Char)0x25,  /* [5183] */
    (xdc_Char)0x78,  /* [5184] */
    (xdc_Char)0x2c,  /* [5185] */
    (xdc_Char)0x20,  /* [5186] */
    (xdc_Char)0x66,  /* [5187] */
    (xdc_Char)0x75,  /* [5188] */
    (xdc_Char)0x6e,  /* [5189] */
    (xdc_Char)0x63,  /* [5190] */
    (xdc_Char)0x3a,  /* [5191] */
    (xdc_Char)0x20,  /* [5192] */
    (xdc_Char)0x30,  /* [5193] */
    (xdc_Char)0x78,  /* [5194] */
    (xdc_Char)0x25,  /* [5195] */
    (xdc_Char)0x78,  /* [5196] */
    (xdc_Char)0x0,  /* [5197] */
    (xdc_Char)0x4c,  /* [5198] */
    (xdc_Char)0x4d,  /* [5199] */
    (xdc_Char)0x5f,  /* [5200] */
    (xdc_Char)0x70,  /* [5201] */
    (xdc_Char)0x6f,  /* [5202] */
    (xdc_Char)0x73,  /* [5203] */
    (xdc_Char)0x74,  /* [5204] */
    (xdc_Char)0x3a,  /* [5205] */
    (xdc_Char)0x20,  /* [5206] */
    (xdc_Char)0x65,  /* [5207] */
    (xdc_Char)0x76,  /* [5208] */
    (xdc_Char)0x65,  /* [5209] */
    (xdc_Char)0x6e,  /* [5210] */
    (xdc_Char)0x74,  /* [5211] */
    (xdc_Char)0x3a,  /* [5212] */
    (xdc_Char)0x20,  /* [5213] */
    (xdc_Char)0x30,  /* [5214] */
    (xdc_Char)0x78,  /* [5215] */
    (xdc_Char)0x25,  /* [5216] */
    (xdc_Char)0x78,  /* [5217] */
    (xdc_Char)0x2c,  /* [5218] */
    (xdc_Char)0x20,  /* [5219] */
    (xdc_Char)0x63,  /* [5220] */
    (xdc_Char)0x75,  /* [5221] */
    (xdc_Char)0x72,  /* [5222] */
    (xdc_Char)0x72,  /* [5223] */
    (xdc_Char)0x45,  /* [5224] */
    (xdc_Char)0x76,  /* [5225] */
    (xdc_Char)0x65,  /* [5226] */
    (xdc_Char)0x6e,  /* [5227] */
    (xdc_Char)0x74,  /* [5228] */
    (xdc_Char)0x73,  /* [5229] */
    (xdc_Char)0x3a,  /* [5230] */
    (xdc_Char)0x20,  /* [5231] */
    (xdc_Char)0x30,  /* [5232] */
    (xdc_Char)0x78,  /* [5233] */
    (xdc_Char)0x25,  /* [5234] */
    (xdc_Char)0x78,  /* [5235] */
    (xdc_Char)0x2c,  /* [5236] */
    (xdc_Char)0x20,  /* [5237] */
    (xdc_Char)0x65,  /* [5238] */
    (xdc_Char)0x76,  /* [5239] */
    (xdc_Char)0x65,  /* [5240] */
    (xdc_Char)0x6e,  /* [5241] */
    (xdc_Char)0x74,  /* [5242] */
    (xdc_Char)0x49,  /* [5243] */
    (xdc_Char)0x64,  /* [5244] */
    (xdc_Char)0x3a,  /* [5245] */
    (xdc_Char)0x20,  /* [5246] */
    (xdc_Char)0x30,  /* [5247] */
    (xdc_Char)0x78,  /* [5248] */
    (xdc_Char)0x25,  /* [5249] */
    (xdc_Char)0x78,  /* [5250] */
    (xdc_Char)0x0,  /* [5251] */
    (xdc_Char)0x4c,  /* [5252] */
    (xdc_Char)0x4d,  /* [5253] */
    (xdc_Char)0x5f,  /* [5254] */
    (xdc_Char)0x70,  /* [5255] */
    (xdc_Char)0x65,  /* [5256] */
    (xdc_Char)0x6e,  /* [5257] */
    (xdc_Char)0x64,  /* [5258] */
    (xdc_Char)0x3a,  /* [5259] */
    (xdc_Char)0x20,  /* [5260] */
    (xdc_Char)0x65,  /* [5261] */
    (xdc_Char)0x76,  /* [5262] */
    (xdc_Char)0x65,  /* [5263] */
    (xdc_Char)0x6e,  /* [5264] */
    (xdc_Char)0x74,  /* [5265] */
    (xdc_Char)0x3a,  /* [5266] */
    (xdc_Char)0x20,  /* [5267] */
    (xdc_Char)0x30,  /* [5268] */
    (xdc_Char)0x78,  /* [5269] */
    (xdc_Char)0x25,  /* [5270] */
    (xdc_Char)0x78,  /* [5271] */
    (xdc_Char)0x2c,  /* [5272] */
    (xdc_Char)0x20,  /* [5273] */
    (xdc_Char)0x63,  /* [5274] */
    (xdc_Char)0x75,  /* [5275] */
    (xdc_Char)0x72,  /* [5276] */
    (xdc_Char)0x72,  /* [5277] */
    (xdc_Char)0x45,  /* [5278] */
    (xdc_Char)0x76,  /* [5279] */
    (xdc_Char)0x65,  /* [5280] */
    (xdc_Char)0x6e,  /* [5281] */
    (xdc_Char)0x74,  /* [5282] */
    (xdc_Char)0x73,  /* [5283] */
    (xdc_Char)0x3a,  /* [5284] */
    (xdc_Char)0x20,  /* [5285] */
    (xdc_Char)0x30,  /* [5286] */
    (xdc_Char)0x78,  /* [5287] */
    (xdc_Char)0x25,  /* [5288] */
    (xdc_Char)0x78,  /* [5289] */
    (xdc_Char)0x2c,  /* [5290] */
    (xdc_Char)0x20,  /* [5291] */
    (xdc_Char)0x61,  /* [5292] */
    (xdc_Char)0x6e,  /* [5293] */
    (xdc_Char)0x64,  /* [5294] */
    (xdc_Char)0x4d,  /* [5295] */
    (xdc_Char)0x61,  /* [5296] */
    (xdc_Char)0x73,  /* [5297] */
    (xdc_Char)0x6b,  /* [5298] */
    (xdc_Char)0x3a,  /* [5299] */
    (xdc_Char)0x20,  /* [5300] */
    (xdc_Char)0x30,  /* [5301] */
    (xdc_Char)0x78,  /* [5302] */
    (xdc_Char)0x25,  /* [5303] */
    (xdc_Char)0x78,  /* [5304] */
    (xdc_Char)0x2c,  /* [5305] */
    (xdc_Char)0x20,  /* [5306] */
    (xdc_Char)0x6f,  /* [5307] */
    (xdc_Char)0x72,  /* [5308] */
    (xdc_Char)0x4d,  /* [5309] */
    (xdc_Char)0x61,  /* [5310] */
    (xdc_Char)0x73,  /* [5311] */
    (xdc_Char)0x6b,  /* [5312] */
    (xdc_Char)0x3a,  /* [5313] */
    (xdc_Char)0x20,  /* [5314] */
    (xdc_Char)0x30,  /* [5315] */
    (xdc_Char)0x78,  /* [5316] */
    (xdc_Char)0x25,  /* [5317] */
    (xdc_Char)0x78,  /* [5318] */
    (xdc_Char)0x2c,  /* [5319] */
    (xdc_Char)0x20,  /* [5320] */
    (xdc_Char)0x74,  /* [5321] */
    (xdc_Char)0x69,  /* [5322] */
    (xdc_Char)0x6d,  /* [5323] */
    (xdc_Char)0x65,  /* [5324] */
    (xdc_Char)0x6f,  /* [5325] */
    (xdc_Char)0x75,  /* [5326] */
    (xdc_Char)0x74,  /* [5327] */
    (xdc_Char)0x3a,  /* [5328] */
    (xdc_Char)0x20,  /* [5329] */
    (xdc_Char)0x25,  /* [5330] */
    (xdc_Char)0x64,  /* [5331] */
    (xdc_Char)0x0,  /* [5332] */
    (xdc_Char)0x4c,  /* [5333] */
    (xdc_Char)0x4d,  /* [5334] */
    (xdc_Char)0x5f,  /* [5335] */
    (xdc_Char)0x70,  /* [5336] */
    (xdc_Char)0x6f,  /* [5337] */
    (xdc_Char)0x73,  /* [5338] */
    (xdc_Char)0x74,  /* [5339] */
    (xdc_Char)0x3a,  /* [5340] */
    (xdc_Char)0x20,  /* [5341] */
    (xdc_Char)0x73,  /* [5342] */
    (xdc_Char)0x65,  /* [5343] */
    (xdc_Char)0x6d,  /* [5344] */
    (xdc_Char)0x3a,  /* [5345] */
    (xdc_Char)0x20,  /* [5346] */
    (xdc_Char)0x30,  /* [5347] */
    (xdc_Char)0x78,  /* [5348] */
    (xdc_Char)0x25,  /* [5349] */
    (xdc_Char)0x78,  /* [5350] */
    (xdc_Char)0x2c,  /* [5351] */
    (xdc_Char)0x20,  /* [5352] */
    (xdc_Char)0x63,  /* [5353] */
    (xdc_Char)0x6f,  /* [5354] */
    (xdc_Char)0x75,  /* [5355] */
    (xdc_Char)0x6e,  /* [5356] */
    (xdc_Char)0x74,  /* [5357] */
    (xdc_Char)0x3a,  /* [5358] */
    (xdc_Char)0x20,  /* [5359] */
    (xdc_Char)0x25,  /* [5360] */
    (xdc_Char)0x64,  /* [5361] */
    (xdc_Char)0x0,  /* [5362] */
    (xdc_Char)0x4c,  /* [5363] */
    (xdc_Char)0x4d,  /* [5364] */
    (xdc_Char)0x5f,  /* [5365] */
    (xdc_Char)0x70,  /* [5366] */
    (xdc_Char)0x65,  /* [5367] */
    (xdc_Char)0x6e,  /* [5368] */
    (xdc_Char)0x64,  /* [5369] */
    (xdc_Char)0x3a,  /* [5370] */
    (xdc_Char)0x20,  /* [5371] */
    (xdc_Char)0x73,  /* [5372] */
    (xdc_Char)0x65,  /* [5373] */
    (xdc_Char)0x6d,  /* [5374] */
    (xdc_Char)0x3a,  /* [5375] */
    (xdc_Char)0x20,  /* [5376] */
    (xdc_Char)0x30,  /* [5377] */
    (xdc_Char)0x78,  /* [5378] */
    (xdc_Char)0x25,  /* [5379] */
    (xdc_Char)0x78,  /* [5380] */
    (xdc_Char)0x2c,  /* [5381] */
    (xdc_Char)0x20,  /* [5382] */
    (xdc_Char)0x63,  /* [5383] */
    (xdc_Char)0x6f,  /* [5384] */
    (xdc_Char)0x75,  /* [5385] */
    (xdc_Char)0x6e,  /* [5386] */
    (xdc_Char)0x74,  /* [5387] */
    (xdc_Char)0x3a,  /* [5388] */
    (xdc_Char)0x20,  /* [5389] */
    (xdc_Char)0x25,  /* [5390] */
    (xdc_Char)0x64,  /* [5391] */
    (xdc_Char)0x2c,  /* [5392] */
    (xdc_Char)0x20,  /* [5393] */
    (xdc_Char)0x74,  /* [5394] */
    (xdc_Char)0x69,  /* [5395] */
    (xdc_Char)0x6d,  /* [5396] */
    (xdc_Char)0x65,  /* [5397] */
    (xdc_Char)0x6f,  /* [5398] */
    (xdc_Char)0x75,  /* [5399] */
    (xdc_Char)0x74,  /* [5400] */
    (xdc_Char)0x3a,  /* [5401] */
    (xdc_Char)0x20,  /* [5402] */
    (xdc_Char)0x25,  /* [5403] */
    (xdc_Char)0x64,  /* [5404] */
    (xdc_Char)0x0,  /* [5405] */
    (xdc_Char)0x4c,  /* [5406] */
    (xdc_Char)0x4d,  /* [5407] */
    (xdc_Char)0x5f,  /* [5408] */
    (xdc_Char)0x62,  /* [5409] */
    (xdc_Char)0x65,  /* [5410] */
    (xdc_Char)0x67,  /* [5411] */
    (xdc_Char)0x69,  /* [5412] */
    (xdc_Char)0x6e,  /* [5413] */
    (xdc_Char)0x3a,  /* [5414] */
    (xdc_Char)0x20,  /* [5415] */
    (xdc_Char)0x73,  /* [5416] */
    (xdc_Char)0x77,  /* [5417] */
    (xdc_Char)0x69,  /* [5418] */
    (xdc_Char)0x3a,  /* [5419] */
    (xdc_Char)0x20,  /* [5420] */
    (xdc_Char)0x30,  /* [5421] */
    (xdc_Char)0x78,  /* [5422] */
    (xdc_Char)0x25,  /* [5423] */
    (xdc_Char)0x78,  /* [5424] */
    (xdc_Char)0x2c,  /* [5425] */
    (xdc_Char)0x20,  /* [5426] */
    (xdc_Char)0x66,  /* [5427] */
    (xdc_Char)0x75,  /* [5428] */
    (xdc_Char)0x6e,  /* [5429] */
    (xdc_Char)0x63,  /* [5430] */
    (xdc_Char)0x3a,  /* [5431] */
    (xdc_Char)0x20,  /* [5432] */
    (xdc_Char)0x30,  /* [5433] */
    (xdc_Char)0x78,  /* [5434] */
    (xdc_Char)0x25,  /* [5435] */
    (xdc_Char)0x78,  /* [5436] */
    (xdc_Char)0x2c,  /* [5437] */
    (xdc_Char)0x20,  /* [5438] */
    (xdc_Char)0x70,  /* [5439] */
    (xdc_Char)0x72,  /* [5440] */
    (xdc_Char)0x65,  /* [5441] */
    (xdc_Char)0x54,  /* [5442] */
    (xdc_Char)0x68,  /* [5443] */
    (xdc_Char)0x72,  /* [5444] */
    (xdc_Char)0x65,  /* [5445] */
    (xdc_Char)0x61,  /* [5446] */
    (xdc_Char)0x64,  /* [5447] */
    (xdc_Char)0x3a,  /* [5448] */
    (xdc_Char)0x20,  /* [5449] */
    (xdc_Char)0x25,  /* [5450] */
    (xdc_Char)0x64,  /* [5451] */
    (xdc_Char)0x0,  /* [5452] */
    (xdc_Char)0x4c,  /* [5453] */
    (xdc_Char)0x44,  /* [5454] */
    (xdc_Char)0x5f,  /* [5455] */
    (xdc_Char)0x65,  /* [5456] */
    (xdc_Char)0x6e,  /* [5457] */
    (xdc_Char)0x64,  /* [5458] */
    (xdc_Char)0x3a,  /* [5459] */
    (xdc_Char)0x20,  /* [5460] */
    (xdc_Char)0x73,  /* [5461] */
    (xdc_Char)0x77,  /* [5462] */
    (xdc_Char)0x69,  /* [5463] */
    (xdc_Char)0x3a,  /* [5464] */
    (xdc_Char)0x20,  /* [5465] */
    (xdc_Char)0x30,  /* [5466] */
    (xdc_Char)0x78,  /* [5467] */
    (xdc_Char)0x25,  /* [5468] */
    (xdc_Char)0x78,  /* [5469] */
    (xdc_Char)0x0,  /* [5470] */
    (xdc_Char)0x4c,  /* [5471] */
    (xdc_Char)0x4d,  /* [5472] */
    (xdc_Char)0x5f,  /* [5473] */
    (xdc_Char)0x70,  /* [5474] */
    (xdc_Char)0x6f,  /* [5475] */
    (xdc_Char)0x73,  /* [5476] */
    (xdc_Char)0x74,  /* [5477] */
    (xdc_Char)0x3a,  /* [5478] */
    (xdc_Char)0x20,  /* [5479] */
    (xdc_Char)0x73,  /* [5480] */
    (xdc_Char)0x77,  /* [5481] */
    (xdc_Char)0x69,  /* [5482] */
    (xdc_Char)0x3a,  /* [5483] */
    (xdc_Char)0x20,  /* [5484] */
    (xdc_Char)0x30,  /* [5485] */
    (xdc_Char)0x78,  /* [5486] */
    (xdc_Char)0x25,  /* [5487] */
    (xdc_Char)0x78,  /* [5488] */
    (xdc_Char)0x2c,  /* [5489] */
    (xdc_Char)0x20,  /* [5490] */
    (xdc_Char)0x66,  /* [5491] */
    (xdc_Char)0x75,  /* [5492] */
    (xdc_Char)0x6e,  /* [5493] */
    (xdc_Char)0x63,  /* [5494] */
    (xdc_Char)0x3a,  /* [5495] */
    (xdc_Char)0x20,  /* [5496] */
    (xdc_Char)0x30,  /* [5497] */
    (xdc_Char)0x78,  /* [5498] */
    (xdc_Char)0x25,  /* [5499] */
    (xdc_Char)0x78,  /* [5500] */
    (xdc_Char)0x2c,  /* [5501] */
    (xdc_Char)0x20,  /* [5502] */
    (xdc_Char)0x70,  /* [5503] */
    (xdc_Char)0x72,  /* [5504] */
    (xdc_Char)0x69,  /* [5505] */
    (xdc_Char)0x3a,  /* [5506] */
    (xdc_Char)0x20,  /* [5507] */
    (xdc_Char)0x25,  /* [5508] */
    (xdc_Char)0x64,  /* [5509] */
    (xdc_Char)0x0,  /* [5510] */
    (xdc_Char)0x4c,  /* [5511] */
    (xdc_Char)0x4d,  /* [5512] */
    (xdc_Char)0x5f,  /* [5513] */
    (xdc_Char)0x73,  /* [5514] */
    (xdc_Char)0x77,  /* [5515] */
    (xdc_Char)0x69,  /* [5516] */
    (xdc_Char)0x74,  /* [5517] */
    (xdc_Char)0x63,  /* [5518] */
    (xdc_Char)0x68,  /* [5519] */
    (xdc_Char)0x3a,  /* [5520] */
    (xdc_Char)0x20,  /* [5521] */
    (xdc_Char)0x6f,  /* [5522] */
    (xdc_Char)0x6c,  /* [5523] */
    (xdc_Char)0x64,  /* [5524] */
    (xdc_Char)0x74,  /* [5525] */
    (xdc_Char)0x73,  /* [5526] */
    (xdc_Char)0x6b,  /* [5527] */
    (xdc_Char)0x3a,  /* [5528] */
    (xdc_Char)0x20,  /* [5529] */
    (xdc_Char)0x30,  /* [5530] */
    (xdc_Char)0x78,  /* [5531] */
    (xdc_Char)0x25,  /* [5532] */
    (xdc_Char)0x78,  /* [5533] */
    (xdc_Char)0x2c,  /* [5534] */
    (xdc_Char)0x20,  /* [5535] */
    (xdc_Char)0x6f,  /* [5536] */
    (xdc_Char)0x6c,  /* [5537] */
    (xdc_Char)0x64,  /* [5538] */
    (xdc_Char)0x66,  /* [5539] */
    (xdc_Char)0x75,  /* [5540] */
    (xdc_Char)0x6e,  /* [5541] */
    (xdc_Char)0x63,  /* [5542] */
    (xdc_Char)0x3a,  /* [5543] */
    (xdc_Char)0x20,  /* [5544] */
    (xdc_Char)0x30,  /* [5545] */
    (xdc_Char)0x78,  /* [5546] */
    (xdc_Char)0x25,  /* [5547] */
    (xdc_Char)0x78,  /* [5548] */
    (xdc_Char)0x2c,  /* [5549] */
    (xdc_Char)0x20,  /* [5550] */
    (xdc_Char)0x6e,  /* [5551] */
    (xdc_Char)0x65,  /* [5552] */
    (xdc_Char)0x77,  /* [5553] */
    (xdc_Char)0x74,  /* [5554] */
    (xdc_Char)0x73,  /* [5555] */
    (xdc_Char)0x6b,  /* [5556] */
    (xdc_Char)0x3a,  /* [5557] */
    (xdc_Char)0x20,  /* [5558] */
    (xdc_Char)0x30,  /* [5559] */
    (xdc_Char)0x78,  /* [5560] */
    (xdc_Char)0x25,  /* [5561] */
    (xdc_Char)0x78,  /* [5562] */
    (xdc_Char)0x2c,  /* [5563] */
    (xdc_Char)0x20,  /* [5564] */
    (xdc_Char)0x6e,  /* [5565] */
    (xdc_Char)0x65,  /* [5566] */
    (xdc_Char)0x77,  /* [5567] */
    (xdc_Char)0x66,  /* [5568] */
    (xdc_Char)0x75,  /* [5569] */
    (xdc_Char)0x6e,  /* [5570] */
    (xdc_Char)0x63,  /* [5571] */
    (xdc_Char)0x3a,  /* [5572] */
    (xdc_Char)0x20,  /* [5573] */
    (xdc_Char)0x30,  /* [5574] */
    (xdc_Char)0x78,  /* [5575] */
    (xdc_Char)0x25,  /* [5576] */
    (xdc_Char)0x78,  /* [5577] */
    (xdc_Char)0x0,  /* [5578] */
    (xdc_Char)0x4c,  /* [5579] */
    (xdc_Char)0x4d,  /* [5580] */
    (xdc_Char)0x5f,  /* [5581] */
    (xdc_Char)0x73,  /* [5582] */
    (xdc_Char)0x6c,  /* [5583] */
    (xdc_Char)0x65,  /* [5584] */
    (xdc_Char)0x65,  /* [5585] */
    (xdc_Char)0x70,  /* [5586] */
    (xdc_Char)0x3a,  /* [5587] */
    (xdc_Char)0x20,  /* [5588] */
    (xdc_Char)0x74,  /* [5589] */
    (xdc_Char)0x73,  /* [5590] */
    (xdc_Char)0x6b,  /* [5591] */
    (xdc_Char)0x3a,  /* [5592] */
    (xdc_Char)0x20,  /* [5593] */
    (xdc_Char)0x30,  /* [5594] */
    (xdc_Char)0x78,  /* [5595] */
    (xdc_Char)0x25,  /* [5596] */
    (xdc_Char)0x78,  /* [5597] */
    (xdc_Char)0x2c,  /* [5598] */
    (xdc_Char)0x20,  /* [5599] */
    (xdc_Char)0x66,  /* [5600] */
    (xdc_Char)0x75,  /* [5601] */
    (xdc_Char)0x6e,  /* [5602] */
    (xdc_Char)0x63,  /* [5603] */
    (xdc_Char)0x3a,  /* [5604] */
    (xdc_Char)0x20,  /* [5605] */
    (xdc_Char)0x30,  /* [5606] */
    (xdc_Char)0x78,  /* [5607] */
    (xdc_Char)0x25,  /* [5608] */
    (xdc_Char)0x78,  /* [5609] */
    (xdc_Char)0x2c,  /* [5610] */
    (xdc_Char)0x20,  /* [5611] */
    (xdc_Char)0x74,  /* [5612] */
    (xdc_Char)0x69,  /* [5613] */
    (xdc_Char)0x6d,  /* [5614] */
    (xdc_Char)0x65,  /* [5615] */
    (xdc_Char)0x6f,  /* [5616] */
    (xdc_Char)0x75,  /* [5617] */
    (xdc_Char)0x74,  /* [5618] */
    (xdc_Char)0x3a,  /* [5619] */
    (xdc_Char)0x20,  /* [5620] */
    (xdc_Char)0x25,  /* [5621] */
    (xdc_Char)0x64,  /* [5622] */
    (xdc_Char)0x0,  /* [5623] */
    (xdc_Char)0x4c,  /* [5624] */
    (xdc_Char)0x44,  /* [5625] */
    (xdc_Char)0x5f,  /* [5626] */
    (xdc_Char)0x72,  /* [5627] */
    (xdc_Char)0x65,  /* [5628] */
    (xdc_Char)0x61,  /* [5629] */
    (xdc_Char)0x64,  /* [5630] */
    (xdc_Char)0x79,  /* [5631] */
    (xdc_Char)0x3a,  /* [5632] */
    (xdc_Char)0x20,  /* [5633] */
    (xdc_Char)0x74,  /* [5634] */
    (xdc_Char)0x73,  /* [5635] */
    (xdc_Char)0x6b,  /* [5636] */
    (xdc_Char)0x3a,  /* [5637] */
    (xdc_Char)0x20,  /* [5638] */
    (xdc_Char)0x30,  /* [5639] */
    (xdc_Char)0x78,  /* [5640] */
    (xdc_Char)0x25,  /* [5641] */
    (xdc_Char)0x78,  /* [5642] */
    (xdc_Char)0x2c,  /* [5643] */
    (xdc_Char)0x20,  /* [5644] */
    (xdc_Char)0x66,  /* [5645] */
    (xdc_Char)0x75,  /* [5646] */
    (xdc_Char)0x6e,  /* [5647] */
    (xdc_Char)0x63,  /* [5648] */
    (xdc_Char)0x3a,  /* [5649] */
    (xdc_Char)0x20,  /* [5650] */
    (xdc_Char)0x30,  /* [5651] */
    (xdc_Char)0x78,  /* [5652] */
    (xdc_Char)0x25,  /* [5653] */
    (xdc_Char)0x78,  /* [5654] */
    (xdc_Char)0x2c,  /* [5655] */
    (xdc_Char)0x20,  /* [5656] */
    (xdc_Char)0x70,  /* [5657] */
    (xdc_Char)0x72,  /* [5658] */
    (xdc_Char)0x69,  /* [5659] */
    (xdc_Char)0x3a,  /* [5660] */
    (xdc_Char)0x20,  /* [5661] */
    (xdc_Char)0x25,  /* [5662] */
    (xdc_Char)0x64,  /* [5663] */
    (xdc_Char)0x0,  /* [5664] */
    (xdc_Char)0x4c,  /* [5665] */
    (xdc_Char)0x44,  /* [5666] */
    (xdc_Char)0x5f,  /* [5667] */
    (xdc_Char)0x62,  /* [5668] */
    (xdc_Char)0x6c,  /* [5669] */
    (xdc_Char)0x6f,  /* [5670] */
    (xdc_Char)0x63,  /* [5671] */
    (xdc_Char)0x6b,  /* [5672] */
    (xdc_Char)0x3a,  /* [5673] */
    (xdc_Char)0x20,  /* [5674] */
    (xdc_Char)0x74,  /* [5675] */
    (xdc_Char)0x73,  /* [5676] */
    (xdc_Char)0x6b,  /* [5677] */
    (xdc_Char)0x3a,  /* [5678] */
    (xdc_Char)0x20,  /* [5679] */
    (xdc_Char)0x30,  /* [5680] */
    (xdc_Char)0x78,  /* [5681] */
    (xdc_Char)0x25,  /* [5682] */
    (xdc_Char)0x78,  /* [5683] */
    (xdc_Char)0x2c,  /* [5684] */
    (xdc_Char)0x20,  /* [5685] */
    (xdc_Char)0x66,  /* [5686] */
    (xdc_Char)0x75,  /* [5687] */
    (xdc_Char)0x6e,  /* [5688] */
    (xdc_Char)0x63,  /* [5689] */
    (xdc_Char)0x3a,  /* [5690] */
    (xdc_Char)0x20,  /* [5691] */
    (xdc_Char)0x30,  /* [5692] */
    (xdc_Char)0x78,  /* [5693] */
    (xdc_Char)0x25,  /* [5694] */
    (xdc_Char)0x78,  /* [5695] */
    (xdc_Char)0x0,  /* [5696] */
    (xdc_Char)0x4c,  /* [5697] */
    (xdc_Char)0x4d,  /* [5698] */
    (xdc_Char)0x5f,  /* [5699] */
    (xdc_Char)0x79,  /* [5700] */
    (xdc_Char)0x69,  /* [5701] */
    (xdc_Char)0x65,  /* [5702] */
    (xdc_Char)0x6c,  /* [5703] */
    (xdc_Char)0x64,  /* [5704] */
    (xdc_Char)0x3a,  /* [5705] */
    (xdc_Char)0x20,  /* [5706] */
    (xdc_Char)0x74,  /* [5707] */
    (xdc_Char)0x73,  /* [5708] */
    (xdc_Char)0x6b,  /* [5709] */
    (xdc_Char)0x3a,  /* [5710] */
    (xdc_Char)0x20,  /* [5711] */
    (xdc_Char)0x30,  /* [5712] */
    (xdc_Char)0x78,  /* [5713] */
    (xdc_Char)0x25,  /* [5714] */
    (xdc_Char)0x78,  /* [5715] */
    (xdc_Char)0x2c,  /* [5716] */
    (xdc_Char)0x20,  /* [5717] */
    (xdc_Char)0x66,  /* [5718] */
    (xdc_Char)0x75,  /* [5719] */
    (xdc_Char)0x6e,  /* [5720] */
    (xdc_Char)0x63,  /* [5721] */
    (xdc_Char)0x3a,  /* [5722] */
    (xdc_Char)0x20,  /* [5723] */
    (xdc_Char)0x30,  /* [5724] */
    (xdc_Char)0x78,  /* [5725] */
    (xdc_Char)0x25,  /* [5726] */
    (xdc_Char)0x78,  /* [5727] */
    (xdc_Char)0x2c,  /* [5728] */
    (xdc_Char)0x20,  /* [5729] */
    (xdc_Char)0x63,  /* [5730] */
    (xdc_Char)0x75,  /* [5731] */
    (xdc_Char)0x72,  /* [5732] */
    (xdc_Char)0x72,  /* [5733] */
    (xdc_Char)0x54,  /* [5734] */
    (xdc_Char)0x68,  /* [5735] */
    (xdc_Char)0x72,  /* [5736] */
    (xdc_Char)0x65,  /* [5737] */
    (xdc_Char)0x61,  /* [5738] */
    (xdc_Char)0x64,  /* [5739] */
    (xdc_Char)0x3a,  /* [5740] */
    (xdc_Char)0x20,  /* [5741] */
    (xdc_Char)0x25,  /* [5742] */
    (xdc_Char)0x64,  /* [5743] */
    (xdc_Char)0x0,  /* [5744] */
    (xdc_Char)0x4c,  /* [5745] */
    (xdc_Char)0x4d,  /* [5746] */
    (xdc_Char)0x5f,  /* [5747] */
    (xdc_Char)0x73,  /* [5748] */
    (xdc_Char)0x65,  /* [5749] */
    (xdc_Char)0x74,  /* [5750] */
    (xdc_Char)0x50,  /* [5751] */
    (xdc_Char)0x72,  /* [5752] */
    (xdc_Char)0x69,  /* [5753] */
    (xdc_Char)0x3a,  /* [5754] */
    (xdc_Char)0x20,  /* [5755] */
    (xdc_Char)0x74,  /* [5756] */
    (xdc_Char)0x73,  /* [5757] */
    (xdc_Char)0x6b,  /* [5758] */
    (xdc_Char)0x3a,  /* [5759] */
    (xdc_Char)0x20,  /* [5760] */
    (xdc_Char)0x30,  /* [5761] */
    (xdc_Char)0x78,  /* [5762] */
    (xdc_Char)0x25,  /* [5763] */
    (xdc_Char)0x78,  /* [5764] */
    (xdc_Char)0x2c,  /* [5765] */
    (xdc_Char)0x20,  /* [5766] */
    (xdc_Char)0x66,  /* [5767] */
    (xdc_Char)0x75,  /* [5768] */
    (xdc_Char)0x6e,  /* [5769] */
    (xdc_Char)0x63,  /* [5770] */
    (xdc_Char)0x3a,  /* [5771] */
    (xdc_Char)0x20,  /* [5772] */
    (xdc_Char)0x30,  /* [5773] */
    (xdc_Char)0x78,  /* [5774] */
    (xdc_Char)0x25,  /* [5775] */
    (xdc_Char)0x78,  /* [5776] */
    (xdc_Char)0x2c,  /* [5777] */
    (xdc_Char)0x20,  /* [5778] */
    (xdc_Char)0x6f,  /* [5779] */
    (xdc_Char)0x6c,  /* [5780] */
    (xdc_Char)0x64,  /* [5781] */
    (xdc_Char)0x50,  /* [5782] */
    (xdc_Char)0x72,  /* [5783] */
    (xdc_Char)0x69,  /* [5784] */
    (xdc_Char)0x3a,  /* [5785] */
    (xdc_Char)0x20,  /* [5786] */
    (xdc_Char)0x25,  /* [5787] */
    (xdc_Char)0x64,  /* [5788] */
    (xdc_Char)0x2c,  /* [5789] */
    (xdc_Char)0x20,  /* [5790] */
    (xdc_Char)0x6e,  /* [5791] */
    (xdc_Char)0x65,  /* [5792] */
    (xdc_Char)0x77,  /* [5793] */
    (xdc_Char)0x50,  /* [5794] */
    (xdc_Char)0x72,  /* [5795] */
    (xdc_Char)0x69,  /* [5796] */
    (xdc_Char)0x20,  /* [5797] */
    (xdc_Char)0x25,  /* [5798] */
    (xdc_Char)0x64,  /* [5799] */
    (xdc_Char)0x0,  /* [5800] */
    (xdc_Char)0x4c,  /* [5801] */
    (xdc_Char)0x44,  /* [5802] */
    (xdc_Char)0x5f,  /* [5803] */
    (xdc_Char)0x65,  /* [5804] */
    (xdc_Char)0x78,  /* [5805] */
    (xdc_Char)0x69,  /* [5806] */
    (xdc_Char)0x74,  /* [5807] */
    (xdc_Char)0x3a,  /* [5808] */
    (xdc_Char)0x20,  /* [5809] */
    (xdc_Char)0x74,  /* [5810] */
    (xdc_Char)0x73,  /* [5811] */
    (xdc_Char)0x6b,  /* [5812] */
    (xdc_Char)0x3a,  /* [5813] */
    (xdc_Char)0x20,  /* [5814] */
    (xdc_Char)0x30,  /* [5815] */
    (xdc_Char)0x78,  /* [5816] */
    (xdc_Char)0x25,  /* [5817] */
    (xdc_Char)0x78,  /* [5818] */
    (xdc_Char)0x2c,  /* [5819] */
    (xdc_Char)0x20,  /* [5820] */
    (xdc_Char)0x66,  /* [5821] */
    (xdc_Char)0x75,  /* [5822] */
    (xdc_Char)0x6e,  /* [5823] */
    (xdc_Char)0x63,  /* [5824] */
    (xdc_Char)0x3a,  /* [5825] */
    (xdc_Char)0x20,  /* [5826] */
    (xdc_Char)0x30,  /* [5827] */
    (xdc_Char)0x78,  /* [5828] */
    (xdc_Char)0x25,  /* [5829] */
    (xdc_Char)0x78,  /* [5830] */
    (xdc_Char)0x0,  /* [5831] */
    (xdc_Char)0x4c,  /* [5832] */
    (xdc_Char)0x4d,  /* [5833] */
    (xdc_Char)0x5f,  /* [5834] */
    (xdc_Char)0x73,  /* [5835] */
    (xdc_Char)0x65,  /* [5836] */
    (xdc_Char)0x74,  /* [5837] */
    (xdc_Char)0x41,  /* [5838] */
    (xdc_Char)0x66,  /* [5839] */
    (xdc_Char)0x66,  /* [5840] */
    (xdc_Char)0x69,  /* [5841] */
    (xdc_Char)0x6e,  /* [5842] */
    (xdc_Char)0x69,  /* [5843] */
    (xdc_Char)0x74,  /* [5844] */
    (xdc_Char)0x79,  /* [5845] */
    (xdc_Char)0x3a,  /* [5846] */
    (xdc_Char)0x20,  /* [5847] */
    (xdc_Char)0x74,  /* [5848] */
    (xdc_Char)0x73,  /* [5849] */
    (xdc_Char)0x6b,  /* [5850] */
    (xdc_Char)0x3a,  /* [5851] */
    (xdc_Char)0x20,  /* [5852] */
    (xdc_Char)0x30,  /* [5853] */
    (xdc_Char)0x78,  /* [5854] */
    (xdc_Char)0x25,  /* [5855] */
    (xdc_Char)0x78,  /* [5856] */
    (xdc_Char)0x2c,  /* [5857] */
    (xdc_Char)0x20,  /* [5858] */
    (xdc_Char)0x66,  /* [5859] */
    (xdc_Char)0x75,  /* [5860] */
    (xdc_Char)0x6e,  /* [5861] */
    (xdc_Char)0x63,  /* [5862] */
    (xdc_Char)0x3a,  /* [5863] */
    (xdc_Char)0x20,  /* [5864] */
    (xdc_Char)0x30,  /* [5865] */
    (xdc_Char)0x78,  /* [5866] */
    (xdc_Char)0x25,  /* [5867] */
    (xdc_Char)0x78,  /* [5868] */
    (xdc_Char)0x2c,  /* [5869] */
    (xdc_Char)0x20,  /* [5870] */
    (xdc_Char)0x6f,  /* [5871] */
    (xdc_Char)0x6c,  /* [5872] */
    (xdc_Char)0x64,  /* [5873] */
    (xdc_Char)0x43,  /* [5874] */
    (xdc_Char)0x6f,  /* [5875] */
    (xdc_Char)0x72,  /* [5876] */
    (xdc_Char)0x65,  /* [5877] */
    (xdc_Char)0x3a,  /* [5878] */
    (xdc_Char)0x20,  /* [5879] */
    (xdc_Char)0x25,  /* [5880] */
    (xdc_Char)0x64,  /* [5881] */
    (xdc_Char)0x2c,  /* [5882] */
    (xdc_Char)0x20,  /* [5883] */
    (xdc_Char)0x6f,  /* [5884] */
    (xdc_Char)0x6c,  /* [5885] */
    (xdc_Char)0x64,  /* [5886] */
    (xdc_Char)0x41,  /* [5887] */
    (xdc_Char)0x66,  /* [5888] */
    (xdc_Char)0x66,  /* [5889] */
    (xdc_Char)0x69,  /* [5890] */
    (xdc_Char)0x6e,  /* [5891] */
    (xdc_Char)0x69,  /* [5892] */
    (xdc_Char)0x74,  /* [5893] */
    (xdc_Char)0x79,  /* [5894] */
    (xdc_Char)0x20,  /* [5895] */
    (xdc_Char)0x25,  /* [5896] */
    (xdc_Char)0x64,  /* [5897] */
    (xdc_Char)0x2c,  /* [5898] */
    (xdc_Char)0x20,  /* [5899] */
    (xdc_Char)0x6e,  /* [5900] */
    (xdc_Char)0x65,  /* [5901] */
    (xdc_Char)0x77,  /* [5902] */
    (xdc_Char)0x41,  /* [5903] */
    (xdc_Char)0x66,  /* [5904] */
    (xdc_Char)0x66,  /* [5905] */
    (xdc_Char)0x69,  /* [5906] */
    (xdc_Char)0x6e,  /* [5907] */
    (xdc_Char)0x69,  /* [5908] */
    (xdc_Char)0x74,  /* [5909] */
    (xdc_Char)0x79,  /* [5910] */
    (xdc_Char)0x20,  /* [5911] */
    (xdc_Char)0x25,  /* [5912] */
    (xdc_Char)0x64,  /* [5913] */
    (xdc_Char)0x0,  /* [5914] */
    (xdc_Char)0x4c,  /* [5915] */
    (xdc_Char)0x44,  /* [5916] */
    (xdc_Char)0x5f,  /* [5917] */
    (xdc_Char)0x73,  /* [5918] */
    (xdc_Char)0x63,  /* [5919] */
    (xdc_Char)0x68,  /* [5920] */
    (xdc_Char)0x65,  /* [5921] */
    (xdc_Char)0x64,  /* [5922] */
    (xdc_Char)0x75,  /* [5923] */
    (xdc_Char)0x6c,  /* [5924] */
    (xdc_Char)0x65,  /* [5925] */
    (xdc_Char)0x3a,  /* [5926] */
    (xdc_Char)0x20,  /* [5927] */
    (xdc_Char)0x63,  /* [5928] */
    (xdc_Char)0x6f,  /* [5929] */
    (xdc_Char)0x72,  /* [5930] */
    (xdc_Char)0x65,  /* [5931] */
    (xdc_Char)0x49,  /* [5932] */
    (xdc_Char)0x64,  /* [5933] */
    (xdc_Char)0x3a,  /* [5934] */
    (xdc_Char)0x20,  /* [5935] */
    (xdc_Char)0x25,  /* [5936] */
    (xdc_Char)0x64,  /* [5937] */
    (xdc_Char)0x2c,  /* [5938] */
    (xdc_Char)0x20,  /* [5939] */
    (xdc_Char)0x77,  /* [5940] */
    (xdc_Char)0x6f,  /* [5941] */
    (xdc_Char)0x72,  /* [5942] */
    (xdc_Char)0x6b,  /* [5943] */
    (xdc_Char)0x46,  /* [5944] */
    (xdc_Char)0x6c,  /* [5945] */
    (xdc_Char)0x61,  /* [5946] */
    (xdc_Char)0x67,  /* [5947] */
    (xdc_Char)0x3a,  /* [5948] */
    (xdc_Char)0x20,  /* [5949] */
    (xdc_Char)0x25,  /* [5950] */
    (xdc_Char)0x64,  /* [5951] */
    (xdc_Char)0x2c,  /* [5952] */
    (xdc_Char)0x20,  /* [5953] */
    (xdc_Char)0x63,  /* [5954] */
    (xdc_Char)0x75,  /* [5955] */
    (xdc_Char)0x72,  /* [5956] */
    (xdc_Char)0x53,  /* [5957] */
    (xdc_Char)0x65,  /* [5958] */
    (xdc_Char)0x74,  /* [5959] */
    (xdc_Char)0x4c,  /* [5960] */
    (xdc_Char)0x6f,  /* [5961] */
    (xdc_Char)0x63,  /* [5962] */
    (xdc_Char)0x61,  /* [5963] */
    (xdc_Char)0x6c,  /* [5964] */
    (xdc_Char)0x3a,  /* [5965] */
    (xdc_Char)0x20,  /* [5966] */
    (xdc_Char)0x25,  /* [5967] */
    (xdc_Char)0x64,  /* [5968] */
    (xdc_Char)0x2c,  /* [5969] */
    (xdc_Char)0x20,  /* [5970] */
    (xdc_Char)0x63,  /* [5971] */
    (xdc_Char)0x75,  /* [5972] */
    (xdc_Char)0x72,  /* [5973] */
    (xdc_Char)0x53,  /* [5974] */
    (xdc_Char)0x65,  /* [5975] */
    (xdc_Char)0x74,  /* [5976] */
    (xdc_Char)0x58,  /* [5977] */
    (xdc_Char)0x3a,  /* [5978] */
    (xdc_Char)0x20,  /* [5979] */
    (xdc_Char)0x25,  /* [5980] */
    (xdc_Char)0x64,  /* [5981] */
    (xdc_Char)0x2c,  /* [5982] */
    (xdc_Char)0x20,  /* [5983] */
    (xdc_Char)0x63,  /* [5984] */
    (xdc_Char)0x75,  /* [5985] */
    (xdc_Char)0x72,  /* [5986] */
    (xdc_Char)0x4d,  /* [5987] */
    (xdc_Char)0x61,  /* [5988] */
    (xdc_Char)0x73,  /* [5989] */
    (xdc_Char)0x6b,  /* [5990] */
    (xdc_Char)0x4c,  /* [5991] */
    (xdc_Char)0x6f,  /* [5992] */
    (xdc_Char)0x63,  /* [5993] */
    (xdc_Char)0x61,  /* [5994] */
    (xdc_Char)0x6c,  /* [5995] */
    (xdc_Char)0x3a,  /* [5996] */
    (xdc_Char)0x20,  /* [5997] */
    (xdc_Char)0x25,  /* [5998] */
    (xdc_Char)0x64,  /* [5999] */
    (xdc_Char)0x0,  /* [6000] */
    (xdc_Char)0x4c,  /* [6001] */
    (xdc_Char)0x44,  /* [6002] */
    (xdc_Char)0x5f,  /* [6003] */
    (xdc_Char)0x6e,  /* [6004] */
    (xdc_Char)0x6f,  /* [6005] */
    (xdc_Char)0x57,  /* [6006] */
    (xdc_Char)0x6f,  /* [6007] */
    (xdc_Char)0x72,  /* [6008] */
    (xdc_Char)0x6b,  /* [6009] */
    (xdc_Char)0x3a,  /* [6010] */
    (xdc_Char)0x20,  /* [6011] */
    (xdc_Char)0x63,  /* [6012] */
    (xdc_Char)0x6f,  /* [6013] */
    (xdc_Char)0x72,  /* [6014] */
    (xdc_Char)0x65,  /* [6015] */
    (xdc_Char)0x49,  /* [6016] */
    (xdc_Char)0x64,  /* [6017] */
    (xdc_Char)0x3a,  /* [6018] */
    (xdc_Char)0x20,  /* [6019] */
    (xdc_Char)0x25,  /* [6020] */
    (xdc_Char)0x64,  /* [6021] */
    (xdc_Char)0x2c,  /* [6022] */
    (xdc_Char)0x20,  /* [6023] */
    (xdc_Char)0x63,  /* [6024] */
    (xdc_Char)0x75,  /* [6025] */
    (xdc_Char)0x72,  /* [6026] */
    (xdc_Char)0x53,  /* [6027] */
    (xdc_Char)0x65,  /* [6028] */
    (xdc_Char)0x74,  /* [6029] */
    (xdc_Char)0x4c,  /* [6030] */
    (xdc_Char)0x6f,  /* [6031] */
    (xdc_Char)0x63,  /* [6032] */
    (xdc_Char)0x61,  /* [6033] */
    (xdc_Char)0x6c,  /* [6034] */
    (xdc_Char)0x3a,  /* [6035] */
    (xdc_Char)0x20,  /* [6036] */
    (xdc_Char)0x25,  /* [6037] */
    (xdc_Char)0x64,  /* [6038] */
    (xdc_Char)0x2c,  /* [6039] */
    (xdc_Char)0x20,  /* [6040] */
    (xdc_Char)0x63,  /* [6041] */
    (xdc_Char)0x75,  /* [6042] */
    (xdc_Char)0x72,  /* [6043] */
    (xdc_Char)0x53,  /* [6044] */
    (xdc_Char)0x65,  /* [6045] */
    (xdc_Char)0x74,  /* [6046] */
    (xdc_Char)0x58,  /* [6047] */
    (xdc_Char)0x3a,  /* [6048] */
    (xdc_Char)0x20,  /* [6049] */
    (xdc_Char)0x25,  /* [6050] */
    (xdc_Char)0x64,  /* [6051] */
    (xdc_Char)0x2c,  /* [6052] */
    (xdc_Char)0x20,  /* [6053] */
    (xdc_Char)0x63,  /* [6054] */
    (xdc_Char)0x75,  /* [6055] */
    (xdc_Char)0x72,  /* [6056] */
    (xdc_Char)0x4d,  /* [6057] */
    (xdc_Char)0x61,  /* [6058] */
    (xdc_Char)0x73,  /* [6059] */
    (xdc_Char)0x6b,  /* [6060] */
    (xdc_Char)0x4c,  /* [6061] */
    (xdc_Char)0x6f,  /* [6062] */
    (xdc_Char)0x63,  /* [6063] */
    (xdc_Char)0x61,  /* [6064] */
    (xdc_Char)0x6c,  /* [6065] */
    (xdc_Char)0x3a,  /* [6066] */
    (xdc_Char)0x20,  /* [6067] */
    (xdc_Char)0x25,  /* [6068] */
    (xdc_Char)0x64,  /* [6069] */
    (xdc_Char)0x0,  /* [6070] */
    (xdc_Char)0x45,  /* [6071] */
    (xdc_Char)0x52,  /* [6072] */
    (xdc_Char)0x52,  /* [6073] */
    (xdc_Char)0x4f,  /* [6074] */
    (xdc_Char)0x52,  /* [6075] */
    (xdc_Char)0x3a,  /* [6076] */
    (xdc_Char)0x20,  /* [6077] */
    (xdc_Char)0x45,  /* [6078] */
    (xdc_Char)0x72,  /* [6079] */
    (xdc_Char)0x72,  /* [6080] */
    (xdc_Char)0x6f,  /* [6081] */
    (xdc_Char)0x72,  /* [6082] */
    (xdc_Char)0x43,  /* [6083] */
    (xdc_Char)0x6f,  /* [6084] */
    (xdc_Char)0x64,  /* [6085] */
    (xdc_Char)0x65,  /* [6086] */
    (xdc_Char)0x3a,  /* [6087] */
    (xdc_Char)0x30,  /* [6088] */
    (xdc_Char)0x78,  /* [6089] */
    (xdc_Char)0x25,  /* [6090] */
    (xdc_Char)0x78,  /* [6091] */
    (xdc_Char)0x0,  /* [6092] */
    (xdc_Char)0x45,  /* [6093] */
    (xdc_Char)0x52,  /* [6094] */
    (xdc_Char)0x52,  /* [6095] */
    (xdc_Char)0x4f,  /* [6096] */
    (xdc_Char)0x52,  /* [6097] */
    (xdc_Char)0x3a,  /* [6098] */
    (xdc_Char)0x20,  /* [6099] */
    (xdc_Char)0x45,  /* [6100] */
    (xdc_Char)0x72,  /* [6101] */
    (xdc_Char)0x72,  /* [6102] */
    (xdc_Char)0x6f,  /* [6103] */
    (xdc_Char)0x72,  /* [6104] */
    (xdc_Char)0x43,  /* [6105] */
    (xdc_Char)0x6f,  /* [6106] */
    (xdc_Char)0x64,  /* [6107] */
    (xdc_Char)0x65,  /* [6108] */
    (xdc_Char)0x3a,  /* [6109] */
    (xdc_Char)0x30,  /* [6110] */
    (xdc_Char)0x78,  /* [6111] */
    (xdc_Char)0x25,  /* [6112] */
    (xdc_Char)0x78,  /* [6113] */
    (xdc_Char)0x2e,  /* [6114] */
    (xdc_Char)0x20,  /* [6115] */
    (xdc_Char)0x25,  /* [6116] */
    (xdc_Char)0x24,  /* [6117] */
    (xdc_Char)0x53,  /* [6118] */
    (xdc_Char)0x0,  /* [6119] */
    (xdc_Char)0x48,  /* [6120] */
    (xdc_Char)0x57,  /* [6121] */
    (xdc_Char)0x20,  /* [6122] */
    (xdc_Char)0x45,  /* [6123] */
    (xdc_Char)0x52,  /* [6124] */
    (xdc_Char)0x52,  /* [6125] */
    (xdc_Char)0x4f,  /* [6126] */
    (xdc_Char)0x52,  /* [6127] */
    (xdc_Char)0x3a,  /* [6128] */
    (xdc_Char)0x20,  /* [6129] */
    (xdc_Char)0x45,  /* [6130] */
    (xdc_Char)0x72,  /* [6131] */
    (xdc_Char)0x72,  /* [6132] */
    (xdc_Char)0x6f,  /* [6133] */
    (xdc_Char)0x72,  /* [6134] */
    (xdc_Char)0x43,  /* [6135] */
    (xdc_Char)0x6f,  /* [6136] */
    (xdc_Char)0x64,  /* [6137] */
    (xdc_Char)0x65,  /* [6138] */
    (xdc_Char)0x3a,  /* [6139] */
    (xdc_Char)0x30,  /* [6140] */
    (xdc_Char)0x78,  /* [6141] */
    (xdc_Char)0x25,  /* [6142] */
    (xdc_Char)0x78,  /* [6143] */
    (xdc_Char)0x0,  /* [6144] */
    (xdc_Char)0x48,  /* [6145] */
    (xdc_Char)0x57,  /* [6146] */
    (xdc_Char)0x20,  /* [6147] */
    (xdc_Char)0x45,  /* [6148] */
    (xdc_Char)0x52,  /* [6149] */
    (xdc_Char)0x52,  /* [6150] */
    (xdc_Char)0x4f,  /* [6151] */
    (xdc_Char)0x52,  /* [6152] */
    (xdc_Char)0x3a,  /* [6153] */
    (xdc_Char)0x20,  /* [6154] */
    (xdc_Char)0x45,  /* [6155] */
    (xdc_Char)0x72,  /* [6156] */
    (xdc_Char)0x72,  /* [6157] */
    (xdc_Char)0x6f,  /* [6158] */
    (xdc_Char)0x72,  /* [6159] */
    (xdc_Char)0x43,  /* [6160] */
    (xdc_Char)0x6f,  /* [6161] */
    (xdc_Char)0x64,  /* [6162] */
    (xdc_Char)0x65,  /* [6163] */
    (xdc_Char)0x3a,  /* [6164] */
    (xdc_Char)0x30,  /* [6165] */
    (xdc_Char)0x78,  /* [6166] */
    (xdc_Char)0x25,  /* [6167] */
    (xdc_Char)0x78,  /* [6168] */
    (xdc_Char)0x2e,  /* [6169] */
    (xdc_Char)0x20,  /* [6170] */
    (xdc_Char)0x25,  /* [6171] */
    (xdc_Char)0x24,  /* [6172] */
    (xdc_Char)0x53,  /* [6173] */
    (xdc_Char)0x0,  /* [6174] */
    (xdc_Char)0x46,  /* [6175] */
    (xdc_Char)0x41,  /* [6176] */
    (xdc_Char)0x54,  /* [6177] */
    (xdc_Char)0x41,  /* [6178] */
    (xdc_Char)0x4c,  /* [6179] */
    (xdc_Char)0x20,  /* [6180] */
    (xdc_Char)0x45,  /* [6181] */
    (xdc_Char)0x52,  /* [6182] */
    (xdc_Char)0x52,  /* [6183] */
    (xdc_Char)0x4f,  /* [6184] */
    (xdc_Char)0x52,  /* [6185] */
    (xdc_Char)0x3a,  /* [6186] */
    (xdc_Char)0x20,  /* [6187] */
    (xdc_Char)0x45,  /* [6188] */
    (xdc_Char)0x72,  /* [6189] */
    (xdc_Char)0x72,  /* [6190] */
    (xdc_Char)0x6f,  /* [6191] */
    (xdc_Char)0x72,  /* [6192] */
    (xdc_Char)0x43,  /* [6193] */
    (xdc_Char)0x6f,  /* [6194] */
    (xdc_Char)0x64,  /* [6195] */
    (xdc_Char)0x65,  /* [6196] */
    (xdc_Char)0x3a,  /* [6197] */
    (xdc_Char)0x30,  /* [6198] */
    (xdc_Char)0x78,  /* [6199] */
    (xdc_Char)0x25,  /* [6200] */
    (xdc_Char)0x78,  /* [6201] */
    (xdc_Char)0x0,  /* [6202] */
    (xdc_Char)0x46,  /* [6203] */
    (xdc_Char)0x41,  /* [6204] */
    (xdc_Char)0x54,  /* [6205] */
    (xdc_Char)0x41,  /* [6206] */
    (xdc_Char)0x4c,  /* [6207] */
    (xdc_Char)0x20,  /* [6208] */
    (xdc_Char)0x45,  /* [6209] */
    (xdc_Char)0x52,  /* [6210] */
    (xdc_Char)0x52,  /* [6211] */
    (xdc_Char)0x4f,  /* [6212] */
    (xdc_Char)0x52,  /* [6213] */
    (xdc_Char)0x3a,  /* [6214] */
    (xdc_Char)0x20,  /* [6215] */
    (xdc_Char)0x45,  /* [6216] */
    (xdc_Char)0x72,  /* [6217] */
    (xdc_Char)0x72,  /* [6218] */
    (xdc_Char)0x6f,  /* [6219] */
    (xdc_Char)0x72,  /* [6220] */
    (xdc_Char)0x43,  /* [6221] */
    (xdc_Char)0x6f,  /* [6222] */
    (xdc_Char)0x64,  /* [6223] */
    (xdc_Char)0x65,  /* [6224] */
    (xdc_Char)0x3a,  /* [6225] */
    (xdc_Char)0x30,  /* [6226] */
    (xdc_Char)0x78,  /* [6227] */
    (xdc_Char)0x25,  /* [6228] */
    (xdc_Char)0x78,  /* [6229] */
    (xdc_Char)0x2e,  /* [6230] */
    (xdc_Char)0x20,  /* [6231] */
    (xdc_Char)0x25,  /* [6232] */
    (xdc_Char)0x24,  /* [6233] */
    (xdc_Char)0x53,  /* [6234] */
    (xdc_Char)0x0,  /* [6235] */
    (xdc_Char)0x43,  /* [6236] */
    (xdc_Char)0x52,  /* [6237] */
    (xdc_Char)0x49,  /* [6238] */
    (xdc_Char)0x54,  /* [6239] */
    (xdc_Char)0x49,  /* [6240] */
    (xdc_Char)0x43,  /* [6241] */
    (xdc_Char)0x41,  /* [6242] */
    (xdc_Char)0x4c,  /* [6243] */
    (xdc_Char)0x20,  /* [6244] */
    (xdc_Char)0x45,  /* [6245] */
    (xdc_Char)0x52,  /* [6246] */
    (xdc_Char)0x52,  /* [6247] */
    (xdc_Char)0x4f,  /* [6248] */
    (xdc_Char)0x52,  /* [6249] */
    (xdc_Char)0x3a,  /* [6250] */
    (xdc_Char)0x20,  /* [6251] */
    (xdc_Char)0x45,  /* [6252] */
    (xdc_Char)0x72,  /* [6253] */
    (xdc_Char)0x72,  /* [6254] */
    (xdc_Char)0x6f,  /* [6255] */
    (xdc_Char)0x72,  /* [6256] */
    (xdc_Char)0x43,  /* [6257] */
    (xdc_Char)0x6f,  /* [6258] */
    (xdc_Char)0x64,  /* [6259] */
    (xdc_Char)0x65,  /* [6260] */
    (xdc_Char)0x3a,  /* [6261] */
    (xdc_Char)0x30,  /* [6262] */
    (xdc_Char)0x78,  /* [6263] */
    (xdc_Char)0x25,  /* [6264] */
    (xdc_Char)0x78,  /* [6265] */
    (xdc_Char)0x0,  /* [6266] */
    (xdc_Char)0x43,  /* [6267] */
    (xdc_Char)0x52,  /* [6268] */
    (xdc_Char)0x49,  /* [6269] */
    (xdc_Char)0x54,  /* [6270] */
    (xdc_Char)0x49,  /* [6271] */
    (xdc_Char)0x43,  /* [6272] */
    (xdc_Char)0x41,  /* [6273] */
    (xdc_Char)0x4c,  /* [6274] */
    (xdc_Char)0x20,  /* [6275] */
    (xdc_Char)0x45,  /* [6276] */
    (xdc_Char)0x52,  /* [6277] */
    (xdc_Char)0x52,  /* [6278] */
    (xdc_Char)0x4f,  /* [6279] */
    (xdc_Char)0x52,  /* [6280] */
    (xdc_Char)0x3a,  /* [6281] */
    (xdc_Char)0x20,  /* [6282] */
    (xdc_Char)0x45,  /* [6283] */
    (xdc_Char)0x72,  /* [6284] */
    (xdc_Char)0x72,  /* [6285] */
    (xdc_Char)0x6f,  /* [6286] */
    (xdc_Char)0x72,  /* [6287] */
    (xdc_Char)0x43,  /* [6288] */
    (xdc_Char)0x6f,  /* [6289] */
    (xdc_Char)0x64,  /* [6290] */
    (xdc_Char)0x65,  /* [6291] */
    (xdc_Char)0x3a,  /* [6292] */
    (xdc_Char)0x30,  /* [6293] */
    (xdc_Char)0x78,  /* [6294] */
    (xdc_Char)0x25,  /* [6295] */
    (xdc_Char)0x78,  /* [6296] */
    (xdc_Char)0x2e,  /* [6297] */
    (xdc_Char)0x20,  /* [6298] */
    (xdc_Char)0x25,  /* [6299] */
    (xdc_Char)0x24,  /* [6300] */
    (xdc_Char)0x53,  /* [6301] */
    (xdc_Char)0x0,  /* [6302] */
    (xdc_Char)0x45,  /* [6303] */
    (xdc_Char)0x52,  /* [6304] */
    (xdc_Char)0x52,  /* [6305] */
    (xdc_Char)0x4f,  /* [6306] */
    (xdc_Char)0x52,  /* [6307] */
    (xdc_Char)0x3a,  /* [6308] */
    (xdc_Char)0x20,  /* [6309] */
    (xdc_Char)0x45,  /* [6310] */
    (xdc_Char)0x78,  /* [6311] */
    (xdc_Char)0x63,  /* [6312] */
    (xdc_Char)0x65,  /* [6313] */
    (xdc_Char)0x70,  /* [6314] */
    (xdc_Char)0x74,  /* [6315] */
    (xdc_Char)0x69,  /* [6316] */
    (xdc_Char)0x6f,  /* [6317] */
    (xdc_Char)0x6e,  /* [6318] */
    (xdc_Char)0x20,  /* [6319] */
    (xdc_Char)0x61,  /* [6320] */
    (xdc_Char)0x74,  /* [6321] */
    (xdc_Char)0x20,  /* [6322] */
    (xdc_Char)0x25,  /* [6323] */
    (xdc_Char)0x24,  /* [6324] */
    (xdc_Char)0x46,  /* [6325] */
    (xdc_Char)0x2e,  /* [6326] */
    (xdc_Char)0x0,  /* [6327] */
    (xdc_Char)0x45,  /* [6328] */
    (xdc_Char)0x52,  /* [6329] */
    (xdc_Char)0x52,  /* [6330] */
    (xdc_Char)0x4f,  /* [6331] */
    (xdc_Char)0x52,  /* [6332] */
    (xdc_Char)0x3a,  /* [6333] */
    (xdc_Char)0x20,  /* [6334] */
    (xdc_Char)0x55,  /* [6335] */
    (xdc_Char)0x6e,  /* [6336] */
    (xdc_Char)0x63,  /* [6337] */
    (xdc_Char)0x61,  /* [6338] */
    (xdc_Char)0x75,  /* [6339] */
    (xdc_Char)0x67,  /* [6340] */
    (xdc_Char)0x68,  /* [6341] */
    (xdc_Char)0x74,  /* [6342] */
    (xdc_Char)0x20,  /* [6343] */
    (xdc_Char)0x45,  /* [6344] */
    (xdc_Char)0x78,  /* [6345] */
    (xdc_Char)0x63,  /* [6346] */
    (xdc_Char)0x65,  /* [6347] */
    (xdc_Char)0x70,  /* [6348] */
    (xdc_Char)0x74,  /* [6349] */
    (xdc_Char)0x69,  /* [6350] */
    (xdc_Char)0x6f,  /* [6351] */
    (xdc_Char)0x6e,  /* [6352] */
    (xdc_Char)0x20,  /* [6353] */
    (xdc_Char)0x61,  /* [6354] */
    (xdc_Char)0x74,  /* [6355] */
    (xdc_Char)0x20,  /* [6356] */
    (xdc_Char)0x25,  /* [6357] */
    (xdc_Char)0x24,  /* [6358] */
    (xdc_Char)0x46,  /* [6359] */
    (xdc_Char)0x2e,  /* [6360] */
    (xdc_Char)0x0,  /* [6361] */
    (xdc_Char)0x45,  /* [6362] */
    (xdc_Char)0x52,  /* [6363] */
    (xdc_Char)0x52,  /* [6364] */
    (xdc_Char)0x4f,  /* [6365] */
    (xdc_Char)0x52,  /* [6366] */
    (xdc_Char)0x3a,  /* [6367] */
    (xdc_Char)0x20,  /* [6368] */
    (xdc_Char)0x4e,  /* [6369] */
    (xdc_Char)0x75,  /* [6370] */
    (xdc_Char)0x6c,  /* [6371] */
    (xdc_Char)0x6c,  /* [6372] */
    (xdc_Char)0x20,  /* [6373] */
    (xdc_Char)0x50,  /* [6374] */
    (xdc_Char)0x6f,  /* [6375] */
    (xdc_Char)0x69,  /* [6376] */
    (xdc_Char)0x6e,  /* [6377] */
    (xdc_Char)0x74,  /* [6378] */
    (xdc_Char)0x65,  /* [6379] */
    (xdc_Char)0x72,  /* [6380] */
    (xdc_Char)0x20,  /* [6381] */
    (xdc_Char)0x45,  /* [6382] */
    (xdc_Char)0x78,  /* [6383] */
    (xdc_Char)0x63,  /* [6384] */
    (xdc_Char)0x65,  /* [6385] */
    (xdc_Char)0x70,  /* [6386] */
    (xdc_Char)0x74,  /* [6387] */
    (xdc_Char)0x69,  /* [6388] */
    (xdc_Char)0x6f,  /* [6389] */
    (xdc_Char)0x6e,  /* [6390] */
    (xdc_Char)0x20,  /* [6391] */
    (xdc_Char)0x61,  /* [6392] */
    (xdc_Char)0x74,  /* [6393] */
    (xdc_Char)0x20,  /* [6394] */
    (xdc_Char)0x25,  /* [6395] */
    (xdc_Char)0x24,  /* [6396] */
    (xdc_Char)0x46,  /* [6397] */
    (xdc_Char)0x2e,  /* [6398] */
    (xdc_Char)0x0,  /* [6399] */
    (xdc_Char)0x45,  /* [6400] */
    (xdc_Char)0x52,  /* [6401] */
    (xdc_Char)0x52,  /* [6402] */
    (xdc_Char)0x4f,  /* [6403] */
    (xdc_Char)0x52,  /* [6404] */
    (xdc_Char)0x3a,  /* [6405] */
    (xdc_Char)0x20,  /* [6406] */
    (xdc_Char)0x55,  /* [6407] */
    (xdc_Char)0x6e,  /* [6408] */
    (xdc_Char)0x65,  /* [6409] */
    (xdc_Char)0x78,  /* [6410] */
    (xdc_Char)0x70,  /* [6411] */
    (xdc_Char)0x65,  /* [6412] */
    (xdc_Char)0x63,  /* [6413] */
    (xdc_Char)0x74,  /* [6414] */
    (xdc_Char)0x65,  /* [6415] */
    (xdc_Char)0x64,  /* [6416] */
    (xdc_Char)0x20,  /* [6417] */
    (xdc_Char)0x49,  /* [6418] */
    (xdc_Char)0x6e,  /* [6419] */
    (xdc_Char)0x74,  /* [6420] */
    (xdc_Char)0x65,  /* [6421] */
    (xdc_Char)0x72,  /* [6422] */
    (xdc_Char)0x72,  /* [6423] */
    (xdc_Char)0x75,  /* [6424] */
    (xdc_Char)0x70,  /* [6425] */
    (xdc_Char)0x74,  /* [6426] */
    (xdc_Char)0x20,  /* [6427] */
    (xdc_Char)0x61,  /* [6428] */
    (xdc_Char)0x74,  /* [6429] */
    (xdc_Char)0x20,  /* [6430] */
    (xdc_Char)0x25,  /* [6431] */
    (xdc_Char)0x24,  /* [6432] */
    (xdc_Char)0x46,  /* [6433] */
    (xdc_Char)0x2e,  /* [6434] */
    (xdc_Char)0x0,  /* [6435] */
    (xdc_Char)0x45,  /* [6436] */
    (xdc_Char)0x52,  /* [6437] */
    (xdc_Char)0x52,  /* [6438] */
    (xdc_Char)0x4f,  /* [6439] */
    (xdc_Char)0x52,  /* [6440] */
    (xdc_Char)0x3a,  /* [6441] */
    (xdc_Char)0x20,  /* [6442] */
    (xdc_Char)0x4d,  /* [6443] */
    (xdc_Char)0x65,  /* [6444] */
    (xdc_Char)0x6d,  /* [6445] */
    (xdc_Char)0x6f,  /* [6446] */
    (xdc_Char)0x72,  /* [6447] */
    (xdc_Char)0x79,  /* [6448] */
    (xdc_Char)0x20,  /* [6449] */
    (xdc_Char)0x41,  /* [6450] */
    (xdc_Char)0x63,  /* [6451] */
    (xdc_Char)0x63,  /* [6452] */
    (xdc_Char)0x65,  /* [6453] */
    (xdc_Char)0x73,  /* [6454] */
    (xdc_Char)0x73,  /* [6455] */
    (xdc_Char)0x20,  /* [6456] */
    (xdc_Char)0x46,  /* [6457] */
    (xdc_Char)0x61,  /* [6458] */
    (xdc_Char)0x75,  /* [6459] */
    (xdc_Char)0x6c,  /* [6460] */
    (xdc_Char)0x74,  /* [6461] */
    (xdc_Char)0x20,  /* [6462] */
    (xdc_Char)0x61,  /* [6463] */
    (xdc_Char)0x74,  /* [6464] */
    (xdc_Char)0x20,  /* [6465] */
    (xdc_Char)0x25,  /* [6466] */
    (xdc_Char)0x24,  /* [6467] */
    (xdc_Char)0x46,  /* [6468] */
    (xdc_Char)0x2e,  /* [6469] */
    (xdc_Char)0x20,  /* [6470] */
    (xdc_Char)0x5b,  /* [6471] */
    (xdc_Char)0x41,  /* [6472] */
    (xdc_Char)0x44,  /* [6473] */
    (xdc_Char)0x52,  /* [6474] */
    (xdc_Char)0x53,  /* [6475] */
    (xdc_Char)0x5d,  /* [6476] */
    (xdc_Char)0x30,  /* [6477] */
    (xdc_Char)0x78,  /* [6478] */
    (xdc_Char)0x25,  /* [6479] */
    (xdc_Char)0x78,  /* [6480] */
    (xdc_Char)0x0,  /* [6481] */
    (xdc_Char)0x45,  /* [6482] */
    (xdc_Char)0x52,  /* [6483] */
    (xdc_Char)0x52,  /* [6484] */
    (xdc_Char)0x4f,  /* [6485] */
    (xdc_Char)0x52,  /* [6486] */
    (xdc_Char)0x3a,  /* [6487] */
    (xdc_Char)0x20,  /* [6488] */
    (xdc_Char)0x53,  /* [6489] */
    (xdc_Char)0x65,  /* [6490] */
    (xdc_Char)0x63,  /* [6491] */
    (xdc_Char)0x75,  /* [6492] */
    (xdc_Char)0x72,  /* [6493] */
    (xdc_Char)0x69,  /* [6494] */
    (xdc_Char)0x74,  /* [6495] */
    (xdc_Char)0x79,  /* [6496] */
    (xdc_Char)0x20,  /* [6497] */
    (xdc_Char)0x45,  /* [6498] */
    (xdc_Char)0x78,  /* [6499] */
    (xdc_Char)0x63,  /* [6500] */
    (xdc_Char)0x65,  /* [6501] */
    (xdc_Char)0x70,  /* [6502] */
    (xdc_Char)0x74,  /* [6503] */
    (xdc_Char)0x69,  /* [6504] */
    (xdc_Char)0x6f,  /* [6505] */
    (xdc_Char)0x6e,  /* [6506] */
    (xdc_Char)0x20,  /* [6507] */
    (xdc_Char)0x61,  /* [6508] */
    (xdc_Char)0x74,  /* [6509] */
    (xdc_Char)0x20,  /* [6510] */
    (xdc_Char)0x25,  /* [6511] */
    (xdc_Char)0x24,  /* [6512] */
    (xdc_Char)0x46,  /* [6513] */
    (xdc_Char)0x2e,  /* [6514] */
    (xdc_Char)0x0,  /* [6515] */
    (xdc_Char)0x45,  /* [6516] */
    (xdc_Char)0x52,  /* [6517] */
    (xdc_Char)0x52,  /* [6518] */
    (xdc_Char)0x4f,  /* [6519] */
    (xdc_Char)0x52,  /* [6520] */
    (xdc_Char)0x3a,  /* [6521] */
    (xdc_Char)0x20,  /* [6522] */
    (xdc_Char)0x44,  /* [6523] */
    (xdc_Char)0x69,  /* [6524] */
    (xdc_Char)0x76,  /* [6525] */
    (xdc_Char)0x69,  /* [6526] */
    (xdc_Char)0x73,  /* [6527] */
    (xdc_Char)0x69,  /* [6528] */
    (xdc_Char)0x6f,  /* [6529] */
    (xdc_Char)0x6e,  /* [6530] */
    (xdc_Char)0x20,  /* [6531] */
    (xdc_Char)0x62,  /* [6532] */
    (xdc_Char)0x79,  /* [6533] */
    (xdc_Char)0x20,  /* [6534] */
    (xdc_Char)0x7a,  /* [6535] */
    (xdc_Char)0x65,  /* [6536] */
    (xdc_Char)0x72,  /* [6537] */
    (xdc_Char)0x6f,  /* [6538] */
    (xdc_Char)0x20,  /* [6539] */
    (xdc_Char)0x61,  /* [6540] */
    (xdc_Char)0x74,  /* [6541] */
    (xdc_Char)0x20,  /* [6542] */
    (xdc_Char)0x25,  /* [6543] */
    (xdc_Char)0x24,  /* [6544] */
    (xdc_Char)0x46,  /* [6545] */
    (xdc_Char)0x2e,  /* [6546] */
    (xdc_Char)0x0,  /* [6547] */
    (xdc_Char)0x45,  /* [6548] */
    (xdc_Char)0x52,  /* [6549] */
    (xdc_Char)0x52,  /* [6550] */
    (xdc_Char)0x4f,  /* [6551] */
    (xdc_Char)0x52,  /* [6552] */
    (xdc_Char)0x3a,  /* [6553] */
    (xdc_Char)0x20,  /* [6554] */
    (xdc_Char)0x4f,  /* [6555] */
    (xdc_Char)0x76,  /* [6556] */
    (xdc_Char)0x65,  /* [6557] */
    (xdc_Char)0x72,  /* [6558] */
    (xdc_Char)0x66,  /* [6559] */
    (xdc_Char)0x6c,  /* [6560] */
    (xdc_Char)0x6f,  /* [6561] */
    (xdc_Char)0x77,  /* [6562] */
    (xdc_Char)0x20,  /* [6563] */
    (xdc_Char)0x65,  /* [6564] */
    (xdc_Char)0x78,  /* [6565] */
    (xdc_Char)0x63,  /* [6566] */
    (xdc_Char)0x65,  /* [6567] */
    (xdc_Char)0x70,  /* [6568] */
    (xdc_Char)0x74,  /* [6569] */
    (xdc_Char)0x69,  /* [6570] */
    (xdc_Char)0x6f,  /* [6571] */
    (xdc_Char)0x6e,  /* [6572] */
    (xdc_Char)0x20,  /* [6573] */
    (xdc_Char)0x61,  /* [6574] */
    (xdc_Char)0x74,  /* [6575] */
    (xdc_Char)0x20,  /* [6576] */
    (xdc_Char)0x25,  /* [6577] */
    (xdc_Char)0x24,  /* [6578] */
    (xdc_Char)0x46,  /* [6579] */
    (xdc_Char)0x2e,  /* [6580] */
    (xdc_Char)0x0,  /* [6581] */
    (xdc_Char)0x45,  /* [6582] */
    (xdc_Char)0x52,  /* [6583] */
    (xdc_Char)0x52,  /* [6584] */
    (xdc_Char)0x4f,  /* [6585] */
    (xdc_Char)0x52,  /* [6586] */
    (xdc_Char)0x3a,  /* [6587] */
    (xdc_Char)0x20,  /* [6588] */
    (xdc_Char)0x49,  /* [6589] */
    (xdc_Char)0x6e,  /* [6590] */
    (xdc_Char)0x64,  /* [6591] */
    (xdc_Char)0x65,  /* [6592] */
    (xdc_Char)0x78,  /* [6593] */
    (xdc_Char)0x20,  /* [6594] */
    (xdc_Char)0x6f,  /* [6595] */
    (xdc_Char)0x75,  /* [6596] */
    (xdc_Char)0x74,  /* [6597] */
    (xdc_Char)0x20,  /* [6598] */
    (xdc_Char)0x6f,  /* [6599] */
    (xdc_Char)0x66,  /* [6600] */
    (xdc_Char)0x20,  /* [6601] */
    (xdc_Char)0x72,  /* [6602] */
    (xdc_Char)0x61,  /* [6603] */
    (xdc_Char)0x6e,  /* [6604] */
    (xdc_Char)0x67,  /* [6605] */
    (xdc_Char)0x65,  /* [6606] */
    (xdc_Char)0x20,  /* [6607] */
    (xdc_Char)0x61,  /* [6608] */
    (xdc_Char)0x74,  /* [6609] */
    (xdc_Char)0x20,  /* [6610] */
    (xdc_Char)0x25,  /* [6611] */
    (xdc_Char)0x24,  /* [6612] */
    (xdc_Char)0x46,  /* [6613] */
    (xdc_Char)0x2e,  /* [6614] */
    (xdc_Char)0x20,  /* [6615] */
    (xdc_Char)0x5b,  /* [6616] */
    (xdc_Char)0x49,  /* [6617] */
    (xdc_Char)0x4e,  /* [6618] */
    (xdc_Char)0x44,  /* [6619] */
    (xdc_Char)0x45,  /* [6620] */
    (xdc_Char)0x58,  /* [6621] */
    (xdc_Char)0x5d,  /* [6622] */
    (xdc_Char)0x30,  /* [6623] */
    (xdc_Char)0x78,  /* [6624] */
    (xdc_Char)0x25,  /* [6625] */
    (xdc_Char)0x78,  /* [6626] */
    (xdc_Char)0x0,  /* [6627] */
    (xdc_Char)0x45,  /* [6628] */
    (xdc_Char)0x52,  /* [6629] */
    (xdc_Char)0x52,  /* [6630] */
    (xdc_Char)0x4f,  /* [6631] */
    (xdc_Char)0x52,  /* [6632] */
    (xdc_Char)0x3a,  /* [6633] */
    (xdc_Char)0x20,  /* [6634] */
    (xdc_Char)0x41,  /* [6635] */
    (xdc_Char)0x74,  /* [6636] */
    (xdc_Char)0x74,  /* [6637] */
    (xdc_Char)0x65,  /* [6638] */
    (xdc_Char)0x6d,  /* [6639] */
    (xdc_Char)0x70,  /* [6640] */
    (xdc_Char)0x74,  /* [6641] */
    (xdc_Char)0x20,  /* [6642] */
    (xdc_Char)0x74,  /* [6643] */
    (xdc_Char)0x6f,  /* [6644] */
    (xdc_Char)0x20,  /* [6645] */
    (xdc_Char)0x61,  /* [6646] */
    (xdc_Char)0x63,  /* [6647] */
    (xdc_Char)0x63,  /* [6648] */
    (xdc_Char)0x65,  /* [6649] */
    (xdc_Char)0x73,  /* [6650] */
    (xdc_Char)0x73,  /* [6651] */
    (xdc_Char)0x20,  /* [6652] */
    (xdc_Char)0x66,  /* [6653] */
    (xdc_Char)0x65,  /* [6654] */
    (xdc_Char)0x61,  /* [6655] */
    (xdc_Char)0x74,  /* [6656] */
    (xdc_Char)0x75,  /* [6657] */
    (xdc_Char)0x72,  /* [6658] */
    (xdc_Char)0x65,  /* [6659] */
    (xdc_Char)0x20,  /* [6660] */
    (xdc_Char)0x74,  /* [6661] */
    (xdc_Char)0x68,  /* [6662] */
    (xdc_Char)0x61,  /* [6663] */
    (xdc_Char)0x74,  /* [6664] */
    (xdc_Char)0x20,  /* [6665] */
    (xdc_Char)0x69,  /* [6666] */
    (xdc_Char)0x73,  /* [6667] */
    (xdc_Char)0x20,  /* [6668] */
    (xdc_Char)0x6e,  /* [6669] */
    (xdc_Char)0x6f,  /* [6670] */
    (xdc_Char)0x74,  /* [6671] */
    (xdc_Char)0x20,  /* [6672] */
    (xdc_Char)0x69,  /* [6673] */
    (xdc_Char)0x6d,  /* [6674] */
    (xdc_Char)0x70,  /* [6675] */
    (xdc_Char)0x6c,  /* [6676] */
    (xdc_Char)0x65,  /* [6677] */
    (xdc_Char)0x6d,  /* [6678] */
    (xdc_Char)0x65,  /* [6679] */
    (xdc_Char)0x6e,  /* [6680] */
    (xdc_Char)0x74,  /* [6681] */
    (xdc_Char)0x65,  /* [6682] */
    (xdc_Char)0x64,  /* [6683] */
    (xdc_Char)0x20,  /* [6684] */
    (xdc_Char)0x61,  /* [6685] */
    (xdc_Char)0x74,  /* [6686] */
    (xdc_Char)0x20,  /* [6687] */
    (xdc_Char)0x25,  /* [6688] */
    (xdc_Char)0x24,  /* [6689] */
    (xdc_Char)0x46,  /* [6690] */
    (xdc_Char)0x2e,  /* [6691] */
    (xdc_Char)0x0,  /* [6692] */
    (xdc_Char)0x45,  /* [6693] */
    (xdc_Char)0x52,  /* [6694] */
    (xdc_Char)0x52,  /* [6695] */
    (xdc_Char)0x4f,  /* [6696] */
    (xdc_Char)0x52,  /* [6697] */
    (xdc_Char)0x3a,  /* [6698] */
    (xdc_Char)0x20,  /* [6699] */
    (xdc_Char)0x53,  /* [6700] */
    (xdc_Char)0x74,  /* [6701] */
    (xdc_Char)0x61,  /* [6702] */
    (xdc_Char)0x63,  /* [6703] */
    (xdc_Char)0x6b,  /* [6704] */
    (xdc_Char)0x20,  /* [6705] */
    (xdc_Char)0x4f,  /* [6706] */
    (xdc_Char)0x76,  /* [6707] */
    (xdc_Char)0x65,  /* [6708] */
    (xdc_Char)0x72,  /* [6709] */
    (xdc_Char)0x66,  /* [6710] */
    (xdc_Char)0x6c,  /* [6711] */
    (xdc_Char)0x6f,  /* [6712] */
    (xdc_Char)0x77,  /* [6713] */
    (xdc_Char)0x20,  /* [6714] */
    (xdc_Char)0x64,  /* [6715] */
    (xdc_Char)0x65,  /* [6716] */
    (xdc_Char)0x74,  /* [6717] */
    (xdc_Char)0x65,  /* [6718] */
    (xdc_Char)0x63,  /* [6719] */
    (xdc_Char)0x74,  /* [6720] */
    (xdc_Char)0x65,  /* [6721] */
    (xdc_Char)0x64,  /* [6722] */
    (xdc_Char)0x20,  /* [6723] */
    (xdc_Char)0x61,  /* [6724] */
    (xdc_Char)0x74,  /* [6725] */
    (xdc_Char)0x20,  /* [6726] */
    (xdc_Char)0x25,  /* [6727] */
    (xdc_Char)0x24,  /* [6728] */
    (xdc_Char)0x46,  /* [6729] */
    (xdc_Char)0x2e,  /* [6730] */
    (xdc_Char)0x0,  /* [6731] */
    (xdc_Char)0x45,  /* [6732] */
    (xdc_Char)0x52,  /* [6733] */
    (xdc_Char)0x52,  /* [6734] */
    (xdc_Char)0x4f,  /* [6735] */
    (xdc_Char)0x52,  /* [6736] */
    (xdc_Char)0x3a,  /* [6737] */
    (xdc_Char)0x20,  /* [6738] */
    (xdc_Char)0x49,  /* [6739] */
    (xdc_Char)0x6c,  /* [6740] */
    (xdc_Char)0x6c,  /* [6741] */
    (xdc_Char)0x65,  /* [6742] */
    (xdc_Char)0x67,  /* [6743] */
    (xdc_Char)0x61,  /* [6744] */
    (xdc_Char)0x6c,  /* [6745] */
    (xdc_Char)0x20,  /* [6746] */
    (xdc_Char)0x49,  /* [6747] */
    (xdc_Char)0x6e,  /* [6748] */
    (xdc_Char)0x73,  /* [6749] */
    (xdc_Char)0x74,  /* [6750] */
    (xdc_Char)0x72,  /* [6751] */
    (xdc_Char)0x75,  /* [6752] */
    (xdc_Char)0x63,  /* [6753] */
    (xdc_Char)0x74,  /* [6754] */
    (xdc_Char)0x69,  /* [6755] */
    (xdc_Char)0x6f,  /* [6756] */
    (xdc_Char)0x6e,  /* [6757] */
    (xdc_Char)0x20,  /* [6758] */
    (xdc_Char)0x65,  /* [6759] */
    (xdc_Char)0x78,  /* [6760] */
    (xdc_Char)0x65,  /* [6761] */
    (xdc_Char)0x63,  /* [6762] */
    (xdc_Char)0x75,  /* [6763] */
    (xdc_Char)0x74,  /* [6764] */
    (xdc_Char)0x65,  /* [6765] */
    (xdc_Char)0x64,  /* [6766] */
    (xdc_Char)0x20,  /* [6767] */
    (xdc_Char)0x61,  /* [6768] */
    (xdc_Char)0x74,  /* [6769] */
    (xdc_Char)0x20,  /* [6770] */
    (xdc_Char)0x25,  /* [6771] */
    (xdc_Char)0x24,  /* [6772] */
    (xdc_Char)0x46,  /* [6773] */
    (xdc_Char)0x2e,  /* [6774] */
    (xdc_Char)0x0,  /* [6775] */
    (xdc_Char)0x45,  /* [6776] */
    (xdc_Char)0x52,  /* [6777] */
    (xdc_Char)0x52,  /* [6778] */
    (xdc_Char)0x4f,  /* [6779] */
    (xdc_Char)0x52,  /* [6780] */
    (xdc_Char)0x3a,  /* [6781] */
    (xdc_Char)0x20,  /* [6782] */
    (xdc_Char)0x45,  /* [6783] */
    (xdc_Char)0x6e,  /* [6784] */
    (xdc_Char)0x74,  /* [6785] */
    (xdc_Char)0x72,  /* [6786] */
    (xdc_Char)0x79,  /* [6787] */
    (xdc_Char)0x20,  /* [6788] */
    (xdc_Char)0x50,  /* [6789] */
    (xdc_Char)0x6f,  /* [6790] */
    (xdc_Char)0x69,  /* [6791] */
    (xdc_Char)0x6e,  /* [6792] */
    (xdc_Char)0x74,  /* [6793] */
    (xdc_Char)0x20,  /* [6794] */
    (xdc_Char)0x4e,  /* [6795] */
    (xdc_Char)0x6f,  /* [6796] */
    (xdc_Char)0x74,  /* [6797] */
    (xdc_Char)0x20,  /* [6798] */
    (xdc_Char)0x46,  /* [6799] */
    (xdc_Char)0x6f,  /* [6800] */
    (xdc_Char)0x75,  /* [6801] */
    (xdc_Char)0x6e,  /* [6802] */
    (xdc_Char)0x64,  /* [6803] */
    (xdc_Char)0x20,  /* [6804] */
    (xdc_Char)0x61,  /* [6805] */
    (xdc_Char)0x74,  /* [6806] */
    (xdc_Char)0x20,  /* [6807] */
    (xdc_Char)0x25,  /* [6808] */
    (xdc_Char)0x24,  /* [6809] */
    (xdc_Char)0x46,  /* [6810] */
    (xdc_Char)0x2e,  /* [6811] */
    (xdc_Char)0x0,  /* [6812] */
    (xdc_Char)0x45,  /* [6813] */
    (xdc_Char)0x52,  /* [6814] */
    (xdc_Char)0x52,  /* [6815] */
    (xdc_Char)0x4f,  /* [6816] */
    (xdc_Char)0x52,  /* [6817] */
    (xdc_Char)0x3a,  /* [6818] */
    (xdc_Char)0x20,  /* [6819] */
    (xdc_Char)0x4d,  /* [6820] */
    (xdc_Char)0x6f,  /* [6821] */
    (xdc_Char)0x64,  /* [6822] */
    (xdc_Char)0x75,  /* [6823] */
    (xdc_Char)0x6c,  /* [6824] */
    (xdc_Char)0x65,  /* [6825] */
    (xdc_Char)0x20,  /* [6826] */
    (xdc_Char)0x6e,  /* [6827] */
    (xdc_Char)0x6f,  /* [6828] */
    (xdc_Char)0x74,  /* [6829] */
    (xdc_Char)0x20,  /* [6830] */
    (xdc_Char)0x66,  /* [6831] */
    (xdc_Char)0x6f,  /* [6832] */
    (xdc_Char)0x75,  /* [6833] */
    (xdc_Char)0x6e,  /* [6834] */
    (xdc_Char)0x64,  /* [6835] */
    (xdc_Char)0x20,  /* [6836] */
    (xdc_Char)0x61,  /* [6837] */
    (xdc_Char)0x74,  /* [6838] */
    (xdc_Char)0x20,  /* [6839] */
    (xdc_Char)0x25,  /* [6840] */
    (xdc_Char)0x24,  /* [6841] */
    (xdc_Char)0x46,  /* [6842] */
    (xdc_Char)0x2e,  /* [6843] */
    (xdc_Char)0x20,  /* [6844] */
    (xdc_Char)0x5b,  /* [6845] */
    (xdc_Char)0x4d,  /* [6846] */
    (xdc_Char)0x4f,  /* [6847] */
    (xdc_Char)0x44,  /* [6848] */
    (xdc_Char)0x55,  /* [6849] */
    (xdc_Char)0x4c,  /* [6850] */
    (xdc_Char)0x45,  /* [6851] */
    (xdc_Char)0x5f,  /* [6852] */
    (xdc_Char)0x49,  /* [6853] */
    (xdc_Char)0x44,  /* [6854] */
    (xdc_Char)0x5d,  /* [6855] */
    (xdc_Char)0x30,  /* [6856] */
    (xdc_Char)0x78,  /* [6857] */
    (xdc_Char)0x25,  /* [6858] */
    (xdc_Char)0x78,  /* [6859] */
    (xdc_Char)0x2e,  /* [6860] */
    (xdc_Char)0x0,  /* [6861] */
    (xdc_Char)0x45,  /* [6862] */
    (xdc_Char)0x52,  /* [6863] */
    (xdc_Char)0x52,  /* [6864] */
    (xdc_Char)0x4f,  /* [6865] */
    (xdc_Char)0x52,  /* [6866] */
    (xdc_Char)0x3a,  /* [6867] */
    (xdc_Char)0x20,  /* [6868] */
    (xdc_Char)0x46,  /* [6869] */
    (xdc_Char)0x6c,  /* [6870] */
    (xdc_Char)0x6f,  /* [6871] */
    (xdc_Char)0x61,  /* [6872] */
    (xdc_Char)0x74,  /* [6873] */
    (xdc_Char)0x69,  /* [6874] */
    (xdc_Char)0x6e,  /* [6875] */
    (xdc_Char)0x67,  /* [6876] */
    (xdc_Char)0x20,  /* [6877] */
    (xdc_Char)0x50,  /* [6878] */
    (xdc_Char)0x6f,  /* [6879] */
    (xdc_Char)0x69,  /* [6880] */
    (xdc_Char)0x6e,  /* [6881] */
    (xdc_Char)0x74,  /* [6882] */
    (xdc_Char)0x20,  /* [6883] */
    (xdc_Char)0x45,  /* [6884] */
    (xdc_Char)0x72,  /* [6885] */
    (xdc_Char)0x72,  /* [6886] */
    (xdc_Char)0x6f,  /* [6887] */
    (xdc_Char)0x72,  /* [6888] */
    (xdc_Char)0x20,  /* [6889] */
    (xdc_Char)0x61,  /* [6890] */
    (xdc_Char)0x74,  /* [6891] */
    (xdc_Char)0x20,  /* [6892] */
    (xdc_Char)0x25,  /* [6893] */
    (xdc_Char)0x24,  /* [6894] */
    (xdc_Char)0x46,  /* [6895] */
    (xdc_Char)0x2e,  /* [6896] */
    (xdc_Char)0x0,  /* [6897] */
    (xdc_Char)0x45,  /* [6898] */
    (xdc_Char)0x52,  /* [6899] */
    (xdc_Char)0x52,  /* [6900] */
    (xdc_Char)0x4f,  /* [6901] */
    (xdc_Char)0x52,  /* [6902] */
    (xdc_Char)0x3a,  /* [6903] */
    (xdc_Char)0x20,  /* [6904] */
    (xdc_Char)0x49,  /* [6905] */
    (xdc_Char)0x6e,  /* [6906] */
    (xdc_Char)0x76,  /* [6907] */
    (xdc_Char)0x61,  /* [6908] */
    (xdc_Char)0x6c,  /* [6909] */
    (xdc_Char)0x69,  /* [6910] */
    (xdc_Char)0x64,  /* [6911] */
    (xdc_Char)0x20,  /* [6912] */
    (xdc_Char)0x50,  /* [6913] */
    (xdc_Char)0x61,  /* [6914] */
    (xdc_Char)0x72,  /* [6915] */
    (xdc_Char)0x61,  /* [6916] */
    (xdc_Char)0x6d,  /* [6917] */
    (xdc_Char)0x65,  /* [6918] */
    (xdc_Char)0x74,  /* [6919] */
    (xdc_Char)0x65,  /* [6920] */
    (xdc_Char)0x72,  /* [6921] */
    (xdc_Char)0x20,  /* [6922] */
    (xdc_Char)0x61,  /* [6923] */
    (xdc_Char)0x74,  /* [6924] */
    (xdc_Char)0x20,  /* [6925] */
    (xdc_Char)0x25,  /* [6926] */
    (xdc_Char)0x24,  /* [6927] */
    (xdc_Char)0x46,  /* [6928] */
    (xdc_Char)0x2e,  /* [6929] */
    (xdc_Char)0x20,  /* [6930] */
    (xdc_Char)0x5b,  /* [6931] */
    (xdc_Char)0x50,  /* [6932] */
    (xdc_Char)0x61,  /* [6933] */
    (xdc_Char)0x72,  /* [6934] */
    (xdc_Char)0x61,  /* [6935] */
    (xdc_Char)0x6d,  /* [6936] */
    (xdc_Char)0x4e,  /* [6937] */
    (xdc_Char)0x75,  /* [6938] */
    (xdc_Char)0x6d,  /* [6939] */
    (xdc_Char)0x5d,  /* [6940] */
    (xdc_Char)0x25,  /* [6941] */
    (xdc_Char)0x64,  /* [6942] */
    (xdc_Char)0x20,  /* [6943] */
    (xdc_Char)0x5b,  /* [6944] */
    (xdc_Char)0x50,  /* [6945] */
    (xdc_Char)0x61,  /* [6946] */
    (xdc_Char)0x72,  /* [6947] */
    (xdc_Char)0x61,  /* [6948] */
    (xdc_Char)0x6d,  /* [6949] */
    (xdc_Char)0x56,  /* [6950] */
    (xdc_Char)0x61,  /* [6951] */
    (xdc_Char)0x6c,  /* [6952] */
    (xdc_Char)0x75,  /* [6953] */
    (xdc_Char)0x65,  /* [6954] */
    (xdc_Char)0x5d,  /* [6955] */
    (xdc_Char)0x30,  /* [6956] */
    (xdc_Char)0x78,  /* [6957] */
    (xdc_Char)0x25,  /* [6958] */
    (xdc_Char)0x78,  /* [6959] */
    (xdc_Char)0x0,  /* [6960] */
    (xdc_Char)0x57,  /* [6961] */
    (xdc_Char)0x41,  /* [6962] */
    (xdc_Char)0x52,  /* [6963] */
    (xdc_Char)0x4e,  /* [6964] */
    (xdc_Char)0x49,  /* [6965] */
    (xdc_Char)0x4e,  /* [6966] */
    (xdc_Char)0x47,  /* [6967] */
    (xdc_Char)0x3a,  /* [6968] */
    (xdc_Char)0x20,  /* [6969] */
    (xdc_Char)0x45,  /* [6970] */
    (xdc_Char)0x76,  /* [6971] */
    (xdc_Char)0x65,  /* [6972] */
    (xdc_Char)0x6e,  /* [6973] */
    (xdc_Char)0x74,  /* [6974] */
    (xdc_Char)0x43,  /* [6975] */
    (xdc_Char)0x6f,  /* [6976] */
    (xdc_Char)0x64,  /* [6977] */
    (xdc_Char)0x65,  /* [6978] */
    (xdc_Char)0x3a,  /* [6979] */
    (xdc_Char)0x30,  /* [6980] */
    (xdc_Char)0x78,  /* [6981] */
    (xdc_Char)0x25,  /* [6982] */
    (xdc_Char)0x78,  /* [6983] */
    (xdc_Char)0x0,  /* [6984] */
    (xdc_Char)0x57,  /* [6985] */
    (xdc_Char)0x41,  /* [6986] */
    (xdc_Char)0x52,  /* [6987] */
    (xdc_Char)0x4e,  /* [6988] */
    (xdc_Char)0x49,  /* [6989] */
    (xdc_Char)0x4e,  /* [6990] */
    (xdc_Char)0x47,  /* [6991] */
    (xdc_Char)0x3a,  /* [6992] */
    (xdc_Char)0x20,  /* [6993] */
    (xdc_Char)0x45,  /* [6994] */
    (xdc_Char)0x76,  /* [6995] */
    (xdc_Char)0x65,  /* [6996] */
    (xdc_Char)0x6e,  /* [6997] */
    (xdc_Char)0x74,  /* [6998] */
    (xdc_Char)0x43,  /* [6999] */
    (xdc_Char)0x6f,  /* [7000] */
    (xdc_Char)0x64,  /* [7001] */
    (xdc_Char)0x65,  /* [7002] */
    (xdc_Char)0x3a,  /* [7003] */
    (xdc_Char)0x30,  /* [7004] */
    (xdc_Char)0x78,  /* [7005] */
    (xdc_Char)0x25,  /* [7006] */
    (xdc_Char)0x78,  /* [7007] */
    (xdc_Char)0x2e,  /* [7008] */
    (xdc_Char)0x20,  /* [7009] */
    (xdc_Char)0x25,  /* [7010] */
    (xdc_Char)0x24,  /* [7011] */
    (xdc_Char)0x53,  /* [7012] */
    (xdc_Char)0x0,  /* [7013] */
    (xdc_Char)0x49,  /* [7014] */
    (xdc_Char)0x4e,  /* [7015] */
    (xdc_Char)0x46,  /* [7016] */
    (xdc_Char)0x4f,  /* [7017] */
    (xdc_Char)0x3a,  /* [7018] */
    (xdc_Char)0x20,  /* [7019] */
    (xdc_Char)0x45,  /* [7020] */
    (xdc_Char)0x76,  /* [7021] */
    (xdc_Char)0x65,  /* [7022] */
    (xdc_Char)0x6e,  /* [7023] */
    (xdc_Char)0x74,  /* [7024] */
    (xdc_Char)0x43,  /* [7025] */
    (xdc_Char)0x6f,  /* [7026] */
    (xdc_Char)0x64,  /* [7027] */
    (xdc_Char)0x65,  /* [7028] */
    (xdc_Char)0x3a,  /* [7029] */
    (xdc_Char)0x20,  /* [7030] */
    (xdc_Char)0x30,  /* [7031] */
    (xdc_Char)0x78,  /* [7032] */
    (xdc_Char)0x25,  /* [7033] */
    (xdc_Char)0x78,  /* [7034] */
    (xdc_Char)0x0,  /* [7035] */
    (xdc_Char)0x49,  /* [7036] */
    (xdc_Char)0x4e,  /* [7037] */
    (xdc_Char)0x46,  /* [7038] */
    (xdc_Char)0x4f,  /* [7039] */
    (xdc_Char)0x3a,  /* [7040] */
    (xdc_Char)0x20,  /* [7041] */
    (xdc_Char)0x45,  /* [7042] */
    (xdc_Char)0x76,  /* [7043] */
    (xdc_Char)0x65,  /* [7044] */
    (xdc_Char)0x6e,  /* [7045] */
    (xdc_Char)0x74,  /* [7046] */
    (xdc_Char)0x43,  /* [7047] */
    (xdc_Char)0x6f,  /* [7048] */
    (xdc_Char)0x64,  /* [7049] */
    (xdc_Char)0x65,  /* [7050] */
    (xdc_Char)0x3a,  /* [7051] */
    (xdc_Char)0x30,  /* [7052] */
    (xdc_Char)0x78,  /* [7053] */
    (xdc_Char)0x25,  /* [7054] */
    (xdc_Char)0x78,  /* [7055] */
    (xdc_Char)0x2e,  /* [7056] */
    (xdc_Char)0x20,  /* [7057] */
    (xdc_Char)0x20,  /* [7058] */
    (xdc_Char)0x25,  /* [7059] */
    (xdc_Char)0x24,  /* [7060] */
    (xdc_Char)0x53,  /* [7061] */
    (xdc_Char)0x0,  /* [7062] */
    (xdc_Char)0x44,  /* [7063] */
    (xdc_Char)0x45,  /* [7064] */
    (xdc_Char)0x54,  /* [7065] */
    (xdc_Char)0x41,  /* [7066] */
    (xdc_Char)0x49,  /* [7067] */
    (xdc_Char)0x4c,  /* [7068] */
    (xdc_Char)0x3a,  /* [7069] */
    (xdc_Char)0x20,  /* [7070] */
    (xdc_Char)0x45,  /* [7071] */
    (xdc_Char)0x76,  /* [7072] */
    (xdc_Char)0x65,  /* [7073] */
    (xdc_Char)0x6e,  /* [7074] */
    (xdc_Char)0x74,  /* [7075] */
    (xdc_Char)0x43,  /* [7076] */
    (xdc_Char)0x6f,  /* [7077] */
    (xdc_Char)0x64,  /* [7078] */
    (xdc_Char)0x65,  /* [7079] */
    (xdc_Char)0x3a,  /* [7080] */
    (xdc_Char)0x30,  /* [7081] */
    (xdc_Char)0x78,  /* [7082] */
    (xdc_Char)0x25,  /* [7083] */
    (xdc_Char)0x78,  /* [7084] */
    (xdc_Char)0x0,  /* [7085] */
    (xdc_Char)0x44,  /* [7086] */
    (xdc_Char)0x45,  /* [7087] */
    (xdc_Char)0x54,  /* [7088] */
    (xdc_Char)0x41,  /* [7089] */
    (xdc_Char)0x49,  /* [7090] */
    (xdc_Char)0x4c,  /* [7091] */
    (xdc_Char)0x3a,  /* [7092] */
    (xdc_Char)0x20,  /* [7093] */
    (xdc_Char)0x45,  /* [7094] */
    (xdc_Char)0x76,  /* [7095] */
    (xdc_Char)0x65,  /* [7096] */
    (xdc_Char)0x6e,  /* [7097] */
    (xdc_Char)0x74,  /* [7098] */
    (xdc_Char)0x43,  /* [7099] */
    (xdc_Char)0x6f,  /* [7100] */
    (xdc_Char)0x64,  /* [7101] */
    (xdc_Char)0x65,  /* [7102] */
    (xdc_Char)0x3a,  /* [7103] */
    (xdc_Char)0x30,  /* [7104] */
    (xdc_Char)0x78,  /* [7105] */
    (xdc_Char)0x25,  /* [7106] */
    (xdc_Char)0x78,  /* [7107] */
    (xdc_Char)0x2e,  /* [7108] */
    (xdc_Char)0x20,  /* [7109] */
    (xdc_Char)0x20,  /* [7110] */
    (xdc_Char)0x25,  /* [7111] */
    (xdc_Char)0x24,  /* [7112] */
    (xdc_Char)0x53,  /* [7113] */
    (xdc_Char)0x0,  /* [7114] */
    (xdc_Char)0x56,  /* [7115] */
    (xdc_Char)0x41,  /* [7116] */
    (xdc_Char)0x4c,  /* [7117] */
    (xdc_Char)0x55,  /* [7118] */
    (xdc_Char)0x45,  /* [7119] */
    (xdc_Char)0x3d,  /* [7120] */
    (xdc_Char)0x25,  /* [7121] */
    (xdc_Char)0x64,  /* [7122] */
    (xdc_Char)0x20,  /* [7123] */
    (xdc_Char)0x28,  /* [7124] */
    (xdc_Char)0x41,  /* [7125] */
    (xdc_Char)0x75,  /* [7126] */
    (xdc_Char)0x78,  /* [7127] */
    (xdc_Char)0x44,  /* [7128] */
    (xdc_Char)0x61,  /* [7129] */
    (xdc_Char)0x74,  /* [7130] */
    (xdc_Char)0x61,  /* [7131] */
    (xdc_Char)0x3d,  /* [7132] */
    (xdc_Char)0x25,  /* [7133] */
    (xdc_Char)0x64,  /* [7134] */
    (xdc_Char)0x2c,  /* [7135] */
    (xdc_Char)0x20,  /* [7136] */
    (xdc_Char)0x25,  /* [7137] */
    (xdc_Char)0x64,  /* [7138] */
    (xdc_Char)0x29,  /* [7139] */
    (xdc_Char)0x20,  /* [7140] */
    (xdc_Char)0x4b,  /* [7141] */
    (xdc_Char)0x65,  /* [7142] */
    (xdc_Char)0x79,  /* [7143] */
    (xdc_Char)0x3a,  /* [7144] */
    (xdc_Char)0x25,  /* [7145] */
    (xdc_Char)0x24,  /* [7146] */
    (xdc_Char)0x53,  /* [7147] */
    (xdc_Char)0x0,  /* [7148] */
    (xdc_Char)0x4c,  /* [7149] */
    (xdc_Char)0x4d,  /* [7150] */
    (xdc_Char)0x5f,  /* [7151] */
    (xdc_Char)0x62,  /* [7152] */
    (xdc_Char)0x65,  /* [7153] */
    (xdc_Char)0x67,  /* [7154] */
    (xdc_Char)0x69,  /* [7155] */
    (xdc_Char)0x6e,  /* [7156] */
    (xdc_Char)0x3a,  /* [7157] */
    (xdc_Char)0x20,  /* [7158] */
    (xdc_Char)0x68,  /* [7159] */
    (xdc_Char)0x77,  /* [7160] */
    (xdc_Char)0x69,  /* [7161] */
    (xdc_Char)0x3a,  /* [7162] */
    (xdc_Char)0x20,  /* [7163] */
    (xdc_Char)0x30,  /* [7164] */
    (xdc_Char)0x78,  /* [7165] */
    (xdc_Char)0x25,  /* [7166] */
    (xdc_Char)0x78,  /* [7167] */
    (xdc_Char)0x2c,  /* [7168] */
    (xdc_Char)0x20,  /* [7169] */
    (xdc_Char)0x66,  /* [7170] */
    (xdc_Char)0x75,  /* [7171] */
    (xdc_Char)0x6e,  /* [7172] */
    (xdc_Char)0x63,  /* [7173] */
    (xdc_Char)0x3a,  /* [7174] */
    (xdc_Char)0x20,  /* [7175] */
    (xdc_Char)0x30,  /* [7176] */
    (xdc_Char)0x78,  /* [7177] */
    (xdc_Char)0x25,  /* [7178] */
    (xdc_Char)0x78,  /* [7179] */
    (xdc_Char)0x2c,  /* [7180] */
    (xdc_Char)0x20,  /* [7181] */
    (xdc_Char)0x70,  /* [7182] */
    (xdc_Char)0x72,  /* [7183] */
    (xdc_Char)0x65,  /* [7184] */
    (xdc_Char)0x54,  /* [7185] */
    (xdc_Char)0x68,  /* [7186] */
    (xdc_Char)0x72,  /* [7187] */
    (xdc_Char)0x65,  /* [7188] */
    (xdc_Char)0x61,  /* [7189] */
    (xdc_Char)0x64,  /* [7190] */
    (xdc_Char)0x3a,  /* [7191] */
    (xdc_Char)0x20,  /* [7192] */
    (xdc_Char)0x25,  /* [7193] */
    (xdc_Char)0x64,  /* [7194] */
    (xdc_Char)0x2c,  /* [7195] */
    (xdc_Char)0x20,  /* [7196] */
    (xdc_Char)0x69,  /* [7197] */
    (xdc_Char)0x6e,  /* [7198] */
    (xdc_Char)0x74,  /* [7199] */
    (xdc_Char)0x4e,  /* [7200] */
    (xdc_Char)0x75,  /* [7201] */
    (xdc_Char)0x6d,  /* [7202] */
    (xdc_Char)0x3a,  /* [7203] */
    (xdc_Char)0x20,  /* [7204] */
    (xdc_Char)0x25,  /* [7205] */
    (xdc_Char)0x64,  /* [7206] */
    (xdc_Char)0x2c,  /* [7207] */
    (xdc_Char)0x20,  /* [7208] */
    (xdc_Char)0x69,  /* [7209] */
    (xdc_Char)0x72,  /* [7210] */
    (xdc_Char)0x70,  /* [7211] */
    (xdc_Char)0x3a,  /* [7212] */
    (xdc_Char)0x20,  /* [7213] */
    (xdc_Char)0x30,  /* [7214] */
    (xdc_Char)0x78,  /* [7215] */
    (xdc_Char)0x25,  /* [7216] */
    (xdc_Char)0x78,  /* [7217] */
    (xdc_Char)0x0,  /* [7218] */
    (xdc_Char)0x4c,  /* [7219] */
    (xdc_Char)0x44,  /* [7220] */
    (xdc_Char)0x5f,  /* [7221] */
    (xdc_Char)0x65,  /* [7222] */
    (xdc_Char)0x6e,  /* [7223] */
    (xdc_Char)0x64,  /* [7224] */
    (xdc_Char)0x3a,  /* [7225] */
    (xdc_Char)0x20,  /* [7226] */
    (xdc_Char)0x68,  /* [7227] */
    (xdc_Char)0x77,  /* [7228] */
    (xdc_Char)0x69,  /* [7229] */
    (xdc_Char)0x3a,  /* [7230] */
    (xdc_Char)0x20,  /* [7231] */
    (xdc_Char)0x30,  /* [7232] */
    (xdc_Char)0x78,  /* [7233] */
    (xdc_Char)0x25,  /* [7234] */
    (xdc_Char)0x78,  /* [7235] */
    (xdc_Char)0x0,  /* [7236] */
    (xdc_Char)0x4c,  /* [7237] */
    (xdc_Char)0x6f,  /* [7238] */
    (xdc_Char)0x67,  /* [7239] */
    (xdc_Char)0x67,  /* [7240] */
    (xdc_Char)0x65,  /* [7241] */
    (xdc_Char)0x72,  /* [7242] */
    (xdc_Char)0x53,  /* [7243] */
    (xdc_Char)0x74,  /* [7244] */
    (xdc_Char)0x6f,  /* [7245] */
    (xdc_Char)0x70,  /* [7246] */
    (xdc_Char)0x4d,  /* [7247] */
    (xdc_Char)0x6f,  /* [7248] */
    (xdc_Char)0x64,  /* [7249] */
    (xdc_Char)0x65,  /* [7250] */
    (xdc_Char)0x20,  /* [7251] */
    (xdc_Char)0x54,  /* [7252] */
    (xdc_Char)0x65,  /* [7253] */
    (xdc_Char)0x73,  /* [7254] */
    (xdc_Char)0x74,  /* [7255] */
    (xdc_Char)0x0,  /* [7256] */
    (xdc_Char)0x4c,  /* [7257] */
    (xdc_Char)0x53,  /* [7258] */
    (xdc_Char)0x5f,  /* [7259] */
    (xdc_Char)0x63,  /* [7260] */
    (xdc_Char)0x70,  /* [7261] */
    (xdc_Char)0x75,  /* [7262] */
    (xdc_Char)0x4c,  /* [7263] */
    (xdc_Char)0x6f,  /* [7264] */
    (xdc_Char)0x61,  /* [7265] */
    (xdc_Char)0x64,  /* [7266] */
    (xdc_Char)0x3a,  /* [7267] */
    (xdc_Char)0x20,  /* [7268] */
    (xdc_Char)0x25,  /* [7269] */
    (xdc_Char)0x64,  /* [7270] */
    (xdc_Char)0x25,  /* [7271] */
    (xdc_Char)0x25,  /* [7272] */
    (xdc_Char)0x0,  /* [7273] */
    (xdc_Char)0x4c,  /* [7274] */
    (xdc_Char)0x53,  /* [7275] */
    (xdc_Char)0x5f,  /* [7276] */
    (xdc_Char)0x68,  /* [7277] */
    (xdc_Char)0x77,  /* [7278] */
    (xdc_Char)0x69,  /* [7279] */
    (xdc_Char)0x4c,  /* [7280] */
    (xdc_Char)0x6f,  /* [7281] */
    (xdc_Char)0x61,  /* [7282] */
    (xdc_Char)0x64,  /* [7283] */
    (xdc_Char)0x3a,  /* [7284] */
    (xdc_Char)0x20,  /* [7285] */
    (xdc_Char)0x25,  /* [7286] */
    (xdc_Char)0x64,  /* [7287] */
    (xdc_Char)0x2c,  /* [7288] */
    (xdc_Char)0x25,  /* [7289] */
    (xdc_Char)0x64,  /* [7290] */
    (xdc_Char)0x0,  /* [7291] */
    (xdc_Char)0x4c,  /* [7292] */
    (xdc_Char)0x53,  /* [7293] */
    (xdc_Char)0x5f,  /* [7294] */
    (xdc_Char)0x73,  /* [7295] */
    (xdc_Char)0x77,  /* [7296] */
    (xdc_Char)0x69,  /* [7297] */
    (xdc_Char)0x4c,  /* [7298] */
    (xdc_Char)0x6f,  /* [7299] */
    (xdc_Char)0x61,  /* [7300] */
    (xdc_Char)0x64,  /* [7301] */
    (xdc_Char)0x3a,  /* [7302] */
    (xdc_Char)0x20,  /* [7303] */
    (xdc_Char)0x25,  /* [7304] */
    (xdc_Char)0x64,  /* [7305] */
    (xdc_Char)0x2c,  /* [7306] */
    (xdc_Char)0x25,  /* [7307] */
    (xdc_Char)0x64,  /* [7308] */
    (xdc_Char)0x0,  /* [7309] */
    (xdc_Char)0x4c,  /* [7310] */
    (xdc_Char)0x53,  /* [7311] */
    (xdc_Char)0x5f,  /* [7312] */
    (xdc_Char)0x74,  /* [7313] */
    (xdc_Char)0x61,  /* [7314] */
    (xdc_Char)0x73,  /* [7315] */
    (xdc_Char)0x6b,  /* [7316] */
    (xdc_Char)0x4c,  /* [7317] */
    (xdc_Char)0x6f,  /* [7318] */
    (xdc_Char)0x61,  /* [7319] */
    (xdc_Char)0x64,  /* [7320] */
    (xdc_Char)0x3a,  /* [7321] */
    (xdc_Char)0x20,  /* [7322] */
    (xdc_Char)0x30,  /* [7323] */
    (xdc_Char)0x78,  /* [7324] */
    (xdc_Char)0x25,  /* [7325] */
    (xdc_Char)0x78,  /* [7326] */
    (xdc_Char)0x2c,  /* [7327] */
    (xdc_Char)0x25,  /* [7328] */
    (xdc_Char)0x64,  /* [7329] */
    (xdc_Char)0x2c,  /* [7330] */
    (xdc_Char)0x25,  /* [7331] */
    (xdc_Char)0x64,  /* [7332] */
    (xdc_Char)0x2c,  /* [7333] */
    (xdc_Char)0x30,  /* [7334] */
    (xdc_Char)0x78,  /* [7335] */
    (xdc_Char)0x25,  /* [7336] */
    (xdc_Char)0x78,  /* [7337] */
    (xdc_Char)0x0,  /* [7338] */
    (xdc_Char)0x78,  /* [7339] */
    (xdc_Char)0x64,  /* [7340] */
    (xdc_Char)0x63,  /* [7341] */
    (xdc_Char)0x2e,  /* [7342] */
    (xdc_Char)0x0,  /* [7343] */
    (xdc_Char)0x72,  /* [7344] */
    (xdc_Char)0x75,  /* [7345] */
    (xdc_Char)0x6e,  /* [7346] */
    (xdc_Char)0x74,  /* [7347] */
    (xdc_Char)0x69,  /* [7348] */
    (xdc_Char)0x6d,  /* [7349] */
    (xdc_Char)0x65,  /* [7350] */
    (xdc_Char)0x2e,  /* [7351] */
    (xdc_Char)0x0,  /* [7352] */
    (xdc_Char)0x41,  /* [7353] */
    (xdc_Char)0x73,  /* [7354] */
    (xdc_Char)0x73,  /* [7355] */
    (xdc_Char)0x65,  /* [7356] */
    (xdc_Char)0x72,  /* [7357] */
    (xdc_Char)0x74,  /* [7358] */
    (xdc_Char)0x0,  /* [7359] */
    (xdc_Char)0x43,  /* [7360] */
    (xdc_Char)0x6f,  /* [7361] */
    (xdc_Char)0x72,  /* [7362] */
    (xdc_Char)0x65,  /* [7363] */
    (xdc_Char)0x0,  /* [7364] */
    (xdc_Char)0x44,  /* [7365] */
    (xdc_Char)0x65,  /* [7366] */
    (xdc_Char)0x66,  /* [7367] */
    (xdc_Char)0x61,  /* [7368] */
    (xdc_Char)0x75,  /* [7369] */
    (xdc_Char)0x6c,  /* [7370] */
    (xdc_Char)0x74,  /* [7371] */
    (xdc_Char)0x73,  /* [7372] */
    (xdc_Char)0x0,  /* [7373] */
    (xdc_Char)0x44,  /* [7374] */
    (xdc_Char)0x69,  /* [7375] */
    (xdc_Char)0x61,  /* [7376] */
    (xdc_Char)0x67,  /* [7377] */
    (xdc_Char)0x73,  /* [7378] */
    (xdc_Char)0x0,  /* [7379] */
    (xdc_Char)0x45,  /* [7380] */
    (xdc_Char)0x72,  /* [7381] */
    (xdc_Char)0x72,  /* [7382] */
    (xdc_Char)0x6f,  /* [7383] */
    (xdc_Char)0x72,  /* [7384] */
    (xdc_Char)0x0,  /* [7385] */
    (xdc_Char)0x47,  /* [7386] */
    (xdc_Char)0x61,  /* [7387] */
    (xdc_Char)0x74,  /* [7388] */
    (xdc_Char)0x65,  /* [7389] */
    (xdc_Char)0x0,  /* [7390] */
    (xdc_Char)0x4c,  /* [7391] */
    (xdc_Char)0x6f,  /* [7392] */
    (xdc_Char)0x67,  /* [7393] */
    (xdc_Char)0x0,  /* [7394] */
    (xdc_Char)0x4d,  /* [7395] */
    (xdc_Char)0x61,  /* [7396] */
    (xdc_Char)0x69,  /* [7397] */
    (xdc_Char)0x6e,  /* [7398] */
    (xdc_Char)0x0,  /* [7399] */
    (xdc_Char)0x4d,  /* [7400] */
    (xdc_Char)0x65,  /* [7401] */
    (xdc_Char)0x6d,  /* [7402] */
    (xdc_Char)0x6f,  /* [7403] */
    (xdc_Char)0x72,  /* [7404] */
    (xdc_Char)0x79,  /* [7405] */
    (xdc_Char)0x0,  /* [7406] */
    (xdc_Char)0x52,  /* [7407] */
    (xdc_Char)0x65,  /* [7408] */
    (xdc_Char)0x67,  /* [7409] */
    (xdc_Char)0x69,  /* [7410] */
    (xdc_Char)0x73,  /* [7411] */
    (xdc_Char)0x74,  /* [7412] */
    (xdc_Char)0x72,  /* [7413] */
    (xdc_Char)0x79,  /* [7414] */
    (xdc_Char)0x0,  /* [7415] */
    (xdc_Char)0x53,  /* [7416] */
    (xdc_Char)0x74,  /* [7417] */
    (xdc_Char)0x61,  /* [7418] */
    (xdc_Char)0x72,  /* [7419] */
    (xdc_Char)0x74,  /* [7420] */
    (xdc_Char)0x75,  /* [7421] */
    (xdc_Char)0x70,  /* [7422] */
    (xdc_Char)0x0,  /* [7423] */
    (xdc_Char)0x53,  /* [7424] */
    (xdc_Char)0x79,  /* [7425] */
    (xdc_Char)0x73,  /* [7426] */
    (xdc_Char)0x74,  /* [7427] */
    (xdc_Char)0x65,  /* [7428] */
    (xdc_Char)0x6d,  /* [7429] */
    (xdc_Char)0x0,  /* [7430] */
    (xdc_Char)0x53,  /* [7431] */
    (xdc_Char)0x79,  /* [7432] */
    (xdc_Char)0x73,  /* [7433] */
    (xdc_Char)0x4d,  /* [7434] */
    (xdc_Char)0x69,  /* [7435] */
    (xdc_Char)0x6e,  /* [7436] */
    (xdc_Char)0x0,  /* [7437] */
    (xdc_Char)0x54,  /* [7438] */
    (xdc_Char)0x65,  /* [7439] */
    (xdc_Char)0x78,  /* [7440] */
    (xdc_Char)0x74,  /* [7441] */
    (xdc_Char)0x0,  /* [7442] */
    (xdc_Char)0x54,  /* [7443] */
    (xdc_Char)0x69,  /* [7444] */
    (xdc_Char)0x6d,  /* [7445] */
    (xdc_Char)0x65,  /* [7446] */
    (xdc_Char)0x73,  /* [7447] */
    (xdc_Char)0x74,  /* [7448] */
    (xdc_Char)0x61,  /* [7449] */
    (xdc_Char)0x6d,  /* [7450] */
    (xdc_Char)0x70,  /* [7451] */
    (xdc_Char)0x0,  /* [7452] */
    (xdc_Char)0x54,  /* [7453] */
    (xdc_Char)0x79,  /* [7454] */
    (xdc_Char)0x70,  /* [7455] */
    (xdc_Char)0x65,  /* [7456] */
    (xdc_Char)0x73,  /* [7457] */
    (xdc_Char)0x0,  /* [7458] */
    (xdc_Char)0x74,  /* [7459] */
    (xdc_Char)0x69,  /* [7460] */
    (xdc_Char)0x2e,  /* [7461] */
    (xdc_Char)0x0,  /* [7462] */
    (xdc_Char)0x73,  /* [7463] */
    (xdc_Char)0x79,  /* [7464] */
    (xdc_Char)0x73,  /* [7465] */
    (xdc_Char)0x62,  /* [7466] */
    (xdc_Char)0x69,  /* [7467] */
    (xdc_Char)0x6f,  /* [7468] */
    (xdc_Char)0x73,  /* [7469] */
    (xdc_Char)0x2e,  /* [7470] */
    (xdc_Char)0x0,  /* [7471] */
    (xdc_Char)0x42,  /* [7472] */
    (xdc_Char)0x49,  /* [7473] */
    (xdc_Char)0x4f,  /* [7474] */
    (xdc_Char)0x53,  /* [7475] */
    (xdc_Char)0x0,  /* [7476] */
    (xdc_Char)0x66,  /* [7477] */
    (xdc_Char)0x61,  /* [7478] */
    (xdc_Char)0x6d,  /* [7479] */
    (xdc_Char)0x69,  /* [7480] */
    (xdc_Char)0x6c,  /* [7481] */
    (xdc_Char)0x79,  /* [7482] */
    (xdc_Char)0x2e,  /* [7483] */
    (xdc_Char)0x0,  /* [7484] */
    (xdc_Char)0x61,  /* [7485] */
    (xdc_Char)0x72,  /* [7486] */
    (xdc_Char)0x6d,  /* [7487] */
    (xdc_Char)0x2e,  /* [7488] */
    (xdc_Char)0x0,  /* [7489] */
    (xdc_Char)0x6d,  /* [7490] */
    (xdc_Char)0x73,  /* [7491] */
    (xdc_Char)0x70,  /* [7492] */
    (xdc_Char)0x34,  /* [7493] */
    (xdc_Char)0x33,  /* [7494] */
    (xdc_Char)0x32,  /* [7495] */
    (xdc_Char)0x2e,  /* [7496] */
    (xdc_Char)0x0,  /* [7497] */
    (xdc_Char)0x69,  /* [7498] */
    (xdc_Char)0x6e,  /* [7499] */
    (xdc_Char)0x69,  /* [7500] */
    (xdc_Char)0x74,  /* [7501] */
    (xdc_Char)0x2e,  /* [7502] */
    (xdc_Char)0x0,  /* [7503] */
    (xdc_Char)0x42,  /* [7504] */
    (xdc_Char)0x6f,  /* [7505] */
    (xdc_Char)0x6f,  /* [7506] */
    (xdc_Char)0x74,  /* [7507] */
    (xdc_Char)0x0,  /* [7508] */
    (xdc_Char)0x6b,  /* [7509] */
    (xdc_Char)0x6e,  /* [7510] */
    (xdc_Char)0x6c,  /* [7511] */
    (xdc_Char)0x2e,  /* [7512] */
    (xdc_Char)0x0,  /* [7513] */
    (xdc_Char)0x43,  /* [7514] */
    (xdc_Char)0x6c,  /* [7515] */
    (xdc_Char)0x6f,  /* [7516] */
    (xdc_Char)0x63,  /* [7517] */
    (xdc_Char)0x6b,  /* [7518] */
    (xdc_Char)0x0,  /* [7519] */
    (xdc_Char)0x49,  /* [7520] */
    (xdc_Char)0x64,  /* [7521] */
    (xdc_Char)0x6c,  /* [7522] */
    (xdc_Char)0x65,  /* [7523] */
    (xdc_Char)0x0,  /* [7524] */
    (xdc_Char)0x49,  /* [7525] */
    (xdc_Char)0x6e,  /* [7526] */
    (xdc_Char)0x74,  /* [7527] */
    (xdc_Char)0x72,  /* [7528] */
    (xdc_Char)0x69,  /* [7529] */
    (xdc_Char)0x6e,  /* [7530] */
    (xdc_Char)0x73,  /* [7531] */
    (xdc_Char)0x69,  /* [7532] */
    (xdc_Char)0x63,  /* [7533] */
    (xdc_Char)0x73,  /* [7534] */
    (xdc_Char)0x0,  /* [7535] */
    (xdc_Char)0x45,  /* [7536] */
    (xdc_Char)0x76,  /* [7537] */
    (xdc_Char)0x65,  /* [7538] */
    (xdc_Char)0x6e,  /* [7539] */
    (xdc_Char)0x74,  /* [7540] */
    (xdc_Char)0x0,  /* [7541] */
    (xdc_Char)0x51,  /* [7542] */
    (xdc_Char)0x75,  /* [7543] */
    (xdc_Char)0x65,  /* [7544] */
    (xdc_Char)0x75,  /* [7545] */
    (xdc_Char)0x65,  /* [7546] */
    (xdc_Char)0x0,  /* [7547] */
    (xdc_Char)0x53,  /* [7548] */
    (xdc_Char)0x65,  /* [7549] */
    (xdc_Char)0x6d,  /* [7550] */
    (xdc_Char)0x61,  /* [7551] */
    (xdc_Char)0x70,  /* [7552] */
    (xdc_Char)0x68,  /* [7553] */
    (xdc_Char)0x6f,  /* [7554] */
    (xdc_Char)0x72,  /* [7555] */
    (xdc_Char)0x65,  /* [7556] */
    (xdc_Char)0x0,  /* [7557] */
    (xdc_Char)0x53,  /* [7558] */
    (xdc_Char)0x77,  /* [7559] */
    (xdc_Char)0x69,  /* [7560] */
    (xdc_Char)0x0,  /* [7561] */
    (xdc_Char)0x54,  /* [7562] */
    (xdc_Char)0x61,  /* [7563] */
    (xdc_Char)0x73,  /* [7564] */
    (xdc_Char)0x6b,  /* [7565] */
    (xdc_Char)0x0,  /* [7566] */
    (xdc_Char)0x68,  /* [7567] */
    (xdc_Char)0x61,  /* [7568] */
    (xdc_Char)0x6c,  /* [7569] */
    (xdc_Char)0x2e,  /* [7570] */
    (xdc_Char)0x0,  /* [7571] */
    (xdc_Char)0x48,  /* [7572] */
    (xdc_Char)0x77,  /* [7573] */
    (xdc_Char)0x69,  /* [7574] */
    (xdc_Char)0x0,  /* [7575] */
    (xdc_Char)0x68,  /* [7576] */
    (xdc_Char)0x65,  /* [7577] */
    (xdc_Char)0x61,  /* [7578] */
    (xdc_Char)0x70,  /* [7579] */
    (xdc_Char)0x73,  /* [7580] */
    (xdc_Char)0x2e,  /* [7581] */
    (xdc_Char)0x0,  /* [7582] */
    (xdc_Char)0x48,  /* [7583] */
    (xdc_Char)0x65,  /* [7584] */
    (xdc_Char)0x61,  /* [7585] */
    (xdc_Char)0x70,  /* [7586] */
    (xdc_Char)0x4d,  /* [7587] */
    (xdc_Char)0x65,  /* [7588] */
    (xdc_Char)0x6d,  /* [7589] */
    (xdc_Char)0x0,  /* [7590] */
    (xdc_Char)0x75,  /* [7591] */
    (xdc_Char)0x69,  /* [7592] */
    (xdc_Char)0x61,  /* [7593] */
    (xdc_Char)0x2e,  /* [7594] */
    (xdc_Char)0x0,  /* [7595] */
    (xdc_Char)0x65,  /* [7596] */
    (xdc_Char)0x76,  /* [7597] */
    (xdc_Char)0x65,  /* [7598] */
    (xdc_Char)0x6e,  /* [7599] */
    (xdc_Char)0x74,  /* [7600] */
    (xdc_Char)0x73,  /* [7601] */
    (xdc_Char)0x2e,  /* [7602] */
    (xdc_Char)0x0,  /* [7603] */
    (xdc_Char)0x44,  /* [7604] */
    (xdc_Char)0x76,  /* [7605] */
    (xdc_Char)0x74,  /* [7606] */
    (xdc_Char)0x54,  /* [7607] */
    (xdc_Char)0x79,  /* [7608] */
    (xdc_Char)0x70,  /* [7609] */
    (xdc_Char)0x65,  /* [7610] */
    (xdc_Char)0x73,  /* [7611] */
    (xdc_Char)0x0,  /* [7612] */
    (xdc_Char)0x55,  /* [7613] */
    (xdc_Char)0x49,  /* [7614] */
    (xdc_Char)0x41,  /* [7615] */
    (xdc_Char)0x45,  /* [7616] */
    (xdc_Char)0x72,  /* [7617] */
    (xdc_Char)0x72,  /* [7618] */
    (xdc_Char)0x0,  /* [7619] */
    (xdc_Char)0x55,  /* [7620] */
    (xdc_Char)0x49,  /* [7621] */
    (xdc_Char)0x41,  /* [7622] */
    (xdc_Char)0x45,  /* [7623] */
    (xdc_Char)0x76,  /* [7624] */
    (xdc_Char)0x74,  /* [7625] */
    (xdc_Char)0x0,  /* [7626] */
    (xdc_Char)0x45,  /* [7627] */
    (xdc_Char)0x76,  /* [7628] */
    (xdc_Char)0x65,  /* [7629] */
    (xdc_Char)0x6e,  /* [7630] */
    (xdc_Char)0x74,  /* [7631] */
    (xdc_Char)0x48,  /* [7632] */
    (xdc_Char)0x64,  /* [7633] */
    (xdc_Char)0x72,  /* [7634] */
    (xdc_Char)0x0,  /* [7635] */
    (xdc_Char)0x51,  /* [7636] */
    (xdc_Char)0x75,  /* [7637] */
    (xdc_Char)0x65,  /* [7638] */
    (xdc_Char)0x75,  /* [7639] */
    (xdc_Char)0x65,  /* [7640] */
    (xdc_Char)0x44,  /* [7641] */
    (xdc_Char)0x65,  /* [7642] */
    (xdc_Char)0x73,  /* [7643] */
    (xdc_Char)0x63,  /* [7644] */
    (xdc_Char)0x72,  /* [7645] */
    (xdc_Char)0x69,  /* [7646] */
    (xdc_Char)0x70,  /* [7647] */
    (xdc_Char)0x74,  /* [7648] */
    (xdc_Char)0x6f,  /* [7649] */
    (xdc_Char)0x72,  /* [7650] */
    (xdc_Char)0x0,  /* [7651] */
    (xdc_Char)0x55,  /* [7652] */
    (xdc_Char)0x49,  /* [7653] */
    (xdc_Char)0x41,  /* [7654] */
    (xdc_Char)0x4d,  /* [7655] */
    (xdc_Char)0x65,  /* [7656] */
    (xdc_Char)0x74,  /* [7657] */
    (xdc_Char)0x61,  /* [7658] */
    (xdc_Char)0x44,  /* [7659] */
    (xdc_Char)0x61,  /* [7660] */
    (xdc_Char)0x74,  /* [7661] */
    (xdc_Char)0x61,  /* [7662] */
    (xdc_Char)0x0,  /* [7663] */
    (xdc_Char)0x6d,  /* [7664] */
    (xdc_Char)0x33,  /* [7665] */
    (xdc_Char)0x2e,  /* [7666] */
    (xdc_Char)0x0,  /* [7667] */
    (xdc_Char)0x49,  /* [7668] */
    (xdc_Char)0x6e,  /* [7669] */
    (xdc_Char)0x74,  /* [7670] */
    (xdc_Char)0x72,  /* [7671] */
    (xdc_Char)0x69,  /* [7672] */
    (xdc_Char)0x6e,  /* [7673] */
    (xdc_Char)0x73,  /* [7674] */
    (xdc_Char)0x69,  /* [7675] */
    (xdc_Char)0x63,  /* [7676] */
    (xdc_Char)0x73,  /* [7677] */
    (xdc_Char)0x53,  /* [7678] */
    (xdc_Char)0x75,  /* [7679] */
    (xdc_Char)0x70,  /* [7680] */
    (xdc_Char)0x70,  /* [7681] */
    (xdc_Char)0x6f,  /* [7682] */
    (xdc_Char)0x72,  /* [7683] */
    (xdc_Char)0x74,  /* [7684] */
    (xdc_Char)0x0,  /* [7685] */
    (xdc_Char)0x54,  /* [7686] */
    (xdc_Char)0x61,  /* [7687] */
    (xdc_Char)0x73,  /* [7688] */
    (xdc_Char)0x6b,  /* [7689] */
    (xdc_Char)0x53,  /* [7690] */
    (xdc_Char)0x75,  /* [7691] */
    (xdc_Char)0x70,  /* [7692] */
    (xdc_Char)0x70,  /* [7693] */
    (xdc_Char)0x6f,  /* [7694] */
    (xdc_Char)0x72,  /* [7695] */
    (xdc_Char)0x74,  /* [7696] */
    (xdc_Char)0x0,  /* [7697] */
    (xdc_Char)0x54,  /* [7698] */
    (xdc_Char)0x69,  /* [7699] */
    (xdc_Char)0x6d,  /* [7700] */
    (xdc_Char)0x65,  /* [7701] */
    (xdc_Char)0x72,  /* [7702] */
    (xdc_Char)0x0,  /* [7703] */
    (xdc_Char)0x54,  /* [7704] */
    (xdc_Char)0x69,  /* [7705] */
    (xdc_Char)0x6d,  /* [7706] */
    (xdc_Char)0x65,  /* [7707] */
    (xdc_Char)0x73,  /* [7708] */
    (xdc_Char)0x74,  /* [7709] */
    (xdc_Char)0x61,  /* [7710] */
    (xdc_Char)0x6d,  /* [7711] */
    (xdc_Char)0x70,  /* [7712] */
    (xdc_Char)0x50,  /* [7713] */
    (xdc_Char)0x72,  /* [7714] */
    (xdc_Char)0x6f,  /* [7715] */
    (xdc_Char)0x76,  /* [7716] */
    (xdc_Char)0x69,  /* [7717] */
    (xdc_Char)0x64,  /* [7718] */
    (xdc_Char)0x65,  /* [7719] */
    (xdc_Char)0x72,  /* [7720] */
    (xdc_Char)0x0,  /* [7721] */
    (xdc_Char)0x67,  /* [7722] */
    (xdc_Char)0x61,  /* [7723] */
    (xdc_Char)0x74,  /* [7724] */
    (xdc_Char)0x65,  /* [7725] */
    (xdc_Char)0x73,  /* [7726] */
    (xdc_Char)0x2e,  /* [7727] */
    (xdc_Char)0x0,  /* [7728] */
    (xdc_Char)0x47,  /* [7729] */
    (xdc_Char)0x61,  /* [7730] */
    (xdc_Char)0x74,  /* [7731] */
    (xdc_Char)0x65,  /* [7732] */
    (xdc_Char)0x48,  /* [7733] */
    (xdc_Char)0x77,  /* [7734] */
    (xdc_Char)0x69,  /* [7735] */
    (xdc_Char)0x0,  /* [7736] */
    (xdc_Char)0x47,  /* [7737] */
    (xdc_Char)0x61,  /* [7738] */
    (xdc_Char)0x74,  /* [7739] */
    (xdc_Char)0x65,  /* [7740] */
    (xdc_Char)0x4d,  /* [7741] */
    (xdc_Char)0x75,  /* [7742] */
    (xdc_Char)0x74,  /* [7743] */
    (xdc_Char)0x65,  /* [7744] */
    (xdc_Char)0x78,  /* [7745] */
    (xdc_Char)0x0,  /* [7746] */
    (xdc_Char)0x43,  /* [7747] */
    (xdc_Char)0x6c,  /* [7748] */
    (xdc_Char)0x6f,  /* [7749] */
    (xdc_Char)0x63,  /* [7750] */
    (xdc_Char)0x6b,  /* [7751] */
    (xdc_Char)0x46,  /* [7752] */
    (xdc_Char)0x72,  /* [7753] */
    (xdc_Char)0x65,  /* [7754] */
    (xdc_Char)0x71,  /* [7755] */
    (xdc_Char)0x73,  /* [7756] */
    (xdc_Char)0x0,  /* [7757] */
    (xdc_Char)0x6c,  /* [7758] */
    (xdc_Char)0x6f,  /* [7759] */
    (xdc_Char)0x67,  /* [7760] */
    (xdc_Char)0x67,  /* [7761] */
    (xdc_Char)0x65,  /* [7762] */
    (xdc_Char)0x72,  /* [7763] */
    (xdc_Char)0x73,  /* [7764] */
    (xdc_Char)0x2e,  /* [7765] */
    (xdc_Char)0x0,  /* [7766] */
    (xdc_Char)0x4c,  /* [7767] */
    (xdc_Char)0x6f,  /* [7768] */
    (xdc_Char)0x67,  /* [7769] */
    (xdc_Char)0x67,  /* [7770] */
    (xdc_Char)0x65,  /* [7771] */
    (xdc_Char)0x72,  /* [7772] */
    (xdc_Char)0x53,  /* [7773] */
    (xdc_Char)0x74,  /* [7774] */
    (xdc_Char)0x6f,  /* [7775] */
    (xdc_Char)0x70,  /* [7776] */
    (xdc_Char)0x4d,  /* [7777] */
    (xdc_Char)0x6f,  /* [7778] */
    (xdc_Char)0x64,  /* [7779] */
    (xdc_Char)0x65,  /* [7780] */
    (xdc_Char)0x0,  /* [7781] */
    (xdc_Char)0x75,  /* [7782] */
    (xdc_Char)0x74,  /* [7783] */
    (xdc_Char)0x69,  /* [7784] */
    (xdc_Char)0x6c,  /* [7785] */
    (xdc_Char)0x73,  /* [7786] */
    (xdc_Char)0x2e,  /* [7787] */
    (xdc_Char)0x0,  /* [7788] */
    (xdc_Char)0x4c,  /* [7789] */
    (xdc_Char)0x6f,  /* [7790] */
    (xdc_Char)0x61,  /* [7791] */
    (xdc_Char)0x64,  /* [7792] */
    (xdc_Char)0x0,  /* [7793] */
    (xdc_Char)0x68,  /* [7794] */
    (xdc_Char)0x65,  /* [7795] */
    (xdc_Char)0x61,  /* [7796] */
    (xdc_Char)0x72,  /* [7797] */
    (xdc_Char)0x74,  /* [7798] */
    (xdc_Char)0x42,  /* [7799] */
    (xdc_Char)0x65,  /* [7800] */
    (xdc_Char)0x61,  /* [7801] */
    (xdc_Char)0x74,  /* [7802] */
    (xdc_Char)0x0,  /* [7803] */
    (xdc_Char)0x74,  /* [7804] */
    (xdc_Char)0x69,  /* [7805] */
    (xdc_Char)0x2e,  /* [7806] */
    (xdc_Char)0x73,  /* [7807] */
    (xdc_Char)0x79,  /* [7808] */
    (xdc_Char)0x73,  /* [7809] */
    (xdc_Char)0x62,  /* [7810] */
    (xdc_Char)0x69,  /* [7811] */
    (xdc_Char)0x6f,  /* [7812] */
    (xdc_Char)0x73,  /* [7813] */
    (xdc_Char)0x2e,  /* [7814] */
    (xdc_Char)0x6b,  /* [7815] */
    (xdc_Char)0x6e,  /* [7816] */
    (xdc_Char)0x6c,  /* [7817] */
    (xdc_Char)0x2e,  /* [7818] */
    (xdc_Char)0x54,  /* [7819] */
    (xdc_Char)0x61,  /* [7820] */
    (xdc_Char)0x73,  /* [7821] */
    (xdc_Char)0x6b,  /* [7822] */
    (xdc_Char)0x2e,  /* [7823] */
    (xdc_Char)0x49,  /* [7824] */
    (xdc_Char)0x64,  /* [7825] */
    (xdc_Char)0x6c,  /* [7826] */
    (xdc_Char)0x65,  /* [7827] */
    (xdc_Char)0x54,  /* [7828] */
    (xdc_Char)0x61,  /* [7829] */
    (xdc_Char)0x73,  /* [7830] */
    (xdc_Char)0x6b,  /* [7831] */
    (xdc_Char)0x0,  /* [7832] */
    (xdc_Char)0x4c,  /* [7833] */
    (xdc_Char)0x6f,  /* [7834] */
    (xdc_Char)0x61,  /* [7835] */
    (xdc_Char)0x64,  /* [7836] */
    (xdc_Char)0x20,  /* [7837] */
    (xdc_Char)0x4c,  /* [7838] */
    (xdc_Char)0x6f,  /* [7839] */
    (xdc_Char)0x67,  /* [7840] */
    (xdc_Char)0x67,  /* [7841] */
    (xdc_Char)0x65,  /* [7842] */
    (xdc_Char)0x72,  /* [7843] */
    (xdc_Char)0x0,  /* [7844] */
    (xdc_Char)0x4d,  /* [7845] */
    (xdc_Char)0x61,  /* [7846] */
    (xdc_Char)0x69,  /* [7847] */
    (xdc_Char)0x6e,  /* [7848] */
    (xdc_Char)0x20,  /* [7849] */
    (xdc_Char)0x4c,  /* [7850] */
    (xdc_Char)0x6f,  /* [7851] */
    (xdc_Char)0x67,  /* [7852] */
    (xdc_Char)0x67,  /* [7853] */
    (xdc_Char)0x65,  /* [7854] */
    (xdc_Char)0x72,  /* [7855] */
    (xdc_Char)0x0,  /* [7856] */
    (xdc_Char)0x53,  /* [7857] */
    (xdc_Char)0x59,  /* [7858] */
    (xdc_Char)0x53,  /* [7859] */
    (xdc_Char)0x42,  /* [7860] */
    (xdc_Char)0x49,  /* [7861] */
    (xdc_Char)0x4f,  /* [7862] */
    (xdc_Char)0x53,  /* [7863] */
    (xdc_Char)0x20,  /* [7864] */
    (xdc_Char)0x53,  /* [7865] */
    (xdc_Char)0x79,  /* [7866] */
    (xdc_Char)0x73,  /* [7867] */
    (xdc_Char)0x74,  /* [7868] */
    (xdc_Char)0x65,  /* [7869] */
    (xdc_Char)0x6d,  /* [7870] */
    (xdc_Char)0x20,  /* [7871] */
    (xdc_Char)0x4c,  /* [7872] */
    (xdc_Char)0x6f,  /* [7873] */
    (xdc_Char)0x67,  /* [7874] */
    (xdc_Char)0x67,  /* [7875] */
    (xdc_Char)0x65,  /* [7876] */
    (xdc_Char)0x72,  /* [7877] */
    (xdc_Char)0x0,  /* [7878] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[62] = {
    {
        (xdc_Bits16)0x0,  /* left */
        (xdc_Bits16)0x0,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1cab,  /* left */
        (xdc_Bits16)0x1cb0,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1cb9,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1cc0,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1cc5,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1cce,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1cd4,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1cda,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1cdf,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1ce3,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1ce8,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1cef,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1cf8,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d00,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d07,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d0e,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d13,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001,  /* left */
        (xdc_Bits16)0x1d1d,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x1d23,  /* left */
        (xdc_Bits16)0x1d27,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1d30,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1d35,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014,  /* left */
        (xdc_Bits16)0x1d3d,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1d42,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1d4a,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8017,  /* left */
        (xdc_Bits16)0x1d50,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1d55,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1d5a,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1d60,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1d65,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1d70,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1d76,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1d7c,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1d86,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x8019,  /* left */
        (xdc_Bits16)0x1d8a,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1d8f,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x8022,  /* left */
        (xdc_Bits16)0x1d94,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1d98,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x8024,  /* left */
        (xdc_Bits16)0x1d9f,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x1d23,  /* left */
        (xdc_Bits16)0x1da7,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x1dac,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x1db4,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x1dbd,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8027,  /* left */
        (xdc_Bits16)0x1dc4,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x1cb0,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802b,  /* left */
        (xdc_Bits16)0x1dcb,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802b,  /* left */
        (xdc_Bits16)0x1dd4,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802b,  /* left */
        (xdc_Bits16)0x1de4,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x8015,  /* left */
        (xdc_Bits16)0x1df0,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1d94,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1df4,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1e06,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1e12,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x802f,  /* left */
        (xdc_Bits16)0x1e18,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1e2a,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x8035,  /* left */
        (xdc_Bits16)0x1e31,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8035,  /* left */
        (xdc_Bits16)0x1e39,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1e12,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x8016,  /* left */
        (xdc_Bits16)0x1e43,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8026,  /* left */
        (xdc_Bits16)0x1e4e,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x803a,  /* left */
        (xdc_Bits16)0x1e57,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x8012,  /* left */
        (xdc_Bits16)0x1e66,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x803c,  /* left */
        (xdc_Bits16)0x1e6d,  /* right */
    },  /* [61] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((CT__xdc_runtime_Text_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((CT__xdc_runtime_Text_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((CT__xdc_runtime_Text_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800f;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((CT__xdc_runtime_Text_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((CT__xdc_runtime_Text_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((CT__xdc_runtime_Text_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((CT__xdc_runtime_Text_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((CT__xdc_runtime_Text_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((CT__xdc_runtime_Text_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__startupDoneFxn__C, ".const:xdc_runtime_Text_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Text_Module__startupDoneFxn xdc_runtime_Text_Module__startupDoneFxn__C = ((CT__xdc_runtime_Text_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = 0;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1ec7;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x3e;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fff;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((CT__xdc_runtime_Text_visitRopeFxn)((xdc_Fxn)xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((CT__xdc_runtime_Text_visitRopeFxn2)((xdc_Fxn)xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((CT__xdc_runtime_Timestamp_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((CT__xdc_runtime_Timestamp_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((CT__xdc_runtime_Timestamp_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((CT__xdc_runtime_Timestamp_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((CT__xdc_runtime_Timestamp_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__startupDoneFxn__C, ".const:xdc_runtime_Timestamp_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__startupDoneFxn xdc_runtime_Timestamp_Module__startupDoneFxn__C = ((CT__xdc_runtime_Timestamp_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = 0;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((CT__xdc_runtime_Types_Module__diagsMask)0);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((CT__xdc_runtime_Types_Module__gateObj)0);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((CT__xdc_runtime_Types_Module__gatePrms)0);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8011;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((CT__xdc_runtime_Types_Module__loggerObj)0);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((CT__xdc_runtime_Types_Module__loggerFxn0)0);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((CT__xdc_runtime_Types_Module__loggerFxn1)0);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((CT__xdc_runtime_Types_Module__loggerFxn2)0);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((CT__xdc_runtime_Types_Module__loggerFxn4)0);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((CT__xdc_runtime_Types_Module__loggerFxn8)0);

/* Module__startupDoneFxn__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__startupDoneFxn__C, ".const:xdc_runtime_Types_Module__startupDoneFxn__C");
__FAR__ const CT__xdc_runtime_Types_Module__startupDoneFxn xdc_runtime_Types_Module__startupDoneFxn__C = ((CT__xdc_runtime_Types_Module__startupDoneFxn)0);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = 0;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = 0;


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_printf_va__F(fmt, __va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_printf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_aprintf_va__F(fmt, __va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_aprintf_va__F(fmt, __va);

    va_end(__va);
    return __ret;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, __va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_sprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, __va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_asprintf_va__F(buf, fmt, __va);

    va_end(__va);
    return __ret;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list __va ) 
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ... ) 
{
    xdc_Int __ret;

    va_list __va; va_start(__va, fmt);
    __ret = xdc_runtime_System_snprintf_va__F(buf, n, fmt, __va);

    va_end(__va);
    return __ret;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_BIOS_RtsGateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_BIOS_RtsGateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_BIOS_RtsGateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_BIOS_RtsGateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_BIOS_RtsGateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi_HwiProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_m3_Hwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_m3_Hwi___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_IHwi_Params), __eb);
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_HwiProxy_Args__create __args;
    __args.intNum = intNum;
    __args.hwiFxn = hwiFxn;
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_hal_Hwi_HwiProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_hal_Hwi_HwiProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_hal_Hwi_HwiProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)__inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle __inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)__inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateMutex_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateMutex___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(ti_sysbios_heaps_HeapMem_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)__inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)__inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.msp432.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_msp432_Timer_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock_TimerProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_family_arm_msp432_Timer_Object__create__S(__obj, __osz, __aa, (ti_sysbios_family_arm_msp432_Timer___ParamsPtr)__paramsPtr, sizeof(ti_sysbios_interfaces_ITimer_Params), __eb);
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_TimerProxy_Args__create __args;
    __args.id = id;
    __args.tickFxn = tickFxn;
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_knl_Clock_TimerProxy_Object__create__S(0, 0, &__args, (const xdc_UChar*)__prms, sizeof(ti_sysbios_knl_Clock_TimerProxy_Params), __eb);
}

/* Object__delete__S */
void ti_sysbios_knl_Clock_TimerProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_family_arm_msp432_Timer_Object__delete__S(instp);
}

/* delete */
Void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_knl_Clock_TimerProxy_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_msp432_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_msp432_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_msp432_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_msp432_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_msp432_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getMaxTicks((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_msp432_Timer_setNextTick((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_msp432_Timer_start((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    ti_sysbios_family_arm_msp432_Timer_stop((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_msp432_Timer_setPeriod((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_msp432_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getPeriod((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getCount((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_msp432_Timer_getFreq((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_msp432_Timer_getFunc((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_msp432_Timer_setFunc((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_msp432_Timer_trigger((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst )
{
    return ti_sysbios_family_arm_msp432_Timer_getExpiredCounts((ti_sysbios_family_arm_msp432_Timer_Handle)__inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_msp432_Timer_getExpiredTicks((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle __inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_msp432_Timer_getCurrentTick((ti_sysbios_family_arm_msp432_Timer_Handle)__inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Main_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)xdc_runtime_Main_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Main_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Main_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
Void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    xdc_runtime_Main_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_Memory_HeapProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_Memory_HeapProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_heaps_HeapMem_Object__create__S(__obj, __osz, __aa, (ti_sysbios_heaps_HeapMem___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IHeap_Params), __eb);
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)xdc_runtime_Memory_HeapProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_Memory_HeapProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_Memory_HeapProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* delete */
Void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    xdc_runtime_Memory_HeapProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)__inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)__inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle __inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)__inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle __inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)__inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* Object__create__S */
xdc_Ptr xdc_runtime_System_Module_GateProxy_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const xdc_runtime_System_Module_GateProxy___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    return ti_sysbios_gates_GateHwi_Object__create__S(__obj, __osz, __aa, (ti_sysbios_gates_GateHwi___ParamsPtr)__paramsPtr, sizeof(xdc_runtime_IGateProvider_Params), __eb);
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)xdc_runtime_System_Module_GateProxy_Object__create__S(0, 0, 0, (const xdc_UChar*)__prms, sizeof(xdc_runtime_System_Module_GateProxy_Params), __eb);
}

/* Object__delete__S */
void xdc_runtime_System_Module_GateProxy_Object__delete__S( Ptr instp ) 
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* delete */
Void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    xdc_runtime_System_Module_GateProxy_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle __inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)__inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle __inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)__inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S( void ) 
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S( void ) 
{
    return ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_m3_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_m3_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_m3_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_m3_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Timer___S1) - sizeof(ti_sysbios_family_arm_m3_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.msp432.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_msp432_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_msp432_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_msp432_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_msp432_Timer_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_family_arm_msp432_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_msp432_Timer___S1) - sizeof(ti_sysbios_family_arm_msp432_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_msp432_Timer_Object2__), /* objSize */
    (Ptr)&ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_msp432_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (Ptr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (Ptr)0, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (Ptr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (Ptr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (Ptr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_loggers_LoggerStopMode_Object2__ s0; char c; } ti_uia_loggers_LoggerStopMode___S1;
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__DESC__C, ".const:ti_uia_loggers_LoggerStopMode_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C = {
    (Ptr)&ti_uia_loggers_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_loggers_LoggerStopMode___S1) - sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objSize */
    (Ptr)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_loggers_LoggerStopMode_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module __mod, const xdc_runtime_IHeap_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IHeap_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IHeap_Params), __eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.IUIATransfer VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_IUIATransfer_Handle ti_uia_runtime_IUIATransfer_create( ti_uia_runtime_IUIATransfer_Module __mod, const ti_uia_runtime_IUIATransfer_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_uia_runtime_IUIATransfer_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (ti_uia_runtime_IUIATransfer_Params), __eb);
}

/* delete */
void ti_uia_runtime_IUIATransfer_delete( ti_uia_runtime_IUIATransfer_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module __mod, const xdc_runtime_IGateProvider_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IGateProvider_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IGateProvider_Params), __eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module __mod, const xdc_runtime_IFilterLogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_IFilterLogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_IFilterLogger_Params), __eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module __mod, const xdc_runtime_ILogger_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (xdc_runtime_ILogger_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (xdc_runtime_ILogger_Params), __eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.ILoggerSnapshot VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_ILoggerSnapshot_Handle ti_uia_runtime_ILoggerSnapshot_create( ti_uia_runtime_ILoggerSnapshot_Module __mod, const ti_uia_runtime_ILoggerSnapshot_Params *__prms, xdc_runtime_Error_Block *__eb )
{
    return (ti_uia_runtime_ILoggerSnapshot_Handle) __mod->__sysp->__create(0, 0, 0, (const xdc_UChar*)__prms, sizeof (ti_uia_runtime_ILoggerSnapshot_Params), __eb);
}

/* delete */
void ti_uia_runtime_ILoggerSnapshot_delete( ti_uia_runtime_ILoggerSnapshot_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32816;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_m3_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_m3_Hwi_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    ti_sysbios_family_arm_m3_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    ti_sysbios_family_arm_m3_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32819;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_m3_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_m3_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_m3_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_m3_Timer_Object__ *)ti_sysbios_family_arm_m3_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_m3_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_m3_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_m3_Timer_Params __prms;
    ti_sysbios_family_arm_m3_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_m3_Timer_Handle ti_sysbios_family_arm_m3_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_m3_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Timer_Params __prms;
    ti_sysbios_family_arm_m3_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_m3_Timer_construct(ti_sysbios_family_arm_m3_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_m3_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_m3_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_m3_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_m3_Timer_destruct(ti_sysbios_family_arm_m3_Timer_Struct *obj)
{
    ti_sysbios_family_arm_m3_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Timer_Object__DESC__C, *((ti_sysbios_family_arm_m3_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Timer_delete(ti_sysbios_family_arm_m3_Timer_Handle *instp)
{
    ti_sysbios_family_arm_m3_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.msp432.ClockFreqs SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_msp432_ClockFreqs_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.msp432.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_msp432_Timer_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_msp432_Timer_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_msp432_Timer_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_msp432_Timer_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_msp432_Timer_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_msp432_Timer_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_msp432_Timer_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_msp432_Timer_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_msp432_Timer_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_msp432_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_msp432_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_msp432_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_msp432_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32824;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_msp432_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_family_arm_msp432_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_family_arm_msp432_Timer_Object__ *)oa) + i;
    }

    if (ti_sysbios_family_arm_msp432_Timer_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_family_arm_msp432_Timer_Object__ *)ti_sysbios_family_arm_msp432_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_msp432_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_msp432_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_msp432_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_msp432_Timer_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_family_arm_msp432_Timer___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_family_arm_msp432_Timer_Args__create *__args = __aa;
    ti_sysbios_family_arm_msp432_Timer_Params __prms;
    ti_sysbios_family_arm_msp432_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_msp432_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_msp432_Timer_Instance_init__E(__newobj, __args->id, __args->tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_family_arm_msp432_Timer_Handle ti_sysbios_family_arm_msp432_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_msp432_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_msp432_Timer_Params __prms;
    ti_sysbios_family_arm_msp432_Timer_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_msp432_Timer_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_msp432_Timer_Instance_init__E(__newobj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_family_arm_msp432_Timer_construct(ti_sysbios_family_arm_msp432_Timer_Struct *__obj, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_msp432_Timer_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_family_arm_msp432_Timer_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_family_arm_msp432_Timer_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_msp432_Timer_Instance_init__E((xdc_Ptr)__obj, id, tickFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_family_arm_msp432_Timer_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_family_arm_msp432_Timer_destruct(ti_sysbios_family_arm_msp432_Timer_Struct *obj)
{
    ti_sysbios_family_arm_msp432_Timer_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_msp432_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_msp432_Timer_Object__DESC__C, *((ti_sysbios_family_arm_msp432_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_msp432_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_msp432_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_msp432_Timer_delete(ti_sysbios_family_arm_msp432_Timer_Handle *instp)
{
    ti_sysbios_family_arm_msp432_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.msp432.init.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_msp432_init_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32822;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateHwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateHwi_Object__ *)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateHwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateHwi_Params __prms;
    ti_sysbios_gates_GateHwi_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *__obj, const ti_sysbios_gates_GateHwi_Params *__paramsPtr )
{
    ti_sysbios_gates_GateHwi_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateHwi_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    ti_sysbios_gates_GateHwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32823;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    if (ti_sysbios_gates_GateMutex_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_gates_GateMutex_Object__ *)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_gates_GateMutex___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_gates_GateMutex_Params __prms;
    ti_sysbios_gates_GateMutex_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *__obj, const ti_sysbios_gates_GateMutex_Params *__paramsPtr )
{
    ti_sysbios_gates_GateMutex_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_gates_GateMutex_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    ti_sysbios_gates_GateMutex_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32803;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    if (ti_sysbios_hal_Hwi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_hal_Hwi_Object__ *)ti_sysbios_hal_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_hal_Hwi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_hal_Hwi_Args__create *__args = __aa;
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, __args->intNum, __args->hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    ti_sysbios_hal_Hwi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(__newobj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *__obj, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_hal_Hwi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_hal_Hwi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)__obj, intNum, hwiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_hal_Hwi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    ti_sysbios_hal_Hwi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    if (ti_sysbios_heaps_HeapMem_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_heaps_HeapMem_Object__ *)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_heaps_HeapMem___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_heaps_HeapMem_Params __prms;
    ti_sysbios_heaps_HeapMem_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *__obj, const ti_sysbios_heaps_HeapMem_Params *__paramsPtr )
{
    ti_sysbios_heaps_HeapMem_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_heaps_HeapMem_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    ti_sysbios_heaps_HeapMem_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32794;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Clock_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Clock_Object__ *)ti_sysbios_knl_Clock_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Clock___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Clock_Args__create *__args = __aa;
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, __args->clockFxn, __args->timeout, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Clock_Params __prms;
    ti_sysbios_knl_Clock_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(__newobj, clockFxn, timeout, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *__obj, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *__paramsPtr )
{
    ti_sysbios_knl_Clock_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Clock_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)__obj, clockFxn, timeout, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Clock_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    ti_sysbios_knl_Clock_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S( void )
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32797;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Event_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Event_Object__ *)ti_sysbios_knl_Event_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Event___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Event_Params __prms;
    ti_sysbios_knl_Event_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *__obj, const ti_sysbios_knl_Event_Params *__paramsPtr )
{
    ti_sysbios_knl_Event_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Event_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Event_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    ti_sysbios_knl_Event_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Queue_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Queue_Object__ *)ti_sysbios_knl_Queue_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Queue___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Queue_Params __prms;
    ti_sysbios_knl_Queue_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *__obj, const ti_sysbios_knl_Queue_Params *__paramsPtr )
{
    ti_sysbios_knl_Queue_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Queue_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Queue_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    ti_sysbios_knl_Queue_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, -1, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32799;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Semaphore_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Semaphore_Object__ *)ti_sysbios_knl_Semaphore_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Semaphore___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Semaphore_Args__create *__args = __aa;
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, __args->count, &__prms);
    return __newobj;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Semaphore_Params __prms;
    ti_sysbios_knl_Semaphore_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(__newobj, count, &__prms);
    return __newobj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *__obj, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *__paramsPtr )
{
    ti_sysbios_knl_Semaphore_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Semaphore_Params), NULL);
    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)__obj, count, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, TRUE);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    ti_sysbios_knl_Semaphore_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, -1, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32800;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Swi_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Swi_Object__ *)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Swi___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Swi_Args__create *__args = __aa;
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, __args->swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    ti_sysbios_knl_Swi_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(__newobj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *__obj, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Swi_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Swi_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)__obj, swiFxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Swi_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    ti_sysbios_knl_Swi_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    if (ti_sysbios_knl_Task_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_sysbios_knl_Task_Object__ *)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_sysbios_knl_Task___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_sysbios_knl_Task_Args__create *__args = __aa;
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, __args->fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, (xdc_Bool)(__obj != NULL));
        return NULL;
    }

    return __newobj;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    ti_sysbios_knl_Task_Object *__newobj;
    int iStat;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(__newobj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __newobj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return __newobj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *__obj, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_sysbios_knl_Task_Params __prms;
    int iStat;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_sysbios_knl_Task_Params), __eb);
    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)__obj, fxn, &__prms, __eb);
    if (xdc_runtime_Error_check(__eb)) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, (xdc_Ptr)__obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* Object__destruct__S */
xdc_Void ti_sysbios_knl_Task_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    ti_sysbios_knl_Task_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.loggers.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_loggers_LoggerStopMode_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_loggers_LoggerStopMode_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_loggers_LoggerStopMode_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_loggers_LoggerStopMode_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_loggers_LoggerStopMode_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create ti_uia_loggers_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_loggers_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_loggers_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_loggers_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_loggers_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__S( void )
{
    return ti_uia_loggers_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_uia_loggers_LoggerStopMode_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32827;
    xdc_runtime_Core_assignLabel(lab, 0, 0);

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_Ptr)(src ? src : &ti_uia_loggers_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa) {
        return ((ti_uia_loggers_LoggerStopMode_Object__ *)oa) + i;
    }

    if (ti_uia_loggers_LoggerStopMode_Object__count__C == 0) {
        return NULL;
    }

    return ((ti_uia_loggers_LoggerStopMode_Object__ *)ti_uia_loggers_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_loggers_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__next__S( xdc_Ptr obj ) 
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__create__S (
    xdc_Ptr __obj, 
    xdc_SizeT __osz,
    const xdc_Ptr __aa,
    const ti_uia_loggers_LoggerStopMode___ParamsPtr __paramsPtr,
    xdc_SizeT __psz,
    xdc_runtime_Error_Block *__eb)
{
    ti_uia_loggers_LoggerStopMode_Params __prms;
    ti_uia_loggers_LoggerStopMode_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* create */
ti_uia_loggers_LoggerStopMode_Handle ti_uia_loggers_LoggerStopMode_create( const ti_uia_loggers_LoggerStopMode_Params *__paramsPtr, xdc_runtime_Error_Block *__eb )
{
    ti_uia_loggers_LoggerStopMode_Params __prms;
    ti_uia_loggers_LoggerStopMode_Object *__newobj;

    /* common instance initialization */
    __newobj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, 0, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), __eb);
    if (__newobj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(__newobj, &__prms);
    return __newobj;
}

/* construct */
void ti_uia_loggers_LoggerStopMode_construct(ti_uia_loggers_LoggerStopMode_Struct *__obj, const ti_uia_loggers_LoggerStopMode_Params *__paramsPtr )
{
    ti_uia_loggers_LoggerStopMode_Params __prms;

    /* common instance initialization */
    xdc_runtime_Core_constructObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, __obj, &__prms, (xdc_Ptr)__paramsPtr, sizeof(ti_uia_loggers_LoggerStopMode_Params), NULL);
    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E((xdc_Ptr)__obj, &__prms);
}

/* Object__destruct__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__destruct__S( xdc_Ptr obj ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, obj, NULL, -1, TRUE);
}

/* destruct */
void ti_uia_loggers_LoggerStopMode_destruct(ti_uia_loggers_LoggerStopMode_Struct *obj)
{
    ti_uia_loggers_LoggerStopMode_Object__destruct__S(obj);
}

/* Object__delete__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, *((ti_uia_loggers_LoggerStopMode_Object**)instp), NULL, -1, FALSE);
    *((ti_uia_loggers_LoggerStopMode_Handle*)instp) = NULL;
}

/* delete */
void ti_uia_loggers_LoggerStopMode_delete(ti_uia_loggers_LoggerStopMode_Handle *instp)
{
    ti_uia_loggers_LoggerStopMode_Object__delete__S(instp);
}


/*
 * ======== ti.uia.runtime.EventHdr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_EventHdr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S( void )
{
    return 1;
}
xdc_Ptr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C
#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C
#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C
#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C
#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C
#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C
#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C
#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C
#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_System_SupportProxy_Proxy__delegate__S( void )
{
    return (xdc_Ptr)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S( void )
{
    return 0;
}
xdc_Ptr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S( void )
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

extern int __xdc__init(void);
#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
__FAR__ int (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

#ifdef __GNUC__
#ifndef __TI_COMPILER_VERSION__
    __attribute__ ((externally_visible))
#endif
#endif
const ti_sysbios_knl_Task_Handle heartBeatTask = (ti_sysbios_knl_Task_Handle)((ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0]);


