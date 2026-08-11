/* Ghidra address: 00682290 */
/* Ghidra symbol: FUN_00682290 */


int FUN_00682290(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = 0;
  cVar1 = FUN_0065be20(*(undefined8 *)(param_1 + 0x38));
  if ((cVar1 != '\0') || (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x2c0) != 0)) {
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    iVar2 = thunk_FUN_041b2403(uVar3,0xba,0,0);
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
    uVar4 = thunk_FUN_041b2403(uVar4,0xbb,(longlong)(iVar2 + -1),0);
    lVar5 = thunk_FUN_041b2403(uVar3,0xc1,uVar4,0);
    if (lVar5 == 0) {
      iVar2 = iVar2 + -1;
    }
  }
  return iVar2;
}

