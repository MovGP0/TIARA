/* Ghidra address: 01293950 */
/* Ghidra symbol: FUN_01293950 */


void FUN_01293950(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_res10 [3];
  undefined1 auStack_228 [40];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [256];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined1 *local_90;
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_90 = auStack_228;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar1 = FUN_00440a20(local_res10[0],1);
  if (cVar1 != '\0') {
    FUN_00bac3d0(local_30);
    cVar1 = (**(code **)(*local_30[0] + 0x170))(local_30[0],local_res10[0]);
    if ((cVar1 != '\0') &&
       ((**(code **)(*local_30[0] + 0x100))(local_30[0],&local_98), local_98 != 0)) {
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x470) + 0x10);
      local_74 = 0;
      if (-1 < iVar6 + -1) {
        do {
          lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x470),local_74);
          FUN_00410f20(*(undefined8 *)(lVar3 + 0x11f));
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x470),local_74);
          FUN_004095f0(uVar4);
          local_74 = local_74 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x470) + 0x10))(*(longlong **)(param_1 + 0x470));
      (**(code **)(*local_30[0] + 0x100))(local_30[0],&local_48);
      (**(code **)(*local_48 + 0xe8))(local_48,&local_38,L"parameterlist");
      (**(code **)(*local_38 + 0x68))(local_38);
      (**(code **)(*local_38 + 0x70))(local_38,&local_a0);
      FUN_0041b890(&local_50,local_a0,&DAT_0129423c);
      while (local_50 != (longlong *)0x0) {
        local_68 = FUN_01d0efe0(&DAT_01d0ae90,1);
        (**(code **)(*local_50 + 0xe8))(local_50,&local_40,L"parameter");
        (**(code **)(*local_40 + 0x68))(local_40);
        (**(code **)(*local_40 + 0x70))(local_40,&local_a8);
        FUN_0041b890(&local_58,local_a8,&DAT_0129423c);
        while (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x100))(local_58,&local_b0,L"value");
          local_70 = FUN_00b8f030(local_b0);
          FUN_01d0f0e0(local_68,local_70);
          (**(code **)(*local_40 + 0x70))(local_40,&local_b8);
          FUN_0041b890(&local_58,local_b8,&DAT_0129423c);
        }
        local_60 = (undefined8 *)FUN_004095c0(0x23a);
        *(undefined8 *)((longlong)local_60 + 0x10c) = *(undefined8 *)(PTR_DAT_02001120 + 0x53d);
        *(undefined8 *)((longlong)local_60 + 0x114) = *(undefined8 *)(PTR_DAT_02001120 + 0x545);
        (**(code **)(*local_48 + 0x100))(local_48,&local_c0,L"cases");
        uVar2 = FUN_0043fc50(local_c0,3);
        *(undefined2 *)((longlong)local_60 + 0x11c) = uVar2;
        *(undefined1 *)((longlong)local_60 + 0x11e) = 2;
        *(undefined8 *)((longlong)local_60 + 0x11f) = local_68;
        (**(code **)(*local_50 + 0x100))(local_50,&local_c8,&PTR_DAT_012942a8);
        uVar4 = FUN_019ac500(param_1,local_c8);
        *local_60 = uVar4;
        (**(code **)(*local_50 + 0x100))(local_50,&local_d0,L"attrno");
        cVar1 = FUN_0043fc50(local_d0,0);
        *(char *)(local_60 + 1) = cVar1 + '\x01';
        (**(code **)(*local_50 + 0x100))(local_50,&local_d8,L"subno");
        cVar1 = FUN_0043fc50(local_d8,0);
        *(char *)((longlong)local_60 + 9) = cVar1 + '\x01';
        (**(code **)(*local_50 + 0x100))(local_50,&local_e0,L"unit");
        FUN_00416910(local_1e0,local_e0,0xff);
        FUN_00415020((longlong)local_60 + 0x22f,local_1e0,10);
        *(undefined1 *)((longlong)local_60 + 0xc) = 0;
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x470),local_60);
        (**(code **)(*local_38 + 0x70))(local_38,&local_1e8);
        FUN_0041b890(&local_50,local_1e8,&DAT_0129423c);
      }
      *(undefined1 *)(param_1 + 0x495) = 2;
      (**(code **)(*local_48 + 0x100))(local_48,&local_1f0,L"mode");
      iVar6 = FUN_0043fc50(local_1f0,0);
      if (iVar6 == 0) {
        (**(code **)(*local_48 + 0x100))(local_48,&local_1f8,L"cases");
        iVar6 = FUN_0043fc50(local_1f8,3);
        *(double *)(param_1 + 0x54f) = (double)iVar6;
        *(undefined1 *)(param_1 + 0x557) = 1;
      }
      else {
        (**(code **)(*local_48 + 0x100))(local_48,&local_200,L"cases");
        iVar6 = FUN_0043fc50(local_200,3);
        *(double *)(param_1 + 0x54f) =
             (double)(*(int *)(*(longlong *)(param_1 + 0x470) + 0x10) * iVar6);
        *(undefined1 *)(param_1 + 0x557) = 0;
      }
      local_80 = *(undefined8 *)(param_1 + 0x470);
      puVar5 = (undefined8 *)FUN_004aeac0(local_80,0);
      puVar7 = (undefined8 *)(param_1 + 0x8c3);
      for (lVar3 = 0x24; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined4 *)puVar7 = *(undefined4 *)puVar5;
      *(undefined2 *)((longlong)puVar7 + 4) = *(undefined2 *)((longlong)puVar5 + 4);
      *(undefined1 *)((longlong)puVar7 + 6) = *(undefined1 *)((longlong)puVar5 + 6);
    }
  }
  FUN_00414560(&local_200,3);
  FUN_0041b800(&local_1e8);
  FUN_00414560(&local_e0,5);
  FUN_0041b800(&local_b8);
  FUN_00414480(&local_b0);
  FUN_00417840(&local_a8,&DAT_00b9f8e0,2);
  FUN_0041b800(&local_98);
  FUN_00417840(&local_58,&LAB_00b9fca0,3);
  FUN_00417840(&local_40,&DAT_00b9f960,2);
  FUN_0041b800(local_30);
  FUN_00414480(local_res10);
  return;
}

