/* Ghidra address: 004a0b90 */
/* Ghidra symbol: FUN_004a0b90 */


void FUN_004a0b90(undefined8 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x80000000) {
    iVar1 = param_2 + 1;
    do {
      FUN_004a0b20(*param_1);
      param_1 = param_1 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

