/* Ghidra address: 00983be0 */
/* Ghidra symbol: FUN_00983be0 */


undefined8 FUN_00983be0(longlong *param_1,longlong *param_2,longlong *param_3,byte param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  puVar1 = auStack_78;
  if (param_2 == (longlong *)0x0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Input source not specified.");
    FUN_004134c0(uVar3);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  if (param_1[0xf] == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004361b8,1,L"DOM implementation not specified.");
    FUN_004134c0(uVar3);
  }
  if (param_3 == (longlong *)0x0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Context node not specified.");
    FUN_004134c0(uVar3);
  }
  if ((char)param_2[0x24] != '\x03') {
    cVar2 = FUN_004113d0(param_3,&PTR_FUN_0090eed0);
    if ((cVar2 == '\0') || (param_4 != 3)) {
      (**(code **)(*param_1 + 0xa8))(param_1,0x4d);
      uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"XML declaration not allowed here.");
      FUN_004134c0(uVar3);
    }
  }
  uVar3 = (**(code **)(*param_3 + 0x118))(param_3);
  local_20 = (longlong *)FUN_00953db0(&PTR_FUN_0090d520,1,uVar3);
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,local_20);
  local_28 = (**(code **)(*local_20 + 0x128))(local_20);
  if (param_4 < 3) {
    if (param_4 == 2) {
      local_40 = (longlong *)(**(code **)(*param_3 + 0x170))(param_3);
      cVar2 = FUN_004113d0(local_40,&PTR_FUN_0090a420);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(local_40,&PTR_FUN_0090d520);
        if (cVar2 == '\0') {
          uVar3 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
          FUN_004134c0(uVar3);
        }
      }
      (**(code **)(*local_40 + 0x280))(local_40,local_20,param_3);
    }
    else if (param_4 == 0) {
      (**(code **)(*param_3 + 0x1b0))(param_3,local_20);
    }
    else if (param_4 == 1) {
      local_40 = (longlong *)(**(code **)(*param_3 + 0x170))(param_3);
      cVar2 = FUN_004113d0(local_40,&PTR_FUN_0090a420);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(local_40,&PTR_FUN_0090d520);
        if (cVar2 == '\0') {
          uVar3 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
          FUN_004134c0(uVar3);
        }
      }
      local_48 = (**(code **)(*param_3 + 0x158))(param_3);
      if (local_48 == 0) {
        (**(code **)(*local_40 + 0x1b0))(local_40,local_20);
      }
      else {
        (**(code **)(*local_40 + 0x280))(local_40,local_20,local_48);
      }
    }
  }
  else if (param_4 == 3) {
    local_40 = (longlong *)(**(code **)(*param_3 + 0x170))(param_3);
    cVar2 = FUN_004113d0(local_40,&PTR_FUN_0090a420);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(local_40,&PTR_FUN_0090d520);
      if (cVar2 == '\0') {
        uVar3 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
        FUN_004134c0(uVar3);
      }
    }
    (**(code **)(*local_40 + 0x2a8))(local_40,local_20,param_3);
    lVar4 = (**(code **)(*param_3 + 0x170))(param_3);
    if (lVar4 == 0) {
      FUN_00410f20(param_3);
    }
  }
  else if (param_4 == 4) {
    cVar2 = FUN_004113d0(param_3,&PTR_FUN_0090a420);
    if ((cVar2 == '\0') && (cVar2 = FUN_004113d0(param_3,&PTR_FUN_0090d520), cVar2 == '\0')) {
      cVar2 = FUN_004113d0(param_3,&PTR_FUN_0090eed0);
      if (cVar2 == '\0') {
        uVar3 = FUN_0044d490(&PTR_FUN_00900d18,1,L"Hierarchy request error.");
        FUN_004134c0(uVar3);
      }
    }
    local_30 = (longlong *)(**(code **)(*param_3 + 0x138))(param_3);
    while (local_30 != (longlong *)0x0) {
      local_38 = (longlong *)(**(code **)(*local_30 + 0x178))(local_30);
      (**(code **)(*param_3 + 0x2a0))(param_3,local_30);
      FUN_00410f20(local_30);
      local_30 = local_38;
    }
    (**(code **)(*param_3 + 0x1b0))(param_3,local_20);
    cVar2 = FUN_004113d0(param_3,&PTR_FUN_0090eed0);
    if (cVar2 != '\0') {
      lVar4 = FUN_004113f0(param_3,&PTR_FUN_0090eed0);
      FUN_00414b90(lVar4 + 0x98,param_2[0x22]);
      lVar4 = FUN_004113f0(param_3,&PTR_FUN_0090eed0);
      (**(code **)(*param_2 + 0x40))(param_2,&local_58);
      FUN_004168e0(lVar4 + 0xa8,local_58);
      lVar4 = FUN_004113f0(param_3,&PTR_FUN_0090eed0);
      FUN_004168e0(lVar4 + 0xd0,param_2[0x27]);
      lVar4 = FUN_004113f0(param_3,&PTR_FUN_0090eed0);
      FUN_004168e0(lVar4 + 0xc0,param_2[0x25]);
      lVar4 = FUN_004113f0(param_3,&PTR_FUN_0090eed0);
      *(char *)(lVar4 + 200) = (char)param_2[0x26];
    }
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_58);
  return local_28;
}

