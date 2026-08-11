/* Ghidra address: 00bc0c20 */
/* Ghidra symbol: FUN_00bc0c20 */


undefined1 FUN_00bc0c20(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_21;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414b50(&local_10,*(undefined8 *)(param_2 + 0x20));
  cVar1 = FUN_005ec370(param_2,*(undefined8 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    local_21 = 0;
  }
  else {
    cVar1 = FUN_005eaa60(param_2,*(undefined8 *)(param_1 + 0x20));
    if (cVar1 == '\0') {
      local_21 = 0;
    }
    else {
      cVar1 = FUN_005ebec0(param_2,L"Background");
      if (cVar1 != '\0') {
        uVar2 = FUN_005eba50(param_2,L"Background");
        FUN_00bc0b80(param_1,uVar2);
      }
      cVar1 = FUN_005ebec0(param_2,L"Foreground");
      if (cVar1 != '\0') {
        uVar2 = FUN_005eba50(param_2,L"Foreground");
        FUN_00bc0bd0(param_1,uVar2);
      }
      cVar1 = FUN_005ebec0(param_2,L"Style");
      if (cVar1 != '\0') {
        uVar2 = FUN_005eba50(param_2,L"Style");
        FUN_00bc12a0(param_1,uVar2);
      }
      FUN_00416ba0(local_20,&LAB_00bc0e04,local_10);
      FUN_005eaa60(param_2,local_20[0]);
      local_21 = 1;
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return local_21;
}

