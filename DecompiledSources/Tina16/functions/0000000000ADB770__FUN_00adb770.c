/* Ghidra address: 00adb770 */
/* Ghidra symbol: FUN_00adb770 */


void FUN_00adb770(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = 0;
  local_28 = *(longlong *)(param_1 + 0xe8);
  lVar3 = FUN_004aeac0(local_28,*(int *)(local_28 + 0x10) + -1);
  local_14 = *(undefined4 *)(lVar3 + 0x70);
  local_10 = FUN_00a74970(&DAT_00a6b700,1);
  while ((uVar1 = *(ushort *)(param_1 + 0x20), 8 < uVar1 && (uVar1 != 0xd))) {
    if (uVar1 == 0x26) {
      local_18 = *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28);
      FUN_00ae7160(param_1,&local_20,local_14);
      if (*(char *)(param_1 + 0x83) == '\0') {
        FUN_00a74ad0(local_10,local_20,local_18);
      }
    }
    else {
      if (uVar1 == 0x3c) break;
      if (*(char *)(param_1 + 0x83) == '\0') {
        FUN_00a74a70(local_10,uVar1,*(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28));
      }
      FUN_00ad1170(param_1);
    }
  }
  iVar2 = FUN_00a74960(local_10);
  if (0 < iVar2) {
    FUN_00a74d00(param_2,local_10);
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_20);
  return;
}

