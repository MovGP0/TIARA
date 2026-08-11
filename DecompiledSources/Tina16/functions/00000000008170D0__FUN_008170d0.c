/* Ghidra address: 008170d0 */
/* Ghidra symbol: FUN_008170d0 */


longlong FUN_008170d0(int param_1,undefined8 param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int iStack_2c;
  
  if ((DAT_02012680 == 0) ||
     ((DAT_02012680 != 0 && (lVar6 = FUN_00814f80(DAT_02012680), lVar6 == 0)))) {
    lVar6 = 0;
  }
  else {
    lVar6 = thunk_FUN_04186711(*(undefined8 *)(DAT_02012680 + 0xa0),param_1,param_2,param_3);
    if (lVar6 == 0) {
      if (*(char *)(DAT_02012680 + 0xc0) != '\0') {
        *(undefined1 *)(DAT_02012680 + 0xc0) = 0;
        if ((((*PTR_DAT_02002b98 & 1) == 0) && (*(int *)(param_3 + 1) != 0x11f)) &&
           (*(char *)(DAT_02012680 + 0x1c) != '\0')) {
          thunk_FUN_0413e052(*param_3,0x100,0x28,0);
        }
        if (((*PTR_DAT_02002b98 & 1) != 0) && (sVar3 = thunk_FUN_040bd713(1), sVar3 < 0)) {
          thunk_FUN_0413e052(*param_3,0x1ee,0,0);
        }
      }
      if (param_1 == 2) {
        iVar5 = *(int *)(param_3 + 1);
        if (iVar5 == 0x100) {
          if (*(char *)(*(longlong *)(*(longlong *)(DAT_02012680 + 0x20) + 0x10) + 0xb1) == '\x01')
          {
            if (param_3[2] == 0x27) {
              param_3[2] = 0x25;
            }
            else if (param_3[2] == 0x25) {
              param_3[2] = 0x27;
            }
          }
          cVar2 = '\0';
          if (param_3[2] == 0x27) {
            cVar2 = FUN_00813f10(DAT_02012680,DAT_02012678);
          }
          else if (param_3[2] == 0x25) {
            cVar2 = FUN_00813ef0(DAT_02012680,DAT_02012678);
          }
          if (*(int *)(param_3 + 2) == 0x25) {
            if (cVar2 != '\0') {
              *(undefined1 *)(DAT_02012680 + 0x1c) = 1;
              if (*(char *)(DAT_02012680 + 0x99) == '\0') {
                if (*(char *)(DAT_02012680 + 0xc3) == '\0') {
                  iVar5 = FUN_008148d0(DAT_02012680,0);
                }
                else {
                  iVar5 = FUN_008145b0(DAT_02012680,0);
                }
              }
              else {
                iVar5 = -1;
              }
              if (iVar5 == -1) {
                cVar2 = FUN_00813d90(DAT_02012680);
                if ((cVar2 == '\0') || (*(char *)(DAT_02012680 + 0x99) != '\0')) {
                  if (*(char *)(DAT_02012680 + 0xc3) == '\0') {
                    uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
                    *(undefined1 *)(DAT_02012680 + 0xac) = 1;
                    thunk_FUN_03ca6160();
                    uVar10 = FUN_00786090(*(undefined8 *)(DAT_02012680 + 0x20));
                    local_30._0_2_ = (undefined2)uVar7;
                    iStack_2c._0_2_ = (undefined2)((ulonglong)uVar7 >> 0x20);
                    local_4c = CONCAT22((undefined2)iStack_2c,(undefined2)local_30);
                    thunk_FUN_0413e052(uVar10,0xa1,1,(longlong)local_4c);
                  }
                }
                else {
                  uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
                  *(undefined1 *)(DAT_02012680 + 0xaa) = 1;
                  thunk_FUN_03ca6160();
                  uVar10 = FUN_00786090(*(undefined8 *)(DAT_02012680 + 0x20));
                  local_30._0_2_ = (undefined2)uVar7;
                  iStack_2c._0_2_ = (undefined2)((ulonglong)uVar7 >> 0x20);
                  local_48 = CONCAT22((undefined2)iStack_2c,(undefined2)local_30);
                  thunk_FUN_0413e052(uVar10,0xa1,1,(longlong)local_48);
                }
              }
              else {
                *(int *)(DAT_02012680 + 8) = iVar5;
                uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
                *(undefined1 *)(DAT_02012680 + 0xab) = 1;
                thunk_FUN_03ca6160();
                uVar10 = FUN_00786090(*(undefined8 *)(DAT_02012680 + 0x20));
                local_30._0_2_ = (undefined2)uVar7;
                iStack_2c._0_2_ = (undefined2)((ulonglong)uVar7 >> 0x20);
                local_44 = CONCAT22((undefined2)iStack_2c,(undefined2)local_30);
                thunk_FUN_0413e052(uVar10,0xa1,1,(longlong)local_44);
              }
            }
          }
          else if ((*(int *)(param_3 + 2) == 0x27) && (cVar2 != '\0')) {
            *(undefined1 *)(DAT_02012680 + 0x1c) = 1;
            if ((*(char *)(DAT_02012680 + 0xc3) == '\0') ||
               (cVar2 = FUN_00813d90(DAT_02012680), cVar2 == '\0')) {
              if (*(char *)(DAT_02012680 + 0xc3) == '\0') {
                iVar5 = FUN_00814700(DAT_02012680,0);
              }
              else {
                iVar5 = FUN_00814530(DAT_02012680,0);
              }
              if (iVar5 == -1) {
                if (*(char *)(DAT_02012680 + 0xc3) == '\0') {
                  uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
                  *(undefined1 *)(DAT_02012680 + 0xac) = 1;
                  thunk_FUN_03ca6160();
                  uVar10 = FUN_00786090(*(undefined8 *)(DAT_02012680 + 0x20));
                  local_30._0_2_ = (undefined2)uVar7;
                  iStack_2c._0_2_ = (undefined2)((ulonglong)uVar7 >> 0x20);
                  local_40 = CONCAT22((undefined2)iStack_2c,(undefined2)local_30);
                  thunk_FUN_0413e052(uVar10,0xa1,1,(longlong)local_40);
                }
              }
              else {
                *(int *)(DAT_02012680 + 8) = iVar5;
                uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
                *(undefined1 *)(DAT_02012680 + 0xab) = 1;
                thunk_FUN_03ca6160();
                uVar10 = FUN_00786090(*(undefined8 *)(DAT_02012680 + 0x20));
                local_30._0_2_ = (undefined2)uVar7;
                iStack_2c._0_2_ = (undefined2)((ulonglong)uVar7 >> 0x20);
                local_3c = CONCAT22((undefined2)iStack_2c,(undefined2)local_30);
                thunk_FUN_0413e052(uVar10,0xa1,1,(longlong)local_3c);
              }
            }
            else {
              uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
              *(undefined1 *)(DAT_02012680 + 0xaa) = 1;
              thunk_FUN_03ca6160();
              uVar10 = FUN_00786090(*(undefined8 *)(DAT_02012680 + 0x20));
              local_30._0_2_ = (undefined2)uVar7;
              iStack_2c._0_2_ = (undefined2)((ulonglong)uVar7 >> 0x20);
              local_38 = CONCAT22((undefined2)iStack_2c,(undefined2)local_30);
              thunk_FUN_0413e052(uVar10,0xa1,1,(longlong)local_38);
            }
          }
        }
        else if (iVar5 == 0x104) {
          if (param_3[2] == 0x12) {
            *(undefined1 *)(DAT_02012680 + 0xab) = 0;
            FUN_00813fb0(DAT_02012680);
          }
        }
        else if (iVar5 == 0x11f) {
          uVar1 = param_3[2];
          bVar11 = (uVar1 >> 0x10 & 0x10) != 0;
          if (bVar11) {
            uVar4 = thunk_FUN_03ecce03(param_3[3],uVar1 & 0xffff);
          }
          else {
            uVar4 = (uint)uVar1 & 0xffff;
          }
          DAT_02012678 = FUN_00813f30(DAT_02012680,(longlong)(int)uVar4,bVar11);
        }
        else if (iVar5 == 0x200) {
          uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
          lVar8 = thunk_FUN_04129e10(uVar7);
          lVar9 = FUN_00786090(*(undefined8 *)(DAT_02012680 + 0x20));
          if ((lVar8 == lVar9) && (*(char *)(DAT_02012680 + 0xab) == '\0')) {
            uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
            lVar8 = *(longlong *)(*(longlong *)(DAT_02012680 + 0x20) + 0x10);
            local_30 = (int)uVar7;
            iStack_2c = (int)((ulonglong)uVar7 >> 0x20);
            iVar5 = *(int *)(DAT_02012680 + 8);
            FUN_008179c0(DAT_02012680,
                         (local_30 - *(int *)(lVar8 + 0x90)) - *(int *)(DAT_02012680 + 0xc),
                         (iStack_2c - *(int *)(lVar8 + 0x94)) - *(int *)(DAT_02012680 + 0x10));
            if ((iVar5 != *(int *)(DAT_02012680 + 8)) && (*(int *)(DAT_02012680 + 8) != -1)) {
              uVar7 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
              *(undefined1 *)(DAT_02012680 + 0xab) = 1;
              uVar10 = FUN_00786090(*(undefined8 *)(DAT_02012680 + 0x20));
              local_30._0_2_ = (undefined2)uVar7;
              iStack_2c._0_2_ = (undefined2)((ulonglong)uVar7 >> 0x20);
              local_34 = CONCAT22((undefined2)iStack_2c,(undefined2)local_30);
              thunk_FUN_0413e052(uVar10,0xa1,1,(longlong)local_34);
            }
          }
        }
      }
    }
  }
  return lVar6;
}

