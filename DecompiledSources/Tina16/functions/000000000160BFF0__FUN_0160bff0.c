/* Ghidra address: 0160bff0 */
/* Ghidra symbol: FUN_0160bff0 */


undefined1 FUN_0160bff0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_19;
  longlong local_10;
  
  local_10 = 0;
  local_19 = 0;
  cVar1 = FUN_01d3f2a0(param_1);
  if (cVar1 != '\0') {
    FUN_00414b50(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 0x38));
    iVar2 = 0;
    if (local_10 != 0) {
      iVar2 = *(int *)(local_10 + -4);
    }
    if (((iVar2 < 7) ||
        (((iVar2 = FUN_004170c0(L"IR3806",local_10,1), iVar2 != 1 &&
          (iVar2 = FUN_004170c0(L"IR3826",local_10,1), iVar2 != 1)) &&
         (iVar2 = FUN_004170c0(L"TDA3864",local_10,1), iVar2 != 1)))) &&
       (iVar2 = FUN_004170c0(L"TPS546D24",local_10,1), iVar2 != 1)) {
      local_19 = 0;
    }
    else {
      local_19 = 1;
    }
  }
  FUN_00414480(&local_10);
  return local_19;
}

