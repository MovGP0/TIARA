/* Ghidra address: 014d5710 */
/* Ghidra symbol: FUN_014d5710 */


void FUN_014d5710(undefined8 param_1,longlong param_2,undefined8 *param_3,char param_4,char param_5,
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
  ulonglong in_stack_ffffffffffffff38;
  double local_a8 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [4];
  undefined8 local_58 [4];
  char local_38;
  char local_37;
  byte local_36;
  undefined8 local_30;
  
  local_30 = *param_3;
  pdVar8 = local_a8;
  for (lVar5 = 0xf; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar8 = *param_6;
    param_6 = param_6 + 1;
    pdVar8 = pdVar8 + 1;
  }
  param_7[0x18] = local_36;
  FUN_014d4d40(local_36,param_7);
  iVar4 = (uint)local_36 * 2;
  iVar7 = 1;
  if (local_36 != 0) {
    puVar3 = &local_30;
    do {
      *(undefined1 *)(*(longlong *)(param_7 + 0x10) + -1 + (longlong)iVar7) = *(undefined1 *)puVar3;
      iVar7 = iVar7 + 1;
      puVar3 = (undefined8 *)((longlong)puVar3 + 1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_7[0xc] = param_4;
  param_7[0xd] = param_5;
  *(double *)(param_7 + 0x50) = local_a8[0];
  *(double *)(param_7 + 0x58) = local_a8[2];
  *(double *)(param_7 + 0x30) = local_a8[3];
  *(undefined8 *)(param_7 + 0x38) = local_88;
  iVar4 = 1;
  uVar6 = (uint)(byte)param_7[0x18];
  if (uVar6 != 0) {
    puVar3 = local_78;
    do {
      *(undefined8 *)(*(longlong *)(param_7 + 0x20) + -8 + (longlong)iVar4 * 8) = *puVar3;
      *(undefined8 *)(*(longlong *)(param_7 + 0x28) + -8 + (longlong)iVar4 * 8) = puVar3[4];
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  iVar4 = 1;
  uVar6 = (uint)(byte)param_7[0x18];
  do {
    if (uVar6 == 0) {
code_r0x014d58d3:
      *(undefined8 *)(param_7 + 0x48) = local_80;
      param_7[0x60] = local_38;
      param_7[0x61] = local_37;
      cVar1 = FUN_016e9e80(param_1,param_7[0x18] + '\x01');
      *param_7 = cVar1;
      param_7[4] = -1;
      param_7[5] = -1;
      param_7[6] = -1;
      param_7[7] = -1;
      FUN_016ebdd0(param_1,*param_7 + '\x01',param_7[0xc],param_7[0xd],
                   in_stack_ffffffffffffff38 & 0xffffffffffffff00);
      uVar6 = (uint)(byte)param_7[0x18];
      iVar4 = 0;
      if (-1 < (int)(uVar6 - 1)) {
        do {
          FUN_016ec970(param_1,*param_7 + (char)iVar4 + '\x02',
                       *(undefined1 *)
                        (*(longlong *)(param_7 + 0x10) + -1 + (longlong)(iVar4 * 2 + 1)),
                       *(undefined1 *)
                        (*(longlong *)(param_7 + 0x10) + -1 + (longlong)(iVar4 * 2 + 2)),
                       *param_7 + '\x01');
          iVar4 = iVar4 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_a8[1] == 0.0) {
        local_a8[1] = 1.0 / *(double *)(param_2 + 0x430);
      }
      if (local_a8[2] < 0.0) {
        local_a8[2] = 0.0;
      }
      if ((1.0 < local_a8[1]) && (local_a8[1] < 1e+29)) {
        uVar6 = FUN_016e9e80(param_1,local_36);
        *(uint *)(param_7 + 4) = (uVar6 & 0xff) + 1;
        iVar4 = 0;
        uVar6 = (uint)local_36;
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
      if (0 < *(int *)(param_7 + 4)) {
        uVar6 = (uint)local_36;
        cVar1 = '\0';
        if (-1 < (int)(uVar6 - 1)) {
          do {
            FUN_016ed320(param_1,param_7[4] + cVar1,0,1.0 / local_a8[1],0);
            cVar1 = cVar1 + '\x01';
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      FUN_016ed320(param_1,*param_7 + '\x01',0,local_a8[2],0);
      uVar6 = (uint)local_36;
      cVar1 = '\0';
      if (-1 < (int)(uVar6 - 1)) {
        do {
          FUN_016ed220(param_1,*param_7 + cVar1 + '\x02',local_a8[0],0);
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
      goto code_r0x014d58d3;
    }
    iVar4 = iVar4 + 1;
    uVar6 = uVar6 - 1;
  } while( true );
}

