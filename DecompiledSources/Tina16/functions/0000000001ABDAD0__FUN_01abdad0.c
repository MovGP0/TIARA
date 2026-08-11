/* Ghidra address: 01abdad0 */
/* Ghidra symbol: FUN_01abdad0 */


undefined8 FUN_01abdad0(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RSI;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01aae560);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01aaff18);
    if (cVar1 != '\0') {
      unaff_RSI = *(undefined8 *)(param_1 + 0x88);
    }
  }
  else {
    unaff_RSI = *(undefined8 *)(param_1 + 0xd0);
  }
  return unaff_RSI;
}

