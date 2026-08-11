/* Ghidra address: 009e7bc0 */
/* Ghidra symbol: FUN_009e7bc0 */


undefined8 FUN_009e7bc0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_d;
  undefined2 local_c;
  undefined2 local_a;
  
  local_20 = auStack_48;
  local_d = *(undefined1 *)(param_1 + 8);
  local_a = *(undefined2 *)(param_1 + 10);
  local_c = *(undefined2 *)(param_1 + 0x18);
  FUN_009e95a0(param_1,0x2c);
  FUN_009e9600(param_1,0x22);
  FUN_009e7cf0(param_1,param_2);
  *(undefined2 *)(param_1 + 10) = local_a;
  *(undefined2 *)(param_1 + 0x18) = local_c;
  *(undefined1 *)(param_1 + 8) = local_d;
  return param_2;
}

