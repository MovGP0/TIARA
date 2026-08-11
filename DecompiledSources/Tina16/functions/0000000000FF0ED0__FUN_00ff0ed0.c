/* Ghidra address: 00ff0ed0 */
/* Ghidra symbol: FUN_00ff0ed0 */


void FUN_00ff0ed0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_4c0 [2];
  undefined1 local_4b0;
  byte local_4af;
  undefined4 local_460;
  
  local_4c0[0] = 0;
  FUN_00417580(&local_4b0,&DAT_00f68330);
  FUN_00ff0d30(param_1);
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x924) = 1;
  *(undefined4 *)(param_1 + 0x928) = 0;
  *(undefined4 *)(param_1 + 0x92c) = 0;
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  *(undefined4 *)(param_1 + 0x930) = 1;
  *(undefined1 *)(param_1 + 0x95c) = 0;
  *(undefined1 *)(param_1 + 0x95d) = 0;
  *(undefined1 *)(param_1 + 0x95f) = 0;
  do {
    *(undefined1 *)(param_1 + 0x98) = 1;
    lVar1 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),1,iVar4,param_1 + 0x80);
    if (lVar1 != 0) {
      uVar2 = FUN_00f79400(param_1,*(undefined4 *)(param_1 + 0x80));
      iVar4 = *(int *)(param_1 + 0x80) + 1;
      *(int *)(param_1 + 0x92c) = *(int *)(lVar1 + 0x3c) + 1;
      lVar3 = FUN_004113f0(uVar2,&PTR_FUN_00f6b680);
      FUN_00417c40(&local_4b0,lVar3 + 0x128,&DAT_00f68330);
      *(uint *)(param_1 + 0x8f8 + (longlong)*(int *)(param_1 + 0x924) * 4) = (uint)local_4af;
      *(int *)(param_1 + 0x924) = *(int *)(param_1 + 0x924) + 1;
      if (local_4af == 1) {
        *(undefined1 *)(param_1 + 0x95c) = 1;
        *(undefined4 *)(param_1 + 0x964) = local_460;
      }
      if (local_4af == 0xb) {
        *(undefined1 *)(param_1 + 0x95d) = 1;
      }
      if (local_4af == 0x1f) {
        *(undefined1 *)(param_1 + 0x95e) = 1;
        *(undefined4 *)(param_1 + 0x964) = local_460;
      }
      if (local_4af == 0xe) {
        *(undefined1 *)(param_1 + 0x95f) = 1;
      }
    }
  } while (lVar1 != 0);
  *(undefined4 *)(param_1 + 0x92c) = 0;
  iVar4 = 0;
  while( true ) {
    *(undefined1 *)(param_1 + 0x98) = 1;
    lVar1 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),1,iVar4,param_1 + 0x80);
    if (lVar1 == 0) break;
    iVar4 = *(int *)(param_1 + 0x80) + 1;
    *(int *)(param_1 + 0x92c) = *(int *)(param_1 + 0x80);
    FUN_00f7a500(param_1,*(undefined8 *)(param_1 + 0x28),lVar1);
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x8d8) = 0;
  lVar1 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),0,0,param_1 + 0x80);
  if (lVar1 != 0) {
    FUN_00f7a500(param_1,*(undefined8 *)(param_1 + 0x20),lVar1);
  }
  FUN_00416780(local_4c0,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416ad0(local_4c0,&DAT_00ff11b8);
  FUN_00f787d0(param_1,*(undefined8 *)(param_1 + 0x20),local_4c0[0]);
  FUN_00414480(local_4c0);
  FUN_00417740(&local_4b0,&DAT_00f68330);
  return;
}

