/* Ghidra address: 0198cd90 */
/* Ghidra symbol: FUN_0198cd90 */


void FUN_0198cd90(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined8 local_80;
  longlong local_70;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  char local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  undefined1 local_3a;
  undefined1 local_39;
  char local_2a;
  undefined1 local_29;
  
  local_90 = auStack_b8;
  local_48 = 0;
  local_60 = 0;
  puVar1 = auStack_b8;
  if (param_2 != 0) {
    local_29 = (param_3 & 1) != 0;
    local_4b = (param_3 & 0x4000) != 0;
    local_2a = (param_3 & 0x400) != 0;
    local_39 = (param_3 & 0x200) != 0;
    local_4c = (param_3 & 0x1000) != 0;
    local_4d = (param_3 & 0x2000) != 0;
    local_4e = (param_3 & 0x100) != 0;
    local_4a = (param_3 & 0x10) != 0;
    local_49 = (param_3 & 0x20) != 0;
    local_3a = (param_3 & 0x40) != 0;
    FUN_00414480(&local_60);
    local_80 = FUN_00448ed0();
    FUN_0044a3a0(&local_60,L"yyyymmddhhnnss",local_80,PTR_DAT_02004830);
    FUN_00414b50(&local_48,local_60);
    FUN_00414480(&local_60);
    local_58 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    if (local_4e != '\0') {
      (**(code **)(*local_58 + 0x78))(local_58,L"NewCircuit()");
    }
    if ((param_3 & 0x8000) != 0) {
      plVar2 = (longlong *)FUN_0198d430(param_2);
      uVar3 = FUN_0198d430(param_1);
      (**(code **)(*plVar2 + 8))(plVar2,uVar3);
    }
    if ((param_3 & 3) != 0) {
      iVar5 = *(int *)(param_2 + 0x10);
      local_64 = 0;
      local_70 = param_2;
      if (-1 < iVar5 + -1) {
        do {
          uVar3 = FUN_00b94e60(local_70,local_64);
          FUN_0198c5b0(auStack_b8,uVar3);
          local_64 = local_64 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
    iVar5 = (**(code **)(*local_58 + 0x28))(local_58);
    if (0 < iVar5) {
      FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,local_58,0,1);
    }
    FUN_00410f20(local_58);
    if (local_2a != '\0') {
      FUN_00b95360(param_2);
    }
    puVar1 = local_90;
    if ((param_3 & 0x800) != 0) {
      puVar6 = (undefined8 *)(param_2 + 0x28);
      puVar7 = (undefined8 *)(param_1 + 0x28);
      for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
      *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(param_2 + 0xa4);
      *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_2 + 0xac);
      *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(param_2 + 0xb4);
      *(undefined8 *)(param_1 + 0xbc) = *(undefined8 *)(param_2 + 0xbc);
      *(undefined2 *)(param_1 + 0xe0) = *(undefined2 *)(param_2 + 0xe0);
      *(undefined2 *)(param_1 + 0xe2) = *(undefined2 *)(param_2 + 0xe2);
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
      FUN_00415020(param_1 + 0x242,param_2 + 0x242,0x50);
      *(undefined2 *)(param_1 + 0x368) = *(undefined2 *)(param_2 + 0x368);
      *(undefined2 *)(param_1 + 0x36a) = *(undefined2 *)(param_2 + 0x36a);
      FUN_00414ad0(param_1 + 0x360,*(undefined8 *)(param_2 + 0x360));
      FUN_00415020(param_1 + 0x293,param_2 + 0x293,200);
      *(undefined1 *)(param_1 + 0x36c) = *(undefined1 *)(param_2 + 0x36c);
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x370);
      *(undefined1 *)(param_1 + 0x241) = *(undefined1 *)(param_2 + 0x241);
      *(undefined1 *)(param_1 + 0x240) = *(undefined1 *)(param_2 + 0x240);
      *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_2 + 0x374);
      *(undefined4 *)(param_1 + 0x378) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x37c) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x380) = 0;
      *(undefined4 *)(param_1 + 900) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x388) = 0;
      *(undefined4 *)(param_1 + 0x38c) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x390) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x394) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x398) = 0;
      *(undefined1 *)(param_1 + 0x3a8) = *(undefined1 *)(param_2 + 0x3a8);
      puVar1 = local_90;
    }
  }
  local_90 = puVar1;
  FUN_00414480(&local_60);
  FUN_00414480(&local_48);
  return;
}

