/* Ghidra address: 00812580 */
/* Ghidra symbol: FUN_00812580 */


void FUN_00812580(longlong *param_1,undefined8 param_2)

{
  if (*(char *)((longlong)param_1 + 0x71) == '\x04') {
    *(undefined1 *)((longlong)param_1 + 0x71) = 2;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if ((char)param_1[0xc] == '\b') {
    *(undefined1 *)(param_1 + 0xc) = 6;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(char *)((longlong)param_1 + 0x51) == '\f') {
    *(undefined1 *)((longlong)param_1 + 0x51) = 10;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if ((char)param_1[8] == '\x10') {
    *(undefined1 *)(param_1 + 8) = 0xe;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  FUN_00785c20(param_1,param_2);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

