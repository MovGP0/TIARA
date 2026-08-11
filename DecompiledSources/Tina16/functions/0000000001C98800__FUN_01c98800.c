/* Ghidra address: 01c98800 */
/* Ghidra symbol: FUN_01c98800 */


int FUN_01c98800(longlong param_1,int param_2)

{
  longlong lVar1;
  
  param_2 = param_2 + -1;
  if (-1 < param_2) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),param_2);
      if (*(char *)(lVar1 + 0x978) != '\0') {
        return param_2 + 1;
      }
      param_2 = param_2 + -1;
    } while (param_2 != -1);
  }
  return 0;
}

