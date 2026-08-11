/* Ghidra address: 01d4c500 */
/* Ghidra symbol: FUN_01d4c500 */


void FUN_01d4c500(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 local_2d0 [160];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220 [504];
  
  local_230 = *(undefined8 *)PTR_DAT_02004340;
  uStack_228 = *(undefined8 *)(PTR_DAT_02004340 + 8);
  dVar3 = (double)FUN_016eb0a0(param_1,1);
  dVar4 = (double)FUN_016eb0a0(param_1,2);
  dVar5 = (double)FUN_016eb0a0(param_1,3);
  dVar6 = (double)FUN_016eb0a0(param_1,4);
  dVar7 = (double)FUN_016eb0a0(param_1,5);
  FUN_016ebb00(param_1,6,local_2d0,0xa0);
  if ((dVar5 + dVar7) * (dVar5 + dVar7) - dVar5 * 4.0 * (dVar6 + dVar7) <= 0.0) {
    FUN_016fd940(L"BAD PARAMETER (Ti+T)^2<4*Ti*(Td+T)");
    dVar8 = 0.0;
  }
  else {
    dVar8 = (double)FUN_0040c760();
  }
  dVar9 = dVar5 / (dVar4 * dVar3);
  dVar8 = (dVar5 + dVar7 + dVar8) / (dVar9 * 2.0);
  dVar4 = ((dVar5 * dVar7 + dVar5 * dVar6) - dVar8 * dVar9 * dVar7) / (dVar3 * dVar8 * dVar9);
  cVar1 = FUN_016e9d10(param_1,4);
  cVar2 = FUN_016e9e80(param_1,8);
  FUN_016e9f40(param_1,FUN_01d4c4a0);
  FUN_016ebe60(param_1,cVar2 + '\x01',1,cVar1 + '\x01',1);
  FUN_016ed320(param_1,1,0,1.0 / dVar3,0);
  FUN_016ebe60(param_1,cVar2 + '\x02',cVar1 + '\x02',0,1);
  FUN_016ed320(param_1,2,0,1.0 / dVar3,0);
  FUN_016ebe60(param_1,cVar2 + '\x03',cVar1 + '\x01',cVar1 + '\x03',1);
  FUN_016ed320(param_1,3,0,1.0 / dVar8,0);
  FUN_016ebfa0(param_1,cVar2 + '\x04',cVar1 + '\x03',2,1);
  FUN_016ed220(param_1,4,dVar9,0);
  FUN_016ebfa0(param_1,cVar2 + '\x05',1,cVar1 + '\x04',1);
  FUN_016ed220(param_1,5,dVar4,0);
  FUN_016ebe60(param_1,cVar2 + '\x06',cVar1 + '\x04',cVar1 + '\x01',1);
  FUN_016ed320(param_1,6,0,1.0 / (dVar7 / dVar4),0);
  FUN_016ebe60(param_1,cVar2 + '\a',2,cVar1 + '\x03',1);
  FUN_016ed320(param_1,7,0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ebe60(param_1,cVar2 + '\b',cVar1 + '\x04',1,1);
  FUN_016ed320(param_1,6,0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_00e7c120(param_1,param_2,cVar1 + '\x02',cVar1 + '\x01',2,4,3,&local_230,local_2d0,local_220);
  FUN_016ea050(param_1,local_220,0x178);
  return;
}

