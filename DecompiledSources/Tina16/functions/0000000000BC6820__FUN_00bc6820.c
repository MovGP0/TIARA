/* Ghidra address: 00bc6820 */
/* Ghidra symbol: FUN_00bc6820 */


longlong FUN_00bc6820(undefined8 *param_1,uint *param_2)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  uint *local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_44;
  undefined8 local_40;
  longlong local_38;
  undefined2 local_2a;
  
  local_58 = 0;
  local_50 = 0;
  local_60 = param_2;
  local_38 = FUN_00bc7340(param_1,&local_44);
  if (local_38 != 0) {
    sVar1 = *(short *)param_1[0x2a];
    if ((((sVar1 == 0x2a) || (sVar1 == 0x2b)) || (sVar1 == 0x3f)) || (sVar1 == 0x7b)) {
      if (((local_44 & 1) == 0) && (sVar1 != 0x3f)) {
        (**(code **)*param_1)(param_1,0x6a);
      }
      else {
        if (sVar1 == 0x2a) {
          *local_60 = 4;
          uVar8 = param_1[0x2a];
          bVar9 = *(short *)(uVar8 + 2) == 0x3f;
          if ((bVar9) ||
             (uVar8 = (ulonglong)*(uint *)(param_1 + 0x34), (*(uint *)(param_1 + 0x34) & 8) == 0)) {
            uVar4 = (undefined4)CONCAT71((int7)(uVar8 >> 8),1);
          }
          else {
            uVar4 = 0;
          }
          if ((local_44 & 2) == 0) {
            if ((char)uVar4 == '\0') {
              FUN_00bc5ea0(param_1,6,local_38,3);
              uVar7 = FUN_00bc5e20(param_1,7);
              FUN_00bc5df0(param_1,local_38,uVar7);
              FUN_00bc5df0(param_1,local_38,local_38);
              uVar7 = FUN_00bc5e20(param_1,6);
              FUN_00bc5d80(param_1,local_38,uVar7);
              uVar7 = FUN_00bc5e20(param_1,9);
              FUN_00bc5d80(param_1,local_38,uVar7);
            }
            else {
              FUN_00bc6650(auStack_88,0,0x7ffffffe,uVar4);
            }
          }
          else {
            if ((char)uVar4 == '\0') {
              local_2a = 10;
            }
            else {
              local_2a = 0x1e;
            }
            FUN_00bc5ea0(param_1,local_2a,local_38,3);
          }
          if (bVar9) {
            param_1[0x2a] = param_1[0x2a] + 2;
          }
        }
        else if (sVar1 == 0x2b) {
          *local_60 = 5;
          uVar8 = param_1[0x2a];
          bVar9 = *(short *)(uVar8 + 2) == 0x3f;
          if ((bVar9) ||
             (uVar8 = (ulonglong)*(uint *)(param_1 + 0x34), (*(uint *)(param_1 + 0x34) & 8) == 0)) {
            uVar4 = (undefined4)CONCAT71((int7)(uVar8 >> 8),1);
          }
          else {
            uVar4 = 0;
          }
          if ((local_44 & 2) == 0) {
            if ((char)uVar4 == '\0') {
              local_40 = FUN_00bc5e20(param_1,6);
              FUN_00bc5d80(param_1,local_38,local_40);
              uVar7 = FUN_00bc5e20(param_1,7);
              FUN_00bc5d80(param_1,uVar7,local_38);
              uVar7 = FUN_00bc5e20(param_1,6);
              FUN_00bc5d80(param_1,local_40,uVar7);
              uVar7 = FUN_00bc5e20(param_1,9);
              FUN_00bc5d80(param_1,local_38,uVar7);
            }
            else {
              FUN_00bc6650(auStack_88,1,0x7ffffffe,uVar4);
            }
          }
          else {
            if ((char)uVar4 == '\0') {
              local_2a = 0xb;
            }
            else {
              local_2a = 0x1f;
            }
            FUN_00bc5ea0(param_1,local_2a,local_38,3);
          }
          if (bVar9) {
            param_1[0x2a] = param_1[0x2a] + 2;
          }
        }
        else if (sVar1 == 0x3f) {
          *local_60 = 0;
          uVar8 = param_1[0x2a];
          bVar9 = *(short *)(uVar8 + 2) == 0x3f;
          if ((bVar9) ||
             (uVar8 = (ulonglong)*(uint *)(param_1 + 0x34), (*(uint *)(param_1 + 0x34) & 8) == 0)) {
            uVar4 = (undefined4)CONCAT71((int7)(uVar8 >> 8),1);
          }
          else {
            uVar4 = 0;
          }
          if ((char)uVar4 == '\0') {
            FUN_00bc5ea0(param_1,6,local_38,3);
            uVar7 = FUN_00bc5e20(param_1,6);
            FUN_00bc5d80(param_1,local_38,uVar7);
            local_40 = FUN_00bc5e20(param_1,9);
            FUN_00bc5d80(param_1,local_38,local_40);
            FUN_00bc5df0(param_1,local_38,local_40);
          }
          else if ((local_44 & 2) == 0) {
            FUN_00bc6650(auStack_88,0,1,uVar4);
          }
          else {
            FUN_00bc67a0(auStack_88,0,1,uVar4);
          }
          if (bVar9) {
            param_1[0x2a] = param_1[0x2a] + 2;
          }
        }
        else if (sVar1 == 0x7b) {
          uVar7 = param_1[0x2a];
          param_1[0x2a] = param_1[0x2a] + 2;
          psVar2 = (short *)param_1[0x2a];
          while( true ) {
            FUN_00416780(&local_50,*(undefined2 *)param_1[0x2a]);
            iVar5 = FUN_004170c0(local_50,L"0123456789",1);
            if (iVar5 < 1) break;
            param_1[0x2a] = param_1[0x2a] + 2;
          }
          sVar1 = *(short *)param_1[0x2a];
          if (((sVar1 != 0x7d) && (sVar1 != 0x2c)) || (psVar2 == (short *)param_1[0x2a])) {
            param_1[0x2a] = uVar7;
            *local_60 = local_44;
            goto LAB_00bc6f6a;
          }
          iVar6 = FUN_00bc65c0(auStack_88,psVar2,param_1[0x2a] + -2);
          iVar5 = iVar6;
          if (*(short *)param_1[0x2a] == 0x2c) {
            param_1[0x2a] = param_1[0x2a] + 2;
            lVar3 = param_1[0x2a];
            while( true ) {
              FUN_00416780(&local_58,*(undefined2 *)param_1[0x2a]);
              iVar5 = FUN_004170c0(local_58,L"0123456789",1);
              if (iVar5 < 1) break;
              param_1[0x2a] = param_1[0x2a] + 2;
            }
            if (*(short *)param_1[0x2a] != 0x7d) {
              param_1[0x2a] = uVar7;
              goto LAB_00bc6f6a;
            }
            if (lVar3 == param_1[0x2a]) {
              iVar5 = 0x7ffffffe;
            }
            else {
              iVar5 = FUN_00bc65c0(auStack_88,lVar3,param_1[0x2a] + -2);
            }
          }
          if (iVar5 < iVar6) {
            (**(code **)*param_1)(param_1,0x7c);
            goto LAB_00bc6f6a;
          }
          if (0 < iVar6) {
            *local_60 = 0;
          }
          if (0 < iVar5) {
            *local_60 = *local_60 | 5;
          }
          uVar8 = param_1[0x2a];
          bVar9 = *(short *)(uVar8 + 2) == 0x3f;
          if ((bVar9) ||
             (uVar8 = (ulonglong)*(uint *)(param_1 + 0x34), (*(uint *)(param_1 + 0x34) & 8) == 0)) {
            uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
          }
          else {
            uVar8 = 0;
          }
          if ((local_44 & 2) == 0) {
            FUN_00bc6650(auStack_88,iVar6,iVar5,uVar8 & 0xffffffff);
          }
          else {
            FUN_00bc67a0(auStack_88,iVar6,iVar5,uVar8 & 0xffffffff);
          }
          if (bVar9) {
            param_1[0x2a] = param_1[0x2a] + 2;
          }
        }
        param_1[0x2a] = param_1[0x2a] + 2;
        sVar1 = *(short *)param_1[0x2a];
        if (((sVar1 == 0x2a) || (sVar1 == 0x2b)) || ((sVar1 == 0x3f || (sVar1 == 0x7b)))) {
          (**(code **)*param_1)(param_1,0x6b);
        }
      }
    }
    else {
      *local_60 = local_44;
    }
  }
LAB_00bc6f6a:
  FUN_00414560(&local_58,2);
  return local_38;
}

