/* Ghidra address: 01cfd090 */
/* Ghidra symbol: FUN_01cfd090 */


undefined8 FUN_01cfd090(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_01cfd2d0(param_1);
  if (param_2 < iVar1) {
    lVar2 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(param_1 + 0xba));
    uVar3 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,*(short *)(lVar2 + 0x9e) + (short)param_2);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

