/* Ghidra address: 0160f890 */
/* Ghidra symbol: FUN_0160f890 */


undefined8 FUN_0160f890(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0xb) {
    uVar1 = 8;
  }
  else if (param_1 == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"SystemC AMS: Invalid type_id");
    uVar1 = FUN_004134c0(uVar1);
  }
  return uVar1;
}

