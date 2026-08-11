/* Ghidra address: 014f3fc0 */
/* Ghidra symbol: FUN_014f3fc0 */


void FUN_014f3fc0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = 0;
  iVar3 = 1;
  do {
    iVar4 = 1;
    do {
      uVar1 = FUN_01d447a0(param_2,iVar3,iVar4);
      uVar2 = FUN_01d438c0(uVar1);
      if (iVar4 < iVar3) {
        uVar2 = CONCAT62((int6)((ulonglong)uVar2 >> 0x10),0x2e);
      }
      uVar1 = (undefined4)uVar2;
      if ((short)uVar2 == 0x2d) {
        uVar1 = (undefined4)CONCAT62((int6)((ulonglong)uVar2 >> 0x10),0x20);
      }
      FUN_00416780(&local_20,uVar1);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6e0),iVar3,iVar4,local_20);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 10);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 10);
  FUN_00414480(&local_20);
  return;
}

