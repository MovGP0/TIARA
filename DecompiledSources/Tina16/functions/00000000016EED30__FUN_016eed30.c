/* Ghidra address: 016eed30 */
/* Ghidra symbol: FUN_016eed30 */


void FUN_016eed30(int *param_1,undefined8 param_2)

{
  char *pcVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  piVar7 = (int *)((longlong)*param_1 * 2);
  pcVar1 = (char *)(*(longlong *)PTR_DAT_02002880 + -0x10 + (longlong)*param_1 * 0x10);
  if (*pcVar1 == '\0') {
    puVar6 = local_20;
    FUN_01b20020(puVar6,*(undefined8 *)(param_1 + 0x4a),&DAT_016eef24);
    piVar7 = (int *)CONCAT62((int6)((ulonglong)puVar6 >> 0x10),0x218);
    FUN_01b04ef0(piVar7,0,&LAB_016eef34,local_20[0]);
  }
  else {
    if ((char)param_1[0x4e] == '\0') {
      piVar7 = param_1;
      (**(code **)(pcVar1 + 8))(param_1,param_2);
    }
    *(undefined1 *)((longlong)param_1 + 0x11f) = 1;
  }
  uVar8 = CONCAT71((int7)((ulonglong)piVar7 >> 8),1);
  bVar2 = true;
  iVar4 = 1;
  for (uVar9 = (uint)*(byte *)(param_1 + 1); uVar9 != 0; uVar9 = uVar9 - 1) {
    if ((bVar2) && (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8 + (longlong)iVar4 * 8) != 0)) {
      uVar8 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),1);
      bVar2 = true;
    }
    else {
      uVar8 = 0;
      bVar2 = false;
    }
    iVar4 = iVar4 + 1;
  }
  if (!bVar2) {
    FUN_01b04d70(CONCAT62((int6)((ulonglong)uVar8 >> 0x10),0x219),&LAB_016eef34,0);
  }
  *(undefined1 *)(param_1 + 0x48) = 1;
  iVar4 = 1;
  for (uVar9 = (uint)*(byte *)(param_1 + 1); uVar9 != 0; uVar9 = uVar9 - 1) {
    if (((char)param_1[0x48] == '\0') ||
       (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -8 + (longlong)iVar4 * 8) + 0x39) ==
        '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined1 *)(param_1 + 0x48) = uVar5;
    iVar4 = iVar4 + 1;
  }
  if ((((((char)param_1[0x48] == '\0') && ((char)param_1[0x44] == '\0')) &&
       (sVar3 = (**(code **)(**(longlong **)(param_1 + 0x4a) + 0xf8))
                          (*(longlong **)(param_1 + 0x4a)), sVar3 != 9)) &&
      ((((sVar3 != 0x6b && (sVar3 != 200)) &&
        ((sVar3 != 0xd2 && ((sVar3 != 0xdc && (sVar3 != 0xb)))))) && (sVar3 != 0x26)))) &&
     (((sVar3 != 0x6e && (sVar3 != 0x85)) && (sVar3 != 0x84)))) {
    FUN_01b04d70(0x21a,&LAB_016eef34,0);
  }
  FUN_00414480(local_20);
  return;
}

