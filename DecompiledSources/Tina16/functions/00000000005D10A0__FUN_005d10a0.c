/* Ghidra address: 005d10a0 */
/* Ghidra symbol: FUN_005d10a0 */


void FUN_005d10a0(undefined8 param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  wchar_t *local_18;
  undefined1 local_10;
  
  if ((param_3 != '\0') && (param_2 == 0)) {
    local_18 = L"Encoding";
    local_10 = 0x11;
    uVar1 = FUN_0044d8d0(&PTR_FUN_00433ec0,1,PTR_PTR_02003380,&local_18,0);
    FUN_004134c0(uVar1);
  }
  FUN_005d1640();
  return;
}

