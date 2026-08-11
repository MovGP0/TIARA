/* Ghidra address: 01bcb060 */
/* Ghidra symbol: FUN_01bcb060 */


void FUN_01bcb060(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  char cVar8;
  int iVar9;
  longlong *local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong *local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  
  local_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  local_178 = (longlong *)0x0;
  local_180 = (longlong *)0x0;
  local_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  local_150 = (longlong *)0x0;
  local_158 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  cVar2 = FUN_00781870();
  if (cVar2 != '\0') {
    cVar2 = FUN_01bcaba0(param_1);
    if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x2c8) & 4) != 0)) {
      lVar5 = FUN_01bca940(param_1);
      if (lVar5 == 0) {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x590),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x598),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x5a0),0);
      }
      else {
        FUN_00ddede0(param_1,&local_30,0xcb);
        if (local_30 != 0) {
          FUN_00ddede0(param_1,&local_40,0xcb);
          uVar6 = FUN_0041b800(&local_38);
          uVar3 = (**(code **)(*local_40 + 0x48))(local_40,uVar6);
          FUN_0041d630(uVar3);
          if (local_38 != 0) {
            FUN_00ddede0(param_1,&local_78,0xcb);
            FUN_00468a90(&local_90,local_78);
            FUN_00460d30(&local_70,&local_90,&DAT_01bcb974);
            FUN_00460d30(&local_58,&local_70,&DAT_01bcb987);
            iVar4 = FUN_00462650(&local_58);
            if (iVar4 < 1) {
              FUN_00ddede0(param_1,&local_158,0xcb);
              uVar6 = FUN_0041b800(&local_150);
              uVar3 = (**(code **)(*local_158 + 0x48))(local_158,uVar6);
              FUN_0041d630(uVar3);
              uVar6 = FUN_00460ba0(&local_148);
              uVar3 = (**(code **)(*local_150 + 0x40))(local_150,L"ScrollWidth",0,uVar6);
              FUN_0041d630(uVar3);
              iVar4 = FUN_00462650(&local_148);
              lVar5 = *(longlong *)(param_1 + 0x588);
              if (((*(int *)(lVar5 + 0x49c) != iVar4) && (*(int *)(lVar5 + 0x4a0) <= iVar4)) &&
                 (*(int *)(lVar5 + 0x498) <= iVar4)) {
                FUN_0068eaa0(lVar5,iVar4);
              }
              FUN_00ddede0(param_1,&local_180,0xcb);
              uVar6 = FUN_0041b800(&local_178);
              uVar3 = (**(code **)(*local_180 + 0x48))(local_180,uVar6);
              FUN_0041d630(uVar3);
              uVar6 = FUN_00460ba0(&local_170);
              uVar3 = (**(code **)(*local_178 + 0x40))(local_178,L"ScrollHeight",0,uVar6);
              FUN_0041d630(uVar3);
              iVar4 = FUN_00462650(&local_170);
              lVar5 = *(longlong *)(param_1 + 0x580);
              if (((*(int *)(lVar5 + 0x49c) != iVar4) && (*(int *)(lVar5 + 0x4a0) <= iVar4)) &&
                 (*(int *)(lVar5 + 0x498) <= iVar4)) {
                FUN_0068eaa0(lVar5,iVar4);
              }
            }
            else {
              FUN_00ddede0(param_1,&local_c8,0xcb);
              FUN_00468a90(&local_e0,local_c8);
              FUN_00460d30(&local_c0,&local_e0,&DAT_01bcb996);
              FUN_00460d30(&local_a8,&local_c0,&DAT_01bcb9a9);
              iVar4 = FUN_00462650(&local_a8);
              lVar5 = *(longlong *)(param_1 + 0x588);
              if (((*(int *)(lVar5 + 0x49c) != iVar4) && (*(int *)(lVar5 + 0x4a0) <= iVar4)) &&
                 (*(int *)(lVar5 + 0x498) <= iVar4)) {
                FUN_0068eaa0(lVar5,iVar4);
              }
              FUN_00ddede0(param_1,&local_118,0xcb);
              FUN_00468a90(&local_130,local_118);
              FUN_00460d30(&local_110,&local_130,&DAT_01bcb996);
              FUN_00460d30(&local_f8,&local_110,&DAT_01bcb9b8);
              iVar4 = FUN_00462650(&local_f8);
              lVar5 = *(longlong *)(param_1 + 0x580);
              if (((*(int *)(lVar5 + 0x49c) != iVar4) && (*(int *)(lVar5 + 0x4a0) <= iVar4)) &&
                 (*(int *)(lVar5 + 0x498) <= iVar4)) {
                FUN_0068eaa0(lVar5,iVar4);
              }
            }
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x588) + 0x49c);
            if (((*(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x578) < iVar4) && (0 < iVar4)) &&
               (iVar4 != *(int *)(param_1 + 0x98))) {
              iVar4 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x57c);
            }
            else {
              iVar4 = *(int *)(param_1 + 0x9c);
            }
            FUN_0068e9b0(*(undefined8 *)(param_1 + 0x580),iVar4);
            lVar5 = *(longlong *)(param_1 + 0x580);
            FUN_0068e6f0(lVar5,*(undefined4 *)(lVar5 + 0x494),0,*(undefined4 *)(lVar5 + 0x49c));
            *(undefined2 *)(*(longlong *)(param_1 + 0x580) + 0x4aa) =
                 *(undefined2 *)(*(longlong *)(param_1 + 0x580) + 0x4a0);
            iVar9 = *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x578);
            FUN_0068e9b0(*(undefined8 *)(param_1 + 0x588),iVar9);
            lVar5 = *(longlong *)(param_1 + 0x588);
            FUN_0068e6f0(lVar5,*(undefined4 *)(lVar5 + 0x494),0,*(undefined4 *)(lVar5 + 0x49c));
            *(undefined2 *)(*(longlong *)(param_1 + 0x588) + 0x4aa) =
                 *(undefined2 *)(*(longlong *)(param_1 + 0x588) + 0x4a0);
            cVar8 = '\0';
            cVar2 = *(char *)(*(longlong *)(param_1 + 0x590) + 0xa9);
            iVar1 = *(int *)(*(longlong *)(param_1 + 0x580) + 0x49c);
            uVar7 = (undefined7)((ulonglong)param_1 >> 8);
            if (((iVar4 < iVar1) && (0 < *(int *)(*(longlong *)(param_1 + 0x580) + 0x4a0))) &&
               ((0 < iVar1 && (iVar1 != *(int *)(param_1 + 0x9c))))) {
              uVar3 = (undefined4)CONCAT71(uVar7,1);
            }
            else {
              uVar3 = 0;
            }
            FUN_0064dbe0(*(longlong *)(param_1 + 0x590),uVar3);
            if ((cVar2 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x590) + 0xa9) != '\0')) {
              cVar8 = '\x01';
            }
            cVar2 = *(char *)(*(longlong *)(param_1 + 0x598) + 0xa9);
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x588) + 0x49c);
            if ((((iVar9 < iVar4) && (*(int *)(*(longlong *)(param_1 + 0x588) + 0x4a0) < iVar4)) &&
                (0 < iVar4)) && (iVar4 != *(int *)(param_1 + 0x98))) {
              uVar3 = (undefined4)CONCAT71(uVar7,1);
            }
            else {
              uVar3 = 0;
            }
            FUN_0064dbe0(*(longlong *)(param_1 + 0x598),uVar3);
            if ((cVar2 == '\0') && (*(char *)(*(longlong *)(param_1 + 0x598) + 0xa9) != '\0')) {
              cVar8 = '\x01';
            }
            FUN_01bcaee0(param_1,cVar8);
            if (cVar8 != '\0') {
              uVar6 = FUN_0065b870(param_1);
              thunk_FUN_04176ccd(uVar6,10,0x32,0);
            }
            goto LAB_01bcb76d;
          }
        }
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x590),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x598),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x5a0),0);
      }
    }
  }
LAB_01bcb76d:
  FUN_0041b800(&local_180);
  FUN_0041b800(&local_178);
  FUN_00460ba0(&local_170);
  FUN_0041b800(&local_158);
  FUN_0041b800(&local_150);
  FUN_00417840(&local_148,&DAT_004013f0,2);
  FUN_0041b800(&local_118);
  FUN_00417840(&local_110,&DAT_004013d8,2);
  FUN_00460ba0(&local_e0);
  FUN_0041b800(&local_c8);
  FUN_00417840(&local_c0,&DAT_004013d8,2);
  FUN_00460ba0(&local_90);
  FUN_0041b800(&local_78);
  FUN_00417840(&local_70,&DAT_004013d8,2);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  return;
}

