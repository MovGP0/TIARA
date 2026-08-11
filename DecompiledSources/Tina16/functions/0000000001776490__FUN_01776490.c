/* Ghidra address: 01776490 */
/* Ghidra symbol: FUN_01776490 */


void FUN_01776490(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  *param_2 = 0;
  *param_3 = 0x3d3c25c268497682;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  if (0 < *(int *)(*(longlong *)(param_1 + 0x170) + 0x10)) {
    local_28 = FUN_004aeac0(*(longlong *)(param_1 + 0x170),0);
    iVar1 = (**(code **)(**(longlong **)(local_28 + 8) + 0x28))(*(longlong **)(local_28 + 8));
    if (2 < iVar1) {
      (**(code **)(**(longlong **)(local_28 + 8) + 0x18))(*(longlong **)(local_28 + 8),&local_58,2);
      FUN_004b4b10(local_20,local_58);
      iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
      if (0 < iVar1) {
        (**(code **)(*local_20 + 0x18))(local_20,&local_30,0);
        uVar2 = FUN_0043fc00(local_30);
        *param_2 = uVar2;
      }
      iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
      if (1 < iVar1) {
        (**(code **)(*local_20 + 0x18))(local_20,&local_30,1);
        uVar3 = FUN_00b8f030(local_30);
        *param_3 = uVar3;
      }
    }
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_58);
  FUN_00414560(&local_38,2);
  return;
}

