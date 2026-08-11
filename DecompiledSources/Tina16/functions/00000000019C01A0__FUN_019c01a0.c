/* Ghidra address: 019c01a0 */
/* Ghidra symbol: FUN_019c01a0 */


undefined8 FUN_019c01a0(longlong *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_40;
  int local_3c [3];
  
  iVar1 = (**(code **)(*param_1 + 0x1c8))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_1 + 0x1f0))(param_1,iVar4,local_3c,&local_40);
      local_3c[0] = local_3c[0] / 8;
      local_40 = local_40 / 8;
      uVar3 = local_3c[0] - param_2 >> 0x1f;
      if (((int)((local_3c[0] - param_2 ^ uVar3) - uVar3) <= param_4) &&
         (uVar3 = local_40 - param_3 >> 0x1f, iVar2 = (local_40 - param_3 ^ uVar3) - uVar3,
         iVar2 <= param_4)) {
        return CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

