/* Ghidra address: 00f2bba0 */
/* Ghidra symbol: FUN_00f2bba0 */


longlong FUN_00f2bba0(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                     undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined1 local_10;
  
  if ((param_4 < param_2) || (param_3 < param_4)) {
    local_18 = param_5;
    local_10 = 0x11;
    uVar1 = FUN_0044d8d0(&PTR_FUN_00436080,1,PTR_PTR_02002af0,&local_18,0);
    param_4 = FUN_004134c0(uVar1);
  }
  return param_4;
}

