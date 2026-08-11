/* Ghidra address: 015da660 */
/* Ghidra symbol: FUN_015da660 */


void FUN_015da660(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_30;
  char local_19;
  undefined8 local_18;
  undefined1 local_9;
  
  local_30 = auStack_68;
  local_18 = FUN_015c1c10(&DAT_015b87c8,1);
  local_9 = *(undefined1 *)(param_1 + 0x111);
  *(undefined1 *)(param_1 + 0x111) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  do {
    if (*(longlong *)(param_1 + 0x238) != 0) {
      FUN_00410f20(*(undefined8 *)(param_1 + 0x238));
    }
    *(undefined8 *)(param_1 + 0x238) = 0;
    FUN_015c1d40(*(undefined8 *)(param_1 + 0x98));
    FUN_015c1bc0(local_18,1);
    cVar1 = FUN_015bf1b0(*(undefined8 *)(param_1 + 0x88));
    if (cVar1 == '\0') {
      cVar1 = FUN_015c08c0(*(undefined8 *)(param_1 + 0x88));
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x103) = 1;
      }
    }
    FUN_015d9f40(param_1,local_18);
    local_48 = param_1;
    uVar2 = FUN_015c3590(&DAT_015ba810,1,*(undefined8 *)(param_1 + 0x250),0);
    *(undefined8 *)(param_1 + 0x238) = uVar2;
    local_19 = FUN_015c9b20(*(undefined8 *)(param_1 + 0x238));
    FUN_015daaa0(param_1);
  } while ((local_19 == '\0') && (*(char *)(param_1 + 0x103) != '\0'));
  *(undefined1 *)(param_1 + 0x111) = local_9;
  FUN_00410f20(local_18);
  return;
}

