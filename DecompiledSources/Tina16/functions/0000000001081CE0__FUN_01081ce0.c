/* Ghidra address: 01081ce0 */
/* Ghidra symbol: FUN_01081ce0 */


longlong FUN_01081ce0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x550),0);
  lVar2 = FUN_006dd600(uVar1);
  if (lVar2 != 0) {
    FUN_006dd110(lVar2,1);
  }
  return lVar2;
}

