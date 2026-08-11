/* Ghidra address: 018718c0 */
/* Ghidra symbol: FUN_018718c0 */


void FUN_018718c0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_00498350(&local_38,*(undefined4 *)(lVar1 + 0x248),*(undefined4 *)(lVar1 + 0x24c),
               *(undefined4 *)(lVar1 + 0x250),*(undefined4 *)(lVar1 + 0x254));
  *(undefined8 *)(param_1 + 0x80) = local_38;
  *(undefined8 *)(param_1 + 0x88) = uStack_30;
  return;
}

