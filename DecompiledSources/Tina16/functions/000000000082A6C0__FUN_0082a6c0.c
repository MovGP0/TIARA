/* Ghidra address: 0082a6c0 */
/* Ghidra symbol: FUN_0082a6c0 */


void FUN_0082a6c0(longlong *param_1,char param_2)

{
  if ((int)param_1[99] == 0) {
    param_2 = '\0';
  }
  if ((param_2 != (char)param_1[0x65]) &&
     (((char)param_1[0x65] == '\0' || (*(char *)((longlong)param_1 + 0x32a) != '\0')))) {
    *(char *)(param_1 + 0x65) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x33a) = 0;
      (**(code **)(*param_1 + 0x188))(param_1);
    }
    else {
      if (*(char *)((longlong)param_1 + 0x33a) == '\0') {
        (**(code **)(*param_1 + 0x180))(param_1);
      }
      *(undefined1 *)((longlong)param_1 + 0x33a) = 3;
    }
    if (param_2 != '\0') {
      FUN_0082a670(param_1);
    }
  }
  return;
}

