/* Ghidra address: 0069a7b0 */
/* Ghidra symbol: FUN_0069a7b0 */


void FUN_0069a7b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  
  lVar1 = param_1[2];
  cVar3 = FUN_004113d0(lVar1,&PTR_FUN_0066cde0);
  if ((cVar3 != '\0') && (*(char *)(lVar1 + 0x31d) != '\0')) {
    cVar3 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar3 != '\0') {
      FUN_00785c20(param_1,param_2);
      piVar2 = *(int **)(param_2 + 0x10);
      *piVar2 = *piVar2 + -2;
      piVar2[1] = piVar2[1] + -2;
      piVar2[2] = piVar2[2] + 2;
      piVar2[3] = piVar2[3] + 2;
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}

