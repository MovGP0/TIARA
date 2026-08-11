/* Ghidra address: 00c8edc0 */
/* Ghidra symbol: FUN_00c8edc0 */


void FUN_00c8edc0(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_30;
  undefined8 *local_28;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_48 = *(undefined1 *)(param_1 + 0x55);
  (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x20))
            (*(longlong **)PTR_DAT_020050b0,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x38),*(undefined2 *)(param_1 + 0x42));
  local_28 = *(undefined8 **)(param_1 + 0x58);
  (**(code **)*local_28)(local_28);
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_00c8fb10(param_1);
    FUN_00c8fb50(param_1);
  }
  local_20 = *(longlong **)(param_1 + 0x58);
  (**(code **)(*local_20 + 8))(local_20);
  return;
}

