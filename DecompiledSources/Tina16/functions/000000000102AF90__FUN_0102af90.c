/* Ghidra address: 0102af90 */
/* Ghidra symbol: FUN_0102af90 */


int FUN_0102af90(longlong param_1,undefined8 param_2,int param_3,char param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
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
  undefined4 local_68;
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
  local_e4 = param_3 + -8;
  local_64[7] = 4;
  local_64[3] = 0x301;
  local_68 = 3;
  iVar3 = 2;
  piVar1 = local_64 + 8;
  piVar2 = local_64;
  piVar6 = local_64 + 4;
  do {
    *piVar1 = local_64[(longlong)(iVar3 + -1) + 6] + 4;
    iVar4 = local_64[(longlong)(iVar3 + -1) + 2];
    *piVar2 = iVar4 + 3;
    *piVar6 = *piVar1 + (iVar4 + 3) * 0xff;
    iVar3 = iVar3 + 1;
    piVar6 = piVar6 + 1;
    piVar2 = piVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 != 5);
  iVar3 = 0;
  if (local_64[6] <= local_e4) {
    iVar3 = 1;
    while ((iVar3 < 4 && (local_64[(longlong)iVar3 + 2] < local_e4))) {
      iVar3 = iVar3 + 1;
    }
    local_e4 = local_e4 - local_64[(longlong)iVar3 + 6];
    if (0 < iVar3) {
      piVar1 = (int *)((longlong)&local_70 + (longlong)iVar3 * 4 + 4);
      piVar2 = local_64 + (longlong)iVar3 + 10;
      iVar4 = iVar3;
      do {
        iVar7 = *piVar1;
        *piVar2 = local_e4 / iVar7;
        local_e4 = local_e4 - (local_e4 / iVar7) * *piVar1;
        iVar4 = iVar4 + -1;
        piVar2 = piVar2 + -1;
        piVar1 = piVar1 + -1;
      } while (iVar4 != 0);
    }
    if (param_4 != '\0') {
      iVar4 = 1;
      if (0 < iVar3) {
        pcVar5 = local_38;
        iVar7 = iVar3;
        do {
          FUN_00416780(&local_88,*(undefined2 *)(param_1 + 0xb0));
          FUN_00f61040(&local_90,*pcVar5 + '\x01');
          FUN_00416cd0(local_80,4,&DAT_0102b43c,local_88,L"R16, ",local_90);
          FUN_00f787d0(param_1,param_2,local_80[0]);
          FUN_00416780(&local_a0,*(undefined2 *)(param_1 + 0xb0));
          FUN_00f78f90(param_1,&local_a8,*(int *)(param_1 + 0x40) + iVar4 + -1);
          FUN_00416cd0(&local_98,4,&DAT_0102b468,local_a0,local_a8,L", R16");
          FUN_00f787d0(param_1,param_2,local_98);
          iVar4 = iVar4 + 1;
          pcVar5 = pcVar5 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      FUN_00f78e10(param_1,&local_70,0);
      FUN_00416ba0(&local_b0,local_70,&DAT_0102b494);
      FUN_00f788b0(param_1,param_2,local_b0);
      iVar7 = 1;
      iVar4 = iVar3;
      if (0 < iVar3) {
        do {
          FUN_00416780(&local_c0,*(undefined2 *)(param_1 + 0xb0));
          FUN_00f78f90(param_1,&local_c8,*(int *)(param_1 + 0x40) + iVar7 + -1);
          FUN_00416cd0(&local_b8,3,&DAT_0102b4a4,local_c0,local_c8);
          FUN_00f787d0(param_1,param_2,local_b8);
          FUN_00416780(&local_d8,*(undefined2 *)(param_1 + 0xb0));
          FUN_00416cd0(&local_d0,3,L"BRNE",local_d8,local_70);
          FUN_00f787d0(param_1,param_2,local_d0);
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  if ((param_4 != '\0') && (0 < local_e4)) {
    do {
      FUN_00f787d0(param_1,param_2,&LAB_0102b4d0);
      local_e4 = local_e4 + -1;
    } while (local_e4 != 0);
  }
  FUN_00414560(&local_d8,0xc);
  FUN_00414480(&local_70);
  return iVar3;
}

