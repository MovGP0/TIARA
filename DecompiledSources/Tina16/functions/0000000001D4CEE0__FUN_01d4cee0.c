/* Ghidra address: 01d4cee0 */
/* Ghidra symbol: FUN_01d4cee0 */


void FUN_01d4cee0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong in_stack_ffffffffffffff58;
  
  dVar1 = (double)FUN_016eb0a0(param_1,1);
  dVar2 = (double)FUN_016eb0a0(param_1,2);
  dVar3 = (double)FUN_016eb0a0(param_1,3);
  dVar4 = (double)FUN_016eb0a0(param_1,4);
  dVar5 = (double)FUN_016eb0a0(param_1,5);
  if ((dVar3 + dVar5) * (dVar3 + dVar5) - dVar3 * 4.0 * (dVar4 + dVar5) <= 0.0) {
    FUN_016fd940(L"BAD PARAMETER (Ti+T)^2<4*Ti*(Td+T)");
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)FUN_0040c760();
  }
  dVar7 = dVar3 / (dVar2 * dVar1);
  dVar6 = (dVar3 + dVar5 + dVar6) / (dVar7 * 2.0);
  dVar2 = ((dVar3 * dVar5 + dVar3 * dVar4) - dVar6 * dVar7 * dVar5) / (dVar1 * dVar6 * dVar7);
  FUN_016e9cd0(param_1,7);
  FUN_016e9e20(param_1,0xd);
  FUN_016ebe60(param_1,1,1,3,in_stack_ffffffffffffff58 & 0xffffffffffffff00);
  FUN_016ed320(param_1,1,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,2,4,0,1);
  FUN_016ed320(param_1,2,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,3,3,5,1);
  FUN_016ed320(param_1,3,0,1.0 / dVar6,0);
  FUN_016ebfa0(param_1,4,5,7,1);
  FUN_016ed220(param_1,4,dVar7,0);
  FUN_016ebfa0(param_1,5,1,6,1);
  FUN_016ed220(param_1,5,dVar2,0);
  FUN_016ebe60(param_1,6,6,3,1);
  FUN_016ed320(param_1,6,0,1.0 / (dVar5 / dVar2),0);
  FUN_016ebe60(param_1,7,7,5,1);
  FUN_016ed320(param_1,7,0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ebe60(param_1,8,6,1,1);
  FUN_016ed320(param_1,8,0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016ec580(param_1,9,4,3,7);
  FUN_016ebe60(param_1,10,7,8,1);
  FUN_016ed320(param_1,10,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,0xb,8,2,1);
  FUN_016ed320(param_1,0xb,0,1.0 / dVar1,0);
  FUN_016ebe60(param_1,0xc,9,0,1);
  FUN_016ed320(param_1,0xc,0,1.0 / dVar1,0);
  FUN_016ec580(param_1,0xd,9,8,2);
  FUN_016e9f40(param_1,FUN_01d4ba70);
  return;
}

