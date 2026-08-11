/* Ghidra address: 00c8fdf0 */
/* Ghidra symbol: FUN_00c8fdf0 */


void FUN_00c8fdf0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 != *(char *)(param_1 + 0x55)) {
    if (*(char *)(param_1 + 0x28) != '\0') {
      FUN_0041ddd0(&local_10,PTR_PTR_020027f8);
      uVar1 = FUN_0086dfd0(&PTR_FUN_0086df28,1,local_10);
      FUN_004134c0(uVar1);
    }
    *(char *)(param_1 + 0x55) = param_2;
  }
  FUN_00414480(&local_10);
  return;
}

