/* Ghidra address: 01bff050 */
/* Ghidra symbol: FUN_01bff050 */


void FUN_01bff050(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if (param_1 != (longlong *)0x0) {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_01bdd620);
    if (cVar1 == '\0') {
      FUN_0064e030(param_1,*(undefined4 *)(param_2 + 0x8c));
    }
    else {
      FUN_0064e030(param_1,*(undefined4 *)(param_2 + 0xc0));
    }
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}

