/* Ghidra address: 011526b0 */
/* Ghidra symbol: FUN_011526b0 */


undefined8 FUN_011526b0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xdc) < 0x2c) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,param_2,param_3 + 0x24c);
  }
  else {
    FUN_00414ad0(param_2,L"Harmonic balance initial guess mode");
  }
  return param_2;
}

