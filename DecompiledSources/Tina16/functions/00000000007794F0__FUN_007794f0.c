/* Ghidra address: 007794f0 */
/* Ghidra symbol: FUN_007794f0 */


void FUN_007794f0(longlong *param_1,undefined8 *param_2)

{
  undefined8 local_34;
  undefined4 uStack_2c;
  
  local_34 = *param_2;
  uStack_2c = *(undefined4 *)(param_2 + 1);
  (**(code **)(*param_1 + 0x80))(param_1,&local_34);
  return;
}

