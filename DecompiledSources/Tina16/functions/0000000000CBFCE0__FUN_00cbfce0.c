/* Ghidra address: 00cbfce0 */
/* Ghidra symbol: FUN_00cbfce0 */


undefined1 FUN_00cbfce0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_9;
  
  local_20 = auStack_48;
  FUN_00cbf430(param_1);
  local_9 = *(char *)(param_1 + 0x10) == '\0';
  *(undefined1 *)(param_1 + 0x10) = local_9;
  FUN_00cbf450(param_1);
  return local_9;
}

