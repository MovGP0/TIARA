/* Ghidra address: 0173fc40 */
/* Ghidra symbol: FUN_0173fc40 */


void FUN_0173fc40(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
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
  undefined8 in_stack_fffffffffffffed8;
  undefined4 *puVar9;
  undefined8 in_stack_fffffffffffffee0;
  ulonglong uVar10;
  undefined7 uVar12;
  uint7 uVar13;
  undefined8 uVar11;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  longlong *local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  short local_5d;
  short local_5b;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined4 local_55;
  float local_4d;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = (longlong *)0x0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90[0] = 0;
  local_80 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if ((((param_2 != (longlong *)0x0) && (cVar1 = FUN_0175ad40(param_1,param_2), cVar1 != '\0')) ||
      (local_res18 != (longlong *)0x0)) && (*(char *)(param_1[5] + 0xb) == '\0')) {
    cVar1 = FUN_0173d820(param_1);
    *(char *)((longlong)param_1 + 0x3a) = cVar1;
    bVar8 = cVar1 != '\0';
    if (param_6 == '\0') {
      uVar7 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffee0 >> 8),
                       local_res18 == (longlong *)0x0);
      FUN_01d048c0(param_1[5],0x10,0,&local_1c,&local_20,uVar7,1);
      uVar10 = CONCAT71((int7)((ulonglong)uVar7 >> 8),local_res18 == (longlong *)0x0);
      FUN_01d048c0(param_1[5],0x10,0xfffffff0,&local_24,&local_28,uVar10,1);
      if (param_2 != (longlong *)0x0) {
        uVar12 = (undefined7)(uVar10 >> 8);
        if (bVar8) {
          uVar7 = CONCAT71(uVar12,1);
          FUN_01d048c0(param_1[5],0x20,0,&local_3c,&local_40,uVar7,1);
          uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          FUN_01d048c0(param_1[5],0x20,0xfffffff0,&local_44,&local_48,uVar7,1);
          uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          FUN_01d048c0(param_1[5],0x20,0xfffffff8,&local_2c,&local_30,uVar7,1);
          uVar10 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          FUN_01d048c0(param_1[5],0x20,0xffffffe8,&local_34,&local_38,uVar10,1);
        }
        else {
          uVar7 = CONCAT71(uVar12,1);
          FUN_01d048c0(param_1[5],0x20,0,&local_2c,&local_30,uVar7,1);
          uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          FUN_01d048c0(param_1[5],0x20,0xfffffff0,&local_34,&local_38,uVar7,1);
          uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          FUN_01d048c0(param_1[5],0x20,0xfffffff8,&local_3c,&local_40,uVar7,1);
          uVar10 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
          FUN_01d048c0(param_1[5],0x20,0xffffffe8,&local_44,&local_48,uVar10,1);
        }
        FUN_01a9a440(param_2,0);
        (**(code **)(*param_2 + 0x40))(param_2,local_1c,local_20);
        (**(code **)(*param_2 + 0x48))(param_2,local_3c,local_40);
        (**(code **)(*param_2 + 0x40))(param_2,local_24,local_28);
        (**(code **)(*param_2 + 0x48))(param_2,local_44,local_48);
        uVar4 = (**(code **)(*(longlong *)param_1[5] + 0x2a8))((longlong *)param_1[5],param_2);
        (**(code **)(*param_2 + 0xb8))(param_2,uVar4);
        (**(code **)(*param_2 + 0x40))(param_2,local_1c,local_20);
        (**(code **)(*param_2 + 0x48))(param_2,local_2c,local_30);
        (**(code **)(*param_2 + 0x40))(param_2,local_24,local_28);
        (**(code **)(*param_2 + 0x48))(param_2,local_34,local_38);
      }
      if (local_res18 != (longlong *)0x0) {
        (**(code **)(*local_res18 + 0x100))(local_res18,&local_d0);
        (**(code **)(*local_d0 + 0x100))(local_d0,&local_c8,L"interactive");
        cVar1 = FUN_0043fc50(local_c8,0);
        uVar13 = (uint7)(uVar10 >> 8);
        if (cVar1 == '\0') {
          uVar10 = (ulonglong)uVar13 << 8;
          FUN_01d048c0(param_1[5],0x20,0,&local_2c,&local_30,uVar10,1);
          puVar9 = &local_38;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_01d048c0(param_1[5],0x20,0xfffffff0,&local_34,puVar9,uVar10,1);
          uVar7 = CONCAT44((int)((ulonglong)puVar9 >> 0x20),local_20);
          uVar11 = CONCAT44((int)(uVar10 >> 0x20),local_2c);
          FUN_01243890(&local_80,local_res18,local_res20,local_1c,uVar7,uVar11,local_30,1,0x8000);
          uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
          uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
          (**(code **)(*local_80 + 0x108))(local_80,L"showif",&DAT_01740b08);
          uVar10 = CONCAT44(uVar3,local_34);
          FUN_01243890(&local_80,local_res18,local_res20,local_24,CONCAT44(uVar4,local_28),uVar10,
                       local_38,1,0x8000);
          (**(code **)(*local_80 + 0x108))(local_80,L"showif",&DAT_01740b08);
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_01d048c0(param_1[5],0x20,0xfffffff8,&local_2c,&local_30,uVar10,1);
          puVar9 = &local_38;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_01d048c0(param_1[5],0x20,0xffffffe8,&local_34,puVar9,uVar10,1);
          uVar7 = CONCAT44((int)((ulonglong)puVar9 >> 0x20),local_20);
          uVar11 = CONCAT44((int)(uVar10 >> 0x20),local_2c);
          FUN_01243890(&local_80,local_res18,local_res20,local_1c,uVar7,uVar11,local_30,1,0x8000);
          uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
          uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
          (**(code **)(*local_80 + 0x108))(local_80,L"showif",&LAB_01740b1c);
          FUN_01243890(&local_80,local_res18,local_res20,local_24,CONCAT44(uVar4,local_28),
                       CONCAT44(uVar3,local_34),local_38,1,0x8000);
          (**(code **)(*local_80 + 0x108))(local_80,L"showif",&LAB_01740b1c);
        }
        else {
          if (bVar8) {
            uVar10 = (ulonglong)uVar13 << 8;
            FUN_01d048c0(param_1[5],0x20,0xfffffff8,&local_2c,&local_30,uVar10,1);
            puVar9 = &local_38;
            uVar10 = uVar10 & 0xffffffffffffff00;
            FUN_01d048c0(param_1[5],0x20,0xffffffe8,&local_34,puVar9,uVar10,1);
            uVar3 = (undefined4)(uVar10 >> 0x20);
            uVar4 = (undefined4)((ulonglong)puVar9 >> 0x20);
          }
          else {
            uVar10 = uVar10 & 0xffffffffffffff00;
            FUN_01d048c0(param_1[5],0x20,0,&local_2c,&local_30,uVar10,1);
            puVar9 = &local_38;
            uVar10 = uVar10 & 0xffffffffffffff00;
            FUN_01d048c0(param_1[5],0x20,0xfffffff0,&local_34,puVar9,uVar10,1);
            uVar3 = (undefined4)(uVar10 >> 0x20);
            uVar4 = (undefined4)((ulonglong)puVar9 >> 0x20);
          }
          FUN_01243890(&local_d8,local_res18,local_res20,local_1c,CONCAT44(uVar4,local_20),
                       CONCAT44(uVar3,local_2c),local_30,1,0x8000);
          FUN_01243890(&local_e0,local_res18,local_res20,local_24,local_28,local_34,local_38,1,
                       0x8000);
        }
      }
    }
    else {
      if (param_1[8] == 0) {
        lVar5 = FUN_01d06fb0(param_1[5],*(undefined1 *)(param_1[5] + 0xd1));
        param_1[8] = lVar5;
      }
      if (((param_1[8] != 0) && (cVar1 = FUN_01d07320(param_1[5]), -1 < cVar1)) &&
         (cVar1 = FUN_00c3d380(param_1[8],&local_68,&local_5d), cVar1 != '\0')) {
        iVar2 = FUN_00c3c520(local_59,local_58,local_57);
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
                 FUN_01a9f060(local_59,local_58,local_57,local_56,CONCAT44(uVar4,local_55),local_68,
                              (char)param_1[2]);
        (**(code **)(*(longlong *)param_1[4] + 0x10))((longlong *)param_1[4],plVar6);
        if (*(char *)((longlong)param_1 + 10) == '\0') {
          if (*(int *)((longlong)param_1 + 0x14) == (int)param_1[2]) {
            FUN_00410f20(plVar6);
          }
          else {
            if (param_2 != (longlong *)0x0) {
              FUN_01a9f420(param_2,(longlong)local_5d,(longlong)local_5b,local_4d,plVar6,0,1);
            }
            *(int *)((longlong)param_1 + 0x14) = (int)param_1[2];
          }
        }
        else if (param_2 != (longlong *)0x0) {
          (**(code **)(*param_1 + 0x10))(param_1,local_78,param_2,param_5,param_6);
          FUN_01a9f420(param_2,(longlong)local_5d,(longlong)local_5b,local_4d,plVar6,local_78,1);
        }
        if (local_res18 != (longlong *)0x0) {
          (**(code **)(*local_res18 + 0x148))(local_res18,&local_80,L"shape");
          (**(code **)(*local_res20 + 0x98))(local_res20,local_90,local_80);
          FUN_01b23e30(plVar6,local_res18,local_80);
          (**(code **)(*local_80 + 0x108))(local_80,L"type",L"image");
          FUN_0043f750(&local_a0,(longlong)local_5d);
          FUN_0043f750(&local_a8,(longlong)local_5b);
          FUN_00416cd0(&local_98,3,local_a0,&DAT_01740aa0,local_a8);
          (**(code **)(*local_80 + 0x108))(local_80,L"position",local_98);
          iVar2 = (**(code **)(*plVar6 + 0x60))(plVar6);
          uVar7 = FUN_0040c840((double)iVar2 / (double)local_4d);
          FUN_0043f780(&local_b8,uVar7);
          iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
          uVar7 = FUN_0040c840((double)iVar2 / (double)local_4d);
          FUN_0043f780(&local_c0,uVar7);
          FUN_00416cd0(&local_b0,3,local_b8,&DAT_01740aa0,local_c0);
          (**(code **)(*local_80 + 0x108))(local_80,L"size",local_b0);
        }
      }
    }
  }
  FUN_00417840(&local_e0,&LAB_00b9fca0,3);
  FUN_00414560(&local_c8,7);
  FUN_0041b800(local_90);
  FUN_0041b800(&local_80);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

