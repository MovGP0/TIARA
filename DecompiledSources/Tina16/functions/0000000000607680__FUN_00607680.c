/* Ghidra address: 00607680 */
/* Ghidra symbol: FUN_00607680 */


void FUN_00607680(void)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  int local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = FUN_004afa30(DAT_01dee370);
  local_14 = *(int *)(local_20 + 0x10) + -1;
  if (-1 < local_14) {
    do {
      local_10 = FUN_004aeac0(local_20,local_14);
      cVar1 = FUN_005fe010(local_10);
      if (cVar1 != '\0') {
        FUN_00607910(local_10);
        FUN_005fe090(local_10);
      }
      local_14 = local_14 + -1;
    } while (local_14 != -1);
  }
  FUN_00412130(*(undefined8 *)(DAT_01dee370 + 0x10));
  return;
}

