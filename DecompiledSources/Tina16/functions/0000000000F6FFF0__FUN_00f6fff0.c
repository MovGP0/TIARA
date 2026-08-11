/* Ghidra address: 00f6fff0 */
/* Ghidra symbol: FUN_00f6fff0 */


void FUN_00f6fff0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_00f6f040();
  *(undefined8 *)(lVar1 + 0x98) = *(undefined8 *)(lVar1 + 0xa0);
  *(undefined4 *)(lVar1 + 0xa0) = param_2;
  *(undefined4 *)(lVar1 + 0xa4) = param_3;
  if ((*(char *)(lVar1 + 0x93) == '\0') || (*(char *)(lVar1 + 0x93) == '\x01')) {
    *(undefined4 *)(lVar1 + 0xa4) = *(undefined4 *)(lVar1 + 0x9c);
  }
  else {
    *(undefined4 *)(lVar1 + 0xa0) = *(undefined4 *)(lVar1 + 0x98);
  }
  return;
}

