/* Ghidra address: 017e2760 */
/* Ghidra symbol: FUN_017e2760 */


void FUN_017e2760(longlong param_1,char param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_017e2720(param_1);
  if (-1 < *(int *)(param_1 + 0x55c)) {
    if (param_2 != '\x01') {
      FUN_017e40b0(param_1);
    }
    FUN_017e4880(param_1,param_2);
  }
  if ((-1 < *(int *)(param_1 + 0x55c)) && (param_2 != '\x01')) {
    FUN_017e40d0(param_1);
  }
  return;
}

