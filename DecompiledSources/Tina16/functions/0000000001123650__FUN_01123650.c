/* Ghidra address: 01123650 */
/* Ghidra symbol: FUN_01123650 */


undefined8 FUN_01123650(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  short sVar2;
  undefined8 local_res18 [2];
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined8 local_10;
  
  local_res18[0] = param_3;
  local_18 = param_1;
  local_10 = param_2;
  FUN_00414610(param_3);
  plVar1 = *(longlong **)(*(longlong *)(local_18 + 0xc0) + 0x8e0);
  sVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (sVar2 == 0xf) {
    FUN_011235d0(auStack_38,local_res18,0x41);
  }
  else if ((sVar2 == 0x10) || ((ushort)(sVar2 - 0xd9U) < 2)) {
    FUN_011235d0(auStack_38,local_res18,0x56);
  }
  else {
    FUN_011235d0(auStack_38,local_res18,0x56);
  }
  FUN_00414ad0(local_10,local_res18[0]);
  FUN_00414480(local_res18);
  return local_10;
}

