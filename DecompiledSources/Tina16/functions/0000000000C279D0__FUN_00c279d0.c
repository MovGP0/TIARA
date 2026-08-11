/* Ghidra address: 00c279d0 */
/* Ghidra symbol: FUN_00c279d0 */


undefined8 FUN_00c279d0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x70);
  *piVar2 = *piVar2 + -1;
  if (*(int *)(param_1 + 0x70) < 1) {
    if (*(char *)(param_1 + 0x30) == '\0') {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x78);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 8;
      if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        *(undefined4 *)(param_1 + 0x74) = 4;
      }
    }
    else if (iVar1 == 1) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 8;
      if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        *(undefined4 *)(param_1 + 0x74) = 2;
      }
    }
    else if (iVar1 == 2) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 4;
      if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x74)) {
        *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        *(undefined4 *)(param_1 + 0x74) = 1;
      }
    }
    else if (iVar1 == 3) {
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 2;
    }
    if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x74)) {
      return 0;
    }
    piVar2 = (int *)(*(longlong *)(param_1 + 0x38) +
                    (longlong)(*(int *)(param_1 + 0x74) * *(int *)(param_1 + 0x28)));
    *(int **)(param_1 + 0x68) = piVar2;
  }
  return CONCAT71((int7)((ulonglong)piVar2 >> 8),1);
}

