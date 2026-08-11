/* Ghidra address: 00994c60 */
/* Ghidra symbol: FUN_00994c60 */


ulonglong FUN_00994c60(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x50))
                      (*(longlong **)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98));
    if ((char)uVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x90) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
  }
  else {
    uVar1 = (ulonglong)(*(char *)(param_1 + 0x90) == '\x01');
  }
  return uVar1;
}

