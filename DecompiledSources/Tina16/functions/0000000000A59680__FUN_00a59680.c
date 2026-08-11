/* Ghidra address: 00a59680 */
/* Ghidra symbol: FUN_00a59680 */


undefined1 FUN_00a59680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_34 [4];
  int local_30;
  undefined1 local_29;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_28 = (longlong *)FUN_00a59550(auStack_68,param_2);
  local_20 = (longlong *)FUN_00a59550(auStack_68,param_3);
  local_29 = 1;
  iVar2 = (**(code **)(*local_28 + 0x28))();
  local_30 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_28 + 0x18))(local_28,&local_48,local_30);
      cVar1 = (**(code **)(*local_20 + 0x140))(local_20,local_48,local_34);
      if (cVar1 == '\0') {
        local_29 = 0;
        break;
      }
      local_30 = local_30 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_48);
  return local_29;
}

