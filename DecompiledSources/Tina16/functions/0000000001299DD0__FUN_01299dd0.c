/* Ghidra address: 01299dd0 */
/* Ghidra symbol: FUN_01299dd0 */


void FUN_01299dd0(longlong *param_1,longlong param_2,undefined8 param_3,char param_4,char param_5,
                 undefined1 param_6,undefined1 param_7,undefined8 param_8,undefined8 param_9)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  longlong *local_res8 [2];
  undefined8 local_res18 [2];
  char local_169;
  int local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70 [2];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_150 = 0;
  local_158 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_e8 = (longlong *)0x0;
  local_f0 = (longlong *)0x0;
  local_d8 = (longlong *)0x0;
  local_e0 = (longlong *)0x0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b0 = (longlong *)0x0;
  local_b8 = (longlong *)0x0;
  local_98 = 0;
  local_a8 = 0;
  local_a0 = (longlong *)0x0;
  local_88 = 0;
  local_90 = 0;
  local_78 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  local_70[0] = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = 0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_60 = (longlong *)0x0;
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  FUN_0041b910(param_1);
  FUN_00414610(local_res18[0]);
  FUN_01299960(&local_30,local_res8[0],local_res18[0],param_6,param_7,param_8,param_9);
  (**(code **)(*local_res8[0] + 0x148))(local_res8[0],&local_38,L"circuit");
  (**(code **)(*local_30 + 0x98))(local_30,local_70,local_38);
  iVar10 = *(int *)(param_2 + 0x10);
  local_168 = 0;
  if (-1 < iVar10 + -1) {
    do {
      plVar7 = (longlong *)FUN_00b94e60(param_2,local_168);
      cVar2 = FUN_0198a580(plVar7);
      if ((cVar2 == '\x04') && (cVar2 = (**(code **)(*plVar7 + 0x2d8))(plVar7), cVar2 != '\0')) {
        FUN_0128ace0(&local_58,local_res8[0],local_38,plVar7,param_4 == '\0',1,param_5,
                     local_res18[0],0,0,0,0,1,0,0,2,0);
        (**(code **)(*local_58 + 0x60))(local_58,&local_80);
        (**(code **)(*local_80 + 0x20))(local_80,&local_78);
        iVar3 = (**(code **)(*local_78 + 0x18))(local_78);
        if (local_58 != (longlong *)0x0) {
          lVar1 = plVar7[0x33];
          cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01739820);
          if ((cVar2 == '\0') && (cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01731160), cVar2 == '\0')) {
            (**(code **)(*local_58 + 0x60))(local_58,&local_88);
            FUN_0041b890(&local_90,local_88,&DAT_0129ab38);
            FUN_0173d130(lVar1,local_res8[0],local_90,param_4,param_5 == '\x01');
            (**(code **)(*local_58 + 0x60))(local_58,&local_a0);
            (**(code **)(*local_a0 + 0x60))(local_a0,&local_98);
            FUN_0041b890(&local_a8,local_98,&DAT_0129ab38);
            uVar8 = FUN_0173d750(plVar7[0x33]);
            local_169 = FUN_01245950(local_res8[0],local_a8,uVar8);
          }
          (**(code **)(*local_58 + 0x60))(local_58,&local_b8);
          (**(code **)(*local_b8 + 0x20))(local_b8,&local_b0);
          iVar4 = (**(code **)(*local_b0 + 0x18))(local_b0);
          if ((iVar4 == iVar3) && (local_169 == '\0')) {
            FUN_017ff4f0(plVar7,&local_d0);
            FUN_00416cd0(&local_c8,3,L"component[@id=\"",local_d0,&PTR_DAT_0129ab80);
            (**(code **)(*local_38 + 0xd8))(local_38,&local_c0,local_c8);
            FUN_0041b890(&local_40,local_c0,&DAT_0129ab38);
          }
          else {
            (**(code **)(*local_58 + 0x60))(local_58,&local_e0);
            (**(code **)(*local_e0 + 0x20))(local_e0,&local_d8);
            iVar4 = (**(code **)(*local_d8 + 0x18))(local_d8);
            iVar9 = 0;
            if (0 < iVar4 - iVar3) {
              do {
                (**(code **)(*local_58 + 0x60))(local_58,&local_f0);
                (**(code **)(*local_f0 + 0x20))(local_f0,&local_e8);
                (**(code **)(*local_e8 + 0x50))(local_e8,iVar3);
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar4 - iVar3);
            }
          }
        }
      }
      else {
        cVar2 = FUN_0198a580(plVar7);
        if ((cVar2 == '\x05') && (*(longlong *)(param_2 + 0x488) != 0)) {
          if (*(char *)(*(longlong *)(param_2 + 0x488) + 0xdd8) != '\0') {
            FUN_0128c240(&local_48,param_2,local_res8[0],local_38,plVar7,param_5,local_res18[0]);
            uVar5 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
            uVar6 = (**(code **)(*plVar7 + 0x210))(plVar7,1);
            dVar11 = (double)FUN_016ee780(uVar5,uVar6,*(undefined8 *)(param_2 + 0x488));
            FUN_00b8fd60(&local_f8,dVar11 / 0.001,6,0,1);
            (**(code **)(*local_48 + 0x108))(local_48,L"curr",local_f8);
            iVar3 = (**(code **)(*plVar7 + 0x210))(plVar7,0);
            iVar4 = (**(code **)(*plVar7 + 0x210))(plVar7,1);
            FUN_00b8fd60(&local_100,
                         (*(double *)
                           (*(longlong *)(*(longlong *)(param_2 + 0x488) + 0x118) +
                           (longlong)iVar3 * 8) +
                         *(double *)
                          (*(longlong *)(*(longlong *)(param_2 + 0x488) + 0x118) +
                          (longlong)iVar4 * 8)) / 2.0,6,0,1);
            (**(code **)(*local_48 + 0x108))(local_48,L"volt",local_100);
          }
        }
        else {
          cVar2 = FUN_0198a580(plVar7);
          if (cVar2 == '\v') {
            if ((undefined **)*plVar7 == &PTR_FUN_010b5580) {
              (**(code **)(*local_res8[0] + 0x148))(local_res8[0],&local_50,L"text");
              (**(code **)(*local_38 + 0x98))(local_38,&local_108,local_50);
              local_120 = 5;
              local_128 = plVar7;
              FUN_00442f70(&local_118,&DAT_0129ac08,&local_128,0);
              FUN_00416ba0(&local_110,L"Text_",local_118);
              (**(code **)(*local_50 + 0x108))(local_50,&PTR_DAT_0129abdc,local_110);
              FUN_0043f750(&local_138,*(int *)((longlong)plVar7 + 0xc) + 2);
              FUN_0043f750(&local_140,(int)plVar7[2] + -4);
              uVar8 = local_140;
              FUN_00416cd0(&local_130,3,local_138,&DAT_0129ac3c,local_140);
              uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
              (**(code **)(*local_50 + 0x108))(local_50,L"position",local_130);
              FUN_01294700(plVar7[5],local_res8[0],local_50,local_res18[0],CONCAT44(uVar5,10));
              if (plVar7[9] != 0) {
                FUN_017ff4f0(plVar7[9],&local_148);
                (**(code **)(*local_50 + 0x108))(local_50,L"compid",local_148);
              }
            }
            else if ((undefined **)*plVar7 == &PTR_FUN_017b8848) {
              FUN_0128c830(&local_60,local_res8[0],local_38,plVar7);
              local_120 = 5;
              local_128 = plVar7;
              FUN_00442f70(&local_158,&DAT_0129ac08,&local_128,0);
              FUN_00416ba0(&local_150,L"Shape_",local_158);
              (**(code **)(*local_60 + 0x108))(local_60,&PTR_DAT_0129abdc,local_150);
            }
          }
        }
      }
      local_168 = local_168 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_00414560(&local_158,6);
  FUN_00414560(&local_118,2);
  FUN_0041b800(&local_108);
  FUN_00414560(&local_100,2);
  FUN_0041b800(&local_f0);
  FUN_0041b800(&local_e8);
  FUN_0041b800(&local_e0);
  FUN_0041b800(&local_d8);
  FUN_00414560(&local_d0,2);
  FUN_00417840(&local_c0,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_b0);
  FUN_0041b800(&local_a8);
  FUN_00417840(&local_a0,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_90);
  FUN_00417840(&local_88,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_78);
  FUN_0041b800(local_70);
  FUN_00417840(&local_60,&LAB_00b9fca0,7);
  FUN_0041b800(local_res8);
  FUN_00414480(local_res18);
  return;
}

