/* Ghidra address: 0064c090 */
/* Ghidra symbol: FUN_0064c090 */


void FUN_0064c090(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if (param_1[0xf] != param_2) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00640c18);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x130))(param_1,param_2);
    }
  }
  return;
}

