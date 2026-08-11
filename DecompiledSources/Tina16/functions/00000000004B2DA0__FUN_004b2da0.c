/* Ghidra address: 004b2da0 */
/* Ghidra symbol: FUN_004b2da0 */


undefined4 FUN_004b2da0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x78))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1,uVar1,param_3);
  return uVar1;
}

