/* Ghidra address: 00408520 */
/* Ghidra symbol: FUN_00408520 */


longlong FUN_00408520(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char acStack_2c [17];
  char acStack_1b [3];
  
  uVar2 = 0;
  do {
    uVar1 = param_1 / 10;
    uVar2 = uVar2 + 1;
    acStack_2c[0x14 - uVar2] = (char)param_1 + (char)uVar1 * -10 + '0';
    param_1 = uVar1;
  } while (uVar1 != 0);
  FUN_00409a70(acStack_2c + (0x14 - uVar2),param_2,(ulonglong)uVar2);
  return param_2 + (ulonglong)uVar2;
}

