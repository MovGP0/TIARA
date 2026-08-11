/* Ghidra address: 01abdb70 */
/* Ghidra symbol: FUN_01abdb70 */


undefined8 FUN_01abdb70(longlong param_1)

{
  char cVar1;
  undefined8 unaff_XMM6_Qa;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01aae560);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01aaff18);
    if (cVar1 != '\0') {
      unaff_XMM6_Qa = *(undefined8 *)(param_1 + 0xb8);
    }
  }
  else {
    unaff_XMM6_Qa = FUN_01ab2a30(param_1);
  }
  return unaff_XMM6_Qa;
}

