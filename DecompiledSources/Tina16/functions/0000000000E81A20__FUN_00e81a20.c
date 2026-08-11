/* Ghidra address: 00e81a20 */
/* Ghidra symbol: FUN_00e81a20 */


void FUN_00e81a20(longlong param_1,char param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(param_1 + 0x400b4) != param_2) {
    *(char *)(param_1 + 0x400b4) = param_2;
    if (param_2 == '\0') {
      FUN_00bd1700(&local_10,*(undefined8 *)(param_1 + 0x98));
      FUN_00414ad0(param_1 + 0x90,local_10);
    }
    else {
      FUN_00414ad0(param_1 + 0x90,*(undefined8 *)(param_1 + 0x98));
    }
    *(undefined1 *)(param_1 + 0x400c0) = 0;
  }
  FUN_00414480(&local_10);
  return;
}

