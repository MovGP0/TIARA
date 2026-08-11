/* Ghidra address: 01813180 */
/* Ghidra symbol: FUN_01813180 */


undefined8 *
FUN_01813180(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
            longlong *param_5)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *local_res18;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  longlong local_a0;
  undefined *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined1 *local_60;
  char local_51;
  longlong local_50;
  undefined8 local_48;
  int local_3c;
  char local_2d;
  int local_2c;
  longlong local_28;
  longlong local_20 [2];
  
  local_60 = auStack_d8;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = (undefined *)0x0;
  local_20[0] = 0;
  local_50 = 0;
  FUN_00414480(param_2);
  if (param_3 == (longlong *)0x0) goto LAB_018136fb;
  local_48 = FUN_004115a0(*param_3);
  lVar2 = FUN_00589390(local_48);
  local_3c = (int)*(short *)(lVar2 + 0x10);
  local_28 = FUN_004095c0((longlong)(local_3c * 8));
  FUN_00589f00(local_48,local_28);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_01918c28);
  if (((cVar1 != '\0') && (FUN_01950e90(param_3,1), param_5 == (longlong *)0x0)) &&
     (*(longlong *)(param_1 + 0x48) != 0)) {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),param_3[2],&param_5);
  }
  cVar1 = FUN_004113d0(param_5,&PTR_FUN_01918c28);
  local_res18 = param_3;
  if ((cVar1 != '\0') && (FUN_01950e90(param_5,1), *(char *)(param_1 + 0x79) != '\0')) {
    local_res18 = param_5;
  }
  local_2c = 0;
  iVar4 = local_3c;
  if (-1 < local_3c + -1) {
    do {
      FUN_00414480(local_20);
      local_2d = '\0';
      cVar1 = FUN_01812240(local_res18,*(undefined8 *)(local_28 + (longlong)local_2c * 8));
      if (cVar1 != '\0') {
        uVar3 = (ulonglong)**(byte **)**(undefined8 **)(local_28 + (longlong)local_2c * 8);
        if (uVar3 < 10) {
          if (uVar3 == 9) {
LAB_018133ee:
            FUN_01812370(auStack_d8);
          }
          else if (uVar3 < 6) {
            if (uVar3 == 5) goto LAB_01813402;
            if (uVar3 - 1 < 3) goto LAB_018133ee;
            if (uVar3 - 1 == 3) {
              FUN_01812540(auStack_d8);
            }
          }
          else {
            if (uVar3 == 6) goto LAB_018133ee;
            if (uVar3 == 7) {
              FUN_01812960(auStack_d8);
            }
          }
        }
        else if (uVar3 - 10 < 2) {
LAB_01813402:
          FUN_018126c0(auStack_d8);
        }
        else if (uVar3 == 0xc) {
          FUN_01812860(auStack_d8);
        }
        else {
          if (uVar3 == 0x10) goto LAB_018133ee;
          if (uVar3 == 0x12) goto LAB_01813402;
        }
      }
      if (local_20[0] != 0) {
        if (local_2d == '\0') {
          FUN_004169a0(&local_68,*(longlong *)(local_28 + (longlong)local_2c * 8) + 0x2a);
          local_b0 = local_68;
          local_a8 = &DAT_0181383c;
          local_a0 = local_20[0];
          local_98 = &DAT_01813850;
          local_b8 = param_4;
          FUN_00416cd0(param_2,7,*param_2,&DAT_0181382c);
        }
        else {
          FUN_00416ad0(param_2,local_20[0]);
        }
      }
      local_2c = local_2c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  cVar1 = FUN_004113d0(local_res18,&PTR_FUN_01925478);
  if (cVar1 != '\0') {
    if ((param_5 != (longlong *)0x0) && (*(char *)(param_1 + 0x79) == '\0')) {
      (**(code **)(*local_res18 + 0x348))(local_res18,&local_70);
      (**(code **)(*param_5 + 0x348))(param_5,&local_78);
      iVar4 = FUN_00416420(local_70,local_78);
      if (iVar4 == 0) goto LAB_01813639;
    }
    (**(code **)(*local_res18 + 0x348))(local_res18,&local_50);
    iVar4 = FUN_00414cc0(local_50);
    if (((1 < iVar4) &&
        (iVar4 = FUN_00414cc0(local_50),
        *(short *)(local_50 + -2 + (longlong)(iVar4 + -1) * 2) == 0xd)) &&
       (iVar4 = FUN_00414cc0(local_50), *(short *)(local_50 + -2 + (longlong)iVar4 * 2) == 10)) {
      iVar4 = FUN_00414cc0(local_50);
      FUN_00416490(&local_50,iVar4 + -1,2);
    }
    FUN_004168b0(&local_88,local_50);
    FUN_01802f80(&local_80,local_88);
    local_b8 = local_80;
    local_b0 = &DAT_01813850;
    FUN_00416cd0(param_2,4,*param_2,L" Text=\"");
  }
LAB_01813639:
  local_51 = '\x01';
  cVar1 = FUN_004113d0(local_res18,&PTR_FUN_01918c28);
  if (cVar1 != '\0') {
    if (((*(byte *)(local_res18 + 0x1a) & 8) == 0) || (*(char *)(param_1 + 0x78) == '\0')) {
      local_51 = '\x01';
    }
    else {
      local_51 = '\0';
    }
  }
  if (local_51 != '\0') {
    FUN_01812e60(auStack_d8);
  }
  cVar1 = FUN_004113d0(local_res18,&PTR_FUN_01918c28);
  if (cVar1 != '\0') {
    FUN_01950e90(local_res18,0);
  }
  cVar1 = FUN_004113d0(param_5,&PTR_FUN_01918c28);
  if (cVar1 != '\0') {
    FUN_01950e90(param_5,0);
  }
  FUN_004095f0(local_28,(longlong)(local_3c * 8));
LAB_018136fb:
  FUN_00414560(&local_88,2);
  FUN_004145c0(&local_78,2);
  FUN_00414480(&local_68);
  FUN_00414520(&local_50);
  FUN_00414480(local_20);
  return param_2;
}

