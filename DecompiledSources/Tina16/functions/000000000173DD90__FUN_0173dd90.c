/* Ghidra address: 0173dd90 */
/* Ghidra symbol: FUN_0173dd90 */


void FUN_0173dd90(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                 undefined1 param_5,char param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  longlong *local_res18;
  longlong *local_res20;
  undefined8 in_stack_ffffffffffffff08;
  undefined4 *puVar9;
  undefined8 in_stack_ffffffffffffff10;
  ulonglong uVar10;
  undefined7 uVar11;
  uint7 uVar12;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  short local_45;
  short local_43;
  undefined1 local_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined4 local_3d;
  float local_35;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = (longlong *)0x0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_70 = 0;
  local_68 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if ((((param_2 != (longlong *)0x0) && (cVar1 = FUN_0175ad40(param_1,param_2), cVar1 != '\0')) ||
      (local_res18 != (longlong *)0x0)) && (*(char *)(param_1[5] + 0xb) == '\0')) {
    if ((param_2 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x3a) == -0x80)) {
      FUN_0173e910(param_1,param_2);
    }
    cVar1 = FUN_0173d820(param_1);
    *(char *)((longlong)param_1 + 0x3a) = cVar1;
    bVar8 = cVar1 != '\0';
    if (param_6 == '\0') {
      uVar10 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff10 >> 8),
                        local_res18 == (longlong *)0x0);
      FUN_01d048c0(param_1[5],0x1a,0xfffffffd,&local_1c,&local_20,uVar10,1);
      if (param_2 != (longlong *)0x0) {
        uVar11 = (undefined7)(uVar10 >> 8);
        if (bVar8) {
          uVar7 = CONCAT71(uVar11,1);
          FUN_01d048c0(param_1[5],0xe,0xfffffffd,&local_24,&local_28,uVar7,1);
          uVar10 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          FUN_01d048c0(param_1[5],0x10,0xfffffff4,&local_2c,&local_30,uVar10,1);
        }
        else {
          uVar7 = CONCAT71(uVar11,1);
          FUN_01d048c0(param_1[5],0x10,0xfffffff4,&local_24,&local_28,uVar7,1);
          uVar10 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          FUN_01d048c0(param_1[5],0xe,0xfffffffd,&local_2c,&local_30,uVar10,1);
        }
        (**(code **)(*param_2 + 0xe8))(param_2,1);
        FUN_01a9a440(param_2,0);
        (**(code **)(*param_2 + 0x40))(param_2,local_1c,local_20);
        (**(code **)(*param_2 + 0x48))(param_2,local_2c,local_30);
        uVar4 = (**(code **)(*(longlong *)param_1[5] + 0x2a8))((longlong *)param_1[5],param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
        (**(code **)(*param_2 + 0x40))(param_2,local_1c,local_20);
        (**(code **)(*param_2 + 0x48))(param_2,local_24,local_28);
        (**(code **)(*param_2 + 0xe8))(param_2,0);
      }
      if (local_res18 != (longlong *)0x0) {
        (**(code **)(*local_res18 + 0x100))(local_res18,&local_b0);
        (**(code **)(*local_b0 + 0x100))(local_b0,&local_a8,L"interactive");
        cVar1 = FUN_0043fc50(local_a8,0);
        uVar12 = (uint7)(uVar10 >> 8);
        if (cVar1 == '\0') {
          lVar5 = (ulonglong)uVar12 << 8;
          FUN_01d048c0(param_1[5],0x10,0xfffffff4,&local_24,&local_28,lVar5,1);
          uVar10 = CONCAT44((int)((ulonglong)lVar5 >> 0x20),local_24);
          FUN_01243890(&local_68,local_res18,local_res20,local_1c,local_20,uVar10,local_28,1,0x8000)
          ;
          (**(code **)(*local_68 + 0x108))(local_68,L"showif",&DAT_0173e8f4);
          FUN_01d048c0(param_1[5],0xe,0xfffffffd,&local_24,&local_28,uVar10 & 0xffffffffffffff00,1);
          FUN_01243890(&local_68,local_res18,local_res20,local_1c,local_20,local_24,local_28,1,
                       0x8000);
          (**(code **)(*local_68 + 0x108))(local_68,L"showif",&DAT_0173e908);
        }
        else {
          if (bVar8) {
            puVar9 = &local_28;
            lVar5 = (ulonglong)uVar12 << 8;
            FUN_01d048c0(param_1[5],0xe,0xfffffffd,&local_24,puVar9,lVar5,1);
            uVar3 = (undefined4)((ulonglong)lVar5 >> 0x20);
            uVar4 = (undefined4)((ulonglong)puVar9 >> 0x20);
          }
          else {
            puVar9 = &local_28;
            uVar10 = uVar10 & 0xffffffffffffff00;
            FUN_01d048c0(param_1[5],0x10,0xfffffff4,&local_24,puVar9,uVar10,1);
            uVar3 = (undefined4)(uVar10 >> 0x20);
            uVar4 = (undefined4)((ulonglong)puVar9 >> 0x20);
          }
          FUN_01243890(&local_b8,local_res18,local_res20,local_1c,CONCAT44(uVar4,local_20),
                       CONCAT44(uVar3,local_24),local_28,1,0x8000);
        }
      }
    }
    else {
      if (param_1[8] == 0) {
        lVar5 = FUN_01d06fb0(param_1[5],*(undefined1 *)(param_1[5] + 0xd1));
        param_1[8] = lVar5;
      }
      if (((param_1[8] != 0) && (cVar1 = FUN_01d07320(param_1[5]), -1 < cVar1)) &&
         (cVar1 = FUN_00c3d380(param_1[8],&local_50,&local_45), cVar1 != '\0')) {
        iVar2 = FUN_00c3c520(local_41,local_40,local_3f);
        if (bVar8) {
          cVar1 = FUN_01d07320(param_1[5]);
          *(int *)(param_1 + 2) = iVar2 + cVar1;
        }
        else {
          cVar1 = FUN_01d07320(param_1[5]);
          *(int *)(param_1 + 2) = (int)cVar1;
        }
        if (param_2 != (longlong *)0x0) {
          FUN_01a9d8b0(param_2,(char)param_1[2]);
          FUN_01a9a720(param_2,*(undefined4 *)(param_1[5] + 0xc),*(undefined4 *)(param_1[5] + 0x10))
          ;
          uVar3 = FUN_0173cca0(param_1[5],param_5,param_6);
          FUN_01a9a770(param_2,uVar3);
          FUN_01a9a780(param_2,*(undefined1 *)(param_1[5] + 0xd1),*(undefined1 *)(param_1[5] + 0xd3)
                      );
        }
        plVar6 = (longlong *)
                 FUN_01a9f060(local_41,local_40,local_3f,local_3e,CONCAT44(uVar4,local_3d),local_50,
                              (char)param_1[2]);
        (**(code **)(*(longlong *)param_1[4] + 0x10))((longlong *)param_1[4],plVar6);
        if (*(char *)((longlong)param_1 + 10) == '\0') {
          if (*(int *)((longlong)param_1 + 0x14) == (int)param_1[2]) {
            FUN_00410f20(plVar6);
          }
          else {
            if (param_2 != (longlong *)0x0) {
              FUN_01a9f420(param_2,(longlong)local_45,(longlong)local_43,local_35,plVar6,0,1);
            }
            *(int *)((longlong)param_1 + 0x14) = (int)param_1[2];
          }
        }
        else if (param_2 != (longlong *)0x0) {
          (**(code **)(*param_1 + 0x10))(param_1,local_60,param_2,param_5,param_6);
          FUN_01a9f420(param_2,(longlong)local_45,(longlong)local_43,local_35,plVar6,local_60,1);
        }
        if (local_res18 != (longlong *)0x0) {
          (**(code **)(*local_res18 + 0x148))(local_res18,&local_68,L"shape");
          (**(code **)(*local_res20 + 0x98))(local_res20,&local_70,local_68);
          FUN_01b23e30(plVar6,local_res18,local_68);
          (**(code **)(*local_68 + 0x108))(local_68,L"type",L"image");
          FUN_0043f750(&local_80,(longlong)local_45);
          FUN_0043f750(&local_88,(longlong)local_43);
          FUN_00416cd0(&local_78,3,local_80,&DAT_0173e88c,local_88);
          (**(code **)(*local_68 + 0x108))(local_68,L"position",local_78);
          iVar2 = (**(code **)(*plVar6 + 0x60))(plVar6);
          uVar7 = FUN_0040c840((double)iVar2 / (double)local_35);
          FUN_0043f780(&local_98,uVar7);
          iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
          uVar7 = FUN_0040c840((double)iVar2 / (double)local_35);
          FUN_0043f780(&local_a0,uVar7);
          FUN_00416cd0(&local_90,3,local_98,&DAT_0173e88c,local_a0);
          (**(code **)(*local_68 + 0x108))(local_68,L"size",local_90);
        }
      }
    }
  }
  FUN_00417840(&local_b8,&LAB_00b9fca0,2);
  FUN_00414560(&local_a8,7);
  FUN_0041b800(&local_70);
  FUN_0041b800(&local_68);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

