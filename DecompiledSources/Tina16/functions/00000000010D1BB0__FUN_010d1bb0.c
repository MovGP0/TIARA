/* Ghidra address: 010d1bb0 */
/* Ghidra symbol: FUN_010d1bb0 */


undefined8 FUN_010d1bb0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 local_328 [33];
  int local_220;
  
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      puVar1 = (undefined8 *)FUN_00b94e60(param_1,iVar4);
      puVar3 = local_328;
      for (lVar2 = 0x5e; puVar1 = puVar1 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = *puVar1;
        puVar3 = puVar3 + 1;
      }
      if (local_220 == 300) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

