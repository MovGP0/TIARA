/* Ghidra address: 0141ec20 */
/* Ghidra symbol: FUN_0141ec20 */


void FUN_0141ec20(undefined8 param_1,longlong param_2,char param_3,char param_4,char param_5,
                 char param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 param_14,char *param_15)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffd8;
  ulonglong uVar3;
  
  param_15[1] = param_3;
  param_15[2] = param_4;
  param_15[3] = param_5;
  param_15[4] = param_6;
  *(undefined8 *)(param_15 + 0x10) = param_8;
  *(undefined8 *)(param_15 + 8) = param_7;
  *(undefined8 *)(param_15 + 0x18) = param_9;
  *(undefined8 *)(param_15 + 0x20) = param_10;
  *(undefined8 *)(param_15 + 0x28) = param_11;
  *(undefined8 *)(param_15 + 0x38) = param_12;
  *(undefined8 *)(param_15 + 0x30) = param_13;
  *(undefined8 *)(param_15 + 0x40) = param_14;
  cVar1 = FUN_016e9e80(param_1,4);
  *param_15 = cVar1;
  cVar1 = FUN_016e9d10(param_1,2);
  if (*(double *)(param_15 + 0x20) <= 0.0) {
    param_15[0x20] = '\0';
    param_15[0x21] = '\0';
    param_15[0x22] = '\0';
    param_15[0x23] = '\0';
    param_15[0x24] = '\0';
    param_15[0x25] = '\0';
    param_15[0x26] = -0x30;
    param_15[0x27] = '?';
  }
  if (*(double *)(param_15 + 0x18) <= 0.0) {
    param_15[0x18] = '\0';
    param_15[0x19] = '\0';
    param_15[0x1a] = '\0';
    param_15[0x1b] = '\0';
    param_15[0x1c] = 'e';
    param_15[0x1d] = -0x33;
    param_15[0x1e] = -0x33;
    param_15[0x1f] = 'A';
  }
  *(double *)(param_15 + 0x50) = 1.0 / *(double *)(param_2 + 0x760);
  param_15[0x58] = '\0';
  param_15[0x59] = '\0';
  param_15[0x5a] = '\0';
  param_15[0x5b] = '\0';
  param_15[0x5c] = '\0';
  param_15[0x5d] = '\0';
  param_15[0x5e] = -0x10;
  param_15[0x5f] = '?';
  param_15[0x7c] = '\0';
  param_15[0x7d] = '\0';
  param_15[0x7e] = '\0';
  param_15[0x7f] = '\0';
  param_15[0x78] = '\x05';
  param_15[0x79] = '\0';
  param_15[0x7a] = '\0';
  param_15[0x7b] = '\0';
  uVar2 = FUN_00409570(0x90);
  *(undefined8 *)(param_15 + 0x70) = uVar2;
  if (*(double *)(param_15 + 0x10) <= 0.0) {
    *(double *)(param_15 + 0x10) = *(double *)(param_15 + 0x20) / *(double *)(param_15 + 0x18);
  }
  *(double *)(param_15 + 0x48) = 1.0 / *(double *)(param_15 + 8);
  uVar3 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffffd8 >> 8),1);
  FUN_016ebe60(param_1,*param_15 + '\x01',param_15[1],cVar1 + '\x01',uVar3);
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_016ebdd0(param_1,*param_15 + '\x02',cVar1 + '\x01',param_15[2],uVar3);
  uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
  FUN_016ebe60(param_1,*param_15 + '\x03',param_15[3],cVar1 + '\x02',uVar3);
  FUN_016ebdd0(param_1,*param_15 + '\x04',cVar1 + '\x02',param_15[4],uVar3 & 0xffffffffffffff00);
  FUN_016ed320(param_1,*param_15 + '\x01',0,*(undefined8 *)(param_15 + 0x48),0);
  FUN_016ed320(param_1,*param_15 + '\x03',0,*(undefined8 *)(param_15 + 0x48),0);
  return;
}

