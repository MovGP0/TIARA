/* Ghidra address: 013b27a0 */
/* Ghidra symbol: FUN_013b27a0 */


undefined1 FUN_013b27a0(longlong param_1,byte *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 local_149;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  byte local_128 [264];
  
  local_140 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  lVar3 = (ulonglong)*param_2 + 1;
  pbVar5 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  local_149 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x268) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x268) + 0x18))
                (*(longlong **)(param_1 + 0x268),&local_140,iVar4);
      FUN_004169a0(&local_148,local_128);
      iVar2 = FUN_00416db0(local_140,local_148);
      if (iVar2 == 0) {
        local_149 = 1;
        goto LAB_013b28fa;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_3 != '\0') {
    FUN_004169a0(&local_130,local_128);
    iVar1 = 0;
    do {
      if (iVar1 == 0) {
        FUN_00414b50(&local_138,L"int_limit");
      }
      else {
        FUN_00414b50(&local_138,L"int_subdiv");
      }
      iVar4 = FUN_004170c0(local_138,local_130,1);
      if (iVar4 == 1) {
        (**(code **)(**(longlong **)(param_1 + 0x268) + 0x78))
                  (*(longlong **)(param_1 + 0x268),local_130);
        FUN_00daed60(*(undefined8 *)(param_1 + 0x278),0);
        local_149 = 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 2);
  }
LAB_013b28fa:
  FUN_00414560(&local_148,4);
  return local_149;
}

