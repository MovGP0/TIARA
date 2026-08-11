/* Ghidra address: 00cbdc30 */
/* Ghidra symbol: FUN_00cbdc30 */


undefined8 FUN_00cbdc30(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_0041b910(param_4);
  (**(code **)(*param_1 + 0x108))(param_1,local_res20);
  (**(code **)(*param_1 + 0xe8))(param_1,param_2,*(undefined8 *)(param_1[0x21] + 0x18),param_3);
  FUN_0041b800(&local_res20);
  return param_2;
}

