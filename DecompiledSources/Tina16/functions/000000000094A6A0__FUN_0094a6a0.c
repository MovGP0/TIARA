/* Ghidra address: 0094a6a0 */
/* Ghidra symbol: FUN_0094a6a0 */


longlong FUN_0094a6a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_2 + 0x278))(param_2);
  if ((cVar1 == '\0') ||
     ((*(char *)(param_1 + 0x1b) == '\0' &&
      (cVar1 = (**(code **)(*param_2 + 0x168))(param_2), cVar1 == '\x05')))) {
    lVar2 = (**(code **)(*param_2 + 0x158))(param_2);
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x128))(param_2);
  }
  while( true ) {
    if (lVar2 != 0) {
      return lVar2;
    }
    param_2 = (longlong *)(**(code **)(*param_2 + 0x170))(param_2);
    if (param_2 == (longlong *)0x0) break;
    lVar2 = (**(code **)(*param_2 + 0x158))(param_2);
  }
  return 0;
}

