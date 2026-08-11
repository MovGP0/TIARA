/* Ghidra address: 00f8ac70 */
/* Ghidra symbol: FUN_00f8ac70 */


void FUN_00f8ac70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  lVar2 = FUN_00f8b910(param_1,*(undefined4 *)(param_1 + 0x345c));
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1c) == 0x800)) {
    (**(code **)(**(longlong **)(param_1 + 0x3538) + 0x90))(*(longlong **)(param_1 + 0x3538));
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x3540) + 0x28))();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x3540) + 0x18))
                  (*(longlong **)(param_1 + 0x3540),&local_48,iVar5);
        uVar3 = FUN_00442620(param_1 + 0x1be0,*(undefined8 *)(lVar2 + 0x40));
        FUN_00415dd0(&local_50,local_48,0);
        uVar4 = FUN_004425e0(param_1 + 0x17e0,local_50);
        uVar3 = _Dbg_XMC_GetPeriphValues(*(undefined8 *)(param_1 + 0x60),uVar3,uVar4);
        FUN_004167d0(&local_40,uVar3);
        (**(code **)(**(longlong **)(param_1 + 0x3538) + 0x78))
                  (*(longlong **)(param_1 + 0x3538),local_40);
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_004144d0(&local_50);
  FUN_00414560(&local_48,4);
  return;
}

