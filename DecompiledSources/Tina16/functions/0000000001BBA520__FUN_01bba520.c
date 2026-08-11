/* Ghidra address: 01bba520 */
/* Ghidra symbol: FUN_01bba520 */


undefined8 FUN_01bba520(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res10 [3];
  longlong local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(local_30);
  iVar4 = 0;
  if (local_res10[0] != 0) {
    iVar4 = *(int *)(local_res10[0] + -4);
  }
  iVar2 = 1;
  if (0 < iVar4) {
    do {
      lVar3 = (longlong)iVar2;
      cVar1 = FUN_01b215c0(*(undefined2 *)(local_res10[0] + -2 + lVar3 * 2),1);
      if ((cVar1 != '\0') ||
         (cVar1 = FUN_01b215f0(*(undefined2 *)(local_res10[0] + -2 + lVar3 * 2)), cVar1 != '\0')) {
        FUN_00416780(local_40,*(undefined2 *)(local_res10[0] + -2 + lVar3 * 2));
        FUN_00416ad0(local_30,local_40[0]);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414ad0(param_1,local_30[0]);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_res10);
  return param_1;
}

