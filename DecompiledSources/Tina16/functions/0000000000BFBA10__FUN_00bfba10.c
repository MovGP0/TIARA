/* Ghidra address: 00bfba10 */
/* Ghidra symbol: FUN_00bfba10 */


int FUN_00bfba10(undefined8 param_1,short *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_2 != 0; param_2 = (short *)FUN_00bcc3c0(param_2)) {
    if (*param_2 == 0xd) {
      param_2 = param_2 + 1;
    }
    if (*param_2 == 10) {
      param_2 = param_2 + 1;
    }
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

