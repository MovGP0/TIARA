/* Ghidra address: 00ce6df0 */
/* Ghidra symbol: FUN_00ce6df0 */


bool FUN_00ce6df0(undefined8 param_1)

{
  int iVar1;
  wchar_t *local_18;
  wchar_t *local_10;
  
  local_18 = L"http";
  local_10 = L"https";
  iVar1 = FUN_00874bb0(param_1,&local_18,1,0);
  return iVar1 != -1;
}

