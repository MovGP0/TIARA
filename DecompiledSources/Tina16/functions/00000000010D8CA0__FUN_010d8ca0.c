/* Ghidra address: 010d8ca0 */
/* Ghidra symbol: FUN_010d8ca0 */


void FUN_010d8ca0(longlong param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x9b8) == '\0') {
      FUN_010d8ca0(param_1,1);
      return;
    }
  }
  else if (param_2 == '\x01') {
    if (*(char *)(param_1 + 0x9b9) == '\0') {
      FUN_010d8ca0(param_1,2);
      return;
    }
  }
  else if ((param_2 == '\x02') && (*(char *)(param_1 + 0x9ba) == '\0')) {
    FUN_010d8ca0(param_1,0);
    return;
  }
  *(char *)(param_1 + 0x9be) = param_2;
  FUN_010d8b90(param_1);
  cVar1 = *(char *)(param_1 + 0x9be);
  if (cVar1 == '\0') {
    FUN_010d8e20(param_1,*(undefined8 *)(param_1 + 0x970));
  }
  else if (cVar1 == '\x01') {
    FUN_010d8e20(param_1,*(undefined8 *)(param_1 + 0x978));
  }
  else if (cVar1 == '\x02') {
    FUN_010d8e20(param_1,*(undefined8 *)(param_1 + 0x980));
  }
  cVar1 = *(char *)(param_1 + 0x9be);
  if (cVar1 == '\0') {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x918),*(undefined1 *)(param_1 + 0x9bb));
  }
  else if (cVar1 == '\x01') {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x918),*(undefined1 *)(param_1 + 0x9bc));
  }
  else if (cVar1 == '\x02') {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x918),*(undefined1 *)(param_1 + 0x9bd));
  }
  return;
}

