/* Ghidra address: 01493bd0 */
/* Ghidra symbol: FUN_01493bd0 */


void FUN_01493bd0(longlong param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x870) + 0xb8),0xff0000);
  FUN_004169a0(&local_120,local_118);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x870),local_120);
  FUN_00414480(&local_120);
  return;
}

