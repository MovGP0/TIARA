/* Ghidra address: 00b18520 */
/* Ghidra symbol: FUN_00b18520 */


void FUN_00b18520(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_28;
  int local_1c [3];
  
  local_28 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))(*(longlong **)(param_1 + 0x18));
    FUN_00b17e20(*(undefined8 *)(param_1 + 0x10));
    iVar3 = 0;
    FUN_00415d10(&local_28,100000,0);
    do {
      uVar2 = FUN_00414df0(&local_28);
      uVar1 = 0;
      if (local_28 != 0) {
        uVar1 = *(undefined4 *)(local_28 + -4);
      }
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                (*(longlong **)(param_1 + 0x18),(longlong)iVar3,uVar2,uVar1,local_1c);
      if (0 < local_1c[0]) {
        uVar2 = FUN_00414df0(&local_28);
        FUN_004b89e0(param_2,uVar2,(longlong)local_1c[0]);
      }
      iVar3 = iVar3 + local_1c[0];
    } while (0 < local_1c[0]);
    FUN_004144d0(&local_28);
  }
  FUN_004144d0(&local_28);
  return;
}

