/* Ghidra address: 00cf23e0 */
/* Ghidra symbol: FUN_00cf23e0 */


undefined8 FUN_00cf23e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_020031e8);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00cf00c0,1,local_10);
    FUN_004134c0(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  FUN_00414480(&local_10);
  return uVar1;
}

