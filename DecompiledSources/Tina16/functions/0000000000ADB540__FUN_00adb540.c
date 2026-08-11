/* Ghidra address: 00adb540 */
/* Ghidra symbol: FUN_00adb540 */


void FUN_00adb540(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  char local_2b;
  short local_2a;
  longlong local_28;
  undefined8 *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_20 = (undefined8 *)0x0;
  local_28 = *(longlong *)(param_1 + 0xe8);
  lVar2 = FUN_004aeac0(local_28,*(int *)(local_28 + 0x10) + -1);
  local_14 = *(undefined4 *)(lVar2 + 0x70);
  local_10 = FUN_00a74970(&DAT_00a6b700,1);
  do {
    while( true ) {
      uVar3 = (ulonglong)*(ushort *)(param_1 + 0x20);
      if (uVar3 < 0x21) break;
      if (uVar3 == 0x26) {
        local_18 = *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28);
        FUN_00ae7160(param_1,&local_20,local_14);
        if (*(char *)(param_1 + 0x83) == '\0') {
          FUN_00a74ad0(local_10,local_20,local_18);
        }
      }
      else {
        if (uVar3 == 0x3c) goto code_r0x00adb6f3;
LAB_00adb6bd:
        if (*(char *)(param_1 + 0x83) == '\0') {
          FUN_00a74a70(local_10,*(ushort *)(param_1 + 0x20),
                       *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28));
        }
        FUN_00ad1170(param_1);
      }
    }
    if (uVar3 != 0x20) {
      if (uVar3 < 9) {
code_r0x00adb6f3:
        iVar1 = FUN_00a74960(local_10);
        if (0 < iVar1) {
          FUN_00a74d00(param_2,local_10);
        }
        FUN_00410f20(local_10);
        FUN_00414480(&local_20);
        return;
      }
      if ((1 < uVar3 - 9) && (uVar3 - 9 != 4)) goto LAB_00adb6bd;
    }
    if (*(char *)(param_1 + 0x83) == '\0') {
      FUN_00a74a70(local_10,0x20,*(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x28));
    }
    FUN_00ad1170(param_1);
    while( true ) {
      local_2a = *(short *)(param_1 + 0x20);
      if ((((ushort)(local_2a - 9U) < 2) || ((ushort)(local_2a - 0xcU) < 2)) || (local_2a == 0x20))
      {
        local_2b = '\x01';
      }
      else {
        local_2b = '\0';
      }
      if (local_2b == '\0') break;
      FUN_00ad1170(param_1);
    }
  } while( true );
}

