/* Ghidra address: 00e76a90 */
/* Ghidra symbol: FUN_00e76a90 */


ulonglong FUN_00e76a90(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined8 *puVar2;
  undefined8 local_350 [102];
  
  puVar2 = local_350;
  for (lVar1 = 0x65; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  (*DAT_0202e9b8)(local_350,*(longlong *)(param_3 + 0x1378) + 8,param_4);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

