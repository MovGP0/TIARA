/* Ghidra address: 006806a0 */
/* Ghidra symbol: FUN_006806a0 */


void FUN_006806a0(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(param_1);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x4a3) = param_2;
  }
  else {
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0xb9,param_2,0);
  }
  return;
}

