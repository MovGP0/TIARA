/* Ghidra address: 004b4b10 */
/* Ghidra symbol: FUN_004b4b10 */


void FUN_004b4b10(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined2 local_c;
  undefined2 local_a;
  
  local_20 = auStack_48;
  local_a = *(undefined2 *)(param_1 + 0x2c);
  local_c = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(param_1 + 0x2c) = 0x2c;
  *(undefined2 *)(param_1 + 0x2e) = 0x22;
  FUN_004b50b0(param_1,param_2);
  *(undefined2 *)(param_1 + 0x2c) = local_a;
  *(undefined2 *)(param_1 + 0x2e) = local_c;
  return;
}

