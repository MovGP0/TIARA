/* Ghidra address: 00cbf4e0 */
/* Ghidra symbol: FUN_00cbf4e0 */


undefined4 FUN_00cbf4e0(longlong param_1,int param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_c;
  
  local_20 = auStack_48;
  FUN_00cbf430(param_1);
  local_c = *(undefined4 *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - param_2;
  FUN_00cbf450(param_1);
  return local_c;
}

