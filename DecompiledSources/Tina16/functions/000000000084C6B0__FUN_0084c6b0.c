/* Ghidra address: 0084c6b0 */
/* Ghidra symbol: FUN_0084c6b0 */


void FUN_0084c6b0(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_0084bd30(*(undefined8 *)(param_1 + 0x38),param_2);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *plVar1;
  }
  if ((param_3 == 0) && (lVar2 == 0)) {
    FUN_0084bf40(*(undefined8 *)(param_1 + 0x38),param_2,0);
  }
  else {
    uVar3 = FUN_0084a240(param_3,lVar2);
    FUN_0084bf40(*(undefined8 *)(param_1 + 0x38),param_2,uVar3);
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_0084a280(plVar1);
  }
  FUN_0084c790(param_1);
  return;
}

