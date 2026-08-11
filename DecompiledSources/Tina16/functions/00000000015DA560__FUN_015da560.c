/* Ghidra address: 015da560 */
/* Ghidra symbol: FUN_015da560 */


void FUN_015da560(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_10 = FUN_015c1c10(&DAT_015b87c8,1);
  local_38 = param_1;
  if (*(char *)(param_1 + 0xe0) == '\0') {
    FUN_015c1b40(local_10,1);
    FUN_015d9f40(param_1,local_10);
    uVar1 = FUN_015c3590(&DAT_015ba810,1,*(undefined8 *)(param_1 + 0x250),1);
    *(undefined8 *)(param_1 + 0x238) = uVar1;
  }
  else {
    uVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    *(undefined8 *)(param_1 + 0x250) = uVar1;
    uVar1 = FUN_015c3590(&DAT_015ba810,1,*(undefined8 *)(param_1 + 0x250),1);
    *(undefined8 *)(param_1 + 0x238) = uVar1;
  }
  FUN_00410f20(local_10);
  return;
}

