/* Ghidra address: 01691320 */
/* Ghidra symbol: FUN_01691320 */


void FUN_01691320(undefined8 param_1,byte *param_2,byte *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  longlong lVar1;
  byte *pbVar2;
  byte local_118 [256];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  if (local_118[0] != 0) {
    while ((local_118[*param_3] != 0x3a && (*param_3 < local_118[0]))) {
      *param_3 = *param_3 + 1;
    }
  }
  if (*param_3 == local_118[0]) {
    *param_4 = 1;
  }
  if (local_118[*param_3] == 0x3a) {
    *param_5 = 1;
    if (*param_3 < local_118[0]) {
      *param_3 = *param_3 + 1;
    }
  }
  else {
    *param_5 = 0;
  }
  return;
}

