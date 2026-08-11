/* Ghidra address: 018aff80 */
/* Ghidra symbol: FUN_018aff80 */


void FUN_018aff80(longlong param_1)

{
  if (*(char *)(param_1 + 0x852) == '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x760),0);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),0);
    *(undefined1 *)(param_1 + 0x850) = *(undefined1 *)(param_1 + 0x4d1);
    *(undefined1 *)(param_1 + 0x851) = *(undefined1 *)(param_1 + 0x4d2);
    FUN_007ff680(param_1,0);
    FUN_00800700(param_1,2);
    *(undefined1 *)(param_1 + 0x852) = 1;
  }
  else {
    FUN_00800700(param_1,*(undefined1 *)(param_1 + 0x851));
    FUN_007ff680(param_1,*(undefined1 *)(param_1 + 0x850));
    *(undefined1 *)(param_1 + 0x852) = 0;
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x760),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),1);
  }
  return;
}

