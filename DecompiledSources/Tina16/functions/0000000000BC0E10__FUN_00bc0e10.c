/* Ghidra address: 00bc0e10 */
/* Ghidra symbol: FUN_00bc0e10 */


bool FUN_00bc0e10(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414b50(&local_10,*(undefined8 *)(param_2 + 0x20));
  cVar1 = FUN_005ea880(param_2,*(undefined8 *)(param_1 + 0x20),1);
  if (cVar1 != '\0') {
    FUN_005eba20(param_2,L"Background",*(undefined4 *)(param_1 + 8));
    FUN_005eba20(param_2,L"Foreground",*(undefined4 *)(param_1 + 0x10));
    uVar2 = FUN_00bc1260(param_1);
    FUN_005eba20(param_2,L"Style",uVar2);
    FUN_00416ba0(local_20,&LAB_00bc0f94,local_10);
    FUN_005ea880(param_2,local_20[0],0);
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return cVar1 != '\0';
}

