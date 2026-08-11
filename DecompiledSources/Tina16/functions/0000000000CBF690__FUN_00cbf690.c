/* Ghidra address: 00cbf690 */
/* Ghidra symbol: FUN_00cbf690 */


void FUN_00cbf690(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_00cbf430(param_1);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_00cbf450(param_1);
  return;
}

