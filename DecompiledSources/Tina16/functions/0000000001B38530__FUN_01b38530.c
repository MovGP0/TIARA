/* Ghidra address: 01b38530 */
/* Ghidra symbol: FUN_01b38530 */


void FUN_01b38530(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  while (lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 0x18);
    FUN_00418590(lVar2,&DAT_00ea9378);
    lVar2 = lVar1;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}

