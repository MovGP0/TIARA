/* Ghidra address: 01898610 */
/* Ghidra symbol: FUN_01898610 */


void FUN_01898610(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  *(undefined1 *)(param_1 + 0x6e0) = 1;
  FUN_01899160(*(undefined8 *)(param_1 + 0x6f8));
  FUN_00452320(param_1 + 0x6f8);
  FUN_006e1220(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

