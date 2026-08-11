/* Ghidra address: 016098e0 */
/* Ghidra symbol: FUN_016098e0 */


undefined1 FUN_016098e0(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = FUN_004170c0(L"XMC11",local_res8[0],1);
  if (iVar2 < 1) {
    iVar2 = FUN_004170c0(L"XMC12",local_res8[0],1);
    if (iVar2 < 1) {
      iVar2 = FUN_004170c0(L"XMC13",local_res8[0],1);
      if (iVar2 < 1) {
        iVar2 = FUN_004170c0(L"XMC14",local_res8[0],1);
        if (iVar2 < 1) {
          iVar2 = FUN_004170c0(L"XMC44",local_res8[0],1);
          if (iVar2 < 1) {
            iVar2 = FUN_004170c0(L"XMC7",local_res8[0],1);
            if (iVar2 < 1) {
              uVar1 = 0;
              goto LAB_0160999c;
            }
          }
        }
      }
    }
  }
  uVar1 = 1;
LAB_0160999c:
  FUN_00414480(local_res8);
  return uVar1;
}

