/* Ghidra address: 01bfa390 */
/* Ghidra symbol: FUN_01bfa390 */


void FUN_01bfa390(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  
  lVar2 = FUN_01bfaa70(param_2);
  if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x10) != 0) {
    lVar2 = FUN_01bfaa70(param_2);
    lVar2 = *(longlong *)(lVar2 + 0x38);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) != 0)) {
      uVar1 = *(undefined8 *)(lVar2 + 0x18);
      pcVar3 = (code *)FUN_00411550(uVar1,0xffce);
      (*pcVar3)(uVar1);
    }
  }
  return;
}

