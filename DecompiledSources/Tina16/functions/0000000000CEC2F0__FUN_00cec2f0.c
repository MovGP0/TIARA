/* Ghidra address: 00cec2f0 */
/* Ghidra symbol: FUN_00cec2f0 */


char FUN_00cec2f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_00879090(param_2,&DAT_00cec380);
  if (cVar1 == '\0') {
    cVar1 = FUN_00879090(param_2,L"WINDOWS");
    if (((cVar1 == '\0') && (cVar1 = FUN_00879090(param_2,L"KOI8"), cVar1 == '\0')) &&
       (cVar1 = FUN_00879090(param_2,L"GB2312"), cVar1 == '\0')) {
      cVar1 = FUN_00879070(param_2,L"US-ASCII");
    }
  }
  else {
    cVar1 = FUN_00879070(param_2,L"ISO-2022-JP");
    cVar1 = cVar1 == '\0';
  }
  return cVar1;
}

