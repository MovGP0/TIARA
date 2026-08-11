/* Ghidra address: 012a4f60 */
/* Ghidra symbol: FUN_012a4f60 */


void FUN_012a4f60(longlong *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                 undefined1 *param_6,undefined1 *param_7)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  double local_40 [2];
  
  iVar1 = (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1]);
  if ((iVar1 < (int)param_1[0x1d]) || ((int)param_1[0x1d] < 1)) {
    local_40[0] = 2.0;
    *param_7 = 1;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x30))
                      ((longlong *)param_1[1],(int)param_1[0x1d] + -1);
    lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105a20);
    (**(code **)(*param_1 + 0x78))(param_1,lVar3 + 0x2a,local_40,1);
    *param_7 = 2;
  }
  *param_2 = (local_40[0] * (double)*(byte *)((longlong)param_1 + 0xa2)) / 2.0;
  *param_3 = -*param_2;
  *param_4 = local_40[0] / 10.0;
  iVar1 = (**(code **)(*param_1 + 0xc0))(param_1);
  if (iVar1 == 0) {
    *param_5 = 0.0;
  }
  else {
    uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],iVar1 + -1);
    lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105a20);
    *param_5 = *(double *)(lVar3 + 0x110);
    *param_2 = *param_2 - *param_5;
    *param_3 = *param_3 - *param_5;
  }
  *param_6 = 0;
  return;
}

