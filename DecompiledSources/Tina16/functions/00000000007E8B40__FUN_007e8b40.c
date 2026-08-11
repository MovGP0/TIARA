/* Ghidra address: 007e8b40 */
/* Ghidra symbol: FUN_007e8b40 */


void FUN_007e8b40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      if (*plVar1 == param_2) {
        puVar2 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
        *puVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

