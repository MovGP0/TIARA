/* Ghidra address: 018ccc80 */
/* Ghidra symbol: FUN_018ccc80 */


void FUN_018ccc80(undefined8 param_1,longlong param_2)

{
  for (; (param_2 != 0 &&
         ((FUN_018ccb30(param_1,param_2), *(char *)(param_2 + 0xc5) != '\0' ||
          (*(char *)(param_2 + 0x1cb) != '\0')))); param_2 = *(longlong *)(param_2 + 0x1a8)) {
  }
  return;
}

