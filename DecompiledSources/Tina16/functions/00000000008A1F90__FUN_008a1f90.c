/* Ghidra address: 008a1f90 */
/* Ghidra symbol: FUN_008a1f90 */


undefined1 FUN_008a1f90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_19;
  longlong local_18;
  longlong local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_19 = 0;
  FUN_00414b50(&local_10,param_2);
  FUN_008a1ef0(param_1,&local_18,&local_10,1,2);
  if (local_18 != 0) {
    cVar1 = FUN_00879280(local_10,1,0x3a);
    if (cVar1 != '\0') {
      cVar1 = FUN_0043fc80(local_18,param_1 + 0x6c);
      if (cVar1 != '\0') {
        FUN_00879060(&local_10,1,1);
        FUN_008a1ef0(param_1,&local_18,&local_10,1,2);
        if (local_18 != 0) {
          cVar1 = FUN_00879280(local_10,1,0x3a);
          if (cVar1 != '\0') {
            cVar1 = FUN_0043fc80(local_18,param_1 + 0x68);
            if (cVar1 != '\0') {
              FUN_00879060(&local_10,1,1);
              FUN_008a1ef0(param_1,&local_18,&local_10,1,2);
              if (local_18 != 0) {
                if (local_10 != 0) {
                  cVar1 = FUN_008752e0(local_10,1,1);
                  if (cVar1 != '\0') {
                    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Cookie Time");
                    FUN_004134c0(uVar2);
                  }
                }
                cVar1 = FUN_0043fc80(local_18,param_1 + 100);
                if (cVar1 != '\0') {
                  if (0x17 < *(int *)(param_1 + 0x6c)) {
                    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Cookie Time");
                    FUN_004134c0(uVar2);
                  }
                  if (0x3b < *(int *)(param_1 + 0x68)) {
                    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Cookie Time");
                    FUN_004134c0(uVar2);
                  }
                  if (0x3b < *(int *)(param_1 + 100)) {
                    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Cookie Time");
                    FUN_004134c0(uVar2);
                  }
                  local_19 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00414560(&local_18,2);
  return local_19;
}

