/* Ghidra address: 0083e670 */
/* Ghidra symbol: FUN_0083e670 */


void FUN_0083e670(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = FUN_0065be20(param_1);
  if (cVar3 != '\0') {
    uVar1 = FUN_0065b870(param_1);
    iVar4 = thunk_FUN_0419e3da(uVar1);
    if (iVar4 != 0) {
      FUN_0083e5c0(param_1);
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041cc6e2(uVar1,0,0,0,0,0,0x8c);
      pcVar2 = (code *)FUN_00411550(param_1,0xffb0);
      cVar3 = (*pcVar2)(param_1);
      if (cVar3 != '\0') {
        uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x508));
        thunk_FUN_03c244fb(uVar1);
      }
    }
  }
  return;
}

