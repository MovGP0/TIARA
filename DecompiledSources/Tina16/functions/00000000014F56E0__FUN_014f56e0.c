/* Ghidra address: 014f56e0 */
/* Ghidra symbol: FUN_014f56e0 */


longlong * FUN_014f56e0(longlong *param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_2c;
  
  local_2c = 0;
  *param_3 = 0;
  iVar5 = *(int *)(param_2 + 0x2d8);
  iVar3 = 1;
  if (0 < iVar5) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x2b0) + -8 + (longlong)iVar3 * 8);
      iVar4 = 1;
      for (uVar6 = (uint)*(byte *)(lVar1 + 4); uVar6 != 0; uVar6 = uVar6 - 1) {
        bVar2 = **(char **)(*(longlong *)(lVar1 + 0x40) + -8 + (longlong)iVar4 * 8) - 0x18;
        if (bVar2 < 8 && (1 << (bVar2 & 0x1f) & 0xcU) != 0) {
          if (local_2c <= *param_3) {
            FUN_00419260(param_1,&DAT_014f56a8,1,(longlong)(local_2c + 500));
            local_2c = local_2c + 500;
          }
          *(int *)(*param_1 + (longlong)*param_3 * 4) = iVar3 + iVar4 * 0x1000000;
          *param_3 = *param_3 + 1;
        }
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return param_1;
}

