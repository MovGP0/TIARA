/* Ghidra address: 014d60c0 */
/* Ghidra symbol: FUN_014d60c0 */


void FUN_014d60c0(undefined8 param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined8 param_6,undefined8 *param_7,char *param_8)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong in_stack_ffffffffffffff68;
  ulonglong uVar5;
  undefined8 local_80 [4];
  undefined8 local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar3 = local_80;
  for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_7;
    param_7 = param_7 + 1;
    puVar3 = puVar3 + 1;
  }
  param_8[1] = param_2;
  param_8[2] = param_3;
  param_8[3] = param_4;
  param_8[4] = param_5;
  uVar4 = FUN_00b90620(0x3f847ae147ae147b,local_80[2]);
  *(undefined8 *)(param_8 + 8) = uVar4;
  uVar4 = FUN_00b90620(0x3f847ae147ae147b,local_80[3]);
  *(undefined8 *)(param_8 + 0x18) = uVar4;
  uVar4 = FUN_00b90620(0x3f847ae147ae147b,local_60);
  *(undefined8 *)(param_8 + 0x20) = uVar4;
  *(undefined8 *)(param_8 + 0x28) = local_50;
  *(undefined8 *)(param_8 + 0x30) = local_48;
  if (*(double *)(param_8 + 8) <= 0.0 && *(double *)(param_8 + 8) != 0.0) {
    param_8[8] = '\0';
    param_8[9] = '\0';
    param_8[10] = '\0';
    param_8[0xb] = '\0';
    param_8[0xc] = '\0';
    param_8[0xd] = '\0';
    param_8[0xe] = '\0';
    param_8[0xf] = '\0';
  }
  if (*(double *)(param_8 + 0x18) <= 0.0) {
    *(undefined8 *)(param_8 + 0x18) = *(undefined8 *)(param_8 + 8);
  }
  if (*(double *)(param_8 + 0x20) <= 0.0) {
    *(undefined8 *)(param_8 + 0x20) = *(undefined8 *)(param_8 + 8);
  }
  if (local_58 < 0.0) {
    local_58 = 0.0;
  }
  if (*(double *)(param_8 + 0x28) <= 0.0) {
    *(double *)(param_8 + 0x28) = local_58;
  }
  if (*(double *)(param_8 + 0x30) == 0.0) {
    *(double *)(param_8 + 0x30) = local_58;
  }
  *(undefined8 *)(param_8 + 0x40) = local_38;
  *(undefined8 *)(param_8 + 0x48) = local_30;
  *(undefined8 *)(param_8 + 0x38) = local_40;
  *(double *)(param_8 + 0x10) = 1.0 / (*(double *)(param_8 + 8) * 2.0);
  param_8[0x50] = '\0';
  param_8[0x51] = '\0';
  param_8[0x52] = '\0';
  param_8[0x53] = '\0';
  param_8[0x54] = '\0';
  param_8[0x55] = '\0';
  param_8[0x56] = '\0';
  param_8[0x57] = '\0';
  param_8[0x58] = '\0';
  param_8[0x59] = '\0';
  param_8[0x5a] = '\0';
  param_8[0x5b] = '\0';
  param_8[0x5c] = '\0';
  param_8[0x5d] = '\0';
  param_8[0x5e] = '\0';
  param_8[0x5f] = '\0';
  cVar1 = FUN_016e9e80(param_1,7);
  *param_8 = cVar1;
  in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,cVar1 + '\x01',param_8[3],param_8[4],in_stack_ffffffffffffff68);
  uVar4 = CONCAT71((int7)(in_stack_ffffffffffffff68 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\x03',param_8[3],param_8[2],uVar4);
  uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  FUN_016ebe60(param_1,*param_8 + '\x05',param_8[2],param_8[4],uVar5);
  FUN_016ebe60(param_1,*param_8 + '\a',param_8[1],param_8[2],uVar5 & 0xffffffffffffff00);
  FUN_016ec850(param_1,*param_8 + '\x02',param_8[1],param_8[2],*param_8 + '\x01');
  FUN_016ec850(param_1,*param_8 + '\x04',param_8[1],param_8[3],*param_8 + '\x03');
  FUN_016ec850(param_1,*param_8 + '\x06',param_8[4],param_8[1],*param_8 + '\x05');
  FUN_016ed320(param_1,*param_8 + '\x03',0,*(undefined8 *)(param_8 + 0x10),0);
  FUN_016ed220(param_1,*param_8 + '\x04',*(undefined8 *)(param_8 + 0x10),0);
  FUN_016ed320(param_1,*param_8 + '\x05',0,*(undefined8 *)(param_8 + 0x10),0);
  FUN_016ed220(param_1,*param_8 + '\x06',*(undefined8 *)(param_8 + 0x10),0);
  FUN_016ed320(param_1,*param_8 + '\x01',0,0,0);
  FUN_016ed220(param_1,*param_8 + '\x02',0,0);
  FUN_016ed320(param_1,*param_8 + '\a',0,0,0);
  return;
}

