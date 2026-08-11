/* Ghidra address: 00a05ce0 */
/* Ghidra symbol: FUN_00a05ce0 */


uint FUN_00a05ce0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  byte local_29 [9];
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  while (*(int *)(lVar3 + 0x9028) < *(int *)(lVar3 + 0x9020)) {
    lVar5 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x10));
    lVar6 = (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10));
    if (lVar5 < lVar6) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                (*(longlong **)(param_1 + 0x10),local_29,1);
    }
    else {
      local_29[0] = 0;
    }
    *(uint *)(lVar3 + 0x9024) =
         *(uint *)(lVar3 + 0x9024) |
         (uint)local_29[0] << ((byte)*(undefined4 *)(lVar3 + 0x9028) & 0x1f);
    *(int *)(lVar3 + 0x9028) = *(int *)(lVar3 + 0x9028) + 8;
  }
  iVar1 = *(int *)(lVar3 + 0x9020);
  if (iVar1 < 7) {
    if (iVar1 == 6) {
      uVar4 = 0x3f;
      goto LAB_00a05e3f;
    }
    if (iVar1 < 4) {
      if (iVar1 == 3) {
        uVar4 = 7;
        goto LAB_00a05e3f;
      }
      if (iVar1 == 0) {
        uVar4 = 0;
        goto LAB_00a05e3f;
      }
      if (iVar1 == 1) {
        uVar4 = 1;
        goto LAB_00a05e3f;
      }
      if (iVar1 == 2) {
        uVar4 = 3;
        goto LAB_00a05e3f;
      }
    }
    else {
      if (iVar1 == 4) {
        uVar4 = 0xf;
        goto LAB_00a05e3f;
      }
      if (iVar1 == 5) {
        uVar4 = 0x1f;
        goto LAB_00a05e3f;
      }
    }
  }
  else if (iVar1 < 0xb) {
    if (iVar1 == 10) {
      uVar4 = 0x3ff;
      goto LAB_00a05e3f;
    }
    if (iVar1 == 7) {
      uVar4 = 0x7f;
      goto LAB_00a05e3f;
    }
    if (iVar1 == 8) {
      uVar4 = 0xff;
      goto LAB_00a05e3f;
    }
    if (iVar1 == 9) {
      uVar4 = 0x1ff;
      goto LAB_00a05e3f;
    }
  }
  else {
    if (iVar1 == 0xb) {
      uVar4 = 0x7ff;
      goto LAB_00a05e3f;
    }
    if (iVar1 == 0xc) {
      uVar4 = 0xfff;
      goto LAB_00a05e3f;
    }
  }
  FUN_00a074d0(0xc);
  uVar4 = 0;
LAB_00a05e3f:
  uVar2 = *(uint *)(lVar3 + 0x9024);
  *(uint *)(lVar3 + 0x9024) =
       *(uint *)(lVar3 + 0x9024) >> ((byte)*(undefined4 *)(lVar3 + 0x9020) & 0x1f);
  *(int *)(lVar3 + 0x9028) = *(int *)(lVar3 + 0x9028) - *(int *)(lVar3 + 0x9020);
  return uVar2 & uVar4;
}

