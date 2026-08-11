/* Ghidra address: 014fd2d0 */
/* Ghidra symbol: FUN_014fd2d0 */


ulonglong FUN_014fd2d0(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  if (*PTR_DAT_02003fc8 == '\0') {
    uVar2 = FUN_019a4600();
    uVar1 = FUN_019a02e0(uVar2);
  }
  else {
    uVar1 = (ulonglong)(byte)*PTR_DAT_02003420;
  }
  return uVar1;
}

