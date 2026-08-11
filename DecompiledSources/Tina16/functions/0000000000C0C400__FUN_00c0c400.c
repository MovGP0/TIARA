/* Ghidra address: 00c0c400 */
/* Ghidra symbol: FUN_00c0c400 */


void FUN_00c0c400(longlong param_1,undefined1 param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  longlong local_30 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_59 = param_2;
  if ((*(uint *)(param_1 + 0x63a) & 0x80) != 0) {
    cVar3 = FUN_00c0c320(auStack_88);
    if (cVar3 != '\0') {
      bVar2 = true;
      FUN_00bf2c20(param_1,local_30);
      iVar5 = 0;
      if (local_30[0] != 0) {
        iVar5 = *(int *)(local_30[0] + -4);
      }
      cVar3 = FUN_00c10e70();
      if (cVar3 == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_00c0c3c0();
        iVar4 = iVar4 + -1;
      }
      while( true ) {
        if (iVar4 < iVar5) {
          uVar1 = *(ushort *)(local_30[0] + -2 + (longlong)iVar5 * 2);
          if (uVar1 < 0x100) {
            bVar6 = ((byte)(&DAT_00c0c6ac)[(longlong)(ulonglong)uVar1 >> 3] >>
                     ((ulonglong)uVar1 & 7) & 1) != 0;
          }
          else {
            bVar6 = false;
          }
        }
        else {
          bVar6 = false;
        }
        if (!bVar6) break;
        iVar5 = iVar5 + -1;
      }
      if (*(int *)(param_1 + 0x4c4) + -1 == iVar5) {
        FUN_00bf2c20(param_1,&local_40);
        iVar5 = 0;
        if (local_40 != 0) {
          iVar5 = *(int *)(local_40 + -4);
        }
        iVar5 = iVar5 + 1;
      }
      else {
        iVar5 = iVar5 + 1;
      }
      goto LAB_00c0c535;
    }
  }
  FUN_00bf2c20(param_1,&local_48);
  iVar5 = 0;
  if (local_48 != 0) {
    iVar5 = *(int *)(local_48 + -4);
  }
  iVar5 = iVar5 + 1;
  bVar2 = false;
LAB_00c0c535:
  cVar3 = FUN_00c10e70(param_1);
  if (cVar3 == '\0') {
    local_50 = FUN_00bfaa10(param_1);
    local_58 = FUN_00bb7750(iVar5,*(undefined4 *)(param_1 + 0x4cc));
    FUN_00c0a550(param_1,&local_50,&local_58,local_59);
  }
  else {
    local_34 = FUN_00bfaa50(param_1);
    if (bVar2) {
      local_50 = FUN_00bb7750(iVar5,*(undefined4 *)(param_1 + 0x4cc));
      local_38 = FUN_00c0ec90(param_1,&local_50);
    }
    else {
      local_38 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x30))
                           (*(longlong **)(param_1 + 0x5f8),local_34);
      local_38 = local_38 + 1;
    }
    iVar5 = *(int *)(param_1 + 0x4d0) + 1;
    if (local_38 <= iVar5) {
      iVar5 = local_38;
    }
    local_38 = iVar5;
    local_50 = FUN_00bfaa10(param_1);
    local_58 = FUN_00c0ee50(param_1,&local_38);
    FUN_00c0a550(param_1,&local_50,&local_58,local_59);
    FUN_00c110d0(param_1,&local_38);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return;
}

