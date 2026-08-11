/* Ghidra address: 0080ad20 */
/* Ghidra symbol: FUN_0080ad20 */


void FUN_0080ad20(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (*(char *)(param_1 + 0x2ea) != '\0') {
    iVar1 = thunk_FUN_03986dbd(param_2);
    if (iVar1 != 0) {
      if (param_3 != '\0') {
        DAT_01e14008 = 1;
      }
      thunk_FUN_04154efc(param_2,0);
      if (param_3 != '\0') {
        DAT_01e14008 = 0;
      }
      *(undefined1 *)(param_1 + 0x2ea) = 0;
    }
  }
  return;
}

