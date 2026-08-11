/* Ghidra address: 004b68d0 */
/* Ghidra symbol: FUN_004b68d0 */


void FUN_004b68d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((*(byte *)(param_1 + 0x32) & 8) == 0) {
    if (*(char *)(param_1 + 0x4a) == '\0') {
      FUN_0043e420(param_2,param_3);
    }
    else {
      FUN_0043e210(param_2,param_3);
    }
  }
  else if (*(char *)(param_1 + 0x4a) == '\0') {
    FUN_0043e6d0(param_2,param_3);
  }
  else {
    FUN_0043e650(param_2,param_3);
  }
  return;
}

