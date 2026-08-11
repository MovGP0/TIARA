/* Ghidra address: 00dea4d0 */
/* Ghidra symbol: FUN_00dea4d0 */


void FUN_00dea4d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double unaff_XMM6_Qa;
  double unaff_XMM9_Qa;
  double dVar13;
  undefined2 local_a8 [4];
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_016eacf0(param_1,10,2);
  }
  cVar2 = FUN_016eacf0(param_1,4,2);
  if (cVar2 == '\0') {
    dVar6 = (double)FUN_016eb0a0(param_1,5);
    dVar7 = (double)FUN_016ed770(param_2);
    dVar6 = dVar6 + dVar7;
  }
  else {
    dVar6 = (double)FUN_016eb0a0(param_1,5);
  }
  if (cVar1 == '\0') {
    dVar7 = (double)FUN_016eb0a0(param_1,1);
    dVar8 = (double)FUN_016eb0a0(param_1,3);
    uVar9 = FUN_00b90650(0x3ff0000000000000,dVar8 / 100.0);
    dVar8 = (double)FUN_00b90620(0,uVar9);
    dVar13 = dVar6 - 27.0;
    dVar10 = (double)FUN_016eb0a0(param_1,6);
    dVar11 = (double)FUN_016eb0a0(param_1,7);
    dVar12 = (double)FUN_016eb0a0(param_1,8);
    if (dVar12 == 0.0) {
      dVar10 = dVar10 * dVar13 + dVar11 * dVar13 * dVar13 + 1.0;
    }
    else {
      dVar10 = (double)FUN_00c42670(0x3ff028f5c28f5c29,dVar12 * dVar13);
    }
    unaff_XMM9_Qa = dVar8 * dVar7 * dVar10;
    unaff_XMM6_Qa = (1.0 - dVar8) * dVar7 * dVar10;
  }
  else if (cVar1 == '\x01') {
    unaff_XMM9_Qa = 1000000000.0;
    unaff_XMM6_Qa = 1000000000.0;
  }
  local_98 = FUN_016eb0a0(param_1,2);
  local_90 = FUN_016eb0a0(param_1,9);
  local_a8[0] = FUN_016ea1b0(param_1,2);
  iVar3 = FUN_016ee690(param_1,1,0);
  iVar4 = FUN_016ee690(param_1,2,0);
  iVar5 = FUN_016ee690(param_1,3,0);
  local_a0 = 0.0;
  if (iVar3 != iVar5) {
    FUN_00de9fa0(param_1,unaff_XMM9_Qa,dVar6,1,3,1);
    local_a0 = local_a0 + unaff_XMM9_Qa;
  }
  if (iVar4 != iVar5) {
    FUN_00de9fa0(param_1,unaff_XMM6_Qa,dVar6,2,3,1);
    local_a0 = local_a0 + unaff_XMM6_Qa;
  }
  FUN_016ea050(param_1,local_a8,0x20);
  FUN_016e9ff0(param_1,FUN_00de9cb0);
  FUN_016ea040(param_1,FUN_00de9ec0);
  return;
}

