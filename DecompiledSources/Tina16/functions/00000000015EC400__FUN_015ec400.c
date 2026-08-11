/* Ghidra address: 015ec400 */
/* Ghidra symbol: FUN_015ec400 */


void FUN_015ec400(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_015ec3b0(0x3a,param_3,param_4,param_5);
  FUN_017bf050(plVar1,0,param_2);
  (**(code **)(*plVar1 + 0x208))(plVar1,0,0,0);
  (**(code **)(*param_1 + 0x20))(param_1,plVar1);
  return;
}

