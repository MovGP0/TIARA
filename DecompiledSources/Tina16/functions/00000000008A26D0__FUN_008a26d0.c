/* Ghidra address: 008a26d0 */
/* Ghidra symbol: FUN_008a26d0 */


undefined1 FUN_008a26d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_19;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_19 = 0;
  FUN_00414b50(&local_10,param_2);
  FUN_008a1ef0(param_1,&local_18,&local_10,2,4);
  if (local_18 != 0) {
    cVar1 = FUN_008752e0(local_10,1,1);
    if (cVar1 == '\0') {
      cVar1 = FUN_0043fc80(param_2,param_1 + 0x58);
      if (cVar1 != '\0') {
        if ((*(int *)(param_1 + 0x58) < 0x46) || (99 < *(int *)(param_1 + 0x58))) {
          if ((-1 < *(int *)(param_1 + 0x58)) && (*(int *)(param_1 + 0x58) < 0x46)) {
            *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 2000;
          }
        }
        else {
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x76c;
        }
        if (*(int *)(param_1 + 0x58) < 0x641) {
          uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Cookie Year");
          FUN_004134c0(uVar2);
        }
        local_19 = 1;
      }
    }
  }
  FUN_00414560(&local_18,2);
  return local_19;
}

