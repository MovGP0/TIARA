/* Ghidra address: 007018f0 */
/* Ghidra symbol: FUN_007018f0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_007018f0(int param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  if (((DAT_02012498 != 0) && (lVar4 = FUN_007e3880(DAT_02012498), lVar4 != 0)) &&
     (cVar1 = FUN_007e6b10(lVar4), cVar1 != '\0')) {
    if (param_3[2] == 0x25) {
      param_3[2] = 0x27;
    }
    else if (param_3[2] == 0x27) {
      param_3[2] = 0x25;
    }
  }
  iVar2 = thunk_FUN_04186711(DAT_02012478,param_1,(longlong)param_2,param_3);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (param_1 != 2) {
    return 0;
  }
  lVar4 = 0;
  if (DAT_01e02d9c == '\0') {
    DAT_01e02d9c = '\x01';
    thunk_FUN_0413e052(*param_3,0x100,0x28,0);
  }
  iVar2 = *(int *)(param_3 + 1);
  if (iVar2 != 0x100) {
    if (iVar2 == 0x104) {
      if (param_3[2] == 0x12) {
        pcVar6 = (code *)FUN_00411550(DAT_02012480,0xffac);
        (*pcVar6)(DAT_02012480);
        return 0;
      }
    }
    else if (iVar2 == 0x11f) {
      if (((short)((uint)*(undefined4 *)(param_3 + 2) >> 0x10) == -1) && (param_3[3] == 0)) {
        if (DAT_020124a8 != '\0') {
          return 0;
        }
        pcVar6 = (code *)FUN_00411550(DAT_02012480,0xffac);
        (*pcVar6)(DAT_02012480);
        return 0;
      }
      DAT_020124a8 = '\0';
      bVar7 = (*(uint *)(param_3 + 2) >> 0x10 & 0x10) != 0;
      if (bVar7) {
        uVar3 = thunk_FUN_03ecce03(param_3[3],*(undefined2 *)(param_3 + 2));
      }
      else {
        uVar3 = (uint)*(ushort *)(param_3 + 2);
      }
      DAT_02012498 = FUN_007e5b00(*(undefined8 *)(DAT_02012480 + 0x608),(longlong)(int)uVar3,bVar7);
    }
    else {
      lVar4 = 0;
      if (iVar2 == 0x200) {
        local_30 = *(undefined8 *)((longlong)param_3 + 0x24);
        if ((int)local_30 == DAT_020124a0) {
          local_30._4_4_ = (int)((ulonglong)local_30 >> 0x20);
          bVar7 = local_30._4_4_ == DAT_020124a4;
          if (bVar7) goto LAB_00701b9b;
        }
        lVar4 = FUN_0064acf0(&local_30,0);
        _DAT_020124a0 = local_30;
      }
    }
    goto LAB_00701b9b;
  }
  if (param_3[2] == 0xd) {
    *(undefined1 *)(DAT_02012480 + 0x620) = 1;
    goto LAB_00701b9b;
  }
  if (param_3[2] == 0x1b) {
    DAT_020124a8 = '\x01';
    goto LAB_00701b9b;
  }
  if (DAT_02012498 == 0) goto LAB_00701b9b;
  if ((param_3[2] == 0x27) && (iVar2 = FUN_007e2ef0(DAT_02012498), iVar2 == 0)) {
    lVar4 = FUN_00701810(auStack_58,1);
  }
  else {
    if (param_3[2] == 0x25) {
      pcVar6 = (code *)FUN_00411550(DAT_02012498,0xfff1);
      uVar5 = (*pcVar6)(DAT_02012498);
      cVar1 = FUN_004113d0(uVar5,&PTR_FUN_007dba80);
      if (cVar1 != '\0') {
        lVar4 = FUN_00701810(auStack_58,0);
        goto LAB_00701b3f;
      }
    }
    lVar4 = 0;
  }
LAB_00701b3f:
  if (lVar4 != 0) {
    local_38 = 0;
    local_34 = 0;
    local_30 = FUN_0064d1f0(lVar4,&local_38);
  }
LAB_00701b9b:
  if (((((lVar4 != 0) && (cVar1 = FUN_004113d0(lVar4,&PTR_FUN_006cb0d0), cVar1 != '\0')) &&
       (iVar2 = FUN_006fa830(lVar4), iVar2 != DAT_02012490)) &&
      ((*(char *)(lVar4 + 0x31b) != '\0' && (*(longlong *)(lVar4 + 0x78) != 0)))) &&
     (cVar1 = FUN_0065be20(*(undefined8 *)(lVar4 + 0x78)), cVar1 != '\0')) {
    DAT_020124a8 = '\x01';
    *(undefined1 *)(DAT_02012480 + 0x600) = 0;
    pcVar6 = (code *)FUN_00411550(DAT_02012480,0xffaa);
    (*pcVar6)(DAT_02012480,lVar4);
    pcVar6 = (code *)FUN_00411550(DAT_02012480,0xffaa);
    (*pcVar6)(DAT_02012480,lVar4);
  }
  return 0;
}

