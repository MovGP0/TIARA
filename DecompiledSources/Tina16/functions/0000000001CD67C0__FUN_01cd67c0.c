/* Ghidra address: 01cd67c0 */
/* Ghidra symbol: FUN_01cd67c0 */


undefined8 FUN_01cd67c0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)((longlong)param_1 + 0x11) == '\0') {
LAB_01cd67ef:
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_004113d0(param_1[0xd],&PTR_FUN_01cdf058);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x60))(param_1);
      if (cVar1 == '\0') goto LAB_01cd67ef;
    }
    uVar2 = 1;
  }
  return uVar2;
}

