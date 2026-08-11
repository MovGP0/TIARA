/* Ghidra address: 018dbbb0 */
/* Ghidra symbol: FUN_018dbbb0 */


undefined8 * FUN_018dbbb0(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_3c;
  undefined8 local_38;
  double local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_50 = auStack_a8;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  *param_3 = '\0';
  FUN_00414520(param_2);
  local_20 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  if (local_20 != 0) {
    FUN_005fdf10(*(undefined8 *)(param_1 + 0x10));
    local_1c = FUN_018dc200(param_1,*(undefined8 *)(param_1 + 0x10));
    local_30 = (double)*(int *)(param_1 + 0x18) / (double)*(int *)(param_1 + 0x1c);
    local_24 = FUN_0040c840((double)((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x50)) + 1) /
                            ((double)local_1c / local_30 + *(double *)(param_1 + 0x40)));
    if (local_20 < local_24) {
      local_24 = local_20;
    }
    iVar2 = FUN_018d4250(*(undefined8 *)(param_1 + 0x30));
    if (local_24 < iVar2) {
      while (iVar2 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                               (*(longlong **)(param_1 + 0xa0)), local_24 < iVar2) {
        plVar1 = *(longlong **)(param_1 + 0xa0);
        iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
        (**(code **)(*plVar1 + 0x98))(plVar1,iVar2 + -1);
      }
      if (0 < local_24) {
        uVar6 = (ulonglong)(local_24 - 1);
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x30))
                          (*(longlong **)(param_1 + 0xa0),uVar6);
        if (uVar3 < 8) {
          bVar7 = ((int)CONCAT71((int7)(uVar6 >> 8),1) << ((byte)uVar3 & 0x1f) & 3U) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          *param_3 = '\x01';
        }
      }
      local_38 = FUN_018d4260(*(undefined8 *)(param_1 + 0x30),local_24);
      lVar4 = FUN_018d3e60(local_38,0);
      iVar2 = FUN_00414cc0(*(undefined8 *)(param_1 + 0x68));
      lVar5 = FUN_018d3e60(local_38,0);
      FUN_00416430(param_2,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(lVar4 + 8),
                   (iVar2 - *(int *)(lVar5 + 8)) + 1);
      if (((*param_3 != '\0') && (iVar2 = FUN_00414cc0(*param_2), 0 < iVar2)) &&
         (*(short *)*param_2 == 0x20)) {
        FUN_00416490(param_2,1,1);
      }
      lVar4 = FUN_018d3e60(local_38,0);
      iVar2 = FUN_00414cc0(*(undefined8 *)(param_1 + 0x68));
      lVar5 = FUN_018d3e60(local_38,0);
      FUN_00416490(param_1 + 0x68,*(undefined4 *)(lVar4 + 8),(iVar2 - *(int *)(lVar5 + 8)) + 1);
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))
                (*(longlong **)(param_1 + 0xa0),&local_58);
      local_28 = FUN_00414cc0(local_58);
      if (((2 < local_28) && (*(char *)(param_1 + 0xa8) != '\0')) &&
         ((**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))
                    (*(longlong **)(param_1 + 0xa0),&local_60),
         *(short *)(local_60 + -2 + (longlong)(local_28 + -2) * 2) == 0x2d)) {
        FUN_00415f90(param_1 + 0x68,&DAT_018dc178);
      }
      if (*(char *)(*(longlong *)(param_1 + 0x30) + 8) != '\0') {
        lVar4 = FUN_018d3e60(local_38,0);
        if ((*(byte *)(lVar4 + 0x14) & 1) != 0) {
          FUN_00416020(param_2,&DAT_018dc180,*param_2);
        }
        lVar4 = FUN_018d3e60(local_38,0);
        if ((*(byte *)(lVar4 + 0x14) & 2) != 0) {
          FUN_00416020(param_2,&DAT_018dc18c,*param_2);
        }
        lVar4 = FUN_018d3e60(local_38,0);
        if ((*(byte *)(lVar4 + 0x14) & 4) != 0) {
          FUN_00416020(param_2,&DAT_018dc198,*param_2);
        }
        lVar4 = FUN_018d3e60(local_38,0);
        if (*(char *)(lVar4 + 0x1f) == '\x01') {
          FUN_00416020(param_2,L"<sub>",*param_2);
        }
        lVar4 = FUN_018d3e60(local_38,0);
        if (*(char *)(lVar4 + 0x1f) == '\x02') {
          FUN_00416020(param_2,L"<sup>",*param_2);
        }
        lVar4 = FUN_018d3e60(local_38,0);
        uVar3 = FUN_005fbf20(*(undefined4 *)(lVar4 + 0x18));
        local_3c = (uVar3 & 0xff0000) / 0x10000 + (uVar3 & 0xff) * 0x10000 + (uVar3 & 0xff00);
        FUN_0043fba0(&local_70,local_3c,6);
        FUN_004168b0(&local_78,*param_2);
        local_88 = &LAB_018dc1f8;
        local_80 = local_78;
        FUN_00416cd0(&local_68,4,L"<font color=\"#",local_70);
        FUN_004168e0(param_2,local_68);
      }
    }
    FUN_005fe090(*(undefined8 *)(param_1 + 0x10));
  }
  FUN_00414560(&local_78,3);
  FUN_004145c0(&local_60,2);
  return param_2;
}

