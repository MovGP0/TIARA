/* Ghidra address: 01cf4ad0 */
/* Ghidra symbol: FUN_01cf4ad0 */


void FUN_01cf4ad0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char *local_40;
  char *local_38;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a [5];
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  FUN_017bdde0(param_1,param_2);
  iVar5 = FUN_01d31a40(*param_2);
  if (iVar5 != 0) goto code_r0x01cf592a;
  FUN_01d311c0(*param_2,(longlong)param_1 + 0xd1,1);
  FUN_01d311c0(*param_2,(longlong)param_1 + 0xd3,1);
  FUN_01d311c0(*param_2,(longlong)param_1 + 0xee,2);
  FUN_01d311c0(*param_2,param_1 + 0x1e,2);
  bVar8 = *(byte *)(*param_2 + 0x78);
  if (bVar8 < 8) {
    bVar13 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar8 & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    iVar5 = FUN_00416db0(param_1[0xb],param_1[0x32]);
    if ((iVar5 == 0) || (param_1[0x32] == 0)) {
      FUN_01b240b0(&local_60,param_1[0xb],param_1[0xc]);
      FUN_01d313e0(*param_2,local_60);
    }
    else {
      FUN_01b240b0(&local_58,param_1[0xb],param_1[0xc]);
      FUN_00416cd0(&local_50,4,local_58,&DAT_01cf59e4,param_1[0x32],&DAT_01cf59f4);
      FUN_01d313e0(*param_2,local_50);
    }
  }
  else {
    FUN_01d313e0(*param_2,param_1[0xb]);
  }
  FUN_01d313e0(*param_2,param_1[0x30]);
  FUN_01d311c0(*param_2,param_1 + 0x31,1);
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar3 == 0x39) {
    bVar8 = *(byte *)(*param_2 + 0x78);
    if (bVar8 < 8) {
      bVar13 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar8 & 0x1f) & 0x39U) != 0;
    }
    else {
      bVar13 = false;
    }
    if ((bVar13) || (cVar2 = FUN_01d04db0(param_1), cVar2 == '\0')) {
      cVar2 = FUN_01d04d40(param_1);
      if (cVar2 == '\0') {
        local_2a[0] = 0;
        local_2c = 0;
      }
      else {
        if (param_1[0x76] == 0) {
LAB_01cf4daa:
          local_2a[0] = (**(code **)(*(longlong *)param_1[0x35] + 0x48))((longlong *)param_1[0x35]);
        }
        else {
          bVar8 = *(byte *)(*param_2 + 0x78);
          if (bVar8 < 8) {
            bVar13 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar8 & 0x1f) & 0x21U)
                     != 0;
          }
          else {
            bVar13 = false;
          }
          if (!bVar13) goto LAB_01cf4daa;
          local_2a[0] = 1;
        }
        local_2c = (**(code **)(*(longlong *)param_1[0x35] + 0x50))
                             ((longlong *)param_1[0x35],*param_2);
      }
      FUN_01d311c0(*param_2,local_2a,2);
      FUN_01d311c0(*param_2,&local_2c,2);
      cVar2 = FUN_01d04d40(param_1);
      if (cVar2 != '\0') {
        if (param_1[0x76] != 0) {
          bVar8 = *(byte *)(*param_2 + 0x78);
          if (bVar8 < 8) {
            bVar13 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar8 & 0x1f) & 0x21U)
                     != 0;
          }
          else {
            bVar13 = false;
          }
          if (bVar13) {
            FUN_004168e0(&local_70,param_1[0x76]);
            FUN_00b0cea0(&local_68,local_70,0xfde9);
            FUN_00416880(&local_48,local_68);
            FUN_00b92430(&local_78,local_48);
            FUN_00414b50(&local_48,local_78);
            FUN_00415dd0(&local_80,local_48,0);
            FUN_01d315a0(*param_2,local_80);
            goto LAB_01cf4f15;
          }
        }
        (**(code **)(*(longlong *)param_1[0x35] + 0x40))((longlong *)param_1[0x35],param_2);
      }
    }
  }
