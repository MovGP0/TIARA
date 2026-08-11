/* Ghidra address: 00447210 */
/* Ghidra symbol: FUN_00447210 */


longlong FUN_00447210(undefined8 param_1,longlong param_2,double param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_0040d200(param_2,10);
  if (param_3 < 0.0) {
    *(undefined1 *)(param_2 + 9) = 0x80;
  }
  FUN_0040c850(param_3);
  lVar1 = FUN_0040c770();
  for (iVar4 = 0; (0 < lVar1 && (iVar4 < 9)); iVar4 = iVar4 + 1) {
    uVar3 = lVar1 % 100;
    uVar2 = (int)uVar3 >> 0x1f;
    *(char *)(param_2 + iVar4) =
         (char)((longlong)((ulonglong)uVar2 << 0x20 | uVar3 & 0xffffffff) % 10) +
         (char)((int)((longlong)((ulonglong)uVar2 << 0x20 | uVar3 & 0xffffffff) / 10) << 4);
    lVar1 = lVar1 / 100;
  }
  return param_2;
}

