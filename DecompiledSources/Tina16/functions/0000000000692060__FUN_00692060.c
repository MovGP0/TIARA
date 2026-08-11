/* Ghidra address: 00692060 */
/* Ghidra symbol: FUN_00692060 */


void FUN_00692060(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  char cVar3;
  
  lVar1 = param_1[2];
  cVar3 = FUN_004113d0(lVar1,&PTR_FUN_0066ac78);
  if ((cVar3 != '\0') && (*(char *)(lVar1 + 0x31d) != '\0')) {
    piVar2 = *(int **)(param_2 + 0x10);
    cVar3 = (**(code **)(*param_1 + 8))(param_1);
    if (cVar3 != '\0') {
      *piVar2 = *piVar2 + 2;
      piVar2[1] = piVar2[1] + 2;
      piVar2[2] = piVar2[2] + -2;
      piVar2[3] = piVar2[3] + -2;
    }
    *(undefined1 *)(param_1 + 4) = 1;
  }
  return;
}

