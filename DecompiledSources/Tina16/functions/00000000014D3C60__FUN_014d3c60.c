/* Ghidra address: 014d3c60 */
/* Ghidra symbol: FUN_014d3c60 */


void FUN_014d3c60(undefined8 param_1,longlong param_2,undefined8 *param_3,char param_4,char param_5,
                 double *param_6,char *param_7)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  double dVar9;
  ulonglong in_stack_fffffffffffffee8;
  double local_f8 [4];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_88 [4];
  undefined8 local_68 [4];
  char local_48;
  char local_47;
  byte local_46;
  undefined8 local_40 [3];
  
  local_40[0] = *param_3;
  pdVar8 = local_f8;
  for (lVar5 = 0x17; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar8 = *param_6;
    param_6 = param_6 + 1;
    pdVar8 = pdVar8 + 1;
  }
  param_7[0x18] = local_46;
  FUN_014d2ed0(local_46,param_7);
  iVar4 = (uint)local_46 * 2;
  iVar7 = 1;
  if (local_46 != 0) {
    puVar3 = local_40;
    do {
      *(undefined1 *)(*(longlong *)(param_7 + 0x10) + -1 + (longlong)iVar7) = *(undefined1 *)puVar3;
      iVar7 = iVar7 + 1;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_7[0xc] = param_4;
  param_7[0xd] = param_5;
  *(double *)(param_7 + 0x30) = local_a8;
  *(double *)(param_7 + 0x38) = local_a0;
  *(undefined8 *)(param_7 + 0x48) = local_98;
  iVar4 = 1;
  uVar6 = (uint)(byte)param_7[0x18];
  if (uVar6 != 0) {
    puVar3 = local_88;
    do {
      *(undefined8 *)(*(longlong *)(param_7 + 0x20) + -8 + (longlong)iVar4 * 8) = *puVar3;
      *(undefined8 *)(*(longlong *)(param_7 + 0x28) + -8 + (longlong)iVar4 * 8) = puVar3[4];
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  param_7[0xa8] = local_48;
  param_7[0xa9] = local_47;
  iVar4 = 1;
  uVar6 = (uint)(byte)param_7[0x18];
  do {
    if (uVar6 == 0) {
code_r0x014d3e52:
      cVar1 = FUN_016e9e80(param_1,param_7[0x18] + '\x01');
      *param_7 = cVar1;
      param_7[4] = -1;
      param_7[5] = -1;
      param_7[6] = -1;
      param_7[7] = -1;
      param_7[8] = -1;
      param_7[9] = -1;
      param_7[10] = -1;
      param_7[0xb] = -1;
      FUN_016ebe60(param_1,*param_7 + '\x01',param_7[0xd],param_7[0xc],
                   in_stack_fffffffffffffee8 & 0xffffffffffffff00);
      uVar6 = (uint)(byte)param_7[0x18];
      iVar4 = 0;
      if (-1 < (int)(uVar6 - 1)) {
        do {
          FUN_016ec850(param_1,*param_7 + (char)iVar4 + '\x02',
                       *(undefined1 *)
                        (*(longlong *)(param_7 + 0x10) + -1 + (longlong)(iVar4 * 2 + 1)),
                       *(undefined1 *)
                        (*(longlong *)(param_7 + 0x10) + -1 + (longlong)(iVar4 * 2 + 2)),
                       *param_7 + '\x01');
          iVar4 = iVar4 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_f8[2] < 1.0) {
        local_f8[2] = 1.0;
      }
      if (0.0 < local_f8[3]) {
        if (local_d8 <= 0.0) {
          local_d8 = local_f8[3];
        }
        if (local_d0 <= 0.0) {
          local_d0 = local_f8[3];
        }
      }
      if (local_c0 <= 0.0) {
        local_c0 = (local_b8 + local_b0) / 2.0;
      }
      else {
        if (local_b8 <= 0.0) {
          local_b8 = local_c0;
        }
        if (local_b0 <= 0.0) {
          local_b0 = local_c0;
        }
      }
      if (0.0 < local_c0) {
        if (1e-06 <= local_d8) {
          if (local_c8 <= 0.0) {
            dVar9 = (double)FUN_00b90620(0x3fb999999999999a,local_a8 - local_a0);
            local_c8 = ((local_d8 * 10.0) / (dVar9 * 6.283185307179586)) / local_f8[0];
          }
        }
        else if (0.0 < local_c8) {
          dVar9 = (double)FUN_00b90620(0x3fb999999999999a,local_a8 - local_a0);
          local_d8 = (((dVar9 * 6.283185307179586) / local_f8[0]) * local_c8) / 10.0;
          local_d0 = local_d8;
        }
        else {
          dVar9 = (double)FUN_00b90620(0x3fb999999999999a,local_a8 - local_a0);
          local_d8 = (dVar9 * 10.0) / local_c0;
          local_d0 = local_d8;
          dVar9 = (double)FUN_00b90620(0x3fb999999999999a,local_a8 - local_a0);
          local_c8 = ((local_d8 * 10.0) / (dVar9 * 6.283185307179586)) / local_f8[0];
        }
      }
      if (local_d8 <= 1e-06) {
        if (local_c8 <= 0.001) {
          if (1e+29 <= local_f8[2]) {
            param_7[0x60] = 'H';
            param_7[0x61] = -0x51;
            param_7[0x62] = -0x44;
            param_7[99] = -0x66;
            param_7[100] = -0xe;
            param_7[0x65] = -0x29;
            param_7[0x66] = 'z';
            param_7[0x67] = '>';
          }
          else {
            *(double *)(param_7 + 0x60) = 1.0 / local_f8[2];
          }
          *(double *)(param_7 + 0x50) = *(double *)(param_7 + 0x60) * 100.0;
          *(ulonglong *)(param_7 + 0x58) = *(ulonglong *)(param_7 + 0x50) ^ 0x8000000000000000;
          dVar9 = 0.0;
          *(double *)(param_7 + 0x68) = local_f8[0] * *(double *)(param_7 + 0x60);
        }
        else {
          param_7[0x50] = '-';
          param_7[0x51] = 'C';
          param_7[0x52] = '\x1c';
          param_7[0x53] = -0x15;
          param_7[0x54] = -0x1e;
          param_7[0x55] = '6';
          param_7[0x56] = '\x1a';
          param_7[0x57] = '?';
          *(ulonglong *)(param_7 + 0x58) = *(ulonglong *)(param_7 + 0x50) ^ 0x8000000000000000;
          param_7[0x60] = 'H';
          param_7[0x61] = -0x51;
          param_7[0x62] = -0x44;
          param_7[99] = -0x66;
          param_7[100] = -0xe;
          param_7[0x65] = -0x29;
          param_7[0x66] = 'z';
          param_7[0x67] = '>';
          dVar9 = *(double *)(param_7 + 0x60) / (local_c8 * 6.283185307179586);
          *(double *)(param_7 + 0x68) = local_f8[0] * *(double *)(param_7 + 0x60);
        }
      }
      else {
        param_7[0x50] = '-';
        param_7[0x51] = 'C';
        param_7[0x52] = '\x1c';
        param_7[0x53] = -0x15;
        param_7[0x54] = -0x1e;
        param_7[0x55] = '6';
        param_7[0x56] = '\x1a';
        param_7[0x57] = '?';
        dVar9 = *(double *)(param_7 + 0x50) / local_d8;
        *(double *)(param_7 + 0x58) = -dVar9 * local_d0;
        *(double *)(param_7 + 0x60) = local_c8 * 6.283185307179586 * dVar9;
        *(double *)(param_7 + 0x68) = local_f8[0] * *(double *)(param_7 + 0x60);
      }
      if (0.0 < dVar9) {
        uVar6 = FUN_016e9e80(param_1,1);
        *(uint *)(param_7 + 8) = (uVar6 & 0xff) + 1;
        FUN_016ebfa0(param_1,param_7[8],param_7[0xc],param_7[0xd],1);
        if (0.0 < local_c0) {
          *(double *)(param_7 + 0x30) = local_a8 + (*(double *)(param_7 + 0x50) * local_b8) / dVar9;
          *(double *)(param_7 + 0x38) = local_a0 + (*(double *)(param_7 + 0x58) * local_b0) / dVar9;
        }
      }
      if (local_f8[1] == 0.0) {
        local_f8[1] = 1.0 / *(double *)(param_2 + 0x430);
      }
      if ((local_f8[1] < 1e+29) && (1.0 < local_f8[1])) {
        uVar6 = FUN_016e9e80(param_1,local_46);
        *(uint *)(param_7 + 4) = (uVar6 & 0xff) + 1;
        iVar4 = 0;
        uVar6 = (uint)local_46;
        if (-1 < (int)(uVar6 - 1)) {
          do {
            FUN_016ebe60(param_1,param_7[4] + (char)iVar4,
                         *(undefined1 *)
                          (*(longlong *)(param_7 + 0x10) + -1 + (longlong)(iVar4 * 2 + 1)),
                         *(undefined1 *)
                          (*(longlong *)(param_7 + 0x10) + -1 + (longlong)(iVar4 * 2 + 2)),1);
            iVar4 = iVar4 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      param_7[0x88] = '\0';
      param_7[0x89] = '\0';
      param_7[0x8a] = '\0';
      param_7[0x8b] = '\0';
      param_7[0x8c] = '\0';
      param_7[0x8d] = '\0';
      param_7[0x8e] = '\0';
      param_7[0x8f] = '\0';
      param_7[0x90] = '\0';
      param_7[0x91] = '\0';
      param_7[0x92] = '\0';
      param_7[0x93] = '\0';
      param_7[0x94] = '\0';
      param_7[0x95] = '\0';
      param_7[0x96] = '\0';
      param_7[0x97] = '\0';
      FUN_016ed320(param_1,*param_7 + '\x01',0,*(undefined8 *)(param_7 + 0x60),0);
      if (0 < *(int *)(param_7 + 8)) {
        FUN_016ed220(param_1,*param_7 + param_7[8],dVar9,0);
      }
      if (0 < *(int *)(param_7 + 4)) {
        uVar6 = (uint)local_46;
        cVar1 = '\0';
        if (uVar6 - 1 < 0x80000000) {
          do {
            FUN_016ed320(param_1,param_7[4] + cVar1,0,1.0 / local_f8[1],0);
            cVar1 = cVar1 + '\x01';
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      uVar6 = (uint)local_46;
      cVar1 = '\0';
      if (-1 < (int)(uVar6 - 1)) {
        do {
          FUN_016ed220(param_1,*param_7 + cVar1 + '\x02',*(undefined8 *)(param_7 + 0x68),0);
          cVar1 = cVar1 + '\x01';
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      return;
    }
    if (*(double *)(*(longlong *)(param_7 + 0x28) + -8 + (longlong)iVar4 * 8) != 0.0) {
      uVar2 = FUN_016ea1b0(param_1,CONCAT62((int6)(short)((uint)iVar4 >> 0x10),
                                            (byte)param_7[0x18] + 1));
      *(undefined2 *)(param_7 + 2) = uVar2;
      goto code_r0x014d3e52;
    }
    iVar4 = iVar4 + 1;
    uVar6 = uVar6 - 1;
  } while( true );
}

