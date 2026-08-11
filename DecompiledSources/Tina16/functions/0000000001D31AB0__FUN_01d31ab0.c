/* Ghidra address: 01d31ab0 */
/* Ghidra symbol: FUN_01d31ab0 */


void FUN_01d31ab0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_01d31a70(param_1,0x1000);
  }
  else {
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x10),&stack0xfffffffffffffee9,7,param_4,0x11a5353424f07)
    ;
    FUN_01d31a90(param_1);
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x10),param_1 + 0x28,4);
    FUN_01d31a90(param_1);
  }
  return;
}

