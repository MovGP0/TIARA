/* Ghidra address: 01be46f0 */
/* Ghidra symbol: FUN_01be46f0 */


void FUN_01be46f0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_48 = 0;
  local_20 = 0;
  uVar9 = param_2;
  FUN_00659830(param_1,param_2);
  if (*(char *)((longlong)param_1 + 0x592) != '\0') {
    if (param_1[0xba] != 0) {
      uVar2 = *(short *)(param_2 + 8) - 0x30;
      if (uVar2 < 0x40) {
        uVar9 = 1L << ((byte)uVar2 & 0x3f);
        bVar11 = (uVar9 & 0x3ff07fffffe03ff) != 0;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        uVar5 = FUN_007f9a50();
        if ((uVar5 & 4) == 0) {
          uVar2 = *(ushort *)(param_2 + 8);
          uVar10 = (uint)uVar2;
          if ((ushort)(uVar2 - 0x60) < 0x10) {
            bVar11 = ((int)CONCAT62((int6)(uVar9 >> 0x10),1) << ((byte)(uVar2 - 0x60) & 0x1f) &
                     0x3ffU) != 0;
          }
          else {
            bVar11 = false;
          }
          if (bVar11) {
            uVar10 = uVar2 - 0x30;
          }
          uVar6 = FUN_01be0910(*(undefined8 *)(param_1[0xba] + 0x648));
          lVar7 = FUN_01c00de0(uVar6,uVar10);
          if (lVar7 != 0) {
            (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x268))(*(longlong **)(lVar7 + 0x80));
          }
        }
      }
    }
    uVar2 = *(ushort *)(param_2 + 8);
    if (uVar2 < 0x25) {
      if (uVar2 == 0x24) {
        lVar7 = FUN_01c01290(param_1);
        FUN_01be4230(param_1,*(undefined8 *)(lVar7 + 0x80));
      }
      else if (uVar2 == 0xd) {
        lVar7 = FUN_01be2d90(param_1);
        if (lVar7 != 0) {
          lVar7 = FUN_01be2d90(param_1);
          (**(code **)(**(longlong **)(lVar7 + 0x80) + 0x268))(*(longlong **)(lVar7 + 0x80));
        }
      }
      else if (uVar2 == 0x1b) {
        cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
        if ((cVar1 == '\0') || (param_1[0xb1] == 0)) {
          cVar1 = FUN_00664d50(*(undefined8 *)PTR_DAT_020054d8);
          if (cVar1 == '\0') {
            (**(code **)(*param_1 + 0x408))(param_1);
          }
          else {
            FUN_0064ac70();
          }
        }
        else {
          FUN_0064a7b0(0);
        }
      }
      else if (uVar2 == 0x23) {
        lVar7 = FUN_01c01230(param_1);
        FUN_01be4230(param_1,*(undefined8 *)(lVar7 + 0x80));
      }
    }
    else if (uVar2 == 0x26) {
      pcVar8 = (code *)FUN_00411550(param_1,0xffaa);
      (*pcVar8)(param_1,0);
    }
    else if (uVar2 == 0x28) {
      pcVar8 = (code *)FUN_00411550(param_1,0xffaa);
      (*pcVar8)(param_1,1);
    }
    else if (uVar2 == 0x2e) {
      cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
      if (cVar1 != '\0') {
        lVar7 = FUN_01be2d90(param_1);
        if (lVar7 != 0) {
          lVar7 = FUN_01be2d90(param_1);
          if ((*(byte *)(lVar7 + 0x59) & 4) == 0) {
            FUN_0041ddd0(&local_20,PTR_PTR_02001ce0);
            uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_20);
            FUN_004134c0(uVar6);
          }
          cVar1 = FUN_01bfaa20(lVar7);
          if (cVar1 != '\0') {
            FUN_0041ddd0(&local_30,PTR_PTR_02004d60);
            FUN_01bfd990(lVar7,&local_48);
            local_40 = local_48;
            local_38 = 0x11;
            FUN_00442f70(&local_28,local_30,&local_40,0);
            iVar3 = FUN_0072d5c0(local_28,3,0xc,0,0xffffffff,0xffffffff,0);
            if (iVar3 != 1) goto LAB_01be4b2f;
          }
          iVar3 = FUN_004b1870(lVar7);
          iVar4 = (**(code **)(*param_1 + 0x2e8))(param_1);
          if (iVar3 == iVar4 + -1) {
            lVar7 = (**(code **)(*param_1 + 0x2a8))(param_1,lVar7,0);
          }
          else {
            lVar7 = (**(code **)(*param_1 + 0x2a0))(param_1,lVar7,0);
          }
          uVar6 = FUN_01bfaa70(param_1[0x93]);
          FUN_004b25e0(uVar6,iVar3);
          if (lVar7 == 0) {
            uVar6 = FUN_0065b870(param_1[0xba]);
            thunk_FUN_0413e052(uVar6,0xb402,0,param_1[0xb6]);
          }
          else {
            (**(code **)(**(longlong **)(lVar7 + 0x80) + 600))(*(longlong **)(lVar7 + 0x80),1);
          }
          FUN_01bf6300(param_1);
        }
      }
    }
  }
LAB_01be4b2f:
  FUN_00414480(&local_48);
  FUN_00414560(&local_30,3);
  return;
}

