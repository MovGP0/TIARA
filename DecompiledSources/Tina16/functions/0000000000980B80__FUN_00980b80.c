/* Ghidra address: 00980b80 */
/* Ghidra symbol: FUN_00980b80 */


void FUN_00980b80(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_b8;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = param_1[0x12];
  param_1[0x12] = (longlong)param_2;
  bVar1 = (**(code **)(*param_2 + 0x168))(param_2);
  if (bVar1 < 7) {
    if (bVar1 == 6) {
      (**(code **)(*param_2 + 0xe8))(param_2,&local_50);
      (**(code **)(*param_2 + 0x160))(param_2,&local_58);
      (**(code **)(*param_1 + 0x110))(param_1,local_50,local_58);
      goto code_r0x00980f90;
    }
    if (bVar1 == 1) {
      uVar6 = FUN_004113f0(param_2,&PTR_FUN_0090a420);
      FUN_00980920(auStack_b8,uVar6);
      goto code_r0x00980f90;
    }
    if (bVar1 == 3) {
      (**(code **)(*param_2 + 0x160))(param_2,&local_38);
      lVar3 = FUN_004113f0(param_2,&PTR_FUN_0090b468);
      (**(code **)(*param_1 + 0x108))(param_1,local_38,*(undefined1 *)(lVar3 + 0x80));
      goto code_r0x00980f90;
    }
    if (bVar1 == 4) {
      (**(code **)(*param_2 + 0x160))(param_2,&local_40);
      (**(code **)(*param_1 + 0xd0))(param_1,local_40);
      goto code_r0x00980f90;
    }
    if (bVar1 == 5) {
      (**(code **)(*param_2 + 0xe8))(param_2,&local_48);
      (**(code **)(*param_1 + 0xf8))(param_1,local_48);
      goto code_r0x00980f90;
    }
  }
  else {
    if (bVar1 == 7) {
      (**(code **)(*param_2 + 0x160))(param_2,&local_60);
      (**(code **)(*param_1 + 0xd8))(param_1,local_60);
      goto code_r0x00980f90;
    }
    if (bVar1 == 8) {
      puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
      iVar2 = (**(code **)*puVar4)();
      local_24 = 0;
      if (-1 < iVar2 + -1) {
        do {
          plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
          uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,local_24);
          (**(code **)(*param_1 + 0xb8))(param_1,uVar6);
          local_24 = local_24 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      goto code_r0x00980f90;
    }
    if (bVar1 == 10) {
      (**(code **)(*param_2 + 0xe8))(param_2,&local_68);
      plVar5 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_0090c850);
      (**(code **)(*plVar5 + 0x2c8))(plVar5,&local_70);
      plVar5 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_0090c850);
      (**(code **)(*plVar5 + 0x2d0))(plVar5,&local_78);
      plVar5 = (longlong *)FUN_004113f0(param_2,&PTR_FUN_0090c850);
      (**(code **)(*plVar5 + 0x2b8))(plVar5,&local_80);
      local_98 = local_80;
      (**(code **)(*param_1 + 0xe0))(param_1,local_68,local_70,local_78);
      goto code_r0x00980f90;
    }
  }
  uVar6 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser error.");
  FUN_004134c0(uVar6);
code_r0x00980f90:
  param_1[0x12] = local_20;
  FUN_004145c0(&local_80,10);
  return;
}

