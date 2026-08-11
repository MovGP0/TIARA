/* Ghidra address: 007d64c0 */
/* Ghidra symbol: FUN_007d64c0 */


void FUN_007d64c0(longlong param_1,char param_2)

{
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (*(char *)(param_1 + 0xe0) != param_2) {
    FUN_00614880(param_1);
    FUN_007d57e0(param_1);
    *(char *)(param_1 + 0xe0) = param_2;
    FUN_007d5830(param_1);
    FUN_006148c0(param_1);
  }
  return;
}

