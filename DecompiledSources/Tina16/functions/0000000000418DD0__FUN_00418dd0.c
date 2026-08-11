/* Ghidra address: 00418dd0 */
/* Ghidra symbol: FUN_00418dd0 */


uint FUN_00418dd0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = FUN_0041f930();
  if (*(longlong *)(lVar1 + 0x218) == param_1) {
    lVar1 = FUN_0041f930();
    uVar2 = (uint)*(byte *)(lVar1 + 0x220);
  }
  else {
    uVar2 = FUN_00418ce0(param_1);
    lVar1 = FUN_0041f930();
    *(longlong *)(lVar1 + 0x218) = param_1;
    lVar1 = FUN_0041f930();
    *(char *)(lVar1 + 0x220) = (char)uVar2;
  }
  return uVar2;
}

