/* Ghidra address: 016bdfc0 */
/* Ghidra symbol: FUN_016bdfc0 */


undefined8 FUN_016bdfc0(undefined8 param_1,byte *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 local_130;
  undefined1 local_128 [8];
  undefined8 local_120;
  byte local_118 [256];
  
  local_120 = 0;
  lVar2 = (ulonglong)*param_2 + 1;
  pbVar3 = local_118;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar3 = *param_2;
    param_2 = param_2 + 1;
    pbVar3 = pbVar3 + 1;
  }
  if (param_3 == '\0') {
    FUN_016bdd70(param_1,&local_120,local_128,0);
    local_130 = FUN_016bdb60(param_1,local_118,local_128,local_120,3);
  }
  else {
    cVar1 = FUN_016bdd70(param_1,&local_120,local_128,param_3);
    if (cVar1 == '\0') {
      local_130 = 0;
    }
    else {
      local_130 = FUN_016bdb60(param_1,local_118,local_128,local_120,3);
    }
  }
  FUN_004144d0(&local_120);
  return local_130;
}

