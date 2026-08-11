/* Ghidra address: 00460840 */
/* Ghidra symbol: FUN_00460840 */


void FUN_00460840(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = FUN_004097b0();
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_004355d0);
  if (cVar2 == '\0') {
    uVar1 = FUN_004097b0();
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00435bc0);
    if (cVar2 == '\0') {
      uVar1 = FUN_004097b0();
      cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00436080);
      if (cVar2 == '\0') {
        uVar1 = FUN_00409810();
        FUN_004134c0(uVar1);
      }
      else {
        FUN_00460800(0x80020005,param_1,param_2);
      }
    }
    else {
      FUN_00460800(0x8002000a,param_1,param_2);
    }
  }
  else {
    FUN_00460800(0x8002000a,param_1,param_2);
  }
  return;
}

