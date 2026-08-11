/* Ghidra address: 0069fc30 */
/* Ghidra symbol: FUN_0069fc30 */


void FUN_0069fc30(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = *(int **)(param_2 + 0x10);
  FUN_00423b10(piVar1,-*(int *)(param_1 + 0x324),-*(int *)(param_1 + 0x324));
  uVar2 = (uint)(*(char *)(param_1 + 0x491) != '\0');
  if (*(char *)(param_1 + 0x492) != '\0') {
    uVar2 = uVar2 + 1;
  }
  if ((*(byte *)(param_1 + 0x490) & 1) != 0) {
    *piVar1 = *piVar1 + uVar2;
  }
  if ((*(byte *)(param_1 + 0x490) & 2) != 0) {
    piVar1[1] = piVar1[1] + uVar2;
  }
  if ((*(byte *)(param_1 + 0x490) & 4) != 0) {
    piVar1[2] = piVar1[2] - uVar2;
  }
  if ((*(byte *)(param_1 + 0x490) & 8) != 0) {
    piVar1[3] = piVar1[3] - uVar2;
  }
  FUN_0065d670(param_1,param_2);
  return;
}

