/* Ghidra address: 0040eb60 */
/* Ghidra symbol: FUN_0040eb60 */


undefined8 FUN_0040eb60(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int local_24;
  undefined8 local_10;
  
  local_10 = 0;
  local_24 = param_2;
  if (0x40 < param_2) {
    FUN_00415d10(&local_10,0x40,0);
    uVar1 = FUN_00414df0(&local_10);
    FUN_0040d200(uVar1,0x40,0x20);
    for (; 0x40 < local_24; local_24 = local_24 + -0x40) {
      FUN_0040f020(param_1,local_10);
      lVar2 = FUN_0041f930();
      if (*(int *)(lVar2 + 0x210) != 0) goto LAB_0040ec37;
    }
  }
  if (0 < local_24) {
    FUN_00415d10(&local_10,local_24,0);
    uVar1 = FUN_00414df0(&local_10);
    FUN_0040d200(uVar1,(longlong)local_24,0x20);
    FUN_0040f020(param_1,local_10);
    FUN_0041f930();
  }
LAB_0040ec37:
  FUN_004144d0(&local_10);
  return param_1;
}

