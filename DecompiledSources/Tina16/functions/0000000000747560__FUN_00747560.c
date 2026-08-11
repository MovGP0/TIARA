/* Ghidra address: 00747560 */
/* Ghidra symbol: FUN_00747560 */


undefined8 FUN_00747560(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  pcVar1 = (code *)FUN_00411550(param_1,0xffffffff);
  lVar2 = (*pcVar1)(param_1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00747100(lVar2);
  }
  return uVar3;
}

