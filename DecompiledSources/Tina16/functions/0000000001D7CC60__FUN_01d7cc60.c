/* Ghidra address: 01d7cc60 */
/* Ghidra symbol: FUN_01d7cc60 */


void FUN_01d7cc60(undefined8 param_1,longlong param_2)

{
  FUN_00414560(param_2 + 0x40,2);
  FUN_00414560(param_2 + 0x50,4);
  FUN_00417840(*(undefined8 *)(param_2 + 0x488),&DAT_00401390,
               (longlong)*(int *)(param_2 + 0x4d0) + 1);
  FUN_00414480(param_2 + 0x4d8);
  return;
}

