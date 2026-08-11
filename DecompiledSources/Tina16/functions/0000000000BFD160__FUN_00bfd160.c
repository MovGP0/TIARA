/* Ghidra address: 00bfd160 */
/* Ghidra symbol: FUN_00bfd160 */


void FUN_00bfd160(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  cVar2 = FUN_0065be20(param_1);
  if ((cVar2 == '\0') || (*(int *)((longlong)param_1 + 0x514) != 0)) {
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 2;
  }
  else {
    *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) & 0xfffd;
    if (*(char *)((longlong)param_1 + 0x529) == '\0') {
      uVar5 = FUN_0065b870(param_1);
      thunk_FUN_0412f07e(uVar5,3,0);
    }
    else {
      local_44 = 0x1c;
      local_40 = 0x17;
      puVar4 = (uint *)FUN_00c09df0(param_1);
      if (((ulonglong)puVar4 & 0x400) == 0) {
        puVar4 = &local_40;
        local_40 = local_40 | 8;
      }
      if (*(char *)((longlong)param_1 + 0xa9) != '\0') {
        uVar5 = FUN_0065b870(param_1);
        puVar4 = (uint *)thunk_FUN_041b2403(uVar5,0xb,0,0);
      }
      if (*(byte *)((longlong)param_1 + 0x529) < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)puVar4 >> 8),1) <<
                 (*(byte *)((longlong)param_1 + 0x529) & 0x1f) & 10U) != 0;
      }
      else {
        bVar8 = false;
      }
      if ((bVar8) && (cVar2 = FUN_00c10e70(param_1), cVar2 == '\0')) {
        uVar6 = FUN_00c09df0(param_1);
        if ((uVar6 & 0x40000) == 0) {
          iVar3 = FUN_00bcfa20(param_1[0x9d]);
          if (iVar3 < 2) {
            iVar3 = 1;
          }
        }
        else {
          iVar3 = (int)param_1[0xa2];
        }
        if (iVar3 < 0x8000) {
          local_3c = 1;
          local_34 = (undefined4)param_1[0x9a];
          local_30 = *(undefined4 *)((longlong)param_1 + 0x50c);
          local_38 = iVar3;
        }
        else {
          local_3c = 0;
          local_38 = 0x7fff;
          local_34 = thunk_FUN_03f3ed25(0x7fff,(int)param_1[0x9a],iVar3);
          local_30 = thunk_FUN_03f3ed25(0x7fff,*(undefined4 *)((longlong)param_1 + 0x50c),iVar3);
        }
        uVar5 = FUN_0065b870(param_1);
        uVar6 = FUN_00c09df0(param_1);
        if ((((uVar6 & 0x400) == 0) || (local_3c == 0)) || ((int)param_1[0x9a] < local_38)) {
          bVar1 = 1;
        }
        else {
          bVar1 = 0;
        }
        thunk_FUN_0412f07e(uVar5,0,-(uint)bVar1);
        uVar5 = FUN_0065b870(param_1);
        thunk_FUN_03d770e4(uVar5,0,&local_44,0xffffffff);
        uVar6 = FUN_00c09df0(param_1);
        if (((uVar6 & 8) == 0) && ((int)param_1[0x9a] < iVar3)) {
          uVar5 = FUN_0065b870(param_1);
          uVar5 = FUN_004294b0(uVar5,0,0);
        }
        else {
          iVar7 = *(int *)((longlong)param_1 + 0x50c) + (int)param_1[0x9a] + -1;
          if ((*(int *)((longlong)param_1 + 0x50c) < 2) && (iVar3 <= iVar7)) {
            uVar5 = FUN_0065b870(param_1);
            uVar5 = FUN_004294b0(uVar5,0,3);
          }
          else {
            uVar5 = FUN_0065b870(param_1);
            uVar5 = FUN_004294b0(uVar5,0,0);
            if (*(int *)((longlong)param_1 + 0x50c) < 2) {
              uVar5 = FUN_0065b870(param_1);
              uVar5 = FUN_004294b0(uVar5,0,1);
            }
            else if (iVar3 <= iVar7) {
              uVar5 = FUN_0065b870(param_1);
              uVar5 = FUN_004294b0(uVar5,0,2);
            }
          }
        }
      }
      else {
        uVar5 = FUN_0065b870(param_1);
        uVar5 = thunk_FUN_0412f07e(uVar5,0,0);
      }
      if (*(byte *)((longlong)param_1 + 0x529) < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) <<
                 (*(byte *)((longlong)param_1 + 0x529) & 0x1f) & 0xcU) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        iVar3 = FUN_00c10fb0(param_1);
        uVar6 = FUN_00c09df0(param_1);
        if ((uVar6 & 0x20000) != 0) {
          iVar3 = iVar3 + (int)param_1[0xa1] + -1;
        }
        if (iVar3 < 0x8000) {
          local_3c = 1;
          local_38 = iVar3;
          if (iVar3 < 1) {
            local_38 = 1;
          }
          local_34 = (undefined4)param_1[0xa1];
          local_30 = *(undefined4 *)((longlong)param_1 + 0x534);
        }
        else {
          local_3c = 0;
          local_38 = 0x7fff;
          local_34 = thunk_FUN_03f3ed25(0x7fff,(int)param_1[0xa1],iVar3);
          local_30 = thunk_FUN_03f3ed25(0x7fff,*(undefined4 *)((longlong)param_1 + 0x534),iVar3);
        }
        uVar5 = FUN_0065b870(param_1);
        uVar6 = FUN_00c09df0(param_1);
        if ((((uVar6 & 0x400) == 0) || (local_3c == 0)) || ((int)param_1[0xa1] < local_38)) {
          bVar1 = 1;
        }
        else {
          bVar1 = 0;
        }
        thunk_FUN_0412f07e(uVar5,1,-(uint)bVar1);
        uVar5 = FUN_0065b870(param_1);
        thunk_FUN_03d770e4(uVar5,1,&local_44,0xffffffff);
        uVar6 = FUN_00c09df0(param_1);
        if (((uVar6 & 8) == 0) && ((int)param_1[0xa1] < iVar3)) {
          uVar5 = FUN_0065b870(param_1);
          FUN_004294b0(uVar5,1,0);
        }
        else if ((*(int *)((longlong)param_1 + 0x534) < 2) && (iVar3 <= (int)param_1[0xa1])) {
          uVar5 = FUN_0065b870(param_1);
          FUN_004294b0(uVar5,1,3);
        }
        else {
          uVar5 = FUN_0065b870(param_1);
          FUN_004294b0(uVar5,1,0);
          if (*(int *)((longlong)param_1 + 0x534) < 2) {
            uVar5 = FUN_0065b870(param_1);
            FUN_004294b0(uVar5,1,1);
          }
          else {
            iVar3 = FUN_00c10fb0(param_1);
            if ((iVar3 - *(int *)((longlong)param_1 + 0x534)) - (int)param_1[0xa1] == -1) {
              uVar5 = FUN_0065b870(param_1);
              FUN_004294b0(uVar5,1,2);
            }
          }
        }
        if (*(char *)((longlong)param_1 + 0xa9) != '\0') {
          uVar5 = FUN_0065b870(param_1);
          thunk_FUN_041b2403(uVar5,0xb,0xffffffffffffffff,0);
        }
        if (*(int *)((longlong)param_1 + 0x514) == 0) {
          (**(code **)(*param_1 + 0x180))(param_1);
        }
      }
      else {
        uVar5 = FUN_0065b870(param_1);
        thunk_FUN_0412f07e(uVar5,1,0);
      }
    }
  }
  return;
}

