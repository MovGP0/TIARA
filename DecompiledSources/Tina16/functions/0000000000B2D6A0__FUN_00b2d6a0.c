/* Ghidra address: 00b2d6a0 */
/* Ghidra symbol: FUN_00b2d6a0 */


void FUN_00b2d6a0(longlong param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [44];
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  byte local_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  char local_39;
  longlong local_30;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  local_48 = 0;
  local_ac = 1;
  FUN_004144d0();
  bVar2 = false;
  bVar3 = false;
  local_39 = '\0';
LAB_00b2db33:
  do {
    iVar4 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 8) + -4);
    }
    if (iVar4 < local_ac) {
      FUN_00b2d550(auStack_d8);
      FUN_00414590(&local_a8,4);
      FUN_00414590(&local_68,5);
      FUN_004144d0(&local_30);
      return;
    }
    lVar6 = (longlong)local_ac;
    FUN_004153d0(&local_50,*(undefined1 *)(*(longlong *)(param_1 + 8) + -1 + lVar6),0);
    iVar4 = FUN_00b19450(*(undefined8 *)(param_1 + 0x10),local_50);
    if (((iVar4 < 0) || (bVar2)) || (bVar3)) {
      cVar1 = *(char *)(*(longlong *)(param_1 + 8) + -1 + lVar6);
      if (cVar1 == ' ') {
        FUN_004153d0(&local_90,0x20,0);
        FUN_004155b0(&local_30,local_90);
      }
      else if (cVar1 == *(char *)(param_1 + 0x19)) {
        FUN_004153d0(&local_98,cVar1,0);
        FUN_004155b0(&local_30,local_98);
        if (!bVar3) {
          if (bVar2) {
            FUN_00b2d550();
          }
          bVar2 = !bVar2;
        }
      }
      else if (cVar1 == *(char *)(param_1 + 0x1a)) {
        FUN_004153d0(&local_a0,cVar1,0);
        FUN_004155b0(&local_30,local_a0);
        if (!bVar2) {
          bVar3 = !bVar3;
        }
      }
      else {
        cVar1 = *(char *)(*(longlong *)(param_1 + 8) + -1 + (longlong)local_ac);
        if (((cVar1 != ':') || (bVar2)) || ((bVar3 || (local_30 != 0)))) {
          FUN_004153d0(&local_a8,cVar1,0);
          FUN_004155b0(&local_30,local_a8);
        }
        else {
          FUN_004153d0(&local_30,0x3a,0);
          FUN_00b2d550();
        }
      }
    }
    else {
      FUN_00b2d550(auStack_d8);
      FUN_004153d0(&local_30,*(undefined1 *)(*(longlong *)(param_1 + 8) + -1 + lVar6),0);
      FUN_00414c70(&local_48,local_30);
      iVar4 = 0;
      if (*(longlong *)(param_1 + 8) != 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 8) + -4);
      }
      if (local_ac + 1 <= iVar4) {
        FUN_004153d0(&local_58,
                     *(undefined1 *)(*(longlong *)(param_1 + 8) + -1 + (longlong)(local_ac + 1)),0);
        FUN_004155b0(&local_48,local_58);
        iVar4 = FUN_00b19450(*(undefined8 *)(param_1 + 0x10),local_48);
        if (-1 < iVar4) {
          FUN_00414c70(&local_30,local_48);
          local_ac = local_ac + 1;
        }
      }
      iVar4 = FUN_00415a60(local_30,&DAT_00b2dbe8);
      if (iVar4 == 0) {
LAB_00b2d888:
        if (*(int *)(*(longlong *)(param_1 + 0x20) + 0x10) == 0) {
          local_39 = '\x01';
        }
        if (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x10)) {
          lVar6 = FUN_004aeac0(*(longlong *)(param_1 + 0x20),
                               *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) + -1);
          iVar4 = FUN_00415a60(*(undefined8 *)(lVar6 + 5),&DAT_00b2dc08);
          if (iVar4 != 0) {
            lVar6 = FUN_004aeac0(*(longlong *)(param_1 + 0x20),
                                 *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) + -1);
            FUN_004153d0(&local_60,*PTR_DAT_020012a0,0);
            iVar4 = FUN_00415a60(*(undefined8 *)(lVar6 + 5),local_60);
            if (iVar4 != 0) goto LAB_00b2d929;
          }
          local_39 = '\x01';
        }
      }
      else {
        iVar4 = FUN_00415a60(local_30,&DAT_00b2dbf8);
        if (iVar4 == 0) goto LAB_00b2d888;
      }
LAB_00b2d929:
      if (local_39 != '\0') {
        FUN_00b2d550();
        local_39 = '\0';
        local_ac = local_ac + 1;
        goto LAB_00b2db33;
      }
      iVar4 = 0;
      if (*(longlong *)(param_1 + 8) != 0) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 8) + -4);
      }
      if (local_ac + 1 <= iVar4) {
        FUN_004153d0(&local_68,*PTR_DAT_020012a0,0);
        iVar4 = FUN_00415a60(local_30,local_68);
        if (iVar4 == 0) {
          local_88[0] = 0;
          local_88[1] = 0;
          local_88[2] = 0;
          local_88[3] = 0;
          local_88[4] = 0;
          local_88[5] = 2;
          local_88[6] = 0;
          local_88[7] = 0;
          local_88[8] = 0;
          local_88[9] = 0;
          local_88[10] = 0;
          local_88[0xb] = 0;
          local_88[0xc] = 0;
          local_88[0xd] = 0;
          local_88[0xe] = 0;
          local_88[0xf] = 0;
          local_88[0x10] = 0;
          local_88[0x11] = 0;
          local_88[0x12] = 0;
          local_88[0x13] = 0;
          local_88[0x14] = 0;
          local_88[0x15] = 0;
          local_88[0x16] = 0;
          local_88[0x17] = 0;
          local_88[0x18] = 0;
          local_88[0x19] = 0;
          local_88[0x1a] = 0;
          local_88[0x1b] = 0;
          local_88[0x1c] = 0;
          local_88[0x1d] = 0;
          local_88[0x1e] = 0;
          local_88[0x1f] = 0;
          local_88[(longlong)(ulonglong)(byte)*PTR_DAT_020012a0 >> 3] =
               local_88[(longlong)(ulonglong)(byte)*PTR_DAT_020012a0 >> 3] |
               '\x01' << ((ulonglong)(byte)*PTR_DAT_020012a0 & 7);
          uVar5 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + -1 + (longlong)(local_ac + 1));
          if ((local_88[(longlong)uVar5 >> 3] >> (uVar5 & 7) & 1) != 0) {
            FUN_00b2d550(auStack_d8);
            FUN_00414c70(&local_30,"<MISARG>");
          }
        }
      }
      FUN_00b2d550();
    }
    local_ac = local_ac + 1;
  } while( true );
}

