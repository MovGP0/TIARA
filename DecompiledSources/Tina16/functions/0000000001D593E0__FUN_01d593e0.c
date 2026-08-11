/* Ghidra address: 01d593e0 */
/* Ghidra symbol: FUN_01d593e0 */


void FUN_01d593e0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 *param_5,double *param_6,char *param_7,char param_8)

{
  char cVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double unaff_XMM6_Qa;
  undefined8 in_stack_ffffffffffffff58;
  undefined8 uVar5;
  ulonglong uVar6;
  uint7 uVar7;
  ulonglong in_stack_ffffffffffffff60;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  
  local_70 = (double)*param_5;
  local_68 = (double)param_5[1];
  local_60 = param_5[2];
  local_58 = (double)param_5[3];
  local_50 = (double)param_5[4];
  dVar3 = (double)FUN_00b90620(*param_6,0x3d719799812dea11);
  *param_6 = dVar3;
  local_58 = (double)FUN_00b90660(local_58,0x412e848000000000,0x4000000000000000);
  local_50 = (double)FUN_00b90660(local_50,0x426d1a94a2000000,0x3f50624dd2f1a9fc);
  local_70 = (double)FUN_00b90660(local_70,0x40f86a0000000000,0);
  local_68 = (double)FUN_00b90660(local_68,1.0 / *(double *)(param_2 + 0x430),
                                  *(undefined8 *)(param_2 + 0x430));
  local_60 = FUN_00b90660(local_60,0x3f50624dd2f1a9fc,0);
  uVar2 = FUN_016e9e80(param_1,3);
  *(uint *)(param_7 + 4) = uVar2 & 0xff;
  cVar1 = FUN_016e9d10(param_1,2);
  *param_7 = cVar1 + '\x01';
  param_7[1] = cVar1 + '\x02';
  param_7[2] = cVar1 + '\x03';
  param_7[3] = cVar1 + '\x04';
  uVar5 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff58 >> 8),1);
  FUN_016ebe60(param_1,param_7[4] + '\x01',param_3,*param_7,uVar5);
  uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebe60(param_1,param_7[4] + '\x03',*param_7,param_4,uVar5);
  uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  FUN_016ebfa0(param_1,param_7[4] + '\x02',param_3,param_4,uVar6);
  uVar7 = (uint7)(uVar6 >> 8);
  if (param_7[0x30] == '\x01') {
    uVar6 = (ulonglong)uVar7 << 8;
    FUN_011646d0(param_1,param_2,param_7[1],0,uVar6,in_stack_ffffffffffffff60 & 0xffffffffffffff00,
                 param_6,param_7 + 0x38);
  }
  else if (param_7[0x30] == '\x02') {
    uVar6 = (ulonglong)uVar7 << 8;
    FUN_01163ad0(param_1,param_7[1],0,0,uVar6,param_6,param_7 + 0x38);
  }
  else {
    FUN_01b04d70(0x134,&LAB_01d59934,0);
  }
  if (param_7[0x30] == '\x01') {
    unaff_XMM6_Qa = (double)FUN_01164140(param_7 + 0x38);
  }
  else if (param_7[0x30] == '\x02') {
    unaff_XMM6_Qa = (double)FUN_01163590(param_7 + 0x38);
  }
  dVar3 = local_70;
  if (param_8 == '\0') {
    local_70 = (double)FUN_0040c760((local_70 * param_6[1]) /
                                    (unaff_XMM6_Qa * 1.2566370614359173e-06 * *param_6));
  }
  else {
    dVar3 = (unaff_XMM6_Qa * 1.2566370614359173e-06 * local_70 * local_70 * *param_6) / param_6[1];
  }
  local_78 = local_70;
  FUN_01d57290(param_1,*param_7,param_4,param_7[1],uVar6 & 0xffffffffffffff00,&local_78,param_7 + 8)
  ;
  dVar3 = local_50 * 6.283185307179586 * dVar3;
  if (dVar3 / local_58 <= local_68) {
    dVar3 = 1.0 / *(double *)(param_2 + 0x430);
  }
  else {
    dVar4 = (double)FUN_0040c760(local_58 *
                                 (local_58 * dVar3 * dVar3 -
                                 local_68 * 4.0 * (local_68 * local_58 - dVar3)));
    dVar3 = (dVar3 / ((dVar3 - local_58 * local_68) * 2.0)) * (local_58 * dVar3 + dVar4);
  }
  FUN_016ed320(param_1,param_7[4] + '\x01',0,1.0 / local_68,0);
  FUN_016ed220(param_1,param_7[4] + '\x02',local_60,0);
  FUN_016ed320(param_1,param_7[4] + '\x03',0,1.0 / dVar3,0);
  return;
}

