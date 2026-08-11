/* Ghidra address: 00879300 */
/* Ghidra symbol: FUN_00879300 */


int FUN_00879300(char param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_2 + -8);
  }
  if (param_3 <= iVar1 + -1) {
    iVar1 = ((iVar1 + -1) - param_3) + 1;
    do {
      if (*(char *)(param_2 + param_3) == param_1) {
        return param_3;
      }
      param_3 = param_3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

