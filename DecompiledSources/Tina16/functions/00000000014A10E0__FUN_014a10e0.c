/* Ghidra address: 014a10e0 */
/* Ghidra symbol: FUN_014a10e0 */


undefined8 FUN_014a10e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_01763148);
  if (cVar1 == '\0') {
    iVar2 = FUN_014a1070(param_1,param_3);
  }
  else {
    iVar2 = FUN_014a1000(param_1,param_3);
  }
  if ((iVar2 == 1) || (iVar2 == 0x80)) {
    FUN_00414ad0(param_2,L".vhd");
  }
  else if (iVar2 == 2) {
    FUN_00414ad0(param_2,&PTR_DAT_014a11ec);
  }
  else if (iVar2 == 4) {
    FUN_00414ad0(param_2,&DAT_014a1200);
  }
  else if (iVar2 == 8) {
    FUN_00414ad0(param_2,L".vams");
  }
  else if ((((iVar2 == 0x20) || (iVar2 == 0x40)) || (iVar2 == 0x80)) || (iVar2 == 0x200)) {
    FUN_00414ad0(param_2,L".vhd");
  }
  else if (iVar2 == 0x10) {
    FUN_00414ad0(param_2,L".vhd");
  }
  return param_2;
}

