/* Ghidra address: 012a4ce0 */
/* Ghidra symbol: FUN_012a4ce0 */


void FUN_012a4ce0(longlong *param_1,double *param_2,double *param_3,double *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  double local_40 [2];
  
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],uVar1);
  lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105a20);
  (**(code **)(*param_1 + 0x78))(param_1,lVar3 + 0x2a,local_40,1);
  *param_2 = (local_40[0] * 1000000.0 * (double)*(byte *)((longlong)param_1 + 0xa2)) / 2.0;
  *param_3 = -*param_2;
  *param_4 = local_40[0] / 4.0;
  return;
}

