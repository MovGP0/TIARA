/* Ghidra address: 013b2cc0 */
/* Ghidra symbol: FUN_013b2cc0 */


void FUN_013b2cc0(longlong param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 local_138;
  undefined8 local_130;
  byte local_128 [264];
  
  local_130 = 0;
  local_138 = 0;
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar5 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x268) + 0x18))
                (*(longlong **)(param_1 + 0x268),&local_130,iVar4);
      FUN_004169a0(&local_138,local_128);
      iVar2 = FUN_00416db0(local_130,local_138);
      if (iVar2 == 0) {
        FUN_00daee70(*(undefined8 *)(param_1 + 0x278),iVar4,param_3);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_138,2);
  return;
}

