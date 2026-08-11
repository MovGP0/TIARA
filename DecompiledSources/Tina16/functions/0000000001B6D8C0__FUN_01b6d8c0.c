/* Ghidra address: 01b6d8c0 */
/* Ghidra symbol: FUN_01b6d8c0 */


void FUN_01b6d8c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  bool bVar10;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte local_29 [9];
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  if (*(char *)((longlong)param_1 + 0x9cd) != '\0') {
    uVar4 = FUN_0065b870(param_1);
    FUN_00f83670(uVar4,param_2);
    if (*(char *)((longlong)param_1 + 0x9cc) == '\0') {
      local_29[0] = *(byte *)(param_2 + 0x10);
    }
    else {
      local_29[0] = 0x6c;
    }
    FUN_01b6bcd0(param_1,local_29[0]);
    return;
  }
  (**(code **)(*(longlong *)param_1[0x13b] + 0xa0))((longlong *)param_1[0x13b],local_29);
  lVar5 = FUN_010e1b10(param_1);
  if (lVar5 != 0) {
    if ((byte)(local_29[0] - 8) < 8) {
      uVar2 = (int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (local_29[0] - 8 & 0x1f);
      bVar10 = (uVar2 & 0x38) != 0;
      uVar7 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar10);
    }
    else {
      uVar7 = 0;
      bVar10 = false;
    }
    if (bVar10) {
      bVar9 = *(char *)(param_2 + 0x10) - 8;
      if (bVar9 < 8) {
        bVar10 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (bVar9 & 0x1f) & 0x38U) != 0;
      }
      else {
        bVar10 = false;
      }
      if (!bVar10) {
        plVar6 = (longlong *)FUN_010e1b10(param_1);
        (**(code **)(*plVar6 + 0x480))(plVar6);
        lVar5 = FUN_010e1b10(param_1);
        if (*(char *)(lVar5 + 0xa9) != '\0') {
          uVar4 = FUN_010e1b10(param_1);
          FUN_00805990(uVar4);
        }
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x9cc) == '\0') {
    local_29[0] = *(byte *)(param_2 + 0x10);
  }
  else {
    local_29[0] = 0x6c;
  }
  if (local_29[0] != 0x6c) {
    cVar1 = FUN_00f83630(param_2,(longlong)param_1 + 0x9d2);
    if (cVar1 == '\0') {
      return;
    }
    if (((*(char *)(param_1[0x13b] + 0x69) == '\0') && (*(char *)(param_1[0x13b] + 0x68) == '\0'))
       || (cVar1 = FUN_010e2d90(param_1), cVar1 == '\0')) {
      uVar4 = FUN_0065b870(param_1);
      FUN_00f83670(uVar4,param_2);
      return;
    }
  }
  uVar4 = FUN_0065b870(param_1);
  FUN_00f833a0(uVar4,0x530,0,0);
  *(undefined1 *)((longlong)param_1 + 0x9ce) = 1;
  (**(code **)(*(longlong *)param_1[0x13b] + 0x90))((longlong *)param_1[0x13b],local_29[0]);
  FUN_01b6dfd0(param_1,1);
  (**(code **)(*(longlong *)param_1[0x13b] + 0x78))
            ((longlong *)param_1[0x13b],(longlong)param_1 + 0x9b9);
  (**(code **)(*(longlong *)param_1[0x13b] + 0xa0))((longlong *)param_1[0x13b],local_29);
  *(byte *)((longlong)param_1 + 0x9ca) = local_29[0];
  uVar7 = (ulonglong)local_29[0];
  if (uVar7 < 8) {
    if (uVar7 == 7) {
      *(undefined1 *)((longlong)param_1 + 0x9cb) = 0xe;
    }
    else if (uVar7 < 4) {
      if (uVar7 == 3) {
        *(undefined1 *)((longlong)param_1 + 0x9cb) = 3;
      }
      else {
        uVar8 = uVar7 - 1;
        if (uVar8 == 0xffffffffffffffff) {
          *(undefined1 *)((longlong)param_1 + 0x9cb) = 1;
          uVar7 = uVar8;
        }
        else if (uVar8 == 0) {
          *(undefined1 *)((longlong)param_1 + 0x9cb) = 1;
          uVar7 = uVar8;
        }
        else {
          uVar7 = uVar7 - 2;
          if (uVar7 == 0) {
            *(undefined1 *)((longlong)param_1 + 0x9cb) = 3;
          }
        }
      }
    }
    else if (uVar7 == 4) {
      *(undefined1 *)((longlong)param_1 + 0x9cb) = 8;
      uVar7 = 0;
    }
    else if (uVar7 == 5) {
      *(undefined1 *)((longlong)param_1 + 0x9cb) = 9;
      uVar7 = 0;
    }
    else {
      uVar7 = uVar7 - 6;
      if (uVar7 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x9cb) = 0xd;
      }
    }
  }
  else if (uVar7 < 0xc) {
    if (uVar7 == 0xb) {
      *(undefined1 *)((longlong)param_1 + 0x9cb) = 0xe;
    }
    else if (uVar7 == 8) {
      *(undefined1 *)((longlong)param_1 + 0x9cb) = 0xf;
      uVar7 = 0;
    }
    else if (uVar7 == 9) {
      *(undefined1 *)((longlong)param_1 + 0x9cb) = 0x10;
      uVar7 = 0;
    }
    else {
      uVar7 = uVar7 - 10;
      if (uVar7 == 0) {
        *(undefined1 *)((longlong)param_1 + 0x9cb) = 1;
      }
    }
  }
  else if (uVar7 == 0xc) {
    *(undefined1 *)((longlong)param_1 + 0x9cb) = 0x12;
    uVar7 = 0;
  }
  else if (uVar7 == 0xd) {
    *(undefined1 *)((longlong)param_1 + 0x9cb) = 8;
    uVar7 = 0;
  }
  else {
    uVar7 = uVar7 - 0x6c;
    if (uVar7 == 0) {
      *(undefined1 *)((longlong)param_1 + 0x9cb) = 1;
    }
  }
  if (local_29[0] == 0x6c) {
    if (*(char *)(param_1[0xf9] + 0x328) != '\0') {
      FUN_0082a6c0(param_1[0xf9],0);
      (**(code **)(*param_1 + 0x410))(param_1,param_1);
    }
  }
  else {
    if ((byte)(local_29[0] - 8) < 8) {
      bVar10 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (local_29[0] - 8 & 0x1f) & 0x38U) != 0;
    }
    else {
      bVar10 = false;
    }
    if (bVar10) {
      lVar5 = FUN_010e1b10(param_1);
      if (lVar5 == 0) {
        FUN_010e1a60(param_1);
      }
      uVar4 = FUN_010e1b10(param_1);
      plVar6 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_01133e90);
      FUN_0113d630(plVar6,0);
      local_38 = 0x408f400000000000;
      local_40 = 0x3ff0000000000000;
      local_48 = 0;
      local_50 = 0;
      puVar11 = &local_48;
      FUN_01138b30(plVar6,1,&local_38,&local_40,puVar11,&local_50);
      uVar12 = (undefined4)((ulonglong)puVar11 >> 0x20);
      FUN_008059a0(plVar6);
      iVar3 = FUN_007fd7d0(param_1);
      FUN_00806af0(plVar6,iVar3 + -0x50);
      iVar3 = FUN_007fd800(param_1);
      FUN_00806b40(plVar6,iVar3 + -0xdf);
      (**(code **)(*plVar6 + 0x480))(plVar6);
      (**(code **)(*plVar6 + 0x488))(plVar6);
      FUN_0082a6c0(param_1[299],1);
      (**(code **)(*(longlong *)param_1[299] + 0x128))((longlong *)param_1[299],0);
    }
    *(undefined1 *)((longlong)param_1 + 0x9ce) = 0;
    if (*(char *)((longlong)param_1 + 0x9cd) == '\0') {
      uVar4 = FUN_0065b870(param_1);
      FUN_00f832e0(uVar4,0x530,0,0,CONCAT44(uVar12,1000));
    }
  }
  if (*(char *)((longlong)param_1 + 0x9cc) != '\0') {
    if (*(char *)((longlong)param_1 + 0x9cd) == '\0') {
      FUN_00805200(param_1);
    }
    else {
      uVar4 = FUN_0065b870(param_1);
      FUN_00f83670(uVar4,param_2);
    }
  }
  return;
}

