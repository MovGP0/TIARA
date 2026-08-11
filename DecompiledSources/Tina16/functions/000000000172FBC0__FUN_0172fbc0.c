/* Ghidra address: 0172fbc0 */
/* Ghidra symbol: FUN_0172fbc0 */


undefined8 FUN_0172fbc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  longlong local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar3 = FUN_004170c0(&DAT_0172fca4,local_res18[0],1);
  if (iVar3 < 1) {
    uVar4 = 0;
    if (local_res18[0] != 0) {
      uVar4 = *(uint *)(local_res18[0] + -4);
    }
  }
  else {
    sVar1 = FUN_004170c0(&DAT_0172fca4,local_res18[0],1);
    sVar2 = FUN_004170c0(&DAT_0172fcb4,local_res18[0],1);
    uVar4 = (uint)(ushort)((sVar1 - sVar2) - 1);
  }
  iVar3 = FUN_004170c0(&DAT_0172fcb4,local_res18[0],1);
  FUN_00416dc0(param_2,local_res18[0],iVar3 + 1,uVar4 & 0xffff);
  FUN_00414480(local_res18);
  return param_2;
}

