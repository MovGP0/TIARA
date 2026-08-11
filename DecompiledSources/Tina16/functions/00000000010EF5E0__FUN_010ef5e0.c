/* Ghidra address: 010ef5e0 */
/* Ghidra symbol: FUN_010ef5e0 */


undefined8 FUN_010ef5e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_38 [24];
  
  piVar1 = (int *)(param_1 + 0x48);
  iVar3 = (*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x4c)) / 2;
  FUN_00498350(local_38,*piVar1,iVar3 + -2,*piVar1 + 6,iVar3 + 3);
  cVar2 = FUN_01d2dd00(local_38,param_2,param_3);
  if (cVar2 == '\0') {
    iVar3 = (*piVar1 + *(int *)(param_1 + 0x50)) / 2;
    FUN_00498350(local_38,iVar3 + -2,*(int *)(param_1 + 0x4c),iVar3 + 3,*(int *)(param_1 + 0x4c) + 6
                );
    cVar2 = FUN_01d2dd00(local_38,param_2,param_3);
    if (cVar2 == '\0') {
      iVar3 = (*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x4c)) / 2;
      FUN_00498350(local_38,*(int *)(param_1 + 0x50) + -6,iVar3 + -2,*(int *)(param_1 + 0x50),
                   iVar3 + 3);
      cVar2 = FUN_01d2dd00(local_38,param_2,param_3);
      if (cVar2 == '\0') {
        iVar3 = (*piVar1 + *(int *)(param_1 + 0x50)) / 2;
        FUN_00498350(local_38,iVar3 + -2,*(int *)(param_1 + 0x54) + -6,iVar3 + 2,
                     *(int *)(param_1 + 0x54));
        cVar2 = FUN_01d2dd00(local_38,param_2,param_3);
        if (cVar2 == '\0') {
          FUN_00498350(local_38,*piVar1,*(int *)(param_1 + 0x54) + -6,*piVar1 + 6,
                       *(int *)(param_1 + 0x54));
          cVar2 = FUN_01d2dd00(local_38,param_2,param_3);
          if (cVar2 == '\0') {
            FUN_00498350(local_38,*piVar1,*(int *)(param_1 + 0x4c),*piVar1 + 6,
                         *(int *)(param_1 + 0x4c) + 6);
            cVar2 = FUN_01d2dd00(local_38,param_2,param_3);
            if (cVar2 == '\0') {
              FUN_00498350(local_38,*(int *)(param_1 + 0x50) + -6,*(int *)(param_1 + 0x4c),
                           *(int *)(param_1 + 0x50),*(int *)(param_1 + 0x4c) + 6);
              cVar2 = FUN_01d2dd00(local_38,param_2,param_3);
              if (cVar2 == '\0') {
                FUN_00498350(local_38,*(int *)(param_1 + 0x50) + -6,*(int *)(param_1 + 0x54) + -6,
                             *(int *)(param_1 + 0x50),*(int *)(param_1 + 0x54));
                cVar2 = FUN_01d2dd00(local_38,param_2,param_3);
                if (cVar2 == '\0') {
                  uVar4 = 0;
                }
                else {
                  uVar4 = 5;
                }
              }
              else {
                uVar4 = 3;
              }
            }
            else {
              uVar4 = 1;
            }
          }
          else {
            uVar4 = 7;
          }
        }
        else {
          uVar4 = 6;
        }
      }
      else {
        uVar4 = 4;
      }
    }
    else {
      uVar4 = 2;
    }
  }
  else {
    uVar4 = 8;
  }
  return uVar4;
}

