/* Ghidra address: 009e7050 */
/* Ghidra symbol: FUN_009e7050 */


undefined4 FUN_009e7050(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x70))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1,uVar1,param_3);
  return uVar1;
}

