/* Ghidra address: 016bf1b0 */
/* Ghidra symbol: FUN_016bf1b0 */


void FUN_016bf1b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  undefined *in_stack_fffffffffffff8b8;
  ulonglong uVar7;
  undefined *puVar8;
  byte *pbVar9;
  undefined8 local_710;
  undefined1 *local_708;
  undefined8 local_700;
  undefined8 local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined1 local_6d0 [256];
  undefined8 local_5d0;
  undefined1 local_5c8 [256];
  undefined8 local_4c8;
  undefined1 *local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined1 *local_490;
  undefined *local_488;
  undefined8 local_480;
  undefined1 *local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 local_430;
  char local_428 [256];
  char local_328 [256];
  undefined1 local_228 [256];
  byte local_128;
  char local_127;
  
  local_710 = 0;
  local_708 = (undefined1 *)0x0;
  local_6f8 = 0;
  local_700 = 0;
  local_6e0 = 0;
  local_6e8 = 0;
  local_6f0 = 0;
  local_4c8 = 0;
  local_5d0 = 0;
  local_6d8 = 0;
  local_4a8 = 0;
  local_4c0 = (undefined1 *)0x0;
  local_4b0 = 0;
  local_4b8 = 0;
  local_4a0 = 0;
  local_498 = 0;
  local_490 = (undefined1 *)0x0;
  local_478 = (undefined1 *)0x0;
  local_480 = 0;
  local_488 = (undefined *)0x0;
  local_468 = 0;
  local_470 = 0;
  local_460 = 0;
  local_458 = 0;
  local_450 = 0;
  local_440 = 0;
  local_448 = 0;
  local_430 = 0;
  local_438 = 0;
  lVar5 = FUN_016b97f0(&DAT_016b45f0,1,0);
  iVar2 = (**(code **)(*param_1 + 0x28))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_438,iVar6);
      FUN_0043e130(&local_430,local_438);
      FUN_00416910(&local_128,local_430,0xff);
      FUN_004154b0(&local_448,&local_128,0);
      FUN_016b9120(&local_440,local_448);
      FUN_00415560(&local_128,local_440,0xff);
      if (local_127 != '*') {
        FUN_004169a0(&local_450,&local_128);
        iVar3 = FUN_004170c0(&DAT_016bfbf8,local_450,1);
        if (0 < iVar3) {
          FUN_004169a0(&local_458,&local_128);
          uVar4 = FUN_004170c0(&DAT_016bfbf8,local_458,1);
          FUN_00415260(&local_128,0xff,uVar4,local_128);
        }
        FUN_004154b0(&local_460,&local_128,0);
        in_stack_fffffffffffff8b8 = &DAT_016bfc08;
        FUN_00415980(lVar5 + 0xd90,3,*(undefined8 *)(lVar5 + 0xd90),local_460,&DAT_016bfc08);
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined8 *)(lVar5 + 0x20) = 0x2800130100000200;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  *(undefined8 *)(lVar5 + 0x38) = 0;
  *(undefined4 *)(lVar5 + 0x990) = 1;
  FUN_016b9d20(lVar5);
  FUN_016b9d80(lVar5);
  local_428[0] = '\0';
  uVar7 = (ulonglong)in_stack_fffffffffffff8b8 & 0xffffffffffffff00;
  cVar1 = FUN_016babb0(lVar5,1,L"TIME_SCALE_FACTOR",&DAT_016bfc5c,uVar7,&local_128);
  if (cVar1 != '\0') {
    FUN_016bad90(lVar5,local_228);
    FUN_004154b0(&local_470,local_228,0);
    FUN_004156b0(&local_468," TIME_SCALE_FACTOR=",local_470);
    FUN_00415560(local_428,local_468,0xff);
  }
  puVar8 = (undefined *)(uVar7 & 0xffffffffffffff00);
  cVar1 = FUN_016babb0(lVar5,1,L"VALUE_SCALE_FACTOR",&DAT_016bfc5c,puVar8,&local_128);
  if (cVar1 != '\0') {
    FUN_016bad90(lVar5,local_228);
    FUN_004154b0(&local_480,local_428,0);
    FUN_004154b0(&local_488,local_228,0);
    puVar8 = local_488;
    FUN_00415980(&local_478,3,local_480," VALUE_SCALE_FACTOR=",local_488);
    FUN_00415560(local_428,local_478,0xff);
  }
  if (local_428[0] != '\0') {
    FUN_004169a0(&local_490,local_428);
    (**(code **)(*param_2 + 0x78))(param_2,local_490);
  }
  iVar2 = 1;
  local_328[0] = '\0';
  while (cVar1 = FUN_016b9d70(lVar5), cVar1 == '\0') {
    puVar8 = (undefined *)((ulonglong)puVar8 & 0xffffffffffffff00);
    pbVar9 = &local_128;
    cVar1 = FUN_016babb0(lVar5,1,L"REPEAT|ENDREPEAT|FILE",&DAT_016bfc5c,puVar8,pbVar9);
    if (cVar1 == '\0') {
      cVar1 = FUN_016ba100(lVar5,0x2b);
      if (cVar1 == '\0') {
        FUN_016bad90(lVar5,local_5c8);
        FUN_004154b0(&local_6e8,local_5c8,0);
        FUN_016bad90(lVar5,local_6d0);
        FUN_004154b0(&local_6f0,local_6d0,0);
        puVar8 = &DAT_016bfddc;
        FUN_00415980(&local_6e0,5,&DAT_016bfdfc,local_6e8,&DAT_016bfddc,local_6f0,&DAT_016bfdec);
        FUN_00415560(local_228,local_6e0,0xff);
      }
      else {
        FUN_016bad90(lVar5,local_5c8);
        FUN_004154b0(&local_5d0,local_5c8,0);
        FUN_016bad90(lVar5,local_6d0);
        FUN_004154b0(&local_6d8,local_6d0,0);
        puVar8 = &DAT_016bfddc;
        FUN_00415980(&local_4c8,5,&DAT_016bfdcc,local_5d0,&DAT_016bfddc,local_6d8,&DAT_016bfdec);
        FUN_00415560(local_228,local_4c8,0xff);
      }
      FUN_004154b0(&local_6f8,local_328,0);
      FUN_004154b0(&local_700,local_228,0);
      FUN_004155b0(&local_6f8,local_700);
      FUN_00415560(local_328,local_6f8,0xff);
      if (iVar2 % 5 == 0) {
        FUN_004169a0(&local_708,local_328);
        (**(code **)(*param_2 + 0x78))(param_2,local_708);
        local_328[0] = '\0';
        iVar2 = 0;
      }
      iVar2 = iVar2 + 1;
    }
    else {
      iVar6 = FUN_00414f50(&local_128,&DAT_016bfd2c,(ulonglong)local_128 + 1);
      if (iVar6 == 0) {
        FUN_016ba220(lVar5,&local_128,&DAT_016bfd31,1);
      }
      else {
        iVar6 = FUN_00414f50(&local_128,"\tENDREPEAT",(ulonglong)local_128 + 1);
        if (iVar6 == 0) {
          if (local_328[0] != '\0') {
            FUN_004169a0(&local_498,local_328);
            (**(code **)(*param_2 + 0x78))(param_2,local_498);
            local_328[0] = '\0';
          }
          (**(code **)(*param_2 + 0x78))(param_2,L" ENDREPEAT");
        }
        else {
          FUN_016ba960(lVar5,&local_128,1,L"FOR|FOREVER",&DAT_016bfc5c,
                       (ulonglong)pbVar9 & 0xffffffffffffff00);
          iVar6 = FUN_00414f50(&local_128,&DAT_016bfda4,(ulonglong)local_128 + 1);
          if (iVar6 == 0) {
            FUN_016baf80(lVar5,local_228);
          }
          else {
            local_228[0] = 0;
          }
          if (local_328[0] != '\0') {
            FUN_004169a0(&local_4a0,local_328);
            (**(code **)(*param_2 + 0x78))(param_2,local_4a0);
            local_328[0] = '\0';
          }
          FUN_004154b0(&local_4b0,&local_128,0);
          FUN_004154b0(&local_4b8,local_228,0);
          puVar8 = &DAT_016bfc08;
          FUN_00415980(&local_4a8,4," REPEAT ",local_4b0,&DAT_016bfc08,local_4b8);
          FUN_00416880(&local_4c0,local_4a8);
          (**(code **)(*param_2 + 0x78))(param_2,local_4c0);
        }
      }
    }
  }
  if (local_328[0] != '\0') {
    FUN_004169a0(&local_710,local_328);
    (**(code **)(*param_2 + 0x78))(param_2,local_710);
  }
  FUN_00410f20(lVar5);
  FUN_00414560(&local_710,2);
  FUN_00414590(&local_700,6);
  FUN_004144d0(&local_5d0);
  FUN_004144d0(&local_4c8);
  FUN_00414480(&local_4c0);
  FUN_00414590(&local_4b8,3);
  FUN_00414560(&local_4a0,3);
  FUN_00414590(&local_488,6);
  FUN_00414560(&local_458,2);
  FUN_00414590(&local_448,2);
  FUN_00414560(&local_438,2);
  return;
}

