/* Ghidra address: 013ab400 */
/* Ghidra symbol: FUN_013ab400 */


void FUN_013ab400(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6b8));
  lVar4 = FUN_006dd390(uVar3);
  if (lVar4 == 0) {
    uVar3 = FUN_019a45d0();
    FUN_01994230(uVar3);
  }
  else {
    lVar4 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6b8));
    lVar4 = *(longlong *)(lVar4 + 0x18);
    if (lVar4 == 0) {
      uVar3 = FUN_019a45d0();
      FUN_01994230(uVar3);
    }
    else {
      uVar3 = FUN_017ff620(lVar4);
      iVar1 = FUN_01c8a290(*(undefined8 *)PTR_DAT_02004e40,uVar3,0);
      iVar2 = FUN_006d5120(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1350));
      if (iVar1 != iVar2) {
        uVar3 = FUN_017ff620(lVar4);
        FUN_01c8ab30(*(undefined8 *)PTR_DAT_02004e40,uVar3,0);
      }
      lVar5 = FUN_019a45d0();
      if (lVar5 != 0) {
        uVar3 = FUN_019a45d0();
        FUN_01994230(uVar3);
        uVar3 = FUN_019a45d0();
        FUN_01993f30(uVar3,lVar4,1,0);
        FUN_01c746c0(*(undefined8 *)PTR_DAT_02004e40,lVar4);
      }
    }
  }
  return;
}

