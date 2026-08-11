/* Ghidra address: 0095f850 */
/* Ghidra symbol: FUN_0095f850 */


void FUN_0095f850(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                 undefined8 param_9)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,param_2);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = (longlong *)FUN_0095de90(&PTR_FUN_009120b8,1,param_1,param_2);
    (**(code **)(*(longlong *)param_1[5] + 0x10))((longlong *)param_1[5],plVar1);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}

