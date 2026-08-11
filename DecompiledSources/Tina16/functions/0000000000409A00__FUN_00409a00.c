/* Ghidra address: 00409a00 */
/* Ghidra symbol: FUN_00409a00 */


undefined4 FUN_00409a00(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_0041f930();
  uVar1 = *(undefined4 *)(lVar2 + 0x210);
  lVar2 = FUN_0041f930();
  *(undefined4 *)(lVar2 + 0x210) = 0;
  return uVar1;
}

