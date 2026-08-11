/* Ghidra address: 01086cb0 */
/* Ghidra symbol: FUN_01086cb0 */


void FUN_01086cb0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c [3];
  
  local_50 = 0;
  local_48 = 0;
  uVar3 = _Debug_GetMainEntryPoint(*(undefined8 *)(param_1 + 0xb28),param_1 + 0xbfc);
  *(undefined4 *)(param_1 + 0xbf8) = uVar3;
  lVar1 = *(longlong *)(param_1 + 0xac8);
  iVar7 = *(int *)(*(longlong *)(lVar1 + 0x18) + 0x10);
  local_58 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x18),local_58);
      FUN_010af810(lVar4,&local_48);
      FUN_00441920(&local_50,local_48);
      FUN_00414b50(&local_48,local_50);
      iVar8 = *(int *)(*(longlong *)(lVar4 + 0x40) + 0x10);
      local_54 = 0;
      if (-1 < iVar8 + -1) {
        do {
          lVar5 = FUN_004aeac0(*(undefined8 *)(lVar4 + 0x40),local_54);
          cVar2 = FUN_010ae5f0(lVar5);
          if (cVar2 != '\0') {
            uVar6 = FUN_00442620(param_1 + 0xc08,local_48);
            cVar2 = _Debug_PossibleBreakpoint
                              (*(undefined8 *)(param_1 + 0xb28),uVar6,*(undefined4 *)(lVar5 + 8),
                               local_3c);
            if (cVar2 != '\0') {
              *(undefined4 *)(lVar5 + 0xc) = local_3c[0];
              _MCU_ToggleBreakPoint(*(undefined8 *)(param_1 + 0xb20),local_3c[0]);
            }
          }
          local_54 = local_54 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      local_58 = local_58 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_50,2);
  return;
}

