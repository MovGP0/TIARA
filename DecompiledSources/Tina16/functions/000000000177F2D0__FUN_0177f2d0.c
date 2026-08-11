/* Ghidra address: 0177f2d0 */
/* Ghidra symbol: FUN_0177f2d0 */


undefined8 FUN_0177f2d0(undefined8 param_1,longlong param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = FUN_004170c0(&DAT_0177f3b4,local_res10[0],1);
  if (iVar3 < 1) {
    uVar4 = 0;
    if (local_res10[0] != 0) {
      uVar4 = *(uint *)(local_res10[0] + -4);
    }
  }
  else {
    sVar1 = FUN_004170c0(&DAT_0177f3b4,local_res10[0],1);
    sVar2 = FUN_004170c0(&DAT_0177f3c4,local_res10[0],1);
    uVar4 = (uint)(ushort)((sVar1 - sVar2) - 1);
  }
  iVar3 = FUN_004170c0(&DAT_0177f3c4,local_res10[0],1);
  FUN_00416dc0(param_1,local_res10[0],iVar3 + 1,uVar4 & 0xffff);
  FUN_00414480(local_res10);
  return param_1;
}

