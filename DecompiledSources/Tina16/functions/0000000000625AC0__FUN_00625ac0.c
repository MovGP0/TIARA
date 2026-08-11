/* Ghidra address: 00625ac0 */
/* Ghidra symbol: FUN_00625ac0 */


void FUN_00625ac0(int param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong in_stack_ffffffffffffffa8;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if (param_1 == -0x7ffdfff7) {
    FUN_004168b0(&local_10,*(undefined8 *)(param_2 + 0x10));
    FUN_004168b0(&local_18,*(undefined8 *)(param_2 + 8));
    FUN_004168b0(&local_20,*(undefined8 *)(param_2 + 0x18));
    uVar1 = FUN_00624440(&PTR_FUN_00620bb8,1,local_10,*(undefined4 *)(param_2 + 0x38),local_18,
                         local_20,*(undefined4 *)(param_2 + 0x20));
  }
  else {
    uVar1 = FUN_006242c0(&PTR_FUN_00620998,1,0,param_1,
                         in_stack_ffffffffffffffa8 & 0xffffffff00000000);
  }
  FUN_004134c0(uVar1);
  FUN_00414560(&local_20,3);
  return;
}

