/* Ghidra address: 00f4ae80 */
/* Ghidra symbol: FUN_00f4ae80 */


void FUN_00f4ae80(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_68 [10];
  
  puVar3 = local_68;
  puVar4 = local_68;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x720) + 0xa0) + 0x468) +
                  0x10);
  iVar1 = 1;
  if (0 < iVar5) {
    do {
      *(undefined8 *)(param_1 + 0x6c8 + (longlong)iVar1 * 8) = *puVar3;
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

