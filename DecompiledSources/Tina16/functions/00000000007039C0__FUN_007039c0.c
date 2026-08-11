/* Ghidra address: 007039c0 */
/* Ghidra symbol: FUN_007039c0 */


void FUN_007039c0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    iVar3 = FUN_005fbf20(*(undefined4 *)(param_1 + 200));
    thunk_FUN_041b2403(uVar1,0x1404,0,(longlong)iVar3);
  }
  FUN_0065a2f0(param_1,param_2);
  return;
}

