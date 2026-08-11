/* Ghidra address: 01784de0 */
/* Ghidra symbol: FUN_01784de0 */


void FUN_01784de0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if ((*(int *)(param_1 + 0x508) == 1) && (*(char *)(param_1 + 0x720) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  return;
}

