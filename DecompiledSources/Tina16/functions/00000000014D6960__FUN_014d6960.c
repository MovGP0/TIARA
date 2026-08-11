/* Ghidra address: 014d6960 */
/* Ghidra symbol: FUN_014d6960 */


void FUN_014d6960(undefined8 param_1,char param_2,char param_3,char param_4,undefined8 *param_5,
                 char *param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff78;
  ulonglong uVar5;
  undefined8 local_78 [4];
  undefined8 local_58;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar3 = local_78;
  for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_5;
    param_5 = param_5 + 1;
    puVar3 = puVar3 + 1;
  }
  param_6[1] = param_2;
  param_6[2] = param_3;
  param_6[3] = param_4;
  uVar4 = FUN_00b90620(0x3f847ae147ae147b,local_78[2]);
  *(undefined8 *)(param_6 + 8) = uVar4;
  uVar4 = FUN_00b90620(0x3f847ae147ae147b,local_78[3]);
  *(undefined8 *)(param_6 + 0x18) = uVar4;
  uVar4 = FUN_00b90620(0x3f847ae147ae147b,local_58);
  *(undefined8 *)(param_6 + 0x20) = uVar4;
  *(undefined8 *)(param_6 + 0x28) = local_48;
  *(undefined8 *)(param_6 + 0x30) = local_40;
  if (*(double *)(param_6 + 8) <= 0.0 && *(double *)(param_6 + 8) != 0.0) {
    param_6[8] = '\0';
    param_6[9] = '\0';
    param_6[10] = '\0';
    param_6[0xb] = '\0';
    param_6[0xc] = '\0';
    param_6[0xd] = '\0';
    param_6[0xe] = '\0';
    param_6[0xf] = '\0';
  }
  if (*(double *)(param_6 + 0x18) <= 0.0) {
    *(undefined8 *)(param_6 + 0x18) = *(undefined8 *)(param_6 + 8);
  }
  if (*(double *)(param_6 + 0x20) <= 0.0) {
    *(undefined8 *)(param_6 + 0x20) = *(undefined8 *)(param_6 + 8);
  }
  if (local_50 < 0.0) {
    local_50 = 0.0;
  }
  if (*(double *)(param_6 + 0x28) <= 0.0) {
    *(double *)(param_6 + 0x28) = local_50;
  }
  if (*(double *)(param_6 + 0x30) == 0.0) {
    *(double *)(param_6 + 0x30) = local_50;
  }
  *(undefined8 *)(param_6 + 0x40) = local_38;
  *(undefined8 *)(param_6 + 0x48) = local_30;
  *(double *)(param_6 + 0x10) = 1.0 / *(double *)(param_6 + 8);
  param_6[0x50] = '\0';
  param_6[0x51] = '\0';
  param_6[0x52] = '\0';
  param_6[0x53] = '\0';
  param_6[0x54] = '\0';
  param_6[0x55] = '\0';
  param_6[0x56] = '\0';
  param_6[0x57] = '\0';
  param_6[0x58] = '\0';
  param_6[0x59] = '\0';
  param_6[0x5a] = '\0';
  param_6[0x5b] = '\0';
  param_6[0x5c] = '\0';
  param_6[0x5d] = '\0';
  param_6[0x5e] = '\0';
  param_6[0x5f] = '\0';
  cVar1 = FUN_016e9e80(param_1,3);
  *param_6 = cVar1;
  uVar5 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff78 >> 8),1);
  FUN_016ebe60(param_1,cVar1 + '\x01',param_6[2],param_6[3],uVar5);
  FUN_016ebe60(param_1,*param_6 + '\x03',param_6[1],param_6[2],uVar5 & 0xffffffffffffff00);
  FUN_016ec850(param_1,*param_6 + '\x02',param_6[3],param_6[1],*param_6 + '\x01');
  FUN_016ed320(param_1,*param_6 + '\x01',0,*(undefined8 *)(param_6 + 0x10),0);
  FUN_016ed220(param_1,*param_6 + '\x02',*(undefined8 *)(param_6 + 0x10),0);
  FUN_016ed320(param_1,*param_6 + '\x03',0,0,0);
  return;
}

