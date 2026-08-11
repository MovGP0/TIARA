/* Ghidra address: 00cbfc80 */
/* Ghidra symbol: FUN_00cbfc80 */


void FUN_00cbfc80(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_00cbf430(param_1);
  *(undefined1 *)(param_1 + 0x10) = param_2;
  FUN_00cbf450(param_1);
  return;
}

