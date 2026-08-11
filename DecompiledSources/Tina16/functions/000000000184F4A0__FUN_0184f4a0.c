/* Ghidra address: 0184f4a0 */
/* Ghidra symbol: FUN_0184f4a0 */


void FUN_0184f4a0(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_0184f250(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x138) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x38);
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_40);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))(*(longlong **)(param_1 + 0x40),&local_58);
    FUN_0046f1e0(&local_40,&local_58);
    (**(code **)(*plVar1 + 8))(plVar1,&local_40);
  }
  FUN_00417840(&local_58,&DAT_004013d8,2);
  return;
}

