/* Ghidra address: 018bb580 */
/* Ghidra symbol: FUN_018bb580 */


char FUN_018bb580(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  char local_19;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_28 = 0;
  local_19 = '\0';
  *(undefined1 *)(param_2 + 0x17) = 1;
  puVar1 = auStack_58;
  if ((param_3 == 0) && (puVar1 = auStack_58, param_2[0x13] == 0)) {
    FUN_00441920(&local_38,*(undefined8 *)(param_1[4] + 0x1c0));
    FUN_00414ad0(param_2 + 0x13,local_38);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  if (param_2 != (longlong *)0x0) {
    param_2[0xf] = param_1[4];
    local_19 = (**(code **)(*param_2 + 0xe8))(param_2);
    if (local_19 != '\0') {
      local_28 = (**(code **)(*param_2 + 200))(param_2,param_3);
    }
    if (local_28 != 0) {
      cVar2 = (**(code **)(*param_2 + 0xd8))(param_2,local_28,param_1);
      if (cVar2 == '\0') {
        (**(code **)(*param_1 + 0x140))(param_1,local_28);
      }
      (**(code **)(*param_2 + 0xd0))(param_2,local_28,0);
    }
    (**(code **)(*param_2 + 0xf0))(param_2);
  }
  FUN_00414480(&local_38);
  return local_19;
}

