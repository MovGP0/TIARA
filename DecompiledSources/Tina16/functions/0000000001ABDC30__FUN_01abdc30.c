/* Ghidra address: 01abdc30 */
/* Ghidra symbol: FUN_01abdc30 */


undefined8 FUN_01abdc30(longlong param_1)

{
  char cVar1;
  undefined8 unaff_XMM6_Qa;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01aae560);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01aaff18);
    if (cVar1 != '\0') {
      unaff_XMM6_Qa = *(undefined8 *)(param_1 + 200);
    }
  }
  else {
    unaff_XMM6_Qa = *(undefined8 *)(param_1 + 0x90);
  }
  return unaff_XMM6_Qa;
}

