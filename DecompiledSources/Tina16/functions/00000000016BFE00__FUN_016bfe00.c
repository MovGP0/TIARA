/* Ghidra address: 016bfe00 */
/* Ghidra symbol: FUN_016bfe00 */


ulonglong FUN_016bfe00(longlong param_1,int param_2,byte *param_3)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  byte local_128 [264];
  
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar3 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_3;
    param_3 = param_3 + 1;
    pbVar3 = pbVar3 + 1;
  }
  bVar1 = *(byte *)(param_1 + 0x46f);
  if (*(byte *)(param_1 + 0x46f) < 0xb) {
    *(int *)(*(longlong *)(param_1 + 0x460) + -0x204 + (ulonglong)*(byte *)(param_1 + 0x46f) * 0x204
            ) = param_2 + 1;
    FUN_00414ff0(*(longlong *)(param_1 + 0x460) + -0x200 +
                 (ulonglong)*(byte *)(param_1 + 0x46f) * 0x204,local_128);
    *(char *)(param_1 + 0x46f) = *(char *)(param_1 + 0x46f) + '\x01';
  }
  return CONCAT71((int7)((ulonglong)param_3 >> 8),bVar1 < 0xb) & 0xffffffff;
}

