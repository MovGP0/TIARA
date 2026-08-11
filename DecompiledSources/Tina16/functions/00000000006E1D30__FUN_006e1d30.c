/* Ghidra address: 006e1d30 */
/* Ghidra symbol: FUN_006e1d30 */


void FUN_006e1d30(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  FUN_0065a2f0(param_1);
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    uVar3 = FUN_005fbf20(*(undefined4 *)(param_1 + 200));
    thunk_FUN_041b2403(uVar1,0x111d,0,uVar3);
  }
  return;
}

