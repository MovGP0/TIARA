/* Ghidra address: 0171ad80 */
/* Ghidra symbol: FUN_0171ad80 */


int FUN_0171ad80(undefined8 param_1,longlong *param_2,byte *param_3,int param_4,longlong param_5,
                int *param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  bool bVar5;
  undefined1 auStack_188 [32];
  longlong *local_168;
  int local_160;
  int local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140 [2];
  byte local_130 [256];
  undefined8 local_30;
  
  local_150 = 0;
  local_158 = 0;
  local_140[0] = 0;
  local_148 = 0;
  lVar3 = (ulonglong)*param_3 + 1;
  pbVar4 = local_130;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  bVar5 = param_5 == 0;
  local_168 = param_2;
  local_160 = param_4;
  local_15c = param_4;
  while (!bVar5) {
    iVar2 = (**(code **)(*local_168 + 0x28))(local_168);
    if (iVar2 <= local_15c) break;
    (**(code **)(*local_168 + 0x18))(local_168,&local_150,local_15c);
    FUN_004169a0(&local_158,local_130);
    iVar2 = FUN_00416db0(local_150,local_158);
    if (iVar2 != 0) break;
    local_30 = (**(code **)(*local_168 + 0x30))(local_168,local_15c);
    (**(code **)(*local_168 + 0x18))(local_168,local_140,local_15c);
    FUN_004169a0(&local_148,local_130);
    iVar2 = FUN_00416db0(local_140[0],local_148);
    if (iVar2 == 0) {
      cVar1 = FUN_0171abe0(auStack_188);
      if (cVar1 == '\0') goto LAB_0171ae4b;
      bVar5 = true;
    }
    else {
LAB_0171ae4b:
      bVar5 = false;
    }
    if (!bVar5) {
      local_15c = local_15c + 1;
    }
  }
  *param_6 = local_15c - local_160;
  FUN_00414560(&local_158,4);
  return local_15c;
}

