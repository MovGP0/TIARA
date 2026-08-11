/* Ghidra address: 006e8680 */
/* Ghidra symbol: FUN_006e8680 */


int FUN_006e8680(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  iVar1 = thunk_FUN_041b2403(uVar2,0xba,0,0);
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  uVar3 = thunk_FUN_041b2403(uVar3,0xbb,(longlong)(iVar1 + -1),0);
  lVar4 = thunk_FUN_041b2403(uVar2,0xc1,uVar3,0);
  if (lVar4 == 0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

