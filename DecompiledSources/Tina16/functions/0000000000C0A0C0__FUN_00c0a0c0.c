/* Ghidra address: 00c0a0c0 */
/* Ghidra symbol: FUN_00c0a0c0 */


void FUN_00c0a0c0(longlong *param_1,int param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  cVar1 = FUN_00c10e70(param_1);
  if (cVar1 != '\0') {
    if (param_2 < 1) {
      if (((char)param_1[0xc1] == '\0') && (1 < *(int *)((longlong)param_1 + 0x4c4))) {
        iVar4 = FUN_00bfaa40(param_1);
        if (iVar4 == 1) {
          *(undefined1 *)(param_1 + 0xc1) = 1;
          FUN_00bfac10();
          iVar4 = FUN_00bfaa40(param_1);
          iVar3 = (int)param_1[0x9a] + 1;
          if (iVar3 < iVar4) {
            uVar2 = FUN_00bfaa50(param_1);
            local_40 = FUN_00bb7730(iVar3,uVar2);
            FUN_00c110d0(param_1,&local_40);
          }
          else {
            FUN_00bf3750(param_1);
            *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 1;
            FUN_00bf28a0(param_1);
          }
          goto LAB_00c0a3e1;
        }
      }
    }
    else if ((char)param_1[0xc1] != '\0') {
      *(undefined1 *)(param_1 + 0xc1) = 0;
      FUN_00bfac10();
      FUN_00bf3750(param_1);
      *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 1;
      FUN_00bf28a0(param_1);
      goto LAB_00c0a3e1;
    }
  }
  local_28 = FUN_00bfaa10(param_1);
  local_20 = local_28;
  FUN_00bf2c20(param_1,&local_30);
  iVar4 = 0;
  if (local_30 != 0) {
    iVar4 = *(int *)(local_30 + -4);
  }
  bVar5 = (*(uint *)((longlong)param_1 + 0x63a) & 0x40000) != 0;
  if ((((bVar5) || (param_2 != -1)) || ((int)local_20 != 1)) || (local_20._4_4_ < 2)) {
    if (((!bVar5) && (param_2 == 1)) && (iVar4 < (int)local_20)) {
      iVar3 = (**(code **)(*(longlong *)param_1[0x9d] + 0x28))((longlong *)param_1[0x9d]);
      if (local_20._4_4_ < iVar3) {
        local_28 = CONCAT44(local_28._4_4_ + 1,1);
        goto LAB_00c0a2fa;
      }
    }
    iVar3 = (int)local_28 + param_2;
    if (iVar3 < 1) {
      iVar3 = 1;
    }
    local_28 = CONCAT44(local_28._4_4_,iVar3);
    if (!bVar5 && 0 < param_2) {
      if (iVar4 + 1 <= iVar3) {
        iVar3 = iVar4 + 1;
      }
      local_28 = CONCAT44(local_28._4_4_,iVar3);
    }
  }
  else {
    iVar4 = local_28._4_4_ + -2;
    local_28._4_4_ = local_28._4_4_ + -1;
    (**(code **)(*(longlong *)param_1[0x9d] + 0x18))((longlong *)param_1[0x9d],&local_48,iVar4);
    iVar4 = 0;
    if (local_48 != 0) {
      iVar4 = *(int *)(local_48 + -4);
    }
    local_28 = CONCAT44(local_28._4_4_,iVar4 + 1);
  }
LAB_00c0a2fa:
  FUN_00c0a550(param_1,(longlong)param_1 + 0x4b4,&local_28,param_3);
  cVar1 = FUN_00c10e70(param_1);
  if ((cVar1 != '\0') && (0 < param_2)) {
    FUN_00bf2c20(param_1,&local_50);
    iVar4 = 0;
    if (local_50 != 0) {
      iVar4 = *(int *)(local_50 + -4);
    }
    if (*(int *)((longlong)param_1 + 0x4c4) < iVar4) {
      local_38 = FUN_00bfaa90(param_1);
      iVar4 = (int)local_38;
      if ((int)local_38 == 1) {
        iVar3 = FUN_00c11030(param_1,*(undefined4 *)((longlong)param_1 + 0x4cc));
        if (iVar3 != local_38._4_4_) {
          *(undefined1 *)(param_1 + 0xc1) = 1;
          FUN_00bfac10();
          goto LAB_00c0a3e1;
        }
      }
      if ((int)param_1[0x9a] + 1 < iVar4) {
        local_38 = CONCAT44(local_38._4_4_ + 1,1);
        local_40 = FUN_00c0ee50(param_1,&local_38);
        (**(code **)(*param_1 + 0x2a8))(param_1,&local_40);
      }
    }
  }
LAB_00c0a3e1:
  FUN_00414560(&local_50,2);
  FUN_00414480(&local_30);
  return;
}

