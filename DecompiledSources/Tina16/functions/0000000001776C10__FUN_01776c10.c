/* Ghidra address: 01776c10 */
/* Ghidra symbol: FUN_01776c10 */


void FUN_01776c10(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_50 = auStack_78;
  local_30 = 0;
  local_38 = 0;
  *param_2 = 0;
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  if (0 < *(int *)(*(longlong *)(param_1 + 0x170) + 0x10)) {
    local_28 = FUN_004aeac0(*(longlong *)(param_1 + 0x170),0);
    iVar1 = (**(code **)(**(longlong **)(local_28 + 8) + 0x28))(*(longlong **)(local_28 + 8));
    if (2 < iVar1) {
      (**(code **)(**(longlong **)(local_28 + 8) + 0x18))(*(longlong **)(local_28 + 8),&local_30,2);
      uVar2 = FUN_0043fc00(local_30);
      *param_2 = uVar2;
    }
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_38,2);
  return;
}

