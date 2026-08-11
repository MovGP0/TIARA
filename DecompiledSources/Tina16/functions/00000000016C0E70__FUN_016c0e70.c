/* Ghidra address: 016c0e70 */
/* Ghidra symbol: FUN_016c0e70 */


undefined1
FUN_016c0e70(undefined8 param_1,longlong *param_2,byte *param_3,byte *param_4,int *param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 local_249;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  byte local_228 [256];
  byte local_128 [264];
  
  local_240 = 0;
  local_248 = 0;
  local_230 = 0;
  local_238 = 0;
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar4 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  lVar2 = (ulonglong)*param_4 + 1;
  pbVar4 = local_228;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_4;
    param_4 = param_4 + 1;
    pbVar4 = pbVar4 + 1;
  }
  local_249 = 0;
  iVar3 = 0;
  do {
    iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar1 + -1 < iVar3 + 1) {
LAB_016c0f7e:
      FUN_00414560(&local_248,4);
      return local_249;
    }
    (**(code **)(*param_2 + 0x18))(param_2,&local_230,iVar3);
    FUN_004169a0(&local_238,local_128);
    iVar1 = FUN_00416db0(local_230,local_238);
    if (iVar1 == 0) {
      (**(code **)(*param_2 + 0x18))(param_2,&local_240,iVar3 + 1);
      FUN_004169a0(&local_248,local_228);
      iVar1 = FUN_00416db0(local_240,local_248);
      if (iVar1 == 0) {
        local_249 = 1;
        *param_5 = iVar3 / 2;
        goto LAB_016c0f7e;
      }
    }
    iVar3 = iVar3 + 2;
  } while( true );
}

