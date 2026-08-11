/* Ghidra address: 01b1f700 */
/* Ghidra symbol: FUN_01b1f700 */


void FUN_01b1f700(longlong param_1,longlong param_2,int param_3,int *param_4,int *param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *param_5 = param_3;
  *param_4 = param_3;
  bVar1 = true;
  do {
    cVar2 = FUN_01b1f620(*(undefined8 *)(param_1 + 0x80),
                         *(undefined2 *)(local_res10[0] + -2 + (longlong)*param_4 * 2));
    if (cVar2 == '\0') break;
    if ((bVar1) && (*(short *)(local_res10[0] + -2 + (longlong)*param_4 * 2) == 0x30)) {
      *param_5 = *param_5 + 1;
    }
    else {
      bVar1 = false;
    }
    *param_4 = *param_4 + 1;
    iVar3 = 0;
    if (local_res10[0] != 0) {
      iVar3 = *(int *)(local_res10[0] + -4);
    }
  } while (*param_4 <= iVar3);
  FUN_00414480(local_res10);
  return;
}

