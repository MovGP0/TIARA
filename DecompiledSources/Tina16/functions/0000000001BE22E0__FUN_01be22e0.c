/* Ghidra address: 01be22e0 */
/* Ghidra symbol: FUN_01be22e0 */


undefined8 FUN_01be22e0(longlong *param_1)

{
  undefined8 local_20;
  
  local_20 = (**(code **)(*param_1 + 0x3e0))(param_1);
  if (param_1[0xbc] != 0) {
    (*(code *)param_1[0xbc])(param_1[0xbd],param_1,&local_20);
  }
  return local_20;
}

