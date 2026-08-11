/* Ghidra address: 014b7650 */
/* Ghidra symbol: FUN_014b7650 */


void FUN_014b7650(undefined8 param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_017ff620(param_2);
  iVar1 = FUN_01c8a290(*(undefined8 *)PTR_DAT_02004e40,uVar3,0);
  iVar2 = FUN_006d5120(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1350));
  if (iVar1 != iVar2) {
    uVar3 = FUN_017ff620(param_2);
    FUN_01c8ab30(*(undefined8 *)PTR_DAT_02004e40,uVar3,0);
  }
  lVar4 = FUN_019a45d0();
  if (lVar4 != 0) {
    if ((*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2768) == 0) ||
       (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2768) + 0x70) != '\x02')) {
      if (param_3 != '\0') {
        uVar3 = FUN_019a45d0();
        FUN_01994230(uVar3);
      }
      uVar3 = FUN_019a45d0();
      FUN_01993f30(uVar3,param_2,1,0);
      FUN_01c746c0(*(undefined8 *)PTR_DAT_02004e40,param_2);
    }
    else if (*(longlong *)PTR_DAT_020057d0 != 0) {
      FUN_014b67c0(*(undefined8 *)PTR_DAT_020057d0,param_2);
    }
  }
  return;
}

