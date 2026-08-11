/* Ghidra address: 00cb8100 */
/* Ghidra symbol: FUN_00cb8100 */


void FUN_00cb8100(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if ((byte)(*(char *)(param_1 + 0x119) - 1U) < 2) {
    FUN_0041ddd0(&local_10,PTR_PTR_020057b8);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00cb48e0,1,local_10);
    FUN_004134c0(uVar1);
  }
  else if (*(char *)(param_1 + 0x119) == '\x03') {
    FUN_00cb79e0(param_1);
  }
  FUN_00414480(&local_10);
  return;
}

