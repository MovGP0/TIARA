/* Ghidra address: 0097e920 */
/* Ghidra symbol: FUN_0097e920 */


void FUN_0097e920(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_00414520(local_20);
  (**(code **)(*param_1 + 0x108))(param_1,param_2,param_3,uVar1);
  (**(code **)(*param_1 + 0x110))(param_1,param_2,local_20[0]);
  FUN_00414520(local_20);
  return;
}

