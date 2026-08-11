/* Ghidra address: 00593cd0 */
/* Ghidra symbol: FUN_00593cd0 */


void FUN_00593cd0(undefined8 param_1,byte *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte local_1b [3];
  
  uVar1 = (ulonglong)*param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  pbVar3 = local_1b;
  for (uVar2 = uVar1; param_2 = param_2 + 1, uVar2 != 0; uVar2 = uVar2 - 1) {
    *pbVar3 = *param_2;
    pbVar3 = pbVar3 + 1;
  }
  FUN_00525420(local_1b,uVar1,0);
  return;
}

