/* Ghidra address: 00ccee10 */
/* Ghidra symbol: FUN_00ccee10 */


void FUN_00ccee10(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_00ccf150(param_1);
  if ((char)param_1[0x36] == '\0') {
    (**(code **)(*param_1 + 600))(param_1);
  }
  return;
}

