/* Ghidra address: 00dea210 */
/* Ghidra symbol: FUN_00dea210 */


void FUN_00dea210(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double unaff_XMM6_Qa;
  double dVar10;
  undefined2 local_98 [4];
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  uVar4 = (undefined1)((ushort)param_3 >> 8);
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar3 = CONCAT11(uVar4,4);
    cVar1 = FUN_016eacf0(param_1,9,uVar3);
    uVar4 = (undefined1)((ushort)uVar3 >> 8);
  }
  cVar2 = FUN_016eacf0(param_1,3,CONCAT11(uVar4,2));
  if (cVar2 == '\0') {
    dVar5 = (double)FUN_016eb0a0(param_1,4);
    dVar6 = (double)FUN_016ed770(param_2);
    dVar5 = dVar5 + dVar6;
  }
  else {
    dVar5 = (double)FUN_016eb0a0(param_1,4);
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      unaff_XMM6_Qa = 1000000000.0;
      goto LAB_00dea383;
    }
    if (cVar1 == '\x02') {
      unaff_XMM6_Qa = 1e-06;
      goto LAB_00dea383;
    }
    if (cVar1 != '\x03') goto LAB_00dea383;
  }
  dVar6 = (double)FUN_016eb0a0(param_1,1);
  dVar10 = dVar5 - 27.0;
  dVar7 = (double)FUN_016eb0a0(param_1,5);
  dVar8 = (double)FUN_016eb0a0(param_1,6);
  dVar9 = (double)FUN_016eb0a0(param_1,7);
  if (dVar9 == 0.0) {
    unaff_XMM6_Qa = dVar6 * (dVar7 * dVar10 + dVar8 * dVar10 * dVar10 + 1.0);
  }
  else {
    dVar7 = (double)FUN_00c42670(0x3ff028f5c28f5c29,dVar9 * dVar10);
    unaff_XMM6_Qa = dVar6 * dVar7;
  }
LAB_00dea383:
  local_90 = unaff_XMM6_Qa;
  local_88 = FUN_016eb0a0(param_1,2);
  local_80 = FUN_016eb0a0(param_1,8);
  local_98[0] = FUN_016ea1b0(param_1,2);
  FUN_00de9fa0(param_1,unaff_XMM6_Qa,dVar5,1,2,0);
  FUN_016ef200(param_1,0x3ff0000000000000,0x3fe0000000000000,0x3f847ae147ae147b,1,1,1,1,2,1,0);
  FUN_016ea050(param_1,local_98,0x20);
  FUN_016e9f40(param_1,FUN_00dea150);
  FUN_016e9ff0(param_1,FUN_00de9cb0);
  FUN_016ea040(param_1,FUN_00de9ec0);
  return;
}

