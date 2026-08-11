/* Ghidra address: 016020d0 */
/* Ghidra symbol: FUN_016020d0 */


undefined8 FUN_016020d0(longlong *param_1,byte *param_2,char param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 local_154;
  undefined8 local_148;
  undefined8 local_140 [2];
  byte *local_130;
  byte local_128 [264];
  
  local_140[0] = 0;
  local_148 = 0;
  lVar5 = (ulonglong)*param_2 + 1;
  pbVar7 = local_128;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pbVar7 = *param_2;
    param_2 = param_2 + 1;
    pbVar7 = pbVar7 + 1;
  }
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  cVar1 = FUN_01d400c0(uVar2);
  if (cVar1 == '\0') {
    cVar1 = FUN_01d40080(uVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_01d400a0(uVar2);
      if (cVar1 != '\0') {
        local_154 = 2;
      }
    }
    else {
      local_154 = 1;
    }
  }
  else {
    local_154 = 0;
  }
  iVar6 = 0;
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_130);
    if (*local_130 == 0) {
      iVar6 = *(int *)(PTR_DAT_020030c0 + 0x34);
    }
    else {
      iVar6 = *local_130 - 1;
    }
  }
  iVar3 = FUN_01601f60(local_128,local_154);
  if (iVar3 == -1) {
    FUN_004154b0(local_140,local_128,0);
    FUN_004155b0(local_140,": catalog entry name not found");
    FUN_00416880(&local_148,local_140[0]);
    uVar4 = FUN_0044d490(&PTR_FUN_01572588,1,local_148);
    iVar3 = FUN_004134c0(uVar4);
  }
  uVar4 = FUN_01602050(param_1,iVar3 + iVar6);
  FUN_00414480(&local_148);
  FUN_004144d0(local_140);
  return uVar4;
}

