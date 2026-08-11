/* Ghidra address: 00c31270 */
/* Ghidra symbol: FUN_00c31270 */


void FUN_00c31270(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(*(longlong *)(param_1 + 0x18) + 0x10) != 0) {
    FUN_004af4a0(*(longlong *)(param_1 + 0x18),FUN_00c30970);
    piVar1 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),0);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + -1;
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        piVar2 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar3);
        if (piVar2[4] == piVar1[4]) {
          *piVar1 = *piVar1 + *piVar2;
          *piVar2 = 0;
          *(int **)(piVar2 + 4) = piVar1;
          piVar2 = piVar1;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
        piVar1 = piVar2;
      } while (iVar4 != 0);
    }
  }
  return;
}

