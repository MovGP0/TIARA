/* Ghidra address: 00bcc350 */
/* Ghidra symbol: FUN_00bcc350 */


int FUN_00bcc350(longlong param_1,int param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  
  pcVar1 = (code *)*param_3;
  uVar2 = param_3[1];
  if (0 < param_2) {
    iVar4 = 0;
    if (param_1 != 0) {
      iVar4 = *(int *)(param_1 + -4);
    }
    if ((param_2 <= iVar4) && (0 < param_2)) {
      do {
        cVar3 = (*pcVar1)(uVar2,*(undefined2 *)(param_1 + -2 + (longlong)param_2 * 2));
        if (cVar3 != '\0') {
          return param_2;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  return 0;
}

