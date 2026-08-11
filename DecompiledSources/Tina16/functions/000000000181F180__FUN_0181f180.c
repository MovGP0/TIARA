/* Ghidra address: 0181f180 */
/* Ghidra symbol: FUN_0181f180 */


void FUN_0181f180(undefined8 param_1)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0181f230(param_1,&local_10,&local_18);
  iVar1 = FUN_004170c0(L"?xml",local_10,1);
  if (iVar1 != 1) {
    FUN_0181f120(param_1);
  }
  FUN_00414560(&local_18,2);
  return;
}

