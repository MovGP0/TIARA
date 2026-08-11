/* Ghidra address: 00688540 */
/* Ghidra symbol: FUN_00688540 */


void FUN_00688540(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0044f0c0(6,0);
  if (cVar2 != '\0') {
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0x160c,0,(longlong)(int)-(uint)(*(char *)(param_1 + 0x4b8) != '\0'));
    }
  }
  return;
}

