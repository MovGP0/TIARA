/* Ghidra address: 006e6c40 */
/* Ghidra symbol: FUN_006e6c40 */


void FUN_006e6c40(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  *(undefined1 *)(param_1 + 0x4bc) = param_2;
  cVar2 = FUN_0044f0c0(6,0);
  if (cVar2 != '\0') {
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0x410,*(byte *)(param_1 + 0x4bc) + 1,0);
    }
  }
  return;
}

