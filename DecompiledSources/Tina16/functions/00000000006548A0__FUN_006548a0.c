/* Ghidra address: 006548a0 */
/* Ghidra symbol: FUN_006548a0 */


void FUN_006548a0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_00640c18);
    if (cVar1 == '\0') {
      FUN_0064ad60(param_1 + 0x370,param_2);
    }
    else {
      FUN_0064ad60(param_1 + 0x378,param_2);
      FUN_0064ad60(param_1 + 0x360,param_2);
    }
    *(longlong *)(param_2 + 0x78) = param_1;
  }
  return;
}

