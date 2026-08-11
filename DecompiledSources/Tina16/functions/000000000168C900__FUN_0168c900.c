/* Ghidra address: 0168c900 */
/* Ghidra symbol: FUN_0168c900 */


double FUN_0168c900(longlong param_1,double param_2,double param_3,double param_4,double param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [128];
  
  dVar4 = param_2 / param_3;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x58);
  FUN_01b0f890(local_98,-param_2 / dVar4,-param_2);
  FUN_005980d0(lVar1 + 8,local_98);
  dVar2 = (double)FUN_0040af80(param_4 / param_3);
  dVar5 = param_2 * (dVar2 - 1.0);
  dVar6 = 1.0 / (1.0 / ((param_2 / param_3) * dVar2) + param_5);
  dVar7 = param_4 + dVar5 * param_5;
  dVar2 = (dVar5 - dVar6 * dVar7) / (dVar4 - dVar6);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x58);
  FUN_01b0f890(local_b0,dVar2,dVar4 * dVar2);
  FUN_005980d0(lVar1 + 8,local_b0);
  param_4 = param_4 + param_3 * 8.0;
  dVar2 = (double)FUN_0040af80(param_4 / param_3);
  dVar4 = param_2 * (dVar2 - 1.0);
  dVar3 = 1.0 / (1.0 / ((param_2 / param_3) * dVar2) + param_5);
  dVar2 = (((dVar4 - dVar5) + dVar6 * dVar7) - dVar3 * (param_4 + dVar4 * param_5)) /
          (dVar6 - dVar3);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5d0) + 0x58);
  FUN_01b0f890(local_c8,dVar2,dVar5 + dVar6 * (dVar2 - dVar7));
  FUN_005980d0(lVar1 + 8,local_c8);
  return dVar3;
}

