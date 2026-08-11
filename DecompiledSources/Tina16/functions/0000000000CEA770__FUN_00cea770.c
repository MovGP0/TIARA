/* Ghidra address: 00cea770 */
/* Ghidra symbol: FUN_00cea770 */


void FUN_00cea770(longlong param_1)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_28 = FUN_00ce9860(*(undefined8 *)(param_1 + 0xa8),1);
  local_1c = *(int *)(local_28 + 0x10) + -1;
  if (-1 < local_1c) {
    do {
      local_30 = (longlong *)FUN_00ce6f60(local_28,local_1c);
      cVar1 = FUN_00ce84a0(local_30);
      if (cVar1 != '\0') {
        FUN_004ae870(local_28,local_1c);
        (**(code **)(*local_30 + 0x20))(local_30,0);
        FUN_00410f20(local_30);
      }
      local_1c = local_1c + -1;
    } while (local_1c != -1);
  }
  FUN_00ce98a0(*(undefined8 *)(param_1 + 0xa8),1);
  return;
}

