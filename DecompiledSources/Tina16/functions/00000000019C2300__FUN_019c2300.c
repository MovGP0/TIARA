/* Ghidra address: 019c2300 */
/* Ghidra symbol: FUN_019c2300 */


void FUN_019c2300(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 char param_5,undefined1 param_6,undefined8 *param_7,undefined8 *param_8)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res20;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0;
  char local_af;
  undefined1 local_ae;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_30[0] = *param_2;
  local_38 = *param_3;
  local_50 = *param_7;
  uStack_48 = param_7[1];
  uStack_40 = param_7[2];
  local_68 = *param_8;
  uStack_60 = param_8[1];
  uStack_58 = param_8[2];
  local_res20 = param_4;
  FUN_00419500(param_4);
  FUN_004179d0(&local_50,&DAT_019bf1e0);
  FUN_004179d0(&local_68,&DAT_019bf1e0);
  FUN_00417580(&local_d8,&DAT_019bf448);
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    iVar4 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x58) + -8);
  }
  iVar2 = 0;
  if (iVar4 - 1U < 0x80000000) {
    do {
      lVar3 = (longlong)iVar2;
      cVar1 = FUN_00422c40(*(longlong *)(param_1 + 0x58) + lVar3 * 0x70,local_30);
      if ((cVar1 != '\0') &&
         (cVar1 = FUN_00422c40(*(longlong *)(param_1 + 0x58) + 8 + lVar3 * 0x70,&local_38),
         cVar1 != '\0')) {
        FUN_004194b0(*(longlong *)(param_1 + 0x58) + 0x20 + lVar3 * 0x70,local_res20,&DAT_0147b748);
        *(undefined1 *)(*(longlong *)(param_1 + 0x58) + 0x28 + lVar3 * 0x70) = param_6;
        *(char *)(*(longlong *)(param_1 + 0x58) + 0x29 + lVar3 * 0x70) = param_5;
        *(bool *)(*(longlong *)(param_1 + 0x58) + 0x2a + lVar3 * 0x70) = param_5 != '\x01';
        FUN_019c18e0(&local_e0,local_30,*(undefined8 *)(param_1 + 0x88));
        FUN_00414ad0(*(longlong *)(param_1 + 0x58) + 0x10 + lVar3 * 0x70,local_e0);
        FUN_019c18e0(&local_e8,&local_38,*(undefined8 *)(param_1 + 0x88));
        FUN_00414ad0(*(longlong *)(param_1 + 0x58) + 0x18 + lVar3 * 0x70,local_e8);
        FUN_00417c40(*(longlong *)(param_1 + 0x58) + 0x40 + lVar3 * 0x70,&local_50,&DAT_019bf1e0);
        FUN_00417c40(*(longlong *)(param_1 + 0x58) + 0x58 + lVar3 * 0x70,&local_68,&DAT_019bf1e0);
        goto LAB_019c26b2;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_d8 = local_30[0];
  local_d0 = local_38;
  FUN_019c18e0(&local_f0,local_30,*(undefined8 *)(param_1 + 0x88));
  FUN_00414b50(local_c8,local_f0);
  FUN_019c18e0(&local_f8,&local_38,*(undefined8 *)(param_1 + 0x88));
  FUN_00414b50(local_c0,local_f8);
  FUN_004194b0(local_b8,local_res20,&DAT_0147b748);
  local_b0 = param_6;
  local_af = param_5;
  local_ae = param_5 != '\x01';
  FUN_00417c40(local_98,&local_50,&DAT_019bf1e0);
  FUN_00417c40(local_80,&local_68,&DAT_019bf1e0);
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + -8);
  }
  FUN_00419260(param_1 + 0x58,&DAT_019bf890,1,lVar3 + 1);
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + -8);
  }
  FUN_00417c40(*(longlong *)(param_1 + 0x58) + (lVar3 + -1) * 0x70,&local_d8,&DAT_019bf448);
LAB_019c26b2:
  FUN_00414560(&local_f8,4);
  FUN_00417740(&local_d8,&DAT_019bf448);
  FUN_00417840(&local_68,&DAT_019bf1e0,2);
  FUN_00419430(&local_res20,&DAT_0147b748);
  return;
}

