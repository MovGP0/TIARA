/* Ghidra address: 0181abf0 */
/* Ghidra symbol: FUN_0181abf0 */


void FUN_0181abf0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_20 = 0;
  local_38 = 0;
  local_58 = param_2;
  local_50 = param_3;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_005d2fd0);
  plVar6 = local_58;
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 800))(param_1,&local_20);
    if (*(char *)((longlong)param_1 + 0x4d6) != '\x01') {
      if (local_50 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar6 + 8))(plVar6,local_20);
        if (cVar1 == '\0') {
          plVar6 = local_50;
        }
      }
      cVar1 = (**(code **)(*plVar6 + 0x30))(plVar6,local_20,L"Maximized",0);
      if (cVar1 == '\0') {
        local_24 = FUN_007fd7d0(param_1);
        local_28 = FUN_007fd800(param_1);
        local_2c = *(uint *)(param_1 + 0x13);
        local_30 = *(int *)((longlong)param_1 + 0x9c);
        if ((*(byte *)(param_1 + 0xd9) & 1) != 0) {
          local_24 = (**(code **)(*plVar6 + 0x20))(plVar6,local_20,L"Left",local_24);
          local_28 = (**(code **)(*plVar6 + 0x20))(plVar6,local_20,&DAT_0181af9c,local_28);
        }
        if ((*(byte *)(param_1 + 0xd9) & 2) != 0) {
          local_2c = (**(code **)(*plVar6 + 0x20))(plVar6,local_20,L"Width",local_2c);
          local_30 = (**(code **)(*plVar6 + 0x20))(plVar6,local_20,L"Height",local_30);
        }
        iVar2 = FUN_0181a900(param_1);
        if (iVar2 != *(int *)(*(longlong *)PTR_DAT_02005950 + 0x98)) {
          uVar3 = FUN_007fd7d0(param_1);
          FUN_0181aba0(auStack_88,&local_24,uVar3);
          uVar3 = FUN_007fd800(param_1);
          FUN_0181aba0(auStack_88,&local_28,uVar3);
        }
        FUN_0181aba0(auStack_88,&local_2c,(int)param_1[0x13]);
        FUN_0181aba0(auStack_88,&local_30,*(undefined4 *)((longlong)param_1 + 0x9c));
        local_68 = CONCAT44(local_68._4_4_,local_28 + local_30);
        FUN_004238d0(local_48,local_24,local_28,local_24 + local_2c);
        cVar1 = FUN_0181aaf0(local_48);
        if (cVar1 != '\0') {
          local_68 = CONCAT44(local_68._4_4_,local_30);
          (**(code **)(*param_1 + 400))(param_1,local_24,local_28,local_2c);
        }
      }
      else {
        FUN_00800700(param_1,2);
      }
    }
    if ((*(byte *)(param_1 + 0xd9) & 8) != 0) {
      local_68 = 0;
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_38,local_20,L"Dock5");
      uVar4 = FUN_0180d1d0(param_1[1],local_38);
      lVar5 = FUN_004113f0(uVar4,&PTR_FUN_00640c18);
      if (lVar5 != 0) {
        FUN_0064f3f0(param_1,lVar5,0,0);
      }
    }
    if ((*(byte *)(param_1 + 0xd9) & 4) != 0) {
      uVar3 = (**(code **)(*plVar6 + 0x30))(plVar6,local_20,L"Visible",1);
      FUN_007fdf50(param_1,uVar3);
    }
  }
  FUN_00414480(&local_38);
  FUN_00414480(&local_20);
  return;
}

