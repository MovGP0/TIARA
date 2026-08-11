/* Ghidra address: 01602340 */
/* Ghidra symbol: FUN_01602340 */


undefined8 FUN_01602340(longlong *param_1,byte *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  byte local_128 [264];
  
  local_130 = 0;
  local_138 = 0;
  lVar5 = (ulonglong)*param_2 + 1;
  pbVar6 = local_128;
  for (; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pbVar6 = *param_2;
    param_2 = param_2 + 1;
    pbVar6 = pbVar6 + 1;
  }
  uVar2 = (**(code **)(*param_1 + 0xf8))(param_1);
  cVar1 = FUN_01d400c0(uVar2);
  if (cVar1 == '\0') {
    cVar1 = FUN_01d40080(uVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_01d400a0(uVar2);
      if (cVar1 != '\0') {
        local_13c = 2;
      }
    }
    else {
      local_13c = 1;
    }
  }
  else {
    local_13c = 0;
  }
  iVar3 = FUN_01601f60(local_128,local_13c);
  if (iVar3 == -1) {
    FUN_004154b0(&local_130,local_128,0);
    FUN_004155b0(&local_130,": catalog entry name not found");
    FUN_00416880(&local_138,local_130);
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_138);
    iVar3 = FUN_004134c0(uVar4);
  }
  uVar4 = FUN_01602090(param_1,iVar3);
  FUN_00414480(&local_138);
  FUN_004144d0(&local_130);
  return uVar4;
}

