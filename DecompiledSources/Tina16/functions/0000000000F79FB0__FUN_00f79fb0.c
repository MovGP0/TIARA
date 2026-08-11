/* Ghidra address: 00f79fb0 */
/* Ghidra symbol: FUN_00f79fb0 */


int FUN_00f79fb0(longlong param_1,undefined8 param_2,int param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int local_e4;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  int local_68;
  int local_64 [11];
  char local_38 [16];
  
  local_d0 = 0;
  local_d8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_80[0] = 0;
  local_88 = 0;
  local_90 = 0;
  local_70 = 0;
  local_e4 = param_3 - *(int *)(param_1 + 0x8d0);
  local_64[7] = *(int *)(param_1 + 0x8c8);
  local_64[3] = *(int *)(param_1 + 0x8c8) + *(int *)(param_1 + 0x8cc) * 0xff;
  local_68 = *(int *)(param_1 + 0x8cc);
  iVar4 = 2;
  piVar1 = local_64 + 8;
  piVar3 = local_64;
  piVar6 = local_64 + 4;
  do {
    *piVar1 = local_64[(longlong)(iVar4 + -1) + 6] + *(int *)(param_1 + 0x8c8);
    iVar2 = local_64[(longlong)(iVar4 + -1) + 2] + *(int *)(param_1 + 0x8cc);
    *piVar3 = iVar2;
    *piVar6 = *piVar1 + iVar2 * 0xff;
    iVar4 = iVar4 + 1;
    piVar6 = piVar6 + 1;
    piVar3 = piVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar4 != 5);
  iVar4 = 0;
  if (local_64[6] <= local_e4) {
    iVar4 = 1;
    while ((iVar4 < 4 && (local_64[(longlong)iVar4 + 2] < local_e4))) {
      iVar4 = iVar4 + 1;
    }
    local_e4 = local_e4 - local_64[(longlong)iVar4 + 6];
    if (0 < iVar4) {
      piVar1 = (int *)((longlong)&local_70 + (longlong)iVar4 * 4 + 4);
      piVar3 = local_64 + (longlong)iVar4 + 10;
      iVar2 = iVar4;
      do {
        iVar7 = *piVar1;
        *piVar3 = local_e4 / iVar7;
        local_e4 = local_e4 - (local_e4 / iVar7) * *piVar1;
        iVar2 = iVar2 + -1;
        piVar3 = piVar3 + -1;
        piVar1 = piVar1 + -1;
      } while (iVar2 != 0);
    }
    if (param_4 != '\0') {
      iVar2 = 1;
      if (0 < iVar4) {
        pcVar5 = local_38;
        iVar7 = iVar4;
        do {
          FUN_00416780(&local_88,*(undefined2 *)(param_1 + 0xb0));
          FUN_00f61040(&local_90,*pcVar5 + '\x01');
          FUN_00416cd0(local_80,3,L"movlw",local_88,local_90);
          FUN_00f787d0(param_1,param_2,local_80[0]);
          FUN_00416780(&local_a0,*(undefined2 *)(param_1 + 0xb0));
          FUN_00f78f10(param_1,&local_a8,*(int *)(param_1 + 0x3c) + iVar2 + -1);
          FUN_00416cd0(&local_98,3,L"movwf",local_a0,local_a8);
          FUN_00f787d0(param_1,param_2,local_98);
          iVar2 = iVar2 + 1;
          pcVar5 = pcVar5 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      FUN_00f78e10(param_1,&local_70,0);
      FUN_00416ba0(&local_b0,local_70,&DAT_00f7a49c);
      FUN_00f788b0(param_1,param_2,local_b0);
      iVar7 = 1;
      iVar2 = iVar4;
      if (0 < iVar4) {
        do {
          FUN_00416780(&local_c0,*(undefined2 *)(param_1 + 0xb0));
          FUN_00f78f10(param_1,&local_c8,*(int *)(param_1 + 0x3c) + iVar7 + -1);
          FUN_00416cd0(&local_b8,4,L"decfsz",local_c0,local_c8,&DAT_00f7a4c8);
          FUN_00f787d0(param_1,param_2,local_b8);
          FUN_00416780(&local_d8,*(undefined2 *)(param_1 + 0xb0));
          FUN_00416cd0(&local_d0,3,L"goto ",local_d8,local_70);
          FUN_00f787d0(param_1,param_2,local_d0);
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  if ((param_4 != '\0') && (0 < local_e4)) {
    do {
      FUN_00f787d0(param_1,param_2,&DAT_00f7a4f4);
      local_e4 = local_e4 + -1;
    } while (local_e4 != 0);
  }
  FUN_00414560(&local_d8,0xc);
  FUN_00414480(&local_70);
  return iVar4;
}

