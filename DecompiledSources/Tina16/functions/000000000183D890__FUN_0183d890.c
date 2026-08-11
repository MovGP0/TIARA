/* Ghidra address: 0183d890 */
/* Ghidra symbol: FUN_0183d890 */


void FUN_0183d890(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_20;
  
  local_20 = 0;
  iVar1 = FUN_0181e3e0();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_0181e3c0(param_2,iVar5);
      FUN_0043e1a0(&local_20,*(undefined8 *)(lVar3 + 0x18));
      iVar2 = FUN_00416db0(local_20,L"compoundstmt");
      if (iVar2 == 0) {
        uVar4 = FUN_0181e3c0(param_2,iVar5);
        FUN_0183d890(param_1,uVar4);
      }
      else {
        iVar2 = FUN_00416db0(local_20,L"procedure");
        if (iVar2 == 0) {
          uVar4 = FUN_0181e3c0(param_2,iVar5);
          FUN_0183ab20(*(undefined8 *)(param_1 + 0x40),uVar4,*(undefined8 *)(param_1 + 0x50));
        }
        else {
          iVar2 = FUN_00416db0(local_20,L"function");
          if (iVar2 == 0) {
            uVar4 = FUN_0181e3c0(param_2,iVar5);
            FUN_0183ad90(*(undefined8 *)(param_1 + 0x40),uVar4,*(undefined8 *)(param_1 + 0x50));
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_20);
  return;
}

