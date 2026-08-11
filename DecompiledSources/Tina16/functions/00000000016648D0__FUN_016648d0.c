/* Ghidra address: 016648d0 */
/* Ghidra symbol: FUN_016648d0 */


ulonglong FUN_016648d0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined8 *puVar2;
  undefined8 local_13e8 [508];
  undefined1 local_408;
  
  local_408 = 0;
  puVar2 = local_13e8;
  for (lVar1 = 0x278; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  (*DAT_0210f8c0)(local_13e8,*(longlong *)(param_3 + 0x1378) + 8,param_4);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

