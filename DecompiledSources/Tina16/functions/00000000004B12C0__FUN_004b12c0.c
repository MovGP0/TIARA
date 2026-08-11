/* Ghidra address: 004b12c0 */
/* Ghidra symbol: FUN_004b12c0 */


void FUN_004b12c0(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_004115f0(param_1);
  pcVar1 = (code *)FUN_00411550(param_1,0xffffffff);
  lVar2 = (*pcVar1)(param_1);
  if (lVar2 != 0) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffffffff);
    uVar3 = (*pcVar1)(param_1);
    uVar4 = FUN_0041b800(param_1 + 8);
    FUN_00411110(uVar3,&DAT_004b131c,uVar4);
  }
  return;
}

