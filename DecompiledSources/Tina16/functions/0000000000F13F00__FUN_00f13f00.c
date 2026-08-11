/* Ghidra address: 00f13f00 */
/* Ghidra symbol: FUN_00f13f00 */


undefined4 FUN_00f13f00(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01d2c120(param_1,param_2);
  (**(code **)(*param_1 + 0x70))(param_1,param_2);
  return uVar1;
}

