/* Ghidra address: 01850980 */
/* Ghidra symbol: FUN_01850980 */


void FUN_01850980(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined1 local_29;
  
  local_40 = auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_0184f250(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x138) == '\0') {
    if (*(char *)(param_1 + 0x28) == '\0') {
      FUN_0184f110(param_1);
      local_29 = *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x82);
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x82) = 0;
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30));
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x82) = local_29;
    }
    else {
      FUN_0184f110(param_1);
    }
  }
  FUN_00417840(&local_78,&DAT_004013d8,2);
  FUN_00414480(&local_48);
  return;
}

