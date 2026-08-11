/* Ghidra address: 01631540 */
/* Ghidra symbol: FUN_01631540 */


void FUN_01631540(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  byte local_2a;
  char local_29 [17];
  
  local_60 = 0;
  local_68 = 0;
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_48 = 0;
  lVar2 = *(longlong *)(param_2 + 8);
  local_29[0] = '\0';
  local_2a = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  iVar1 = *(int *)(*(longlong *)(param_3 + 0x50) + 0x10);
  *(int *)(param_1 + 0x120) = iVar1;
  if (0 < iVar1) {
    local_90 = (double)FUN_0162fe40(param_1,param_2,param_3,1,local_29);
  }
  if (1 < *(int *)(param_1 + 0x120)) {
    local_88 = (double)FUN_0162fe40(param_1,param_2,param_3,2,&local_2a);
  }
  if (2 < *(int *)(param_1 + 0x120)) {
    uVar3 = FUN_0162fe40(param_1,param_2,param_3,3,param_1 + 0xca);
    *(undefined8 *)(param_1 + 0xe0) = uVar3;
  }
  if (3 < *(int *)(param_1 + 0x120)) {
    uVar3 = FUN_0162fe40(param_1,param_2,param_3,4,param_1 + 0xcc);
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
  }
  if (*(int *)(param_1 + 0x120) < 1) {
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_48,PTR_PTR_02001a58);
    FUN_00b8e650(uVar3,local_40,L"HDLStrings.Msg_Too_Few_Parameters",local_48);
    FUN_01613110(local_40[0]);
  }
  if (4 < *(int *)(param_1 + 0x120)) {
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_58,PTR_PTR_02002e70);
    FUN_00b8e650(uVar3,&local_50,L"HDLStrings.Msg_Too_Many_Parameters",local_58);
    FUN_01613110(local_50);
  }
  if (local_29[0] == '\0') {
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_70,PTR_PTR_020048e8);
    FUN_00b8e650(uVar3,&local_68,L"HDLStrings.Msg_Timer",local_70);
    uVar3 = FUN_00b89270();
    FUN_0041ddd0(&local_80,PTR_PTR_020042e0);
    FUN_00b8e650(uVar3,&local_78,L"HDLStrings.Msg_StartTime_Missing",local_80);
    FUN_00416cd0(&local_60,3,local_68,&DAT_01631ba4,local_78);
    FUN_01613110(local_60);
  }
  uVar3 = 0;
  if (*(char *)(*(longlong *)(lVar2 + 0x38) + 0x89) != '\b') {
    uVar3 = FUN_016290e0(lVar2);
    *(undefined8 *)(param_1 + 0x100) = uVar3;
    uVar3 = FUN_0162fcb0(*(undefined4 *)(param_3 + 0x38),0,lVar2,1);
    *(undefined8 *)(param_1 + 0x108) = uVar3;
    dVar4 = (double)FUN_0162fcb0(*(int *)(param_3 + 0x38) + 1,0,lVar2,1);
    iVar1 = FUN_01b218a0(local_2a);
    FUN_0162fb60(*(int *)(param_3 + 0x38) + 3,(double)iVar1,lVar2,1);
    if ((*(char *)(param_1 + 0xcc) == '\0') || (*(double *)(param_1 + 0xf0) != 0.0)) {
      if ((dVar4 == 1.0) || (*(double *)(param_1 + 0x100) - local_90 <= 1e-18)) {
        if ((((local_2a & dVar4 == 1.0) != 0) &&
            (local_88 < *(double *)(param_1 + 0x100) - *(double *)(param_1 + 0x108))) &&
           ((*(char *)(param_1 + 0xca) == '\0' ||
            ((*(char *)(param_1 + 0xca) != '\0' &&
             (*(double *)(param_1 + 0x100) - *(double *)(param_1 + 0x108) <
              *(double *)(param_1 + 0xe0))))))) {
          FUN_0162fb60(*(int *)(param_3 + 0x38) + 2,0x3ff0000000000000,lVar2,1);
          FUN_0162fb60(*(undefined4 *)(param_3 + 0x38),*(undefined8 *)(param_1 + 0x100),lVar2,1);
        }
      }
      else {
        FUN_0162fb60(*(int *)(param_3 + 0x38) + 2,0x3ff0000000000000,lVar2,1);
        FUN_0162fb60(*(undefined4 *)(param_3 + 0x38),*(undefined8 *)(param_1 + 0x100),lVar2,1);
        FUN_0162fb60(*(int *)(param_3 + 0x38) + 1,0x3ff0000000000000,lVar2,1);
      }
    }
    else {
      FUN_0162fb60(*(int *)(param_3 + 0x38) + 2,0,lVar2,1);
    }
    uVar3 = FUN_0162fcb0(*(int *)(param_3 + 0x38) + 2,0,lVar2,1);
  }
  lVar2 = FUN_0162e870(param_1,*(undefined8 *)(param_3 + 0x58));
  FUN_01615b20(lVar2,uVar3);
  *(undefined4 *)(lVar2 + 0x14) = 5;
  FUN_00414560(&local_80,9);
  return;
}

