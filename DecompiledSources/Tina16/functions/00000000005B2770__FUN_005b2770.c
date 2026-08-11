/* Ghidra address: 005b2770 */
/* Ghidra symbol: FUN_005b2770 */


void FUN_005b2770(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(ushort *)(param_1 + 0x34) & 1) == 0) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_005afd68);
    if (cVar1 != '\0') {
      FUN_005b2830(param_1,param_2);
    }
  }
  return;
}

