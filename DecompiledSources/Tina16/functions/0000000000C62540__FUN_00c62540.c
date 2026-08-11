/* Ghidra address: 00c62540 */
/* Ghidra symbol: FUN_00c62540 */


void FUN_00c62540(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*PTR_DAT_02003210 == '\0') || ((*(uint *)(param_1 + 0xd8) & 0x10000) != 0)) {
LAB_00c6257c:
    cVar1 = FUN_00781870();
    if ((cVar1 == '\0') || ((*PTR_DAT_02002b98 & 2) == 0)) {
      *(undefined8 *)(param_1 + 200) = 0;
      goto LAB_00c625b0;
    }
  }
  else {
    iVar2 = FUN_0044f080();
    if ((5 < iVar2) && (*PTR_DAT_020036c0 != '\0')) goto LAB_00c6257c;
  }
  *(wchar_t **)(param_1 + 200) = L"DLGTEMPLATE";
LAB_00c625b0:
  FUN_00724500(param_1,param_2);
  return;
}

