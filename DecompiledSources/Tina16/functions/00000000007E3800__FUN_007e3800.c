/* Ghidra address: 007e3800 */
/* Ghidra symbol: FUN_007e3800 */


void FUN_007e3800(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_007e34f0(*(longlong *)(param_1 + 200),param_1);
  }
  if (param_2 != 0) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_007da970);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_007d94d0);
      if (cVar1 != '\0') {
        FUN_007e34c0(param_2,param_1);
      }
    }
    else {
      FUN_007e34c0(*(undefined8 *)(param_2 + 0x80),param_1);
    }
  }
  return;
}

