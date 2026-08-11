/* Ghidra address: 01663540 */
/* Ghidra symbol: FUN_01663540 */


undefined8 FUN_01663540(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    if (*(int *)(param_1 + 0x48) + -1 < 0) {
      FUN_01b05000(L"Internal error: function Evaluate",0);
    }
    if (param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + (longlong)(*(int *)(param_1 + 0x48) + -1) * 8);
    }
  }
  else {
    puVar1 = (undefined8 *)FUN_01628c50(param_1);
    uVar2 = *puVar1;
  }
  return uVar2;
}

