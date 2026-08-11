/* Ghidra address: 010e82d0 */
/* Ghidra symbol: FUN_010e82d0 */


void FUN_010e82d0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (param_2 == '\0') {
    lVar2 = *(longlong *)(lVar1 + 0xf8);
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0xf0);
  }
  if (lVar2 != 0) {
    FUN_01a8dee0(*(undefined8 *)(lVar1 + 0xe8),lVar2);
  }
  FUN_01ae5650(lVar1);
  return;
}

