/* Ghidra address: 01ba9fc0 */
/* Ghidra symbol: FUN_01ba9fc0 */


undefined1 *
FUN_01ba9fc0(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  plVar2 = *(longlong **)(param_1 + 0x18);
  iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_res18[0]);
  if (iVar1 == -1) {
    *param_2 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2,iVar1);
    (**(code **)(*plVar2 + 0x18))(plVar2,local_20,param_4);
    FUN_00416910(param_2,local_20[0],0xff);
  }
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

