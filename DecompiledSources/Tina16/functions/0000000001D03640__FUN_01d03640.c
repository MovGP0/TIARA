/* Ghidra address: 01d03640 */
/* Ghidra symbol: FUN_01d03640 */


undefined8 FUN_01d03640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_res18 [2];
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_01d03060(param_1,local_20,local_res18[0]);
  FUN_00450070(local_30,local_20[0],&DAT_01d037c0,&DAT_01d037d0,0);
  FUN_00414b50(local_20,local_30[0]);
  iVar3 = FUN_004170c0(&LAB_01d037e4,local_20[0],1);
  if (iVar3 < 1) {
    uVar4 = 0;
    if (local_20[0] != 0) {
      uVar4 = *(uint *)(local_20[0] + -4);
    }
  }
  else {
    sVar1 = FUN_004170c0(&LAB_01d037e4,local_20[0],1);
    sVar2 = FUN_004170c0(&DAT_01d037d0,local_20[0],1);
    uVar4 = (uint)(ushort)((sVar1 - sVar2) - 1);
  }
  iVar3 = FUN_004170c0(&DAT_01d037d0,local_20[0],1);
  FUN_00416dc0(param_2,local_20[0],iVar3 + 1,uVar4 & 0xffff);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return param_2;
}

