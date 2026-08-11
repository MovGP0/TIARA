/* Ghidra address: 0065d670 */
/* Ghidra symbol: FUN_0065d670 */


void FUN_0065d670(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  piVar1 = *(int **)(param_2 + 0x10);
  FUN_00423b10(piVar1,-*(int *)((longlong)param_1 + 0x324),-*(int *)((longlong)param_1 + 0x324));
  if (*(char *)((longlong)param_1 + 0x31d) != '\0') {
    iVar2 = 0;
    if (*(char *)((longlong)param_1 + 0x31b) != '\0') {
      iVar2 = (int)param_1[100];
    }
    if (*(char *)((longlong)param_1 + 0x31c) != '\0') {
      iVar2 = iVar2 + (int)param_1[100];
    }
    if ((*(byte *)((longlong)param_1 + 0x31a) & 1) != 0) {
      *piVar1 = *piVar1 + iVar2;
    }
    if ((*(byte *)((longlong)param_1 + 0x31a) & 2) != 0) {
      piVar1[1] = piVar1[1] + iVar2;
    }
    if ((*(byte *)((longlong)param_1 + 0x31a) & 4) != 0) {
      piVar1[2] = piVar1[2] - iVar2;
    }
    if ((*(byte *)((longlong)param_1 + 0x31a) & 8) != 0) {
      piVar1[3] = piVar1[3] - iVar2;
    }
  }
  return;
}

