/* Ghidra address: 00d57480 */
/* Ghidra symbol: FUN_00d57480 */


undefined8 * FUN_00d57480(undefined8 *param_1,longlong *param_2)

{
  int local_1c;
  
  local_1c = 0;
  (**(code **)(*param_2 + 0x18))(param_2,&local_1c,4);
  FUN_004169f0(param_1,local_1c);
  (**(code **)(*param_2 + 0x18))(param_2,*param_1,local_1c * 2);
  return param_1;
}

