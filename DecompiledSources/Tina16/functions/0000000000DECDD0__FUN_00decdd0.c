/* Ghidra address: 00decdd0 */
/* Ghidra symbol: FUN_00decdd0 */


void FUN_00decdd0(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double unaff_XMM6_Qa;
  double unaff_XMM10_Qa;
  double dVar10;
  undefined2 local_98 [4];
  double local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  uVar3 = (undefined1)((ushort)param_3 >> 8);
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar2 = CONCAT11(uVar3,4);
    cVar1 = FUN_016eacf0(param_1,10,uVar2);
    uVar3 = (undefined1)((ushort)uVar2 >> 8);
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      unaff_XMM6_Qa = 1000000000.0;
      goto LAB_00decf87;
    }
    if (cVar1 == '\x02') {
      unaff_XMM6_Qa = 1e-06;
      goto LAB_00decf87;
    }
    if (cVar1 != '\x03') goto LAB_00decf87;
  }
  dVar4 = (double)FUN_016eb0a0(param_1,1);
  dVar5 = (double)FUN_016eb0a0(param_1,3);
  uVar6 = FUN_00b90650(0x3ff0000000000000,dVar5 / 100.0);
  dVar5 = (double)FUN_00b90620(0,uVar6);
  cVar1 = FUN_016eacf0(param_1,4,CONCAT11(uVar3,2));
  if (cVar1 == '\0') {
    dVar7 = (double)FUN_016eb0a0(param_1,5);
    dVar8 = (double)FUN_016ed770(param_2);
    unaff_XMM10_Qa = dVar7 + dVar8;
  }
  else {
    unaff_XMM10_Qa = (double)FUN_016eb0a0(param_1,5);
  }
  dVar10 = unaff_XMM10_Qa - 27.0;
  dVar7 = (double)FUN_016eb0a0(param_1,6);
  dVar8 = (double)FUN_016eb0a0(param_1,7);
  dVar9 = (double)FUN_016eb0a0(param_1,8);
  if (dVar9 == 0.0) {
    dVar7 = dVar7 * dVar10 + dVar8 * dVar10 * dVar10 + 1.0;
  }
  else {
    dVar7 = (double)FUN_00c42670(0x3ff028f5c28f5c29,dVar9 * dVar10);
  }
  unaff_XMM6_Qa = dVar5 * dVar4 * dVar7;
LAB_00decf87:
  local_90 = unaff_XMM6_Qa;
  local_88 = FUN_016eb0a0(param_1,2);
  local_80 = FUN_016eb0a0(param_1,9);
  local_98[0] = FUN_016ea1b0(param_1,2);
  FUN_00de9fa0(param_1,unaff_XMM6_Qa,unaff_XMM10_Qa,1,2,1);
  FUN_016ea050(param_1,local_98,0x20);
  FUN_016e9ff0(param_1,FUN_00de9cb0);
  FUN_016ea040(param_1,FUN_00de9ec0);
  return;
}

