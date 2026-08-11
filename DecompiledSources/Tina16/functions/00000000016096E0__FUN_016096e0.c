/* Ghidra address: 016096e0 */
/* Ghidra symbol: FUN_016096e0 */


undefined1 FUN_016096e0(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar3 = FUN_004170c0(L"XMC11",local_res8[0],1);
  if (iVar3 < 1) {
    iVar3 = FUN_004170c0(L"XMC12",local_res8[0],1);
    if (iVar3 < 1) {
      iVar3 = FUN_004170c0(L"XMC13",local_res8[0],1);
      if (iVar3 < 1) {
        iVar3 = FUN_004170c0(L"XMC14",local_res8[0],1);
        if (iVar3 < 1) {
          iVar3 = FUN_004170c0(L"XMC44",local_res8[0],1);
          if (iVar3 < 1) {
            iVar3 = FUN_004170c0(L"XMC7",local_res8[0],1);
            if (iVar3 < 1) {
              cVar1 = FUN_01609210(local_res8[0]);
              if (cVar1 == '\0') {
                cVar1 = FUN_01609310(local_res8[0]);
                if (cVar1 == '\0') {
                  cVar1 = FUN_01609590(local_res8[0]);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_01609390(local_res8[0]);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_01609620(local_res8[0]);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_01609290(local_res8[0]);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_01609510(local_res8[0]);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_01609490(local_res8[0]);
                            if (cVar1 == '\0') {
                              uVar2 = 0;
                              goto LAB_01609814;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar2 = 1;
LAB_01609814:
  FUN_00414480(local_res8);
  return uVar2;
}

