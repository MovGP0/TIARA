/* Ghidra address: 0184f110 */
/* Ghidra symbol: FUN_0184f110 */


void FUN_0184f110(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [36];
  int local_44;
  undefined1 *local_40;
  int local_2c;
  
  local_40 = auStack_68;
  FUN_00414480(*(longlong *)(param_1 + 0x10) + 0x90);
  local_44 = FUN_01847410();
  local_2c = 0;
  if (-1 < local_44 + -1) {
    while (*(char *)(*(longlong *)(param_1 + 0x10) + 0x138) == '\0') {
      lVar1 = FUN_0184f0f0(param_1,local_2c);
      FUN_00414ad0(*(longlong *)(param_1 + 0x10) + 0x158,*(undefined8 *)(lVar1 + 0x18));
      plVar2 = (longlong *)FUN_0184f0f0(param_1,local_2c);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (*(char *)(lVar1 + 0x80) != '\0') {
        return;
      }
      if (*(char *)(lVar1 + 0x81) != '\0') {
        return;
      }
      if (*(char *)(lVar1 + 0x82) != '\0') {
        return;
      }
      local_2c = local_2c + 1;
      local_44 = local_44 + -1;
      if (local_44 == 0) {
        return;
      }
    }
  }
  return;
}

