/* Ghidra address: 00c479d0 */
/* Ghidra symbol: FUN_00c479d0 */


void FUN_00c479d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_1c;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    uVar2 = FUN_00414df0(&DAT_01ea40d8);
    uVar1 = 0;
    if (DAT_01ea40d8 != 0) {
      uVar1 = *(undefined4 *)(DAT_01ea40d8 + -4);
    }
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
              (*(longlong **)(param_1 + 0x48),uVar2,uVar1);
    uVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    local_1c = 0;
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
              (*(longlong **)(param_1 + 0x48),&local_1c,4);
  }
  return;
}

