/* Ghidra address: 0108cb20 */
/* Ghidra symbol: FUN_0108cb20 */


void FUN_0108cb20(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_58 = 0;
  local_50[0] = 0;
  local_38 = 0;
  local_40 = 0;
  FUN_0108cdc0(param_1,&local_38);
  iVar5 = 0;
  if (*(longlong *)(param_1 + 0xb10) != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0xb10) + -4);
  }
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9e8) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_50,iVar4 + -1);
      FUN_00415dd0(param_1 + 0xae8,local_50[0],0);
      uVar2 = FUN_00442620(param_1 + 0xc08,*(undefined8 *)(param_1 + 0xb38));
      uVar3 = FUN_004425e0(param_1 + 0x2c10,*(undefined8 *)(param_1 + 0xae8));
      uVar2 = _Dbg_XMC_GetPeriphValues(*(undefined8 *)(param_1 + 0xb20),uVar2,uVar3);
      FUN_004167d0(&local_40,uVar2);
      local_30 = FUN_01b21190(local_40,0x2c,0);
      if ((*(short *)(local_38 + -2 + (longlong)iVar4 * 2) == 0x31) &&
         (*(short *)(*(longlong *)(param_1 + 0xb10) + -2 + (longlong)iVar4 * 2) == 0x30)) {
        FUN_0108c7f0(auStack_78);
      }
      else if ((*(short *)(local_38 + -2 + (longlong)iVar4 * 2) == 0x30) &&
              (*(short *)(*(longlong *)(param_1 + 0xb10) + -2 + (longlong)iVar4 * 2) == 0x31)) {
        FUN_0108ca70(auStack_78);
      }
      else if ((*(short *)(local_38 + -2 + (longlong)iVar4 * 2) == 0x31) &&
              (*(short *)(*(longlong *)(param_1 + 0xb10) + -2 + (longlong)iVar4 * 2) == 0x31)) {
        if (*(char *)(param_1 + 0xb56) == '\0') {
          FUN_0108c960(auStack_78);
        }
        else {
          FUN_0108c7f0(auStack_78);
        }
      }
      FUN_00410f20(local_30);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined1 *)(param_1 + 0xb56) = 0;
  FUN_00801e40(param_1,*(undefined8 *)(param_1 + 0x9f8));
  FUN_0108cdc0(param_1,&local_58);
  FUN_00414ad0(param_1 + 0xb10,local_58);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_40,2);
  return;
}

