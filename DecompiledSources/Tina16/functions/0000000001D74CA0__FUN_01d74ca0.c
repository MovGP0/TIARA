/* Ghidra address: 01d74ca0 */
/* Ghidra symbol: FUN_01d74ca0 */


void FUN_01d74ca0(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 param_7,char *param_8,
                 undefined1 *param_9)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  *(undefined1 *)((longlong)param_1 + 9) = param_4;
  *(undefined1 *)((longlong)param_1 + 10) = param_5;
  *(undefined1 *)((longlong)param_1 + 0xb) = param_6;
  *(undefined1 *)((longlong)param_1 + 0xc) = param_7;
  *(char *)((longlong)param_1 + 0xd) = *param_8;
  *param_8 = *param_8 + '\x14';
  *(undefined1 *)((longlong)param_1 + 0xe) = *param_9;
  *param_9 = *param_9;
  return;
}

