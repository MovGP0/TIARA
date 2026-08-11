/* Ghidra address: 00d83080 */
/* Ghidra symbol: FUN_00d83080 */


undefined8 * FUN_00d83080(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,uint param_4)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  FUN_00414ad0(param_1 + 2,param_3);
  if ((param_4 & 4) == 4) {
    if ((param_4 & 1) == 1) {
      *(undefined1 *)(param_1 + 3) = 4;
    }
    else if ((param_4 & 2) == 2) {
      *(undefined1 *)(param_1 + 3) = 7;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  else if ((param_4 & 8) == 8) {
    if ((param_4 & 1) == 1) {
      *(undefined1 *)(param_1 + 3) = 5;
    }
    else if ((param_4 & 2) == 2) {
      *(undefined1 *)(param_1 + 3) = 8;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 2;
    }
  }
  else if ((param_4 & 1) == 1) {
    *(undefined1 *)(param_1 + 3) = 3;
  }
  else if ((param_4 & 2) == 2) {
    *(undefined1 *)(param_1 + 3) = 6;
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  if ((param_4 & 0x20000) == 0x20000) {
    *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 2;
  }
  if ((param_4 & 0x800) == 0x800) {
    *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 4;
  }
  if ((param_4 & 0x20) == 0x20) {
    *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 0x10;
  }
  if ((param_4 & 0x10) == 0x10) {
    *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 8;
  }
  if ((param_4 & 0x8000) == 0x8000) {
    *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 0x20;
  }
  if ((param_4 & 0x40) == 0x40) {
    *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 0x40;
  }
  if ((param_4 & 0x40000) == 0x40000) {
    *(byte *)((longlong)param_1 + 0x19) = *(byte *)((longlong)param_1 + 0x19) | 0x80;
  }
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  return param_1;
}

