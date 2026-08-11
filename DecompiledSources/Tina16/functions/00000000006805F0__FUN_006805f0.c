/* Ghidra address: 006805f0 */
/* Ghidra symbol: FUN_006805f0 */


undefined1 FUN_006805f0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 uVar4;
  
  uVar4 = *(undefined1 *)(param_1 + 0x4a3);
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_0065b870(param_1);
    lVar3 = thunk_FUN_041b2403(uVar2,0xb8,0,0);
    uVar4 = lVar3 != 0;
  }
  return uVar4;
}

