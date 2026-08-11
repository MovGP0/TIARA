/* Ghidra address: 00593980 */
/* Ghidra symbol: FUN_00593980 */


undefined8 FUN_00593980(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  undefined1 local_20;
  byte local_1f [4];
  byte local_1b [3];
  
  uVar3 = (ulonglong)*param_2;
  if (2 < uVar3) {
    uVar3 = 3;
  }
  local_1f[3] = (byte)uVar3;
  pbVar4 = local_1b;
  for (; param_2 = param_2 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar4 = *param_2;
    pbVar4 = pbVar4 + 1;
  }
  uVar3 = (ulonglong)*param_3;
  if (2 < uVar3) {
    uVar3 = 3;
  }
  local_20 = (undefined1)uVar3;
  pbVar4 = local_1f;
  for (; param_3 = param_3 + 1, uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar4 = *param_3;
    pbVar4 = pbVar4 + 1;
  }
  iVar1 = FUN_00414e30(local_1f + 3,&local_20);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00414e30(local_1f + 3,&local_20);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

