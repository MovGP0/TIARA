/* Ghidra address: 00b2b7e0 */
/* Ghidra symbol: FUN_00b2b7e0 */


undefined8 FUN_00b2b7e0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
  FUN_00b25840(local_20,*(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0x10));
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  local_24 = 0;
  if (-1 < iVar5 + -1) {
    do {
      puVar2 = (undefined2 *)FUN_00b28df0(param_1,local_24);
      FUN_00b25840(local_20,*puVar2);
      lVar3 = FUN_00b28df0(param_1,local_24);
      FUN_00b25840(local_20,*(undefined2 *)(lVar3 + 2));
      lVar3 = FUN_00b28df0(param_1,local_24);
      FUN_00b25840(local_20,*(undefined2 *)(lVar3 + 4));
      local_24 = local_24 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar1 = (**(code **)*local_20)(local_20);
  FUN_00415d10(param_2,uVar1,0);
  FUN_004b6dc0(local_20,0);
  uVar4 = FUN_00414df0(param_2);
  uVar1 = (**(code **)*local_20)(local_20);
  FUN_00b25770(local_20,uVar4,uVar1);
  (**(code **)(*local_20 + -0x20))(local_20,1);
  return param_2;
}

