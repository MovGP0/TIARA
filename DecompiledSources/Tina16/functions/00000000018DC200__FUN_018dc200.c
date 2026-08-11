/* Ghidra address: 018dc200 */
/* Ghidra symbol: FUN_018dc200 */


ulonglong FUN_018dc200(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    uVar2 = FUN_018dc230();
  }
  else {
    iVar1 = FUN_005fcc70(*(undefined8 *)(param_2 + 0x70));
    uVar2 = (ulonglong)(uint)-iVar1;
  }
  return uVar2;
}

