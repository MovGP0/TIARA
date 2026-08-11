/* Ghidra address: 01cfd030 */
/* Ghidra symbol: FUN_01cfd030 */


undefined1 FUN_01cfd030(longlong param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_01cfd2d0(param_1);
  if (param_2 < iVar2) {
    lVar3 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_1 + 0xba));
    lVar3 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,*(short *)(lVar3 + 0x9e) + (short)param_2);
    uVar1 = *(undefined1 *)(lVar3 + 0x33);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

