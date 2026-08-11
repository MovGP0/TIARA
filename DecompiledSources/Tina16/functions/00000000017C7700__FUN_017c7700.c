/* Ghidra address: 017c7700 */
/* Ghidra symbol: FUN_017c7700 */


undefined8 FUN_017c7700(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x78) + 1;
  if (iVar1 < 1) {
    uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  else {
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x78) < 0x80000000) {
      iVar1 = *(uint *)(param_1 + 0x78) + 1;
      piVar3 = *(int **)(param_1 + 0x28);
      do {
        if (*piVar3 == param_2) {
          return 1;
        }
        piVar3 = piVar3 + 1;
        iVar1 = iVar1 + -1;
        uVar2 = 0;
      } while (iVar1 != 0);
    }
  }
  return uVar2;
}

