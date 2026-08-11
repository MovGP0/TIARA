/* Ghidra address: 01759c20 */
/* Ghidra symbol: FUN_01759c20 */


void FUN_01759c20(longlong *param_1,undefined8 param_2)

{
  short sVar1;
  uint local_2c [3];
  
  sVar1 = (**(code **)(*(longlong *)param_1[5] + 0xf8))((longlong *)param_1[5]);
  local_2c[0] = (uint)(sVar1 == 0xf1);
  (**(code **)(*param_1 + 0x70))(param_1,local_2c);
  (**(code **)(*param_1 + 0x68))(param_1,param_2);
  return;
}

