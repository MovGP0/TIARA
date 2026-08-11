/* Ghidra address: 0105a1e0 */
/* Ghidra symbol: FUN_0105a1e0 */


undefined8 FUN_0105a1e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res18 [2];
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043e1a0(local_30,local_res18[0]);
  FUN_00414b50(local_res18,local_30[0]);
  FUN_0043e1a0(local_20,*(undefined8 *)(param_1 + 0x68));
  plVar2 = (longlong *)FUN_01b21480(*(undefined8 *)(param_1 + 0x68));
  iVar1 = (**(code **)(*plVar2 + 0xb0))(plVar2,local_res18[0]);
  if (iVar1 < 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x40));
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x48));
  }
  FUN_00410f20(plVar2);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

