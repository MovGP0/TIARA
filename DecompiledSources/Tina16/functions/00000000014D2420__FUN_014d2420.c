/* Ghidra address: 014d2420 */
/* Ghidra symbol: FUN_014d2420 */


void FUN_014d2420(undefined8 param_1,longlong param_2,char param_3,char param_4,char param_5,
                 char param_6,double *param_7,char *param_8)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  ulonglong in_stack_ffffffffffffff38;
  double local_b0 [4];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  pdVar5 = local_b0;
  for (lVar4 = 0xf; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar5 = *param_7;
    param_7 = param_7 + 1;
    pdVar5 = pdVar5 + 1;
  }
  param_8[0xc] = param_3;
  param_8[0xd] = param_4;
  param_8[0xe] = param_5;
  param_8[0xf] = param_6;
  *(double *)(param_8 + 0x28) = local_60;
  *(double *)(param_8 + 0x30) = local_58;
  *(undefined8 *)(param_8 + 0x38) = local_50;
  *(undefined8 *)(param_8 + 0x40) = local_48;
  *(undefined8 *)(param_8 + 0x20) = local_40;
  if (*(double *)(param_8 + 0x20) != 0.0) {
    uVar2 = FUN_016ea1b0(param_1,1);
    *(undefined2 *)(param_8 + 2) = uVar2;
  }
  param_8[0x18] = '\0';
  param_8[0x19] = '\0';
  param_8[0x1a] = '\0';
  param_8[0x1b] = '\0';
  param_8[0x1c] = '\0';
  param_8[0x1d] = '\0';
  param_8[0x1e] = '\0';
  param_8[0x1f] = '\0';
  cVar1 = FUN_016e9e80(param_1,2);
  *param_8 = cVar1;
  param_8[4] = -1;
  param_8[5] = -1;
  param_8[6] = -1;
  param_8[7] = -1;
  param_8[8] = -1;
  param_8[9] = -1;
  param_8[10] = -1;
  param_8[0xb] = -1;
  FUN_016ebe60(param_1,*param_8 + '\x01',param_8[0xf],param_8[0xe],
               in_stack_ffffffffffffff38 & 0xffffffffffffff00);
  FUN_016ec850(param_1,*param_8 + '\x02',param_8[0xc],param_8[0xd],*param_8 + '\x01');
  if (local_b0[2] < 1.0) {
    local_b0[2] = 1.0;
  }
  if (0.0 < local_b0[3]) {
    if (local_90 <= 0.0) {
      local_90 = local_b0[3];
    }
    if (local_88 <= 0.0) {
      local_88 = local_b0[3];
    }
  }
  if (local_78 <= 0.0) {
    local_78 = (local_70 + local_68) / 2.0;
  }
  else {
    if (local_70 <= 0.0) {
      local_70 = local_78;
    }
    if (local_68 <= 0.0) {
      local_68 = local_78;
    }
  }
  if (1e-06 <= local_90) {
    if (local_80 <= 0.0) {
      dVar6 = (double)FUN_00b90620(0x3fb999999999999a,local_60 - local_58);
      local_80 = ((local_90 * 100.0) / (dVar6 * 6.283185307179586)) / local_b0[0];
    }
  }
  else if (0.0 < local_80) {
    dVar6 = (double)FUN_00b90620(0x3fb999999999999a,local_60 - local_58);
    local_90 = (((dVar6 * 6.283185307179586) / local_b0[0]) * local_80) / 100.0;
    local_88 = local_90;
  }
  else if (0.0 < local_78) {
    dVar6 = (double)FUN_00b90620(0x3fb999999999999a,local_60 - local_58);
    local_90 = (dVar6 * 10.0) / local_78;
    local_88 = local_90;
    dVar6 = (double)FUN_00b90620(0x3fb999999999999a,local_60 - local_58);
    local_80 = ((local_90 * 100.0) / (dVar6 * 6.283185307179586)) / local_b0[0];
  }
  if (local_90 <= 1e-06) {
    if (local_80 <= 0.001) {
      if (1e+29 <= local_b0[2]) {
        param_8[0x58] = 'H';
        param_8[0x59] = -0x51;
        param_8[0x5a] = -0x44;
        param_8[0x5b] = -0x66;
        param_8[0x5c] = -0xe;
        param_8[0x5d] = -0x29;
        param_8[0x5e] = 'z';
        param_8[0x5f] = '>';
      }
      else {
        *(double *)(param_8 + 0x58) = 1.0 / local_b0[2];
      }
      *(double *)(param_8 + 0x48) = *(double *)(param_8 + 0x58) * 100.0;
      *(ulonglong *)(param_8 + 0x50) = *(ulonglong *)(param_8 + 0x48) ^ 0x8000000000000000;
      dVar6 = 0.0;
      *(double *)(param_8 + 0x60) = local_b0[0] * *(double *)(param_8 + 0x58);
    }
    else {
      param_8[0x48] = '-';
      param_8[0x49] = 'C';
      param_8[0x4a] = '\x1c';
      param_8[0x4b] = -0x15;
      param_8[0x4c] = -0x1e;
      param_8[0x4d] = '6';
      param_8[0x4e] = '\x1a';
      param_8[0x4f] = '?';
      *(ulonglong *)(param_8 + 0x50) = *(ulonglong *)(param_8 + 0x48) ^ 0x8000000000000000;
      param_8[0x58] = 'H';
      param_8[0x59] = -0x51;
      param_8[0x5a] = -0x44;
      param_8[0x5b] = -0x66;
      param_8[0x5c] = -0xe;
      param_8[0x5d] = -0x29;
      param_8[0x5e] = 'z';
      param_8[0x5f] = '>';
      dVar6 = *(double *)(param_8 + 0x58) / (local_80 * 6.283185307179586);
      *(double *)(param_8 + 0x60) = local_b0[0] * *(double *)(param_8 + 0x58);
    }
  }
  else {
    param_8[0x48] = '-';
    param_8[0x49] = 'C';
    param_8[0x4a] = '\x1c';
    param_8[0x4b] = -0x15;
    param_8[0x4c] = -0x1e;
    param_8[0x4d] = '6';
    param_8[0x4e] = '\x1a';
    param_8[0x4f] = '?';
    dVar6 = *(double *)(param_8 + 0x48) / local_90;
    *(double *)(param_8 + 0x50) = -dVar6 * local_88;
    *(double *)(param_8 + 0x58) = local_80 * 6.283185307179586 * dVar6;
    *(double *)(param_8 + 0x60) = local_b0[0] * *(double *)(param_8 + 0x58);
  }
  if (0.0 < dVar6) {
    uVar3 = FUN_016e9e80(param_1,1);
    *(uint *)(param_8 + 8) = (uVar3 & 0xff) + 1;
    FUN_016ebfa0(param_1,param_8[8],param_8[0xe],param_8[0xf],1);
    if (0.0 < local_78) {
      *(double *)(param_8 + 0x28) = local_60 + (*(double *)(param_8 + 0x48) * local_70) / dVar6;
      *(double *)(param_8 + 0x30) = local_58 + (*(double *)(param_8 + 0x50) * local_68) / dVar6;
    }
  }
  if (local_b0[1] == 0.0) {
    local_b0[1] = 1.0 / *(double *)(param_2 + 0x430);
  }
  if ((local_b0[1] < 1e+29) && (1.0 < local_b0[1])) {
    uVar3 = FUN_016e9e80(param_1,1);
    *(uint *)(param_8 + 4) = (uVar3 & 0xff) + 1;
    FUN_016ebe60(param_1,param_8[4],param_8[0xc],param_8[0xd],1);
  }
  param_8[0x80] = '\0';
  param_8[0x81] = '\0';
  param_8[0x82] = '\0';
  param_8[0x83] = '\0';
  param_8[0x84] = '\0';
  param_8[0x85] = '\0';
  param_8[0x86] = '\0';
  param_8[0x87] = '\0';
  param_8[0x88] = '\0';
  param_8[0x89] = '\0';
  param_8[0x8a] = '\0';
  param_8[0x8b] = '\0';
  param_8[0x8c] = '\0';
  param_8[0x8d] = '\0';
  param_8[0x8e] = '\0';
  param_8[0x8f] = '\0';
  if (0 < *(int *)(param_8 + 4)) {
    FUN_016ed320(param_1,param_8[4],0,1.0 / local_b0[1],0);
  }
  FUN_016ed320(param_1,*param_8 + '\x01',0,*(undefined8 *)(param_8 + 0x58),0);
  if (0 < *(int *)(param_8 + 8)) {
    FUN_016ed220(param_1,*param_8 + param_8[8],dVar6,0);
  }
  FUN_016ed220(param_1,*param_8 + '\x02',*(undefined8 *)(param_8 + 0x60),0);
  return;
}

