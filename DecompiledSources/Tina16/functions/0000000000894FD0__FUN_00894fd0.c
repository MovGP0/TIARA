/* Ghidra address: 00894fd0 */
/* Ghidra symbol: FUN_00894fd0 */


undefined8 FUN_00894fd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00415d10(&local_10,0xfa,0);
  uVar1 = FUN_00415ab0(local_10);
  (**(code **)PTR_PTR_02005640)(uVar1,0xfa);
  uVar1 = FUN_00415ab0(local_10);
  FUN_004167a0(param_2,uVar1);
  FUN_004144d0(&local_10);
  return param_2;
}

