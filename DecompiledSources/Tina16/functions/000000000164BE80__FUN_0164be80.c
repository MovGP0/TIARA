/* Ghidra address: 0164be80 */
/* Ghidra symbol: FUN_0164be80 */


void FUN_0164be80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_016ea6c0(param_1,1);
  if (*(char *)(param_3 + 0x6c) == '\0') {
    FUN_016a96a0(param_1,param_2,1,*(undefined8 *)(param_3 + 0x50),*(undefined4 *)(param_3 + 4));
  }
  else {
    FUN_016a96a0(param_1,param_2,2,*(undefined8 *)(param_3 + 0x50),*(undefined4 *)(param_3 + 4));
  }
  if (*(char *)(param_3 + 0xc) == '\x04') {
    if (*(char *)(param_3 + 0x6c) == '\0') {
      FUN_016a96a0(param_1,param_2,1,*(undefined8 *)(param_3 + 0x58),*(undefined4 *)(param_3 + 4));
    }
    else {
      FUN_016a96a0(param_1,param_2,2,*(undefined8 *)(param_3 + 0x58),*(undefined4 *)(param_3 + 4));
    }
  }
  return;
}

