/* Ghidra address: 00cf9450 */
/* Ghidra symbol: FUN_00cf9450 */


undefined8 FUN_00cf9450(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 8) == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02002440);
    uVar1 = FUN_0044d490(&PTR_FUN_00cf5f58,1,local_10);
    FUN_004134c0(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_00414480(&local_10);
  return uVar1;
}

