/* Ghidra address: 00b4d8f0 */
/* Ghidra symbol: FUN_00b4d8f0 */


void FUN_00b4d8f0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00b1bcd0(param_3);
  uVar1 = FUN_00b1bb70(uVar1);
  (**(code **)(*param_1 + 0x60))(param_1,param_2,uVar1);
  return;
}

