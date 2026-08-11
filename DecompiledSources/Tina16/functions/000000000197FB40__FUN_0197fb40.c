/* Ghidra address: 0197fb40 */
/* Ghidra symbol: FUN_0197fb40 */


void FUN_0197fb40(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  int local_1c;
  
  local_30 = auStack_58;
  local_1c = 0;
  while( true ) {
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) <= local_1c) {
      return;
    }
    local_28 = FUN_004aeac0(*(longlong *)(param_1 + 0x10),local_1c);
    if ((*(char *)(local_28 + 0x49) != '\0') && (*(longlong *)(local_28 + 0x38) == param_3)) break;
    local_1c = local_1c + 1;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  (**(code **)(**(longlong **)(local_28 + 0x38) + 0x310))
            (*(longlong **)(local_28 + 0x38),local_28,param_2,param_1);
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_004aee30(*(undefined8 *)(param_1 + 0x10),local_28);
  return;
}

