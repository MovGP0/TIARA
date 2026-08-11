/* Ghidra address: 01c27840 */
/* Ghidra symbol: FUN_01c27840 */


void FUN_01c27840(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 local_res10 [3];
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  char local_59;
  undefined8 local_58;
  short *local_50;
  undefined8 local_48;
  int *local_40;
  int local_34;
  int local_30;
  int local_2c;
  longlong *local_20;
  
  local_70 = auStack_148;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_48 = 0;
  local_50 = (short *)0x0;
  local_58 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = (longlong *)0x0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(**(longlong **)(param_1 + 8) + 0xd8))(*(longlong **)(param_1 + 8),local_res10[0]);
  local_2c = 0;
  do {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    if (iVar4 <= local_2c) {
      FUN_00410f20(local_20);
      local_20 = (longlong *)0x0;
      FUN_00414560(&local_120,0x16);
      FUN_00414560(&local_58,3);
      FUN_00414480(local_res10);
      return;
    }
    (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
              (*(longlong **)(param_1 + 8),&local_78,local_2c);
    FUN_01c276f0(&local_50,local_78);
    iVar4 = FUN_00416db0(local_50,L".subckt");
    if (iVar4 == 0) {
      local_34 = local_2c;
      local_40 = (int *)FUN_00418560(0x20,&DAT_01c20f28);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),&local_48,local_2c);
      FUN_01c27510(&local_80,&local_48);
      FUN_0043e1a0(&local_50,local_80);
      FUN_01c27510(&local_88,&local_48);
      FUN_00414ad0(local_40 + 4,local_88);
      local_40[2] = local_2c;
      (**(code **)(*local_20 + 0x90))(local_20);
      local_59 = '\0';
      while ((local_59 == '\0' &&
             ((iVar4 = FUN_00416db0(local_50,L".subckt"), iVar4 == 0 ||
              ((local_50 != (short *)0x0 && (*local_50 == 0x2b))))))) {
        if (*local_50 == 0x2b) {
          FUN_00416e20(&local_50,1,1);
          if (local_50 == (short *)0x0) {
            FUN_01c27510(&local_50,&local_48);
          }
        }
        else {
          FUN_01c27510(&local_50,&local_48);
        }
        while ((local_50 != (short *)0x0 && (*local_50 != 0x3b))) {
          FUN_0043e1a0(&local_90,local_50);
          iVar4 = FUN_004170c0(L"params:",local_90,1);
          if (iVar4 != 0) break;
          FUN_0043e1a0(&local_98,local_50);
          iVar4 = FUN_004170c0(L"optional:",local_98,1);
          if (iVar4 != 0) break;
          FUN_0043e1a0(&local_a0,local_50);
          iVar4 = FUN_004170c0(L"text:",local_a0,1);
          if (iVar4 != 0) break;
          (**(code **)(*local_20 + 0x78))(local_20,local_50);
          FUN_01c27510(&local_50,&local_48);
        }
        FUN_0043e1a0(&local_a8,local_50);
        iVar4 = FUN_004170c0(L"params:",local_a8,1);
        if (iVar4 == 0) {
          FUN_0043e1a0(&local_b0,local_50);
          iVar4 = FUN_004170c0(L"optional:",local_b0,1);
          if (iVar4 != 0) goto LAB_01c27c95;
          FUN_0043e1a0(&local_b8,local_50);
          iVar4 = FUN_004170c0(L"text:",local_b8,1);
          if (iVar4 != 0) goto LAB_01c27c95;
          local_59 = '\0';
        }
        else {
LAB_01c27c95:
          local_59 = '\x01';
        }
        local_2c = local_2c + 1;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
        if (local_2c < iVar4) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),&local_48,local_2c);
          FUN_01c27510(&local_c0,&local_48);
          FUN_0043e1a0(&local_50,local_c0);
        }
        else {
          FUN_00414480(&local_50);
        }
      }
      local_30 = local_34 + -1;
      FUN_0043e1a0(&local_58,*(undefined8 *)(local_40 + 4));
      for (; -1 < local_30; local_30 = local_30 + -1) {
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                  (*(longlong **)(param_1 + 8),&local_c8,local_30);
        cVar1 = FUN_01c27780(auStack_148,local_c8);
        if (cVar1 == '\0') break;
      }
      if (local_30 == -1) {
        *local_40 = 0;
        local_30 = local_2c;
      }
      else {
        *local_40 = local_30 + 1;
        local_30 = local_2c;
      }
      do {
        local_30 = local_30 + 1;
        iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
        if (iVar4 <= local_30) break;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                  (*(longlong **)(param_1 + 8),&local_d8,local_30);
        FUN_01c276f0(&local_d0,local_d8);
        iVar4 = FUN_00416db0(local_d0,L".ends");
        if (iVar4 == 0) break;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                  (*(longlong **)(param_1 + 8),&local_e8,local_30);
        FUN_01c276f0(&local_e0,local_e8);
        iVar4 = FUN_00416db0(local_e0,L".end");
      } while (iVar4 != 0);
      iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
      if (local_30 < iVar4) {
        local_40[1] = local_30;
      }
      else {
        local_40[1] = local_30 + -1;
      }
      local_2c = local_30 + 1;
      iVar4 = (**(code **)(*local_20 + 0x28))(local_20);
      FUN_00419260(local_40 + 6,&DAT_01c20ee8,1,(longlong)iVar4);
      iVar4 = (**(code **)(*local_20 + 0x28))();
      local_30 = 0;
      if (-1 < iVar4 + -1) {
        do {
          (**(code **)(*local_20 + 0x18))(local_20,&local_f0,local_30);
          FUN_00414ad0(*(longlong *)(local_40 + 6) + (longlong)local_30 * 0x10,local_f0);
          local_30 = local_30 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),local_40);
    }
    else {
      iVar4 = FUN_00416db0(local_50,L".model");
      if (iVar4 == 0) {
        local_34 = local_2c;
        local_40 = (int *)FUN_00418560(0x20,&DAT_01c20f28);
        (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                  (*(longlong **)(param_1 + 8),&local_48,local_2c);
        FUN_01c27510(&local_f8,&local_48);
        FUN_0043e1a0(&local_50,local_f8);
        FUN_01c27510(&local_100,&local_48);
        FUN_00414ad0(local_40 + 4,local_100);
        FUN_00419430(local_40 + 6,&DAT_01c20ee8);
        local_40[2] = local_2c;
        (**(code **)(*local_20 + 0x90))(local_20);
        local_30 = local_2c;
        do {
          local_30 = local_30 + -1;
          if (local_30 < 0) break;
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),&local_108,local_30);
          cVar1 = FUN_01c27780(auStack_148,local_108);
        } while (cVar1 != '\0');
        *local_40 = local_30 + 1;
        local_2c = local_2c + 1;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
        iVar4 = local_2c;
        if (local_2c < iVar2) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),&local_48,local_2c);
          FUN_01c27510(&local_110,&local_48);
          FUN_0043e1a0(&local_50,local_110);
          while (((iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                                     (*(longlong **)(param_1 + 8)), iVar4 = local_2c,
                  local_2c < iVar2 &&
                  (iVar2 = FUN_00416db0(local_50,L".subckt"), iVar4 = local_2c, iVar2 != 0)) &&
                 (iVar2 = FUN_00416db0(local_50,L".model"), iVar4 = local_2c, iVar2 != 0))) {
            local_2c = local_2c + 1;
            iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
            if (local_2c < iVar4) {
              (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                        (*(longlong **)(param_1 + 8),&local_48,local_2c);
              FUN_01c27510(&local_118,&local_48);
              FUN_0043e1a0(&local_50,local_118);
            }
          }
        }
        do {
          local_30 = iVar4 + -1;
          if (local_30 == local_34) break;
          (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                    (*(longlong **)(param_1 + 8),&local_120,local_30);
          cVar1 = FUN_01c27780(auStack_148,local_120);
          iVar4 = local_30;
        } while (cVar1 != '\0');
        local_40[1] = local_30;
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),local_40);
      }
      else {
        local_2c = local_2c + 1;
      }
    }
    iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    lVar5 = FUN_0040c770(((double)local_2c / (double)iVar4) * 100.0);
    if (0 < lVar5) {
      iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
      uVar3 = FUN_0040c770(((double)local_2c / (double)iVar4) * 100.0);
      FUN_01c28670(param_1,uVar3);
    }
  } while( true );
}

