/* Ghidra address: 005ef850 */
/* Ghidra symbol: FUN_005ef850 */


ulonglong FUN_005ef850(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  uint local_1c [3];
  
  cVar1 = FUN_005ef8f0(param_1,local_1c);
  if (cVar1 == '\0') {
    uVar2 = FUN_0043fc00(param_1);
  }
  else {
    uVar2 = (ulonglong)local_1c[0];
  }
  return uVar2;
}

