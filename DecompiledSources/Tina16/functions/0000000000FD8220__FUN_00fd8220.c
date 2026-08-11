/* Ghidra address: 00fd8220 */
/* Ghidra symbol: FUN_00fd8220 */


void FUN_00fd8220(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar3 = (longlong *)FUN_00fd8180(param_1,param_2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,plVar3);
  if (local_res18[0] == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))(*(longlong **)(param_1 + 0x6c0),0);
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_res18[0]);
    (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x268))(*(longlong **)(param_1 + 0x6c0),uVar2);
  }
  FUN_00414480(local_res18);
  return;
}

