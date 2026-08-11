/* Ghidra address: 006fdd90 */
/* Ghidra symbol: FUN_006fdd90 */


void FUN_006fdd90(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x534) < 1) {
    if (param_2 == 0) {
      FUN_006fb920(param_1,0);
    }
    else {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_006cb0d0);
      if (cVar1 == '\0') {
        FUN_006fdc70(param_1,param_2);
      }
    }
  }
  return;
}

