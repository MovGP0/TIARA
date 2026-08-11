/* Ghidra address: 016d4750 */
/* Ghidra symbol: FUN_016d4750 */


undefined1 FUN_016d4750(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  if ((char)param_1[0xaf] != '\0') {
    FUN_00414ad0(param_1 + 0xae,L"Wave output device is already active");
    local_29 = 0;
    goto LAB_016d49f8;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  if ((char)param_1[0xb1] == '\0') {
    lVar4 = FUN_016d44d0(&PTR_FUN_016d3948,1,param_1);
    param_1[0xb5] = lVar4;
    if (lVar4 == 0) {
      FUN_00414ad0(param_1 + 0xae,L"Could not start thread");
      local_29 = 0;
      goto LAB_016d49f8;
    }
    param_1[0xb4] = 0;
    iVar2 = thunk_FUN_040b3751(param_1 + 0xb4,(int)param_1[0x9b],(longlong)param_1 + 0x4a6,
                               *(undefined4 *)(param_1[0xb5] + 8),0,0x20000);
    if (iVar2 != 0) {
      FUN_016d3a80(&local_20,iVar2);
      FUN_00414ad0(param_1 + 0xae,local_20);
      local_29 = 0;
      goto LAB_016d49f8;
    }
  }
  *(undefined1 *)(param_1 + 0xb1) = 1;
  cVar1 = FUN_016d3e10(param_1);
  if (cVar1 == '\0') {
    local_29 = 0;
  }
  else {
    iVar2 = (int)param_1[0x94];
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        iVar3 = thunk_FUN_03cb99be(param_1[0xb4],param_1[(longlong)iVar5 + 0xa5],0x30);
        if (iVar3 != 0) {
          FUN_016d3a80(&local_28,iVar3);
          FUN_00414ad0(param_1 + 0xae,local_28);
          (**(code **)(*param_1 + 0x280))(param_1);
          local_29 = 0;
          goto LAB_016d49f8;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)((longlong)param_1 + 0x584) = 0;
    *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
    *(undefined1 *)(param_1 + 0xad) = 1;
    *(undefined1 *)((longlong)param_1 + 0x569) = 0;
    *(undefined1 *)(param_1 + 0xaf) = 1;
    cVar1 = (**(code **)(*param_1 + 0x290))(param_1,0,(int)param_1[0x93]);
    if (cVar1 == '\0') {
      (**(code **)(*param_1 + 0x280))(param_1);
      FUN_00414ad0(param_1 + 0xae,L"There must be at least one filled buffer");
      local_29 = 0;
    }
    else {
      iVar5 = (int)param_1[0x94] + -1;
      iVar2 = 1;
      if (0 < iVar5) {
        do {
          (**(code **)(*param_1 + 0x290))(param_1,iVar2,(int)param_1[0x93]);
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_29 = 1;
    }
  }
LAB_016d49f8:
  FUN_00414560(&local_28,2);
  return local_29;
}

