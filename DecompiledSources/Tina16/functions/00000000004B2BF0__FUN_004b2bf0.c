/* Ghidra address: 004b2bf0 */
/* Ghidra symbol: FUN_004b2bf0 */


undefined4 FUN_004b2bf0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 200))(param_1,uVar1,param_2);
  return uVar1;
}

