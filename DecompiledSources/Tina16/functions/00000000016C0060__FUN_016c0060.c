/* Ghidra address: 016c0060 */
/* Ghidra symbol: FUN_016c0060 */


void FUN_016c0060(longlong param_1,byte *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_128 [264];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_128;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  if (*(char *)(param_1 + 0x45f) != '\0') {
    FUN_00414ff0(*(longlong *)(param_1 + 0x460) + -0x100 +
                 (longlong)(int)(*(byte *)(param_1 + 0x46f) - 1) * 0x204,local_128);
    *(undefined1 *)(param_1 + 0x45f) = 0;
  }
  return;
}

