/* Ghidra address: 01759570 */
/* Ghidra symbol: FUN_01759570 */


void FUN_01759570(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  *(undefined1 *)(param_1 + 0x38) = *param_2;
  if ((*(char *)(param_1 + 0xc) == '\0') || (*(char *)(param_1 + 0x38) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}

