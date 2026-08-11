/* Ghidra address: 01037d50 */
/* Ghidra symbol: FUN_01037d50 */


void FUN_01037d50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 local_4b0;
  byte local_4af;
  
  FUN_00417580(&local_4b0,&DAT_00f68330);
  FUN_01037b90(param_1);
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0xbd8) = 1;
  *(undefined4 *)(param_1 + 0xbf8) = 0;
  *(undefined1 *)(param_1 + 0xbdc) = 0;
  while( true ) {
    *(undefined1 *)(param_1 + 0x98) = 1;
    lVar1 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),1,iVar3,param_1 + 0x80);
    if (lVar1 == 0) break;
    uVar2 = FUN_00f79400(param_1,*(undefined4 *)(param_1 + 0x80));
    iVar3 = *(int *)(param_1 + 0x80) + 1;
    lVar1 = FUN_004113f0(uVar2,&PTR_FUN_00f6b680);
    FUN_00417c40(&local_4b0,lVar1 + 0x128,&DAT_00f68330);
    *(uint *)(param_1 + (longlong)*(int *)(param_1 + 0xbd8) * 4 + 0xbac) = (uint)local_4af;
    *(int *)(param_1 + 0xbd8) = *(int *)(param_1 + 0xbd8) + 1;
  }
  *(undefined4 *)(param_1 + 0xbf8) = 0;
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  while( true ) {
    *(undefined1 *)(param_1 + 0x98) = 1;
    lVar1 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),1,iVar3,param_1 + 0x80);
    if (lVar1 == 0) break;
    iVar3 = *(int *)(param_1 + 0x80) + 1;
    *(int *)(param_1 + 0xbf8) = *(int *)(param_1 + 0x80);
    FUN_00f7a500(param_1,*(undefined8 *)(param_1 + 0x28),lVar1);
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x8d8) = 0;
  lVar1 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),0,0,param_1 + 0x80);
  if (lVar1 != 0) {
    FUN_00f7a500(param_1,*(undefined8 *)(param_1 + 0x20),lVar1);
  }
  FUN_00f788b0(param_1,*(undefined8 *)(param_1 + 0x20),&LAB_01037f7c);
  FUN_00417740(&local_4b0,&DAT_00f68330);
  return;
}

