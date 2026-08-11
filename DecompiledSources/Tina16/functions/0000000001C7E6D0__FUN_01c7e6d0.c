/* Ghidra address: 01c7e6d0 */
/* Ghidra symbol: FUN_01c7e6d0 */


undefined1 FUN_01c7e6d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_68;
  longlong local_60;
  longlong local_50;
  undefined2 local_42;
  int local_40;
  undefined8 local_38;
  undefined1 local_29;
  undefined8 local_28;
  longlong local_20;
  
  local_80 = auStack_b8;
  local_90 = 0;
  local_88 = 0;
  local_38 = 0;
  local_29 = 1;
  if (*PTR_DAT_020023b0 == '\0') {
    FUN_01d42ec0(L"TSchematicEditor.CanDestroy");
    local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_20 = FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
    if (local_20 != 0) {
      local_50 = local_20;
      cVar1 = FUN_01d0fb00(local_20 + 0x40,PTR_DAT_02004010);
      if (cVar1 == '\0') {
        FUN_0199e310(*(undefined8 *)(local_50 + 0x10),0,1,1);
      }
      FUN_00417c40(local_50 + 0x40,PTR_DAT_02004010,&DAT_01d0d0b8);
      FUN_00417c40(param_1 + 0x1b80,PTR_DAT_02004010,&DAT_01d0d0b8);
    }
    if (*(longlong *)(param_1 + 0x2780) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x2780) + 0x10);
      local_40 = 0;
      if (-1 < iVar2 + -1) {
        do {
          local_60 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),local_40);
          iVar3 = FUN_004aeba0(local_28,*(undefined8 *)(local_60 + 0x10));
          if (iVar3 == -1) {
            FUN_004ae7e0(local_28,*(undefined8 *)(local_60 + 0x10));
            cVar1 = FUN_01c8cf20(param_1,*(undefined8 *)(local_60 + 0x10));
            if (cVar1 != '\0') {
              uVar4 = FUN_00b89270();
              FUN_0041ddd0(&local_90,&PTR_PTR_01c66070);
              FUN_00b8e650(uVar4,&local_38,L"Sched_c.sDemoExit",local_90);
              local_42 = 9;
              iVar3 = FUN_0072d440(local_38,3,9,0);
              if (iVar3 == 2) {
                local_29 = 0;
                break;
              }
              if (iVar3 == 6) {
                local_68 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x2780),local_40);
                FUN_00417c40(PTR_DAT_02004010,local_68 + 0x40,&DAT_01d0d0b8);
                local_29 = 1;
              }
            }
          }
          local_40 = local_40 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    local_20 = FUN_01c8a3c0(param_1,*(undefined8 *)(param_1 + 0x2788));
    if (local_20 != 0) {
      FUN_00417c40(PTR_DAT_02004010,param_1 + 0x1b80,&DAT_01d0d0b8);
    }
    FUN_00410f20(local_28);
  }
  else {
    local_80 = auStack_b8;
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_88,0x5a0);
    iVar2 = FUN_0072d440(local_88,3,0xb,0);
    local_29 = iVar2 == 6;
    if ((bool)local_29) {
      FUN_01b1d2f0();
      FUN_01c79370(param_1,1);
    }
  }
  FUN_00414560(&local_90,2);
  FUN_00414480(&local_38);
  return local_29;
}

