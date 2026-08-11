/* Ghidra address: 00ab3fe0 */
/* Ghidra symbol: FUN_00ab3fe0 */


void FUN_00ab3fe0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a74ba0(&DAT_00a6bb20,1);
  FUN_00a74c70(uVar1,param_2,param_3);
  (**(code **)(*param_1 + 200))(param_1,uVar1);
  FUN_00410f20(uVar1);
  return;
}

