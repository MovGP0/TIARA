/* Ghidra address: 01980960 */
/* Ghidra symbol: FUN_01980960 */


void FUN_01980960(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *local_20;
  
  local_20 = (longlong *)0x0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar3);
      FUN_0041b840(&local_20,uVar2);
      (**(code **)(*local_20 + 0x10))(local_20);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
  FUN_0041b800(&local_20);
  return;
}

