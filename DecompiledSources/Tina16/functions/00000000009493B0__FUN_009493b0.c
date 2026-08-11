/* Ghidra address: 009493b0 */
/* Ghidra symbol: FUN_009493b0 */


undefined1 FUN_009493b0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_19;
  
  if (param_3 == 0) {
    param_1 = (longlong *)FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0();
  }
  (**(code **)(*param_1 + 0x98))(param_1);
  return local_19;
}

