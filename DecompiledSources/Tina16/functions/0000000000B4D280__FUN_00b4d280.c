/* Ghidra address: 00b4d280 */
/* Ghidra symbol: FUN_00b4d280 */


void FUN_00b4d280(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00b1bcd0(param_2);
  uVar1 = FUN_00b1bb70(uVar1);
  (**(code **)(*param_1 + 8))(param_1,uVar1);
  return;
}

