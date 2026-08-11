/* Ghidra address: 0065ec00 */
/* Ghidra symbol: FUN_0065ec00 */


void FUN_0065ec00(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1;
  for (lVar2 = *(longlong *)(param_1 + 0x78); (*(longlong *)(lVar1 + 0x108) == 0 && (lVar2 != 0));
      lVar2 = *(longlong *)(lVar2 + 0x78)) {
    lVar1 = lVar2;
  }
  if (lVar1 != 0) {
    FUN_0064d420(lVar1,0xb046,param_1,param_2);
  }
  return;
}