LAB_01cf4f15:
  sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (sVar3 == 0xa1) {
LAB_01cf4f4c:
    plVar1 = (longlong *)param_1[0xa2];
    if (plVar1 == (longlong *)0x0) {
      local_2e = 0;
    }
    else {
      local_2e = (**(code **)(*plVar1 + 0x20))(plVar1,*param_2);
    }
    FUN_01d311c0(*param_2,&local_2e,2);
    plVar1 = (longlong *)param_1[0xa2];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,*param_2);
    }
    uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar2 = FUN_01d420f0(uVar4);
    if (cVar2 != '\0') {
      FUN_01d311c0(*param_2,param_1 + 0xa3,0x10);
    }
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
    cVar2 = FUN_01d420f0(uVar4);
    if (cVar2 != '\0') goto LAB_01cf4f4c;
  }
  FUN_01d311c0(*param_2,(longlong)param_1 + 0x3b9,1);
  FUN_01d311c0(*param_2,(longlong)param_1 + 0x24,2);
  FUN_01d311c0(*param_2,param_1 + 10,2);
  iVar5 = 0;
  while ((iVar5 < 0x14 && (*(short *)((longlong)param_1 + (longlong)iVar5 * 2 + 0x26) != -1))) {
    iVar5 = iVar5 + 1;
  }
  FUN_01d31790(*param_2,iVar5);
  FUN_01d311c0(*param_2,(longlong)param_1 + 0x26,iVar5 * 2);
  FUN_01d320f0(*param_2,param_1[0x7c]);
  FUN_01d311c0(*param_2,param_1 + 0x7d,1);
  FUN_01d311c0(*param_2,(longlong)param_1 + 0x18c,4);
  FUN_01d311c0(*param_2,param_1 + 0x77,1);
  FUN_01d320f0(*param_2,param_1[0x9f]);
  FUN_01d311c0(*param_2,(longlong)param_1 + 0x3bc,8);
  FUN_01d311c0(*param_2,(longlong)param_1 + 0x3c4,2);
  FUN_01d311c0(*param_2,param_1 + 0x79,8);
  FUN_01d311c0(*param_2,param_1 + 0x7a,1);
  FUN_01d311c0(*param_2,(longlong)param_1 + 0x3d1,1);
  FUN_01d311c0(*param_2,(longlong)param_1 + 0x3d3,1);
  FUN_004169a0(&local_88,param_1 + 0x36);
  FUN_01d313e0(*param_2,local_88);
  FUN_01d311c0(*param_2,(longlong)param_1 + 0x3ec,4);
  local_30 = *(undefined2 *)(param_1[0x7e] + 0x10);
  FUN_01d311c0(*param_2,&local_30,2);
  iVar5 = *(int *)(param_1[0x7e] + 0x10);
  iVar11 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar7 = FUN_004aeac0(param_1[0x7e],iVar11);
      FUN_01d311c0(*param_2,uVar7,0x18);
      iVar11 = iVar11 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  bVar8 = *(byte *)(*param_2 + 0x78);
  if (bVar8 < 8) {
    bVar13 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar8 & 0x1f) & 0x3dU) != 0;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    FUN_004169a0(&local_90,param_1 + 0x7f);
    FUN_01d313e0(*param_2,local_90);
  }
  bVar8 = *(byte *)(*param_2 + 0x78);
  if (bVar8 < 8) {
    bVar13 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar8 & 0x1f) & 0x21U) != 0;
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    FUN_01d311c0(*param_2,param_1 + 0xa8,1);
  }
  if (*(char *)(*param_2 + 0x78) == '\0') {
    FUN_01d311c0(*param_2,param_1 + 0xac,1);
    FUN_01d31630(*param_2,param_1[0xad]);
  }
  iVar5 = FUN_01cfd2d0();
  uVar12 = 0;
  if (-1 < iVar5 + -1) {
    do {
      FUN_01d311c0(*param_2,param_1[0x19] + (longlong)(int)uVar12,1);
      uVar10 = (ulonglong)uVar12;
      uVar6 = FUN_01cfd030(param_1,uVar10);
      bVar8 = *(byte *)(*param_2 + 0x78);
      if (bVar8 < 8) {
        uVar9 = (int)CONCAT71((int7)(uVar10 >> 8),1) << (bVar8 & 0x1f);
        uVar10 = (ulonglong)uVar9;
        bVar13 = (uVar9 & 0xe) != 0;
      }
      else {
        bVar13 = false;
      }
      if (!bVar13) goto LAB_01cf5904;
      if (bVar8 == 1) {
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if ((((((((sVar3 == 10) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x6d))
                || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xca)) ||
               ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd4 ||
                (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xde)))) ||
              ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xb ||
               ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x6e ||
                (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xcc)))))) ||
             ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd6 ||
              (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xe0)))) && (uVar12 == 2))
           || ((((((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x4f ||
                   (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xcb)) ||
                  (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd5)) ||
                 (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xdf ||
                   (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x50)) ||
                  ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xcd ||
                   ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xd7 ||
                    (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0xe1)))))))) &&
                (uVar12 == 3)) ||
               (((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x25 ||
                 (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x26)) && (uVar12 == 1))
               )))) {
          uVar6 = (undefined4)CONCAT71((uint7)(uint3)((uint)uVar6 >> 8),3);
        }
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if ((((sVar3 != 0x7d) && (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0x7e))
            && (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0x80)) || (uVar12 != 3))
        goto LAB_01cf5616;
      }
      else {
LAB_01cf5616:
        sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
        if ((((sVar3 != 0xf) && (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0x10)) &&
            ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0xd9 &&
             (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 != 0xda)))) || (uVar12 != 4)) {
          sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
          bVar8 = (byte)uVar12;
          if (((((sVar3 == 4) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 5)) ||
               (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x21)) ||
              ((sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x77 ||
               (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 6)))) ||
             (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x22)) {
            if (uVar12 < 8) {
              uVar9 = (int)CONCAT71((int7)(uVar10 >> 8),1) << (bVar8 & 0x1f);
              uVar10 = (ulonglong)uVar9;
              bVar13 = (uVar9 & 3) != 0;
            }
            else {
              bVar13 = false;
            }
            if (bVar13) {
              if (uVar12 != 0) goto LAB_01cf591a;
              (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_38);
              if (*local_38 == '\x02') {
                *local_38 = '\x03';
              }
              uVar10 = 0;
              (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_40);
              if (*local_40 == '\x01') {
                *local_38 = '\x02';
              }
            }
          }
          sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
          if (sVar3 == 7) {
            if (uVar12 < 8) {
              uVar9 = (int)CONCAT71((int7)(uVar10 >> 8),1) << (bVar8 & 0x1f);
              uVar10 = (ulonglong)uVar9;
              bVar13 = (uVar9 & 3) != 0;
            }
            else {
              bVar13 = false;
            }
            if (bVar13) {
              if (uVar12 != 0) goto LAB_01cf591a;
              (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_38);
              uVar10 = 0;
              (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_40);
              if (*local_40 == '\x01') {
                *local_38 = '\x01';
              }
            }
          }
          sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
          if ((sVar3 == 8) || (sVar3 = (**(code **)(*param_1 + 0xf8))(param_1), sVar3 == 0x62)) {
            if (uVar12 < 8) {
              uVar9 = (int)CONCAT71((int7)(uVar10 >> 8),1) << (bVar8 & 0x1f);
              uVar10 = (ulonglong)uVar9;
              bVar13 = (uVar9 & 6) != 0;
            }
            else {
              bVar13 = false;
            }
            if (bVar13) {
              if (uVar12 != 1) goto LAB_01cf591a;
              (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_38);
              uVar10 = 0;
              (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_40);
              if (*local_40 == '\x01') {
                *local_38 = '\x01';
              }
            }
          }
          sVar3 = (**(code **)(*param_1 + 0xf8))(param_1);
          if (sVar3 == 0x194) {
            if (uVar12 < 8) {
              bVar13 = ((int)CONCAT71((int7)(uVar10 >> 8),1) << (bVar8 & 0x1f) & 0xf0U) != 0;
            }
            else {
              bVar13 = false;
            }
            if (bVar13) goto LAB_01cf591a;
          }
LAB_01cf5904:
          FUN_01cf2fd0(param_1,*param_2,uVar12,uVar6);
        }
      }
LAB_01cf591a:
      uVar12 = uVar12 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
code_r0x01cf592a:
  FUN_00414560(&local_90,2);
  FUN_004144d0(&local_80);
  FUN_00414480(&local_78);
  FUN_00414520(&local_70);
  FUN_004144d0(&local_68);
  FUN_00414560(&local_60,4);
  return;
}

