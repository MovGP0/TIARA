/* Ghidra address: 01abda30 */
/* Ghidra symbol: FUN_01abda30 */


undefined8 FUN_01abda30(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01aae560);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01aaff18);
    if (cVar1 != '\0') {
      unaff_RSI = *(undefined8 *)(param_1 + 0x68);
    }
  }
  else {
    unaff_RSI = *(undefined8 *)(param_1 + 0xa0);
  }
  return unaff_RSI;
}

