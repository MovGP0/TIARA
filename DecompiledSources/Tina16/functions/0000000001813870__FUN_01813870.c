/* Ghidra address: 01813870 */
/* Ghidra symbol: FUN_01813870 */


void FUN_01813870(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [48];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  char local_29;
  longlong *local_28;
  int local_1c;
  
  local_40 = auStack_88;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  iVar2 = FUN_0043e420(*(undefined8 *)(param_2 + 0x20),L"FrxCustomData");
  if (iVar2 == 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x58) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x70) + 0x58))
                (*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x60),param_2);
    }
  }
  else {
    FUN_004a0d20(&PTR_FUN_0063d930);
    iVar2 = FUN_0043e420(*(undefined8 *)(param_2 + 0x20),L"inherited");
    local_29 = iVar2 == 0;
    if (!(bool)local_29) {
      FUN_004a0a10(*(undefined8 *)(param_2 + 0x20));
    }
    if (param_3 == 0) {
      local_28 = *(longlong **)(param_1 + 0x78);
    }
    else {
      if (*(char *)(*(longlong *)(param_1 + 0x70) + 0x7a) == '\0') {
        FUN_01803cc0(param_2,&local_58,L"Name");
        uVar4 = FUN_004d3a80(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18),local_58);
        local_28 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_01918c28);
      }
      else {
        local_28 = (longlong *)0x0;
      }
      if ((local_29 == '\0') && (local_28 == (longlong *)0x0)) {
        lVar3 = FUN_004a0a10(*(undefined8 *)(param_2 + 0x20));
        local_28 = (longlong *)(**(code **)(lVar3 + -0x30))(lVar3);
        (**(code **)(*local_28 + 0x78))(local_28,0xff,param_3);
      }
      else if ((local_29 != '\0') && (local_28 != (longlong *)0x0)) {
        *(longlong *)(param_1 + 0x48) = local_28[0x1e];
        (**(code **)(*local_28 + 0xc0))(local_28,0);
        (**(code **)(*local_28 + 0xc0))(local_28,*(undefined8 *)(param_1 + 0x48));
      }
    }
    if (local_28 != (longlong *)0x0) {
      *(undefined1 *)(local_28 + 0x18) = 1;
      FUN_018113d0(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_2 + 0x30),local_28);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x40),local_28);
      iVar2 = FUN_01803a10();
      local_1c = 0;
      if (-1 < iVar2 + -1) {
        do {
          if ((*(char *)(*(longlong *)(param_1 + 0x70) + 0x78) == '\0') ||
             ((*(byte *)(local_28 + 0x1a) & 8) == 0)) {
LAB_01813b78:
            uVar4 = FUN_018039f0(param_2,local_1c);
            FUN_01813870(param_1,uVar4,local_28);
          }
          else {
            uVar4 = FUN_018039f0(param_2,local_1c);
            cVar1 = (**(code **)(*local_28 + 0x1f8))(local_28,uVar4);
            if (cVar1 == '\0') goto LAB_01813b78;
          }
          local_1c = local_1c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  FUN_00414560(&local_58,3);
  return;
}

