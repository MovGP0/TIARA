/* Ghidra address: 01af0f40 */
/* Ghidra symbol: FUN_01af0f40 */


void FUN_01af0f40(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x790)) {
    *(char *)(param_1 + 0x790) = param_2;
    if (param_2 == '\x01') {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b8),0);
      FUN_0064cc50(param_1,*(int *)(param_1 + 0x9c) -
                           *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x9c));
    }
    else if (param_2 == '\x02') {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b8),0);
      FUN_0064cc50(param_1,(*(int *)(param_1 + 0x9c) -
                           *(int *)(*(longlong *)(param_1 + 0x6b8) + 0x9c)) -
                           *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c));
      FUN_0064c650(*(undefined8 *)(param_1 + 0x748),5);
    }
    else if (param_2 == '\x03') {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
      FUN_0064cc50(param_1,*(int *)(param_1 + 0x9c) -
                           *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x9c));
      FUN_0064c650(*(undefined8 *)(param_1 + 0x6b8),5);
    }
  }
  return;
}

