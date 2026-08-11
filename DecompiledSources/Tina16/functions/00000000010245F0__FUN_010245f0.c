/* Ghidra address: 010245f0 */
/* Ghidra symbol: FUN_010245f0 */


void FUN_010245f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  undefined8 local_4e0 [2];
  undefined1 local_4d0;
  byte local_4cf;
  undefined1 local_484;
  undefined4 local_480;
  char local_41c;
  
  local_4e0[0] = 0;
  FUN_00417580(&local_4d0,&DAT_00f68330);
  FUN_01024430(param_1);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x924) = 1;
  *(undefined4 *)(param_1 + 0x928) = 0;
  *(undefined4 *)(param_1 + 0x92c) = 0;
  *(undefined1 *)(param_1 + 0x8f0) = 0;
  *(undefined4 *)(param_1 + 0x930) = 1;
  *(undefined4 *)(param_1 + 0x934) = 1;
  *(undefined1 *)(param_1 + 0x964) = 0;
  *(undefined1 *)(param_1 + 0x965) = 0;
  *(undefined1 *)(param_1 + 0x967) = 0;
  *(undefined1 *)(param_1 + 0x968) = 0;
  *(undefined1 *)(param_1 + 0x969) = 0;
  *(undefined1 *)(param_1 + 0x939) = 0;
  *(undefined1 *)(param_1 + 0x93a) = 0;
  *(undefined4 *)(param_1 + 0x978) = 0x7dcb;
  *(undefined4 *)(param_1 + 0x97c) = 0x63c0;
  *(undefined4 *)(param_1 + 0x980) = 0x63c0;
  *(undefined4 *)(param_1 + 0x984) = 0x97d6;
  *(undefined4 *)(param_1 + 0x988) = 0xcbeb;
  do {
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0x99) = 0;
    lVar2 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),1,iVar5,param_1 + 0x80);
    if (lVar2 != 0) {
      uVar3 = FUN_00f79400(param_1,*(undefined4 *)(param_1 + 0x80));
      iVar5 = *(int *)(param_1 + 0x80) + 1;
      *(int *)(param_1 + 0x92c) = *(int *)(lVar2 + 0x3c) + 1;
      lVar4 = FUN_004113f0(uVar3,&PTR_FUN_00f6b680);
      FUN_00417c40(&local_4d0,lVar4 + 0x128,&DAT_00f68330);
      if (local_4cf < 0x80) {
        *(undefined1 *)(param_1 + 0x98) = 1;
        *(undefined1 *)(param_1 + 0x93a) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x99) = 1;
        *(undefined1 *)(param_1 + 0x939) = 1;
      }
      *(uint *)(param_1 + 0x8f8 + (longlong)*(int *)(param_1 + 0x924) * 4) = (uint)local_4cf;
      *(int *)(param_1 + 0x924) = *(int *)(param_1 + 0x924) + 1;
      bVar6 = local_4cf & 0x7f;
      if (bVar6 == 1) {
        *(undefined1 *)(param_1 + 0x964) = 1;
        *(undefined4 *)(param_1 + 0x970) = local_480;
        *(undefined1 *)(param_1 + 0x9bd) = local_484;
      }
      if (bVar6 == 0xb) {
        if (*(double *)(param_1 + 0x78) != 16000000.0) {
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x978)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x978) = 0x10000 - iVar1;
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x97c)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x97c) = 0x10000 - iVar1;
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x980)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x980) = 0x10000 - iVar1;
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x984)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x984) = 0x10000 - iVar1;
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x988)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x988) = 0x10000 - iVar1;
        }
        *(undefined1 *)(param_1 + 0x965) = 1;
      }
      if (bVar6 == 0x1f) {
        if (*(double *)(param_1 + 0x78) != 16000000.0) {
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x978)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x978) = 0x10000 - iVar1;
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x97c)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x97c) = 0x10000 - iVar1;
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x980)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x980) = 0x10000 - iVar1;
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x984)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x984) = 0x10000 - iVar1;
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x988)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x988) = 0x10000 - iVar1;
        }
        *(undefined1 *)(param_1 + 0x966) = 1;
        *(char *)(param_1 + 0x96b) = local_41c;
        *(bool *)(param_1 + 0x96c) = local_41c == '\0';
      }
      if (bVar6 == 0xe) {
        if (*(double *)(param_1 + 0x78) != 16000000.0) {
          *(undefined4 *)(param_1 + 0x97c) = 0x63c0;
          *(undefined4 *)(param_1 + 0x984) = 0xb1e0;
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x97c)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x97c) = 0x10000 - iVar1;
          iVar1 = FUN_0040c770(((double)(0x10000 - *(int *)(param_1 + 0x984)) / 16000000.0) *
                               *(double *)(param_1 + 0x78));
          *(int *)(param_1 + 0x984) = 0x10000 - iVar1;
        }
        *(undefined1 *)(param_1 + 0x967) = 1;
      }
      if (bVar6 == 3) {
        *(undefined1 *)(param_1 + 0x969) = 1;
      }
      if (bVar6 == 0xc) {
        *(undefined1 *)(param_1 + 0x968) = 1;
      }
    }
  } while (lVar2 != 0);
  *(undefined4 *)(param_1 + 0x92c) = 0;
  iVar5 = 0;
  do {
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0x99) = 0;
    lVar2 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),1,iVar5,param_1 + 0x80);
    if (lVar2 != 0) {
      iVar5 = *(int *)(param_1 + 0x80) + 1;
      *(int *)(param_1 + 0x92c) = *(int *)(param_1 + 0x80);
      uVar3 = FUN_00f79400(param_1,*(undefined4 *)(param_1 + 0x80));
      lVar4 = FUN_004113f0(uVar3,&PTR_FUN_00f6b680);
      FUN_00417c40(&local_4d0,lVar4 + 0x128,&DAT_00f68330);
      if (local_4cf < 0x80) {
        *(undefined1 *)(param_1 + 0x98) = 1;
        FUN_00f7a500(param_1,*(undefined8 *)(param_1 + 0x28),lVar2);
      }
      else {
        *(undefined1 *)(param_1 + 0x99) = 1;
        local_4cf = local_4cf & 0x7f;
        FUN_00f7a500(param_1,*(undefined8 *)(param_1 + 0x30),lVar2);
      }
    }
  } while (lVar2 != 0);
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x8d8) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  lVar2 = FUN_00f753d0(*(undefined8 *)(param_1 + 0x90),0,0,param_1 + 0x80);
  if (lVar2 != 0) {
    FUN_00f7a500(param_1,*(undefined8 *)(param_1 + 0x20),lVar2);
  }
  FUN_00416780(local_4e0,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416ad0(local_4e0,&DAT_01024d48);
  FUN_00f787d0(param_1,*(undefined8 *)(param_1 + 0x20),local_4e0[0]);
  FUN_00414480(local_4e0);
  FUN_00417740(&local_4d0,&DAT_00f68330);
  return;
}

