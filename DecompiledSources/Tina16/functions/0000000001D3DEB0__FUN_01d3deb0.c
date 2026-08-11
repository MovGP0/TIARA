/* Ghidra address: 01d3deb0 */
/* Ghidra symbol: FUN_01d3deb0 */


int FUN_01d3deb0(byte *param_1,ushort param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int local_13c;
  undefined8 local_138;
  undefined8 local_130;
  byte local_128 [264];
  
  local_138 = 0;
  local_130 = 0;
  lVar3 = (ulonglong)*param_1 + 1;
  pbVar1 = local_128;
  for (; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pbVar1 = *param_1;
    param_1 = param_1 + 1;
    pbVar1 = pbVar1 + 1;
  }
  iVar4 = 0;
  if (param_5 == 1) {
    FUN_004169a0(&local_130,local_128);
    local_13c = FUN_004170c0(&LAB_01d3dff8,local_130,1);
  }
  else {
    local_13c = local_128[0] + 1;
  }
  if (param_4 <= (int)(uint)local_128[0]) {
    iVar2 = ((uint)local_128[0] - param_4) + 1;
    pbVar1 = local_128 + param_4;
    do {
      if (*pbVar1 == param_2) {
        iVar4 = iVar4 + 1;
      }
      if (iVar4 == param_3) {
        if (param_5 == 1) {
          FUN_004169a0(&local_138,local_128);
          iVar4 = FUN_004170c0(&LAB_01d3dff8,local_138,1);
          if (iVar4 <= param_4) goto LAB_01d3df8e;
        }
        else {
LAB_01d3df8e:
          if (param_5 != 2) break;
        }
        local_13c = param_4;
        break;
      }
      param_4 = param_4 + 1;
      pbVar1 = pbVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_138,2);
  return local_13c;
}

