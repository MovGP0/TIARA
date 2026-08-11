/* Ghidra address: 01052d50 */
/* Ghidra symbol: FUN_01052d50 */


void FUN_01052d50(longlong param_1,undefined8 param_2)

{
  FUN_00f8d300(*(undefined8 *)(param_1 + 0x9d8),0);
  FUN_00f8d160(*(undefined8 *)(param_1 + 0x9d8),1);
  FUN_00f8e020(*(undefined8 *)(param_1 + 0x9d8),param_2);
  *(undefined1 *)(param_1 + 0x6c4) = 1;
  return;
}

