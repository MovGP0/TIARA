/* Ghidra address: 004c0fa0 */
/* Ghidra symbol: FUN_004c0fa0 */


void FUN_004c0fa0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [3];
  
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  if (param_3[2] == 0) {
    if (**(char **)*param_3 == '\a') {
      uVar6 = FUN_0058ada0(param_2,param_3);
      cVar3 = FUN_004113d0(uVar6,&PTR_FUN_00486f38);
      if (cVar3 != '\0') {
        lVar7 = FUN_0058ada0(param_2,param_3);
        if ((*(byte *)(lVar7 + 0x58) & 4) != 0) goto LAB_004c1066;
      }
    }
    FUN_004b6d40(PTR_PTR_02004560);
  }
LAB_004c1066:
  pbVar2 = *(byte **)*param_3;
  bVar1 = *pbVar2;
  if (bVar1 < 9) {
    if (bVar1 == 8) {
      cVar3 = FUN_004bea50(param_1);
      if (cVar3 == '\r') {
        FUN_004c23c0(param_1);
        FUN_0058f3c0(param_2,param_3,&DAT_01dc94a8);
      }
      else {
        FUN_004c0450(param_1,&local_60);
        (**(code **)(*param_1 + 0x30))(param_1,local_28,param_1[6],local_60);
        if (local_28[0] != 0) {
          FUN_0058f3c0(param_2,param_3,local_28);
        }
      }
      goto code_r0x004c1471;
    }
    if (4 < bVar1) {
      if (bVar1 != 5) {
        if (bVar1 == 6) {
          iVar5 = FUN_004c1c60(param_1,pbVar2);
          FUN_0058af20(param_2,param_3,(longlong)iVar5);
        }
        else if (bVar1 == 7) {
          cVar3 = FUN_004bea50(param_1);
          if (cVar3 == '\r') {
            FUN_004c23c0(param_1);
            FUN_0058af20(param_2,param_3,0);
          }
          else if (cVar3 == '\x0e') {
            FUN_004c23c0(param_1);
            uVar6 = FUN_0058ada0(param_2,param_3);
            FUN_004bf530(param_1,uVar6);
          }
          else {
            FUN_004c0450(param_1,&local_58);
            FUN_004c0d70(auStack_88,param_2,param_3,local_58);
          }
        }
        goto code_r0x004c1471;
      }
LAB_004c1254:
      FUN_004c1ed0(param_1,&local_40);
      FUN_0058cfc0(param_2,param_3,local_40);
      goto code_r0x004c1471;
    }
    if (bVar1 == 4) {
      uVar6 = FUN_004c02a0(param_1);
      FUN_0058d5d0(param_2,param_3,uVar6);
      goto code_r0x004c1471;
    }
    if (bVar1 == 1) {
      cVar3 = FUN_004bea50(param_1);
      if (cVar3 == '\a') {
        FUN_004c0450(param_1,&local_30);
        FUN_004c0d20(auStack_88,param_2,param_3,local_30);
      }
      else {
        iVar5 = FUN_004c06c0(param_1);
        FUN_0058af20(param_2,param_3,(longlong)iVar5);
      }
      goto code_r0x004c1471;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        FUN_004c0450(param_1,&local_38);
        iVar5 = FUN_00589bc0(pbVar2,local_38);
        if (iVar5 == -1) {
          FUN_004bdee0();
        }
        else {
          FUN_0058af20(param_2,param_3,(longlong)iVar5);
        }
      }
      goto code_r0x004c1471;
    }
  }
  else {
    if (0xc < bVar1) {
      if (bVar1 == 0xf) {
        FUN_004c0e60(auStack_88);
      }
      else if (bVar1 == 0x10) {
        uVar6 = FUN_004c0750(param_1);
        FUN_0058f420(param_2,param_3,uVar6);
      }
      else if (bVar1 == 0x12) {
        FUN_004c1ed0(param_1,&local_50);
        FUN_0058cfc0(param_2,param_3,local_50);
      }
      goto code_r0x004c1471;
    }
    if (bVar1 == 0xc) {
      FUN_004c0de0(auStack_88);
      goto code_r0x004c1471;
    }
    if (bVar1 != 9) {
      if (bVar1 != 10) {
        if (bVar1 == 0xb) {
          FUN_004c1ed0(param_1,&local_48);
          FUN_0058cfc0(param_2,param_3,local_48);
        }
        goto code_r0x004c1471;
      }
      goto LAB_004c1254;
    }
  }
  uVar4 = FUN_004bf480(param_1);
  FUN_0058af20(param_2,param_3,uVar4);
code_r0x004c1471:
  FUN_00414560(&local_60,7);
  return;
}

