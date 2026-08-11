/* Ghidra address: 015699c0 */
/* Ghidra symbol: FUN_015699c0 */


void FUN_015699c0(undefined8 param_1,longlong param_2,undefined4 param_3,double *param_4,
                 double *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  lVar2 = FUN_01571ee0(*(undefined8 *)(param_2 + 0x28),param_3);
  FUN_01569860(param_1,*(undefined4 *)(lVar2 + 0x30),uVar1);
  dVar3 = (double)FUN_01602290(*(undefined8 *)(param_2 + 0x40),&DAT_01569ae0,0);
  dVar4 = (double)FUN_01569940(param_1,uVar1);
  dVar5 = (double)FUN_01602290(*(undefined8 *)(param_2 + 0x40),&DAT_01569ae6,0);
  dVar6 = (double)FUN_01602290(*(undefined8 *)(param_2 + 0x40),&DAT_01569aeb,0);
  dVar7 = (double)FUN_0040c2f0(0x4000000000000000);
  *param_4 = dVar5 * (dVar3 + dVar4) * dVar7;
  dVar5 = (double)FUN_0040c2f0(0x4000000000000000);
  *param_5 = dVar6 * (dVar3 + dVar4) * dVar5;
  FUN_00410f20(uVar1);
  return;
}

