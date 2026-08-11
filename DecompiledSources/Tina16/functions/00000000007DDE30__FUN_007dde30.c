/* Ghidra address: 007dde30 */
/* Ghidra symbol: FUN_007dde30 */


void FUN_007dde30(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  FUN_004d3040(param_1);
  lVar1 = FUN_007e2ec0(param_1);
  if (lVar1 != 0) {
    uVar2 = FUN_007e2ec0(param_1);
    pcVar3 = (code *)FUN_00411550(param_1,0xffef);
    (*pcVar3)(param_1,uVar2,1);
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    FUN_007dde90(param_1);
  }
  return;
}

