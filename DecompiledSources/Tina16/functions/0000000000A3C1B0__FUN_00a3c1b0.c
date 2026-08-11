/* Ghidra address: 00a3c1b0 */
/* Ghidra symbol: FUN_00a3c1b0 */


longlong FUN_00a3c1b0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_00a39e90();
  if ((*(char *)(lVar1 + 0x491) == '\x06') || (*(char *)(lVar1 + 0x491) == '\x04')) {
    lVar1 = *(longlong *)(lVar1 + 0x480) + (ulonglong)(uint)(param_2 * *(int *)(lVar1 + 0x488));
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

