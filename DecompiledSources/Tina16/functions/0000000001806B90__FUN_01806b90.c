/* Ghidra address: 01806b90 */
/* Ghidra symbol: FUN_01806b90 */


undefined4 FUN_01806b90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1,uVar1,param_3);
  return uVar1;
}

