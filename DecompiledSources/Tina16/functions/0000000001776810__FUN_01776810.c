/* Ghidra address: 01776810 */
/* Ghidra symbol: FUN_01776810 */


void FUN_01776810(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x170) + 0x10)) {
    lVar2 = FUN_004aeac0(*(longlong *)(param_1 + 0x170),0);
    iVar1 = (**(code **)(**(longlong **)(lVar2 + 8) + 0x28))(*(longlong **)(lVar2 + 8));
    if (2 < iVar1) {
      FUN_013a5e90(*(undefined8 *)(lVar2 + 8),param_2);
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

