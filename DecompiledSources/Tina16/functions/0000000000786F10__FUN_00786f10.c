/* Ghidra address: 00786f10 */
/* Ghidra symbol: FUN_00786f10 */


void FUN_00786f10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_00792690(DAT_02012540,param_2);
  if (cVar2 != '\0') {
    FUN_00792330(DAT_02012540,param_2);
  }
  lVar3 = FUN_0078f6b0(DAT_02012538,*(undefined8 *)(param_1 + 0x68));
  uVar1 = (**(code **)(lVar3 + 0x58))(lVar3,1,param_2);
  FUN_007922a0(DAT_02012540,param_2,uVar1);
  return;
}

