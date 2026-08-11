/* Ghidra address: 01392c70 */
/* Ghidra symbol: FUN_01392c70 */


void FUN_01392c70(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (*(char *)(param_2 + 0x27f) != '\0') {
    *(undefined1 *)(param_2 + 0x27e) = 1;
  }
  if (*(longlong *)(param_2 + 0x270) != 0) {
    if ((*(char *)(param_2 + 0x27e) == '\0') &&
       (*(char *)(*(longlong *)(param_2 + 0x270) + 0x49c) != '\x01')) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_2 + 0x27e) = uVar1;
    FUN_01af2b10(*(undefined8 *)(*(longlong *)(param_2 + 0x270) + 0xf10));
    if (*PTR_DAT_020052b8 != '\0') {
      FUN_017d2010(*(undefined8 *)(param_2 + 0x270),0);
    }
    if ((*(char *)(*(longlong *)(param_2 + 0x270) + 0x49c) == '\x01') &&
       (*(char *)(param_2 + 0x27f) == '\0')) {
      FUN_01b07d50(*(undefined8 *)(param_2 + 0x270));
      FUN_00f513f0(*(undefined8 *)(param_2 + 0x270),1);
      *(undefined8 *)(param_2 + 0x270) = 0;
    }
  }
  if (*PTR_DAT_020028a0 != '\0') {
    *PTR_DAT_020028a0 = 0;
  }
  return;
}

