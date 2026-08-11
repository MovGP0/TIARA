/* Ghidra address: 00f51220 */
/* Ghidra symbol: FUN_00f51220 */


void FUN_00f51220(longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x6d8) == '\x02') {
    cVar1 = *(char *)(param_1 + 0x6e1);
    if (cVar1 == '\0') {
      FUN_00f50d70(param_1,*(undefined4 *)(param_1 + 0x6e4));
    }
    else if (cVar1 == '\x01') {
      FUN_00f50f00(param_1,*(undefined8 *)(param_1 + 0x6e8));
    }
    else if (cVar1 == '\x02') {
      FUN_00f51090(param_1,*(undefined8 *)(param_1 + 0x6e8));
    }
  }
  return;
}

