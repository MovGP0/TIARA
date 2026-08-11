/* Ghidra address: 00d91070 */
/* Ghidra symbol: FUN_00d91070 */


ulonglong FUN_00d91070(longlong param_1,ulonglong param_2)

{
  char cVar1;
  
  param_2 = param_2 & 0xffffffff;
  cVar1 = FUN_00d98b50(param_1);
  if (cVar1 != '\0') {
    param_2 = FUN_00d7e9c0(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28),param_2);
  }
  return param_2;
}

