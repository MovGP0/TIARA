/* Ghidra address: 006e1db0 */
/* Ghidra symbol: FUN_006e1db0 */


void FUN_006e1db0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_0065a330(param_1);
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_0065b870(param_1);
    uVar2 = FUN_005fbf20(*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x28));
    thunk_FUN_041b2403(uVar3,0x111e,0,uVar2);
  }
  return;
}

