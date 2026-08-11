/* Ghidra address: 0064ae50 */
/* Ghidra symbol: FUN_0064ae50 */


void FUN_0064ae50(void)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_58 [36];
  int local_34;
  undefined1 *local_30;
  longlong local_20;
  int local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = FUN_004afa30(DAT_02012350);
  local_34 = *(int *)(local_20 + 0x10) + -1;
  local_14 = 0;
  iVar1 = *(int *)(local_20 + 0x10);
  if (-1 < local_34) {
    do {
      local_34 = iVar1;
      local_10 = FUN_004aeac0(local_20,local_14);
      cVar2 = FUN_005fe010(local_10);
      if (cVar2 != '\0') {
        FUN_0064b1a0(local_10);
        FUN_0064af10(0,local_30);
        FUN_0064af30(0,local_30);
        return;
      }
      local_14 = local_14 + 1;
      local_34 = local_34 + -1;
      iVar1 = local_34;
    } while (local_34 != 0);
  }
  FUN_00412130(*(undefined8 *)(DAT_02012350 + 0x10));
  return;
}

