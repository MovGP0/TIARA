/* Ghidra address: 01d3e250 */
/* Ghidra symbol: FUN_01d3e250 */


int FUN_01d3e250(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_338;
  undefined8 local_330;
  byte local_328 [776];
  
  local_338 = 0;
  local_330 = 0;
  pbVar3 = local_328;
  for (lVar5 = 0x60; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pbVar3 = *param_1;
    param_1 = param_1 + 1;
    pbVar3 = pbVar3 + 8;
  }
  if (param_2 == 1) {
    iVar2 = 1;
    FUN_004169a0(&local_330,local_328);
    uVar1 = FUN_004170c0(&LAB_01d3e358,local_330,1);
  }
  else {
    FUN_004169a0(&local_338,local_328);
    iVar2 = FUN_004170c0(&LAB_01d3e358,local_338,1);
    uVar1 = (uint)local_328[0];
  }
  iVar4 = 0;
  if (iVar2 <= (int)uVar1) {
    iVar6 = (uVar1 - iVar2) + 1;
    pbVar3 = local_328 + iVar2;
    do {
      if (*pbVar3 == 0x2c) {
        iVar4 = iVar4 + 1;
      }
      pbVar3 = pbVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_338,2);
  return iVar4 + 1;
}

