/* Ghidra address: 01718360 */
/* Ghidra symbol: FUN_01718360 */


void FUN_01718360(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined8 in_stack_ffffffffffffff00;
  int local_e4;
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  iVar2 = (**(code **)(*param_2 + 0x28))();
  local_e4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004169a0(local_40,param_1 + 0x20);
      (**(code **)(*param_2 + 0x18))(param_2,&local_48,local_e4);
      cVar1 = FUN_01718230(param_1,local_40[0],local_48);
      if (cVar1 != '\0') {
        lVar6 = (**(code **)(*param_2 + 0x30))(param_2,local_e4);
        iVar3 = FUN_00415a60(*(undefined8 *)(lVar6 + 0x20),"[Internal]");
        uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
        if (iVar3 != 0) {
          puVar7 = (undefined4 *)FUN_00418560(0x20,&DAT_0170bbf8);
          *(undefined1 *)(puVar7 + 1) = 0;
          *(undefined1 *)((longlong)puVar7 + 5) = 0xff;
          *(undefined2 *)((longlong)puVar7 + 6) = 0;
          *(undefined1 *)(puVar7 + 2) = 0;
          *(undefined1 *)((longlong)puVar7 + 9) = 0;
          *(undefined1 *)((longlong)puVar7 + 10) = 0;
          lVar6 = (**(code **)(*param_2 + 0x30))(param_2,local_e4);
          if (param_3 == '\0') {
            *puVar7 = 0x39;
            FUN_00414b50(&local_30,L"|Spice Macro");
            (**(code **)(*param_2 + 0x18))(param_2,&local_58,local_e4);
            FUN_00416880(&local_60,*(undefined8 *)(lVar6 + 0x20));
            in_stack_ffffffffffffff00 = 0;
            FUN_017179d0(param_1,&local_50,local_58,local_60,*(undefined8 *)(lVar6 + 0x40),
                         &PTR_FUN_01706cf8);
            FUN_00414ad0(puVar7 + 4,local_50);
          }
          else if (param_3 == '\x01') {
            FUN_00416880(&local_68,*(undefined8 *)(lVar6 + 0x20));
            uVar4 = FUN_017159b0(local_68);
            *puVar7 = uVar4;
            *(undefined1 *)(puVar7 + 2) = 1;
            FUN_00414b50(&local_30,L"|Spice Model");
            (**(code **)(*param_2 + 0x18))(param_2,&local_78,local_e4);
            FUN_00416880(&local_80,*(undefined8 *)(lVar6 + 0x20));
            in_stack_ffffffffffffff00 = CONCAT44(uVar5,*puVar7);
            FUN_01717ce0(param_1,&local_70,local_78,local_80,*(undefined8 *)(lVar6 + 0x40),
                         in_stack_ffffffffffffff00);
            FUN_00414ad0(puVar7 + 4,local_70);
          }
          else if (param_3 == '\x02') {
            FUN_00416880(&local_88,*(undefined8 *)(lVar6 + 0x20));
            uVar5 = FUN_01715d20(local_88);
            *puVar7 = uVar5;
            FUN_00414b50(&local_30,L"|RF 2 port");
            (**(code **)(*param_2 + 0x18))(param_2,&local_98,local_e4);
            FUN_00416880(&local_a0,*(undefined8 *)(lVar6 + 0x20));
            in_stack_ffffffffffffff00 = 0;
            FUN_017179d0(param_1,&local_90,local_98,local_a0,*(undefined8 *)(lVar6 + 0x40),
                         &PTR_FUN_01707300);
            FUN_00414ad0(puVar7 + 4,local_90);
          }
          else if (param_3 == '\x03') {
            FUN_00416880(&local_a8,*(undefined8 *)(lVar6 + 0x20));
            uVar5 = FUN_01715fb0(local_a8);
            *puVar7 = uVar5;
            FUN_00414b50(&local_30,L"|RF 1 port");
            (**(code **)(*param_2 + 0x18))(param_2,&local_b8,local_e4);
            FUN_00416880(&local_c0,*(undefined8 *)(lVar6 + 0x20));
            in_stack_ffffffffffffff00 = 0;
            FUN_017179d0(param_1,&local_b0,local_b8,local_c0,*(undefined8 *)(lVar6 + 0x40),
                         &PTR_FUN_01707668);
            FUN_00414ad0(puVar7 + 4,local_b0);
          }
          else {
            *puVar7 = 0x39;
            FUN_00414b50(&local_30,L"|VHDL Macro");
            (**(code **)(*param_2 + 0x18))(param_2,&local_d0,local_e4);
            FUN_00416880(&local_d8,*(undefined8 *)(lVar6 + 0x20));
            in_stack_ffffffffffffff00 = 0;
            FUN_017179d0(param_1,&local_c8,local_d0,local_d8,*(undefined8 *)(lVar6 + 0x40),
                         &PTR_FUN_017079d0);
            FUN_00414ad0(puVar7 + 4,local_c8);
            *(undefined1 *)((longlong)puVar7 + 9) = 1;
          }
          *(longlong *)(puVar7 + 6) = lVar6;
          (**(code **)(*param_2 + 0x18))(param_2,&local_e0,local_e4);
          FUN_00416ad0(&local_e0,local_30);
          (**(code **)(**(longlong **)(param_1 + 0x260) + 0x80))
                    (*(longlong **)(param_1 + 0x260),local_e0,puVar7);
        }
      }
      local_e4 = local_e4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_e0,0x15);
  FUN_00414480(&local_30);
  return;
}

