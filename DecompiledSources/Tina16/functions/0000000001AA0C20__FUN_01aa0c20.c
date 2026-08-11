/* Ghidra address: 01aa0c20 */
/* Ghidra symbol: FUN_01aa0c20 */


bool FUN_01aa0c20(int param_1,undefined4 param_2)

{
  char acStack_39 [41];
  
  FUN_01aa0b90(param_2,acStack_39 + 1);
  return acStack_39[param_1] == '\x01';
}

