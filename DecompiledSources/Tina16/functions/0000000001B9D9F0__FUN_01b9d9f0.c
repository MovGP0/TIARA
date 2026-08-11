/* Ghidra address: 01b9d9f0 */
/* Ghidra symbol: FUN_01b9d9f0 */


void FUN_01b9d9f0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong local_res8 [4];
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined1 local_42 [21];
  undefined1 local_2d [21];
  
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_168 = 0;
  local_50 = 0;
  local_58 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_2d[0] = 0;
  local_42[0] = 0;
  bVar6 = 1;
  while ((sVar1 = *(short *)(local_res8[0] + -2 + (ulonglong)bVar6 * 2), sVar1 == 0x20 ||
         (sVar1 == 9))) {
    bVar6 = bVar6 + 1;
  }
  while( true ) {
    sVar1 = *(short *)(local_res8[0] + -2 + (ulonglong)bVar6 * 2);
    if ((sVar1 == 0x20) || (sVar1 == 9)) {
      bVar2 = false;
    }
    else {
      iVar4 = 0;
      if (local_res8[0] != 0) {
        iVar4 = *(int *)(local_res8[0] + -4);
      }
      bVar2 = (int)(uint)bVar6 <= iVar4;
    }
    if (!bVar2) break;
    FUN_004169a0(&local_50,local_2d);
    FUN_00416780(&local_58,sVar1);
    FUN_00416ad0(&local_50,local_58);
    FUN_00416910(local_158,local_50,0xff);
    FUN_00415020(local_2d,local_158,0x14);
    bVar6 = bVar6 + 1;
  }
  while ((sVar1 = *(short *)(local_res8[0] + -2 + (ulonglong)bVar6 * 2), sVar1 == 0x20 ||
         (sVar1 == 9))) {
    bVar6 = bVar6 + 1;
  }
  while( true ) {
    cVar3 = FUN_01b215f0(*(undefined2 *)(local_res8[0] + -2 + (ulonglong)bVar6 * 2));
    if (cVar3 == '\0') {
      bVar2 = false;
    }
    else {
      iVar4 = 0;
      if (local_res8[0] != 0) {
        iVar4 = *(int *)(local_res8[0] + -4);
      }
      bVar2 = (int)(uint)bVar6 <= iVar4;
    }
    if (!bVar2) break;
    FUN_004169a0(&local_160,local_42);
    FUN_00416780(&local_168,*(undefined2 *)(local_res8[0] + -2 + (ulonglong)bVar6 * 2));
    FUN_00416ad0(&local_160,local_168);
    FUN_00416910(local_158,local_160,0xff);
    FUN_00415020(local_42,local_158,0x14);
    bVar6 = bVar6 + 1;
  }
  FUN_004169a0(param_2,local_2d);
  FUN_004154b0(&local_170,local_42,0);
  FUN_00416880(&local_178,local_170);
  uVar5 = FUN_0040e860(local_178,&local_48);
  if (local_48 == 0) {
    *param_3 = uVar5;
  }
  FUN_00414480(&local_178);
  FUN_004144d0(&local_170);
  FUN_00414560(&local_168,2);
  FUN_00414560(&local_58,2);
  FUN_00414480(local_res8);
  return;
}

