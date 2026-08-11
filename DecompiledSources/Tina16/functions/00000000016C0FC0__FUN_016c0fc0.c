/* Ghidra address: 016c0fc0 */
/* Ghidra symbol: FUN_016c0fc0 */


undefined1 FUN_016c0fc0(undefined8 param_1,longlong *param_2,byte *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 local_139;
  undefined8 local_138;
  undefined8 local_130;
  byte local_128 [264];
  
  local_130 = 0;
  local_138 = 0;
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar4 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  local_139 = 0;
  iVar3 = 0;
  do {
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar1 <= iVar3) {
LAB_016c1051:
      FUN_00414560(&local_138,2);
      return local_139;
    }
    FUN_004b5390(param_2,&local_130,iVar3);
    FUN_004169a0(&local_138,local_128);
    iVar1 = FUN_00416db0(local_130,local_138);
    if (iVar1 == 0) {
      local_139 = 1;
      *param_4 = iVar3;
      goto LAB_016c1051;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

