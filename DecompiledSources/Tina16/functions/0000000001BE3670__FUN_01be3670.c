/* Ghidra address: 01be3670 */
/* Ghidra symbol: FUN_01be3670 */


void FUN_01be3670(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_004d2dc0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (*(longlong *)(param_1 + 0x80) == param_2)) {
    *(undefined1 *)(param_1 + 0x78) = 1;
    FUN_004d2d90(*(undefined8 *)(param_1 + 0x80),param_1);
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}

