/* Ghidra address: 00b183f0 */
/* Ghidra symbol: FUN_00b183f0 */


void FUN_00b183f0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_28;
  undefined1 local_1c [4];
  
  local_28 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar4 = 0;
    FUN_004b6dc0(param_2,0);
    FUN_00415d10(&local_28,100000,0);
    do {
      uVar3 = FUN_00414df0(&local_28);
      uVar1 = 0;
      if (local_28 != 0) {
        uVar1 = *(undefined4 *)(local_28 + -4);
      }
      iVar2 = (**(code **)(*param_2 + 0x18))(param_2,uVar3,uVar1);
      if (0 < iVar2) {
        uVar3 = FUN_00414df0(&local_28);
        uVar1 = 0;
        if (local_28 != 0) {
          uVar1 = *(undefined4 *)(local_28 + -4);
        }
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                  (*(longlong **)(param_1 + 0x18),(longlong)iVar4,uVar3,uVar1,local_1c);
      }
      iVar4 = iVar4 + iVar2;
    } while (0 < iVar2);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
    FUN_004144d0(&local_28);
  }
  FUN_004144d0(&local_28);
  return;
}

