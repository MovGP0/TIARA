/* Ghidra address: 00593b60 */
/* Ghidra symbol: FUN_00593b60 */


bool FUN_00593b60(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  ulonglong uVar2;
  byte *pbVar3;
  undefined1 local_20;
  byte local_1f [4];
  byte local_1b [3];
  
  uVar2 = (ulonglong)*param_2;
  if (2 < uVar2) {
    uVar2 = 3;
  }
  local_1f[3] = (byte)uVar2;
  pbVar3 = local_1b;
  for (; param_2 = param_2 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_2;
    pbVar3 = pbVar3 + 1;
  }
  uVar2 = (ulonglong)*param_3;
  if (2 < uVar2) {
    uVar2 = 3;
  }
  local_20 = (undefined1)uVar2;
  pbVar3 = local_1f;
  for (; param_3 = param_3 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_3;
    pbVar3 = pbVar3 + 1;
  }
  iVar1 = FUN_00414f50(local_1f + 3,&local_20,(ulonglong)local_1f[3] + 1);
  return iVar1 == 0;
}

