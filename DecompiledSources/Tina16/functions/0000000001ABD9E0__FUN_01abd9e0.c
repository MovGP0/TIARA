/* Ghidra address: 01abd9e0 */
/* Ghidra symbol: FUN_01abd9e0 */


undefined4 FUN_01abd9e0(longlong param_1)

{
  char cVar1;
  undefined4 unaff_ESI;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_01aae560);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01aaff18);
    if (cVar1 != '\0') {
      unaff_ESI = *(undefined4 *)(param_1 + 0x90);
    }
  }
  else {
    unaff_ESI = *(undefined4 *)(param_1 + 0xd8);
  }
  return unaff_ESI;
}

