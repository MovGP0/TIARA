/* Ghidra address: 01642290 */
/* Ghidra symbol: FUN_01642290 */


void FUN_01642290(longlong param_1)

{
  char cVar1;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if ((*(char *)(*(longlong *)(param_1 + 0x78) + 0x139e0) != '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x78) + 0x139e1) != '\0')) {
    FUN_0163f970(param_1,&local_10,1);
    FUN_0163f970(param_1,&local_18,2);
    cVar1 = FUN_01613620(local_10,&local_1c);
    if (cVar1 != '\0') {
      cVar1 = FUN_01613620(local_18,&local_20);
      if (cVar1 != '\0') {
        if (local_1c != local_20) {
          FUN_01613110(L"Model mismatch");
        }
        *(int *)(*(longlong *)(param_1 + 0x78) + 0xa8) = local_1c;
      }
    }
  }
  FUN_00414560(&local_18,2);
  return;
}

