/* Ghidra address: 0053a6c0 */
/* Ghidra symbol: FUN_0053a6c0 */


undefined1 FUN_0053a6c0(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 local_139;
  undefined8 local_130;
  undefined1 local_128 [256];
  longlong local_28;
  longlong local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_130 = 0;
  FUN_00417580(param_3,&DAT_00527bf8);
  cVar1 = *(char *)*param_1;
  if (cVar1 == '\x05') {
    uVar6 = FUN_00538390(param_1);
    FUN_004169a0(&local_20,uVar6);
  }
  else if (cVar1 == '\n') {
    puVar3 = (undefined8 *)FUN_00538390(param_1);
    FUN_00416880(&local_20,*puVar3);
  }
  else if (cVar1 == '\v') {
    puVar3 = (undefined8 *)FUN_00538390(param_1);
    FUN_004168b0(&local_20,*puVar3);
  }
  else if (cVar1 == '\x12') {
    puVar3 = (undefined8 *)FUN_00538390(param_1);
    FUN_00414b50(&local_20,*puVar3);
  }
  bVar2 = *param_2;
  if (bVar2 < 0xb) {
    if (bVar2 == 10) {
      uVar9 = 0;
      if (local_20 != 0) {
        uVar9 = *(undefined4 *)(local_20 + -4);
      }
      uVar6 = FUN_00416740(local_20);
      puVar5 = (undefined2 *)FUN_00589390(param_2);
      FUN_004173c0(&local_28,uVar6,uVar9,*puVar5);
      uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538080(&local_28,param_2,uVar6);
    }
    else if (bVar2 == 2) {
      FUN_00415dd0(&local_28,local_20,0);
      iVar8 = 0;
      if (local_28 != 0) {
        iVar8 = *(int *)(local_28 + -4);
      }
      if (iVar8 != 1) {
        local_139 = 0;
        goto LAB_0053aa01;
      }
      uVar6 = FUN_00415ab0(local_28);
      uVar7 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538080(uVar6,param_2,uVar7);
    }
    else if (bVar2 == 5) {
      FUN_00415dd0(&local_28,local_20,0);
      iVar8 = 0;
      if (local_28 != 0) {
        iVar8 = *(int *)(local_28 + -4);
      }
      pbVar4 = (byte *)FUN_00589390(param_2);
      if ((int)(uint)*pbVar4 < iVar8) {
        local_139 = 0;
        goto LAB_0053aa01;
      }
      FUN_00415560(local_128,local_28,0xff);
      uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538080(local_128,param_2,uVar6);
    }
    else if (bVar2 == 9) {
      iVar8 = 0;
      if (local_20 != 0) {
        iVar8 = *(int *)(local_20 + -4);
      }
      if (iVar8 != 1) {
        local_139 = 0;
        goto LAB_0053aa01;
      }
      uVar6 = FUN_00416740(local_20);
      uVar7 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538080(uVar6,param_2,uVar7);
    }
  }
  else if (bVar2 == 0xb) {
    FUN_004168e0(&local_130,local_20);
    uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538080(&local_130,param_2,uVar6);
  }
  else if (bVar2 == 0x12) {
    uVar6 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538080(&local_20,param_2,uVar6);
  }
  local_139 = 1;
LAB_0053aa01:
  FUN_00414520(&local_130);
  FUN_004144d0(&local_28);
  FUN_00414480(&local_20);
  return local_139;
}

