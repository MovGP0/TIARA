/* Ghidra address: 014d4a40 */
/* Ghidra symbol: FUN_014d4a40 */


void FUN_014d4a40(undefined8 param_1,longlong param_2,char param_3,char param_4,char param_5,
                 char param_6,double *param_7,char *param_8)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  double *pdVar5;
  ulonglong in_stack_ffffffffffffff88;
  double local_68 [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  pdVar5 = local_68;
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_7;
    param_7 = param_7 + 1;
    pdVar5 = pdVar5 + 1;
  }
  param_8[0xc] = param_3;
  param_8[0xd] = param_4;
  param_8[0xe] = param_5;
  param_8[0xf] = param_6;
  *(double *)(param_8 + 0x48) = local_68[0];
  *(double *)(param_8 + 0x50) = local_68[2];
  *(double *)(param_8 + 0x28) = local_68[3];
  *(undefined8 *)(param_8 + 0x30) = local_48;
  *(undefined8 *)(param_8 + 0x38) = local_40;
  *(undefined8 *)(param_8 + 0x40) = local_38;
  *(undefined8 *)(param_8 + 0x20) = local_30;
  param_8[0x18] = '\0';
  param_8[0x19] = '\0';
  param_8[0x1a] = '\0';
  param_8[0x1b] = '\0';
  param_8[0x1c] = '\0';
  param_8[0x1d] = '\0';
  param_8[0x1e] = '\0';
  param_8[0x1f] = '\0';
  param_8[0x58] = '\0';
  param_8[0x59] = '\0';
  param_8[0x5a] = '\0';
  param_8[0x5b] = '\0';
  param_8[0x5c] = '\0';
  param_8[0x5d] = '\0';
  param_8[0x5e] = '\0';
  param_8[0x5f] = '\0';
  if (*(double *)(param_8 + 0x20) != 0.0) {
    uVar2 = FUN_016ea1b0(param_1,1);
    *(undefined2 *)(param_8 + 2) = uVar2;
  }
  cVar1 = FUN_016e9e80(param_1,2);
  *param_8 = cVar1;
  param_8[4] = -1;
  param_8[5] = -1;
  param_8[6] = -1;
  param_8[7] = -1;
  FUN_016ebdd0(param_1,*param_8 + '\x01',param_8[0xe],param_8[0xf],
               in_stack_ffffffffffffff88 & 0xffffffffffffff00);
  FUN_016ec970(param_1,*param_8 + '\x02',param_8[0xc],param_8[0xd],*param_8 + '\x01');
  if (local_68[1] == 0.0) {
    local_68[1] = 1.0 / *(double *)(param_2 + 0x430);
  }
  if (local_68[2] < 0.0) {
    local_68[2] = 0.0;
  }
  if ((1.0 < local_68[1]) && (local_68[1] < 1e+29)) {
    uVar3 = FUN_016e9e80(param_1,1);
    *(uint *)(param_8 + 4) = (uVar3 & 0xff) + 1;
    FUN_016ebe60(param_1,param_8[4],param_8[0xc],param_8[0xd],1);
  }
  if (0 < *(int *)(param_8 + 4)) {
    FUN_016ed320(param_1,param_8[4],0,1.0 / local_68[1],0);
  }
  FUN_016ed320(param_1,*param_8 + '\x01',0,local_68[2],0);
  FUN_016ed220(param_1,*param_8 + '\x02',local_68[0],0);
  return;
}

