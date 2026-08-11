/* Ghidra address: 01b65dd0 */
/* Ghidra symbol: FUN_01b65dd0 */


void FUN_01b65dd0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e0;
  longlong *local_c8;
  undefined8 local_b8 [2];
  longlong local_a8;
  longlong local_a0;
  char local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95 [5];
  undefined8 local_90;
  undefined8 local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70 [3];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [14];
  undefined1 local_32 [26];
  
  local_e0 = auStack_128;
  local_b8[0] = 0;
  puVar2 = auStack_128;
  if ((*(char *)((longlong)param_1 + 0x7ed) == '\0') &&
     (cVar3 = FUN_00f83630(param_2,(longlong)param_1 + 0x7ee), puVar2 = local_e0, cVar3 != '\0')) {
    cVar3 = FUN_010e2d90(param_1);
    if (cVar3 == '\0') {
      uVar6 = FUN_0065b870(param_1);
      FUN_00f83670(uVar6,param_2);
      puVar2 = local_e0;
    }
    else {
      cVar3 = FUN_010e1a60(param_1);
      if (cVar3 != '\0') {
        uVar6 = FUN_010e1b10(param_1);
        local_c8 = (longlong *)FUN_004113f0(uVar6,&PTR_FUN_01133e90);
        iVar4 = (**(code **)(**(longlong **)(param_1[0x196] + 0x4f0) + 0x28))
                          (*(longlong **)(param_1[0x196] + 0x4f0));
        if (0 < iVar4) {
          if (*(char *)((longlong)local_c8 + 0xa9) == '\0') {
            FUN_008059a0(local_c8);
            iVar4 = FUN_007fd800(param_1);
            FUN_00806b40(local_c8,iVar4 + *(int *)((longlong)param_1 + 0x9c));
          }
          local_98 = '\0';
          param_1[0x1a9] = 0;
          param_1[0x1ac] = 0x3ff0000000000000;
          iVar4 = (**(code **)(**(longlong **)(param_1[0x196] + 0x4f0) + 0x28))();
          local_90._4_4_ = 0;
          if (-1 < iVar4 + -1) {
            do {
              local_a8 = (**(code **)(**(longlong **)(param_1[0x196] + 0x4f0) + 0x30))
                                   (*(longlong **)(param_1[0x196] + 0x4f0),local_90._4_4_);
              if (((local_98 == '\0') && (*(char *)(local_a8 + 0x158) != '\0')) &&
                 (*(short *)(local_a8 + 0x2e) != -1)) {
                param_1[0x1b5] = local_a8;
                local_98 = '\x01';
                (**(code **)(*(longlong *)param_1[0x196] + 0x268))
                          ((longlong *)param_1[0x196],local_90._4_4_);
              }
              else if (((*(char *)(local_a8 + 0x158) == '\0') && (*(short *)(local_a8 + 0x2e) != -1)
                       ) && (*(char *)((longlong)local_c8 + 0xa09) == '\0')) {
                FUN_0113d630(local_c8,*(undefined1 *)(local_a8 + 0x2e));
                local_108 = &local_90;
                local_100 = local_95;
                local_f8 = &local_96;
                local_f0 = &local_97;
                FUN_01138dc0(local_c8,param_1 + 0x1a9,param_1 + 0x1aa,param_1 + 0x1ab);
                param_1[0x1ac] = param_1[0x1a9];
                *(int *)(param_1 + 0x1ad) = (int)local_90 + -1;
                param_1[0x1ab] =
                     (longlong)
                     (((double)param_1[0x1aa] - (double)param_1[0x1a9]) /
                     (double)((int)local_90 + -1));
                local_108 = (longlong *)local_50;
                local_100 = local_58;
                FUN_01138af0(local_c8,local_32,local_40,&local_48);
                local_108 = param_1 + 0x1ac;
                local_100 = local_58;
                FUN_01138b30(local_c8,0,local_40,&local_48);
              }
              local_90._4_4_ = local_90._4_4_ + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          if (local_98 != '\0') {
            FUN_0113d630(local_c8,*(undefined1 *)(param_1[0x1b5] + 0x2e));
            (**(code **)(*local_c8 + 600))(local_c8);
            if (*(char *)((longlong)local_c8 + 0xa09) == '\0') {
              if (1 < (int)local_90) {
                plVar1 = (longlong *)param_1[0x16d];
                uVar5 = (**(code **)(*plVar1 + 0x260))(plVar1);
                uVar6 = (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))
                                  ((longlong *)plVar1[0x9e],uVar5);
                local_a0 = FUN_004113f0(uVar6,&PTR_FUN_011061a0);
                (**(code **)(**(longlong **)(local_a0 + 0x48) + 0x90))
                          (*(longlong **)(local_a0 + 0x48));
                *(int *)(local_a0 + 0x15c) = (int)local_90;
                *(undefined4 *)(local_a0 + 0x160) = 0;
              }
              local_108 = (longlong *)local_50;
              local_100 = local_58;
              FUN_01138af0(local_c8,local_32,local_40,&local_48);
              *(undefined8 *)(local_a8 + 0x150) = 0;
              local_108 = param_1 + 0x1ac;
              local_100 = local_58;
              FUN_01138b30(local_c8,0,local_40,&local_48);
              local_108 = &local_90;
              local_100 = local_95;
              local_f8 = &local_96;
              local_f0 = &local_97;
              FUN_01138d40(local_c8,local_70,&local_78,&local_80);
              if (*(char *)(param_1[0x1b5] + 0x30) != '\0') {
                (**(code **)(*(longlong *)param_1[0x1b4] + 0x58))((longlong *)param_1[0x1b4],1);
                uVar6 = FUN_0040c850(local_78);
                uVar8 = FUN_0040c850(local_70[0]);
                local_88 = FUN_00b90620(uVar6,uVar8);
                (**(code **)(*(longlong *)param_1[0x1b4] + 0x98))
                          ((longlong *)param_1[0x1b4],param_1 + 0x1b3,&local_88,0);
                *(char *)(param_1[0x1b5] + 0x2a) = (char)param_1[0x1b3];
                (**(code **)(*(longlong *)param_1[0x1b4] + 0xa8))
                          ((longlong *)param_1[0x1b4],(char)param_1[0x1b3]);
                (**(code **)(*(longlong *)param_1[0x1b4] + 0x98))
                          ((longlong *)param_1[0x1b4],param_1 + 0x1b3,param_1 + 0x1b1,1);
                FUN_00b90440(param_1[0x193],param_1[0x1b1]);
                iVar4 = (**(code **)(*(longlong *)param_1[0x196] + 0x260))
                                  ((longlong *)param_1[0x196]);
                uVar6 = (**(code **)(**(longlong **)(param_1[0x1b4] + 8) + 0x30))
                                  (*(longlong **)(param_1[0x1b4] + 8),iVar4 + 1);
                lVar7 = FUN_004113f0(uVar6,&PTR_FUN_011061a0);
                *(longlong *)(lVar7 + 0x118) = param_1[0x1b1];
                uVar5 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb])
                ;
                (**(code **)(*(longlong *)param_1[0x1b4] + 0x58))((longlong *)param_1[0x1b4],uVar5);
              }
              local_97 = 1;
              local_80 = (double)param_1[0x1ae] * (double)(int)local_90;
              local_96 = *(char *)(param_1[0x1b5] + 0x158) == '\x01';
              local_95[0] = 0;
              local_108 = &local_90;
              local_100 = (undefined1 *)((ulonglong)local_100 & 0xffffffffffffff00);
              local_f8 = (undefined1 *)CONCAT71(local_f8._1_7_,local_96);
              local_f0 = (undefined1 *)CONCAT71(local_f0._1_7_,1);
              FUN_01138e40(local_c8,local_70,&local_78,&local_80);
              uVar6 = FUN_0065b870(param_1);
              FUN_01139080(local_c8,uVar6,0x52f);
              (**(code **)(*local_c8 + 0x488))(local_c8);
            }
          }
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x7ed) = 1;
      *(undefined1 *)((longlong)param_1 + 0x7ec) = 0;
      param_1[0x133] = 0;
      (**(code **)(*(longlong *)param_1[0x131] + 0x128))((longlong *)param_1[0x131],0);
      (**(code **)(*(longlong *)param_1[0x130] + 0x128))((longlong *)param_1[0x130],0);
      FUN_010e8e30(param_1[0x136],0);
      *PTR_DAT_02001100 = *(undefined1 *)((longlong)param_1 + 0xdb2);
      *PTR_DAT_02002c68 = *(undefined1 *)((longlong)param_1 + 0xdb3);
      uVar6 = FUN_0040c850(local_78);
      uVar8 = FUN_0040c850(local_70[0]);
      local_88 = FUN_00b90620(uVar6,uVar8);
      local_108 = (longlong *)0x3ff0000000000000;
      FUN_010c0d70(local_32,&local_88,0,0xfe);
      FUN_01b655a0(param_1,1);
      cVar3 = (**(code **)(*(longlong *)param_1[0x1b4] + 0xc0))((longlong *)param_1[0x1b4]);
      puVar2 = local_e0;
      if (cVar3 == '\0') {
        FUN_0082a6c0(param_1[0xf8],1);
        (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
        puVar2 = local_e0;
      }
    }
  }
  local_e0 = puVar2;
  FUN_00414480(local_b8);
  return;
}

