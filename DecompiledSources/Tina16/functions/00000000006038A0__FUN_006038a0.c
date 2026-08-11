/* Ghidra address: 006038a0 */
/* Ghidra symbol: FUN_006038a0 */


void FUN_006038a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 8),iVar3);
      cVar1 = FUN_00411580(uVar2,param_2);
      if (cVar1 != '\0') {
        FUN_004ae870(*(undefined8 *)(param_1 + 8),iVar3);
        FUN_004ae870(*(undefined8 *)(param_1 + 0x10),iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

