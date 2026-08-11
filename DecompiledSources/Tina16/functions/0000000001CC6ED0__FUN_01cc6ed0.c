/* Ghidra address: 01cc6ed0 */
/* Ghidra symbol: FUN_01cc6ed0 */


void FUN_01cc6ed0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
  if (-1 < iVar1) {
    (**(code **)(*param_3 + 0x10))(param_3);
    while (lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),iVar1), *(int *)(lVar2 + 0x154) != 0) {
      iVar1 = iVar1 + -1;
    }
    uVar3 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),iVar1);
    FUN_004ae7e0(param_3,uVar3);
    while( true ) {
      iVar1 = iVar1 + 1;
      if (*(int *)(*(longlong *)(param_1 + 8) + 0x10) <= iVar1) break;
      lVar2 = FUN_01d347d0(*(longlong *)(param_1 + 8),iVar1);
      if (*(int *)(lVar2 + 0x154) == 0) {
        return;
      }
      uVar3 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),iVar1);
      FUN_004ae7e0(param_3,uVar3);
    }
  }
  return;
}

