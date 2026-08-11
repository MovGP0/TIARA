/* Ghidra address: 00431ef0 */
/* Ghidra symbol: FUN_00431ef0 */


uint FUN_00431ef0(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int local_48 [2];
  undefined1 local_40;
  
  iVar3 = 0;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + -4);
  }
  if ((iVar3 + -1 < param_2) || (param_2 < 0)) {
    FUN_00431e90(param_2,0,iVar3 + -1);
  }
  *param_3 = 1;
  iVar3 = *(ushort *)(param_1 + (longlong)param_2 * 2) - 0xd800;
  if ((iVar3 < 0) || (0x7ff < iVar3)) {
    uVar4 = (uint)*(ushort *)(param_1 + (longlong)param_2 * 2);
  }
  else {
    if (0x3ff < iVar3) {
      local_40 = 0;
      local_48[0] = param_2;
      uVar2 = FUN_0044d8d0(&PTR_FUN_00434000,1,PTR_PTR_02002d30,local_48,0);
      FUN_004134c0(uVar2);
      iVar3 = (int)uVar2;
    }
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + -4);
    }
    if (iVar1 + -1 < param_2) {
      local_40 = 0;
      local_48[0] = param_2;
      uVar2 = FUN_0044d8d0(&PTR_FUN_00434000,1,PTR_PTR_02003908,local_48,0);
      FUN_004134c0(uVar2);
      iVar3 = (int)uVar2;
    }
    iVar1 = *(ushort *)(param_1 + (longlong)(param_2 + 1) * 2) - 0xdc00;
    if ((iVar1 < 0) || (0x3ff < iVar1)) {
      local_40 = 0;
      local_48[0] = param_2;
      uVar2 = FUN_0044d8d0(&PTR_FUN_00434000,1,PTR_PTR_02003908,local_48,0);
      iVar1 = FUN_004134c0(uVar2);
      iVar3 = (int)uVar2;
    }
    *param_3 = *param_3 + 1;
    uVar4 = iVar3 * 0x400 + iVar1 + 0x10000;
  }
  return uVar4;
}

