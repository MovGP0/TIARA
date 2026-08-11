/* Ghidra address: 01785270 */
/* Ghidra symbol: FUN_01785270 */


void FUN_01785270(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_48;
  local_28 = 0;
  *(undefined1 *)(param_1 + 0x720) = 0;
  local_c = FUN_00f04d50(*(undefined8 *)(param_1 + 0x6e8));
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  if ((cVar1 != '\0') && (local_c % 2 != 0)) {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_28,0x134);
    FUN_017851f0(param_1,local_28);
    *(undefined1 *)(param_1 + 0x720) = 1;
  }
  FUN_00414480(&local_28);
  return;
}

