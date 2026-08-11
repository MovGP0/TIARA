/* Ghidra address: 0183a9d0 */
/* Ghidra symbol: FUN_0183a9d0 */


void FUN_0183a9d0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  undefined1 local_19;
  
  local_28 = 0;
  local_30 = param_2;
  iVar1 = FUN_0043e420(*(undefined8 *)(param_2 + 0x18),L"parameters");
  if (iVar1 == 0) {
    local_19 = 0;
    iVar1 = FUN_0181e3e0();
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_0181e3c0(local_30,iVar5);
        FUN_0043e1a0(&local_28,*(undefined8 *)(lVar3 + 0x18));
        iVar2 = FUN_00416db0(local_28,L"varparams");
        if (iVar2 == 0) {
          local_19 = 1;
        }
        else {
          iVar2 = FUN_00416db0(local_28,&DAT_0183ab18);
          if (iVar2 == 0) {
            uVar4 = FUN_0181e3c0(local_30,iVar5);
            FUN_0183a7a0(auStack_58,uVar4);
            local_19 = 0;
          }
        }
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414480(&local_28);
  return;
}

