/* Ghidra address: 0041c190 */
/* Ghidra symbol: FUN_0041c190 */


void FUN_0041c190(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  lVar3 = param_2 * 8 + 0x10;
  if (lVar2 == 0) {
    lVar2 = FUN_00408330(lVar3);
  }
  else {
    lVar1 = *(longlong *)(lVar2 + -8);
    if (*(int *)(lVar2 + -0xc) == 1) {
      lVar2 = FUN_00407fb0(lVar2 + -0x10,lVar3);
    }
    else {
      lVar2 = FUN_004079c0(lVar3);
      lVar3 = lVar1;
      if (param_2 < lVar1) {
        lVar3 = param_2;
      }
      FUN_00409a70(*param_1,lVar2 + 0x10,lVar3 * 8);
      FUN_0041c140(*param_1);
    }
    if (lVar1 < param_2) {
      FUN_0040d200(lVar2 + 0x10 + lVar1 * 8,(param_2 - lVar1) * 8,0);
    }
  }
  *(undefined4 *)(lVar2 + 4) = 1;
  *(longlong *)(lVar2 + 8) = param_2;
  *param_1 = lVar2 + 0x10;
  return;
}

