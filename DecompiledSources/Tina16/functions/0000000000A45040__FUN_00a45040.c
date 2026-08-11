/* Ghidra address: 00a45040 */
/* Ghidra symbol: FUN_00a45040 */


undefined8 FUN_00a45040(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  int local_34;
  int local_2c;
  longlong local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_28 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b2b90(local_20,1);
  local_34 = 0;
  if (param_3 != 0) {
    local_34 = *(int *)(param_3 + -4);
  }
  if (0 < local_34) {
    FUN_00a44e70(auStack_68,param_3,*(undefined8 *)(param_1 + 0x10));
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),&local_48,local_2c);
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),local_2c);
      FUN_00a44e70(auStack_68,local_48,uVar2);
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined2 *)(local_28 + 0x2c) = 0x7c;
  FUN_004b2b90(local_28,1);
  FUN_004b3880(local_28,param_2);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_48);
  return param_2;
}

