/* Ghidra address: 004186c0 */
/* Ghidra symbol: FUN_004186c0 */


undefined8 FUN_004186c0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  FUN_00414a00(&local_10,param_1,uVar1);
  return local_10;
}

