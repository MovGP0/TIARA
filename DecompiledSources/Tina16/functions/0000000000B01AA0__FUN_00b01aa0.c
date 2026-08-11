/* Ghidra address: 00b01aa0 */
/* Ghidra symbol: FUN_00b01aa0 */


void FUN_00b01aa0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x708));
  if (lVar2 != 0) {
    uVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x708));
    cVar1 = FUN_006dd2b0(uVar3);
    if (cVar1 == '\0') {
      lVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x708));
      FUN_00b01560(param_1,*(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 8),1);
    }
  }
  return;
}

