/* Ghidra address: 01c012e0 */
/* Ghidra symbol: FUN_01c012e0 */


int FUN_01c012e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = *param_2;
  iVar3 = 1;
  if (1 < *(int *)(*(longlong *)(param_1 + 0x90) + 0x500)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2b8))(*(longlong **)(param_1 + 0x90));
    iVar3 = 1;
    while( true ) {
      uStack_1c = (int)((ulonglong)uVar1 >> 0x20);
      if (uStack_1c <= (iVar2 / *(int *)(*(longlong *)(param_1 + 0x90) + 0x500)) * iVar3) break;
      iVar3 = iVar3 + 1;
    }
  }
  if (1 < *(int *)(*(longlong *)(param_1 + 0x90) + 0x4fc)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x2c0))(*(longlong **)(param_1 + 0x90));
    for (iVar3 = 1; local_20 = (int)uVar1,
        (iVar2 / *(int *)(*(longlong *)(param_1 + 0x90) + 0x4fc)) * iVar3 < local_20;
        iVar3 = iVar3 + 1) {
    }
  }
  return iVar3;
}

