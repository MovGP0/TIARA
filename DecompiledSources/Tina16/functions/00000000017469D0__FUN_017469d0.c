/* Ghidra address: 017469d0 */
/* Ghidra symbol: FUN_017469d0 */


void FUN_017469d0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                 undefined1 param_5,char param_6)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *local_res18;
  undefined8 local_res20;
  undefined4 *puVar10;
  undefined8 in_stack_fffffffffffffef0;
  undefined4 uVar12;
  undefined8 uVar11;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0 [2];
  longlong *local_a0;
  undefined8 local_98;
  short local_8d;
  short local_8b;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined4 local_85;
  undefined4 local_7d;
  undefined8 local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0[0] = 0;
  local_b8 = (longlong *)0x0;
  local_78 = 0;
  local_a0 = (longlong *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  if ((((param_2 != (longlong *)0x0) && (cVar3 = FUN_0175ad40(param_1,param_2), cVar3 != '\0')) ||
      (local_res18 != (longlong *)0x0)) &&
     (lVar2 = *(longlong *)(param_1 + 0x28), *(char *)(lVar2 + 0xb) == '\0')) {
    if (*(longlong *)(param_1 + 0x60) == 0) {
      uVar5 = FUN_01d06fb0(lVar2,*(undefined1 *)(lVar2 + 0xd1));
      *(undefined8 *)(param_1 + 0x60) = uVar5;
    }
    if (((param_6 != '\0') && (*(longlong *)(param_1 + 0x60) != 0)) &&
       ((cVar3 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), -1 < cVar3 &&
        (cVar3 = FUN_00c3d380(*(undefined8 *)(param_1 + 0x60),&local_98,&local_8d), cVar3 != '\0')))
       ) {
      cVar3 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28));
      *(int *)(param_1 + 0x10) = (int)cVar3;
      FUN_01a9d8b0(param_2,*(undefined1 *)(param_1 + 0x10));
      FUN_01a9a720(param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10));
      uVar4 = FUN_0173cca0(*(undefined8 *)(param_1 + 0x28),param_5,param_6);
      FUN_01a9a770(param_2,uVar4);
      FUN_01a9a780(param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd1),
                   *(undefined1 *)(*(longlong *)(param_1 + 0x28) + 0xd3));
      if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x10)) {
        FUN_01a9fa10(param_2,(longlong)local_8d,(longlong)local_8b,local_89,local_88,local_87,
                     local_86,local_85,local_7d,local_98);
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
        in_stack_fffffffffffffef0 = local_98;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x2d0))
              (*(longlong **)(param_1 + 0x28),0,&local_30);
    uVar1 = *local_30;
    if (param_2 != (longlong *)0x0) {
      local_ec = (**(code **)(*param_2 + 0xd0))(param_2,0);
    }
    uVar6 = 0;
    iVar9 = *(int *)(param_1 + 0x3c);
    uVar8 = uVar6;
    if (-1 < iVar9 + -1) {
      do {
        uVar6 = CONCAT62((int6)(uVar6 >> 0x10),(char)uVar8 * 2);
        FUN_017472e0(param_1,&local_60,uVar6 & 0xffffffff);
        uVar6 = uVar6 & 0xffffffff;
        FUN_017472e0(param_1,&local_70,CONCAT71((int7)(uVar6 >> 8),(char)uVar6 + '\x01'));
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_60 + 2,local_5c + 2,&local_34,&local_38,
                     local_res18 == (longlong *)0x0,1);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_58 + -1,local_54 + -1,&local_3c,&local_40
                     ,local_res18 == (longlong *)0x0,1);
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_70 + 2,local_6c + 2,&local_44,&local_48,
                     local_res18 == (longlong *)0x0,1);
        puVar10 = &local_50;
        FUN_01d048c0(*(undefined8 *)(param_1 + 0x28),local_68 + -1,local_64 + -1,&local_4c,puVar10,
                     local_res18 == (longlong *)0x0,1);
        uVar4 = (undefined4)((ulonglong)puVar10 >> 0x20);
        iVar7 = (int)uVar8;
        uVar6 = 0;
        if (param_2 != (longlong *)0x0) {
          cVar3 = FUN_015f6420(uVar8,uVar1);
          if (cVar3 == '\0') {
            uVar5 = CONCAT44(uVar4,local_40);
            (**(code **)(*param_2 + 0x60))(param_2,local_34,local_38,local_3c,uVar5,0xff);
            uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),local_50);
            uVar6 = (**(code **)(*param_2 + 0x60))
                              (param_2,local_44,local_48,local_4c,uVar5,local_ec);
            uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
          }
          else {
            uVar5 = CONCAT44(uVar4,local_40);
            (**(code **)(*param_2 + 0x60))(param_2,local_34,local_38,local_3c,uVar5,local_ec);
            uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),local_50);
            uVar6 = (**(code **)(*param_2 + 0x60))(param_2,local_44,local_48,local_4c,uVar5,0xff);
            uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
          }
        }
        uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffef0 >> 0x20);
        if (local_res18 != (longlong *)0x0) {
          (**(code **)(*local_res18 + 0x100))(local_res18,&local_b8);
          (**(code **)(*local_b8 + 0x100))(local_b8,local_b0,L"interactive");
          cVar3 = FUN_0043fc50(local_b0[0],0);
          if (cVar3 == '\0') {
            uVar5 = CONCAT44(uVar4,local_48);
            uVar11 = CONCAT44(uVar12,0xff);
            FUN_01243a40(&local_a0,local_res18,local_res20,local_44,uVar5,local_4c,local_50,1,0xff,
                         uVar11);
            uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
            uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
            FUN_00c42670(0x4000000000000000,(double)iVar7);
            uVar5 = FUN_0040c770();
            FUN_0043f780(&local_d8,uVar5);
            FUN_00416ba0(&local_d0,&DAT_017472c4,local_d8);
            (**(code **)(*local_a0 + 0x108))(local_a0,L"showif",local_d0);
            in_stack_fffffffffffffef0 = CONCAT44(uVar12,0xff);
            FUN_01243a40(&local_a0,local_res18,local_res20,local_34,CONCAT44(uVar4,local_38),
                         local_3c,local_40,1,0xff,in_stack_fffffffffffffef0);
            FUN_00c42670(0x4000000000000000,(double)iVar7);
            uVar5 = FUN_0040c770();
            FUN_0043f780(&local_e8,uVar5);
            FUN_00416ba0(&local_e0,&DAT_017472d8,local_e8);
            uVar6 = (**(code **)(*local_a0 + 0x108))(local_a0,L"showif",local_e0);
          }
          else {
            cVar3 = FUN_015f6420(uVar8,uVar1);
            if (cVar3 == '\0') {
              in_stack_fffffffffffffef0 = CONCAT44(uVar12,0xff);
              uVar6 = FUN_01243a40(&local_c8,local_res18,local_res20,local_34,
                                   CONCAT44(uVar4,local_38),local_3c,local_40,1,0xff,
                                   in_stack_fffffffffffffef0);
            }
            else {
              in_stack_fffffffffffffef0 = CONCAT44(uVar12,0xff);
              uVar6 = FUN_01243a40(&local_c0,local_res18,local_res20,local_44,
                                   CONCAT44(uVar4,local_48),local_4c,local_50,1,0xff,
                                   in_stack_fffffffffffffef0);
            }
          }
        }
        iVar9 = iVar9 + -1;
        uVar8 = (ulonglong)(iVar7 + 1);
      } while (iVar9 != 0);
    }
  }
  FUN_00414560(&local_e8,4);
  FUN_00417840(&local_c8,&LAB_00b9fca0,3);
  FUN_00414480(local_b0);
  FUN_0041b800(&local_a0);
  FUN_00414480(&local_78);
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  return;
}

