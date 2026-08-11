/* Ghidra address: 00bff3e0 */
/* Ghidra symbol: FUN_00bff3e0 */


void FUN_00bff3e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_1 + 0x538) != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    if (0 < iVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x538) + 0x168))(*(longlong **)(param_1 + 0x538));
      iVar1 = 0;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                  (*(longlong **)(param_1 + 0x4e8),&local_20,iVar1);
        (**(code **)(**(longlong **)(param_1 + 0x538) + 0x158))
                  (*(longlong **)(param_1 + 0x538),local_20,iVar1);
        FUN_00bc2280(*(undefined8 *)(param_1 + 0x538));
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x538) + 0x118))
                          (*(longlong **)(param_1 + 0x538));
        FUN_00bd05d0(*(undefined8 *)(param_1 + 0x4e8),iVar1,uVar3);
        iVar1 = iVar1 + 1;
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                          (*(longlong **)(param_1 + 0x4e8));
      } while (iVar1 < iVar2);
    }
  }
  FUN_00414480(&local_20);
  return;
}

