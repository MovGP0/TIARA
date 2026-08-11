/* Ghidra address: 00654910 */
/* Ghidra symbol: FUN_00654910 */


void FUN_00654910(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00640c18);
  if (cVar1 == '\0') {
    FUN_0064ada0(param_1 + 0x370,param_2);
  }
  else {
    FUN_0064ada0(param_1 + 0x360,param_2);
    FUN_0064ada0(param_1 + 0x378,param_2);
  }
  *(undefined8 *)(param_2 + 0x78) = 0;
  return;
}

