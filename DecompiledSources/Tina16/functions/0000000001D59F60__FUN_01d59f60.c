/* Ghidra address: 01d59f60 */
/* Ghidra symbol: FUN_01d59f60 */


void FUN_01d59f60(undefined8 param_1,char param_2,char param_3,char param_4,double *param_5,
                 char *param_6)

{
  double dVar1;
  double dVar2;
  char cVar3;
  double dVar4;
  ulonglong in_stack_ffffffffffffffa8;
  uint7 uVar5;
  
  dVar4 = *param_5;
  dVar1 = param_5[1];
  dVar2 = param_5[2];
  param_6[2] = param_2;
  param_6[3] = param_3;
  *(double *)(param_6 + 8) = (dVar1 / 1000.0) / dVar4;
  *(double *)(param_6 + 0x10) = dVar2;
  param_6[1] = param_4;
  *PTR_DAT_02003fd8 = 1;
  cVar3 = FUN_016e9e80(param_1,1);
  *param_6 = cVar3;
  if (param_6[1] == '\0') {
    dVar4 = (double)FUN_0040c850(*(undefined8 *)(param_6 + 8));
    uVar5 = (uint7)(in_stack_ffffffffffffffa8 >> 8);
    if (dVar4 <= 1e-09) {
      FUN_016ebdd0(param_1,cVar3 + '\x01',param_6[2],param_6[3],(ulonglong)uVar5 << 8);
      FUN_016ed320(param_1,*param_6 + '\x01',0,*(undefined8 *)(param_6 + 8),0);
    }
    else {
      FUN_016ebe60(param_1,cVar3 + '\x01',param_6[2],param_6[3],(ulonglong)uVar5 << 8);
      FUN_016ed320(param_1,*param_6 + '\x01',0,1.0 / *(double *)(param_6 + 8),0);
    }
  }
  else if (param_6[1] == '\x01') {
    FUN_016ebe60(param_1,cVar3 + '\x01',param_6[2],param_6[3],
                 in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
    FUN_016ed320(param_1,*param_6 + '\x01',0,0,0);
  }
  return;
}

