/* Ghidra address: 00ccda20 */
/* Ghidra symbol: FUN_00ccda20 */


void FUN_00ccda20(void)

{
  int iVar1;
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 *local_30;
  undefined8 local_20;
  int local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = FUN_004afa30(DAT_01eadbd0);
  local_18 = (**(code **)PTR_DAT_02005130)();
  local_34 = local_18 + -1;
  local_14 = 0;
  iVar1 = local_18;
  if (-1 < local_34) {
    do {
      local_34 = iVar1;
      local_10 = FUN_00618bb0(&PTR_FUN_0086ece8,1);
      FUN_004ae7e0(local_20,local_10);
      local_34 = local_34 + -1;
      iVar1 = local_34;
    } while (local_34 != 0);
  }
  FUN_00412130(*(undefined8 *)(DAT_01eadbd0 + 0x10));
  return;
}

