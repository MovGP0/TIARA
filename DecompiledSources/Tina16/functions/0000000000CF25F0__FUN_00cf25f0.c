/* Ghidra address: 00cf25f0 */
/* Ghidra symbol: FUN_00cf25f0 */


void FUN_00cf25f0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  if (iVar2 < 1) {
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + -4);
    }
    if (iVar2 < 1) {
      FUN_00414b50(&local_10,L"application/octet-stream");
    }
    else {
      FUN_008a0460(&local_10,*(undefined8 *)(param_1 + 0x18));
    }
  }
  else {
    FUN_00414b50(&local_10,param_2);
  }
  FUN_008b03d0(&local_20,local_10,L"charset",&local_18,2);
  FUN_00414ad0(param_1 + 0x28,local_20);
  if (local_18 == 0) {
    cVar1 = FUN_008b0130(*(undefined8 *)(param_1 + 0x28),L"text");
    if (cVar1 != '\0') {
      FUN_00414b50(&local_18,L"us-ascii");
    }
  }
  if (local_18 != 0) {
    FUN_00414ad0(param_1 + 0x20,local_18);
  }
  FUN_00414560(&local_20,3);
  return;
}

