/* Ghidra address: 00842090 */
/* Ghidra symbol: FUN_00842090 */


void FUN_00842090(longlong param_1,int *param_2,int param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int local_40;
  
  local_40 = param_3;
  if (param_4 == '\x03') {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    pcVar4 = (code *)FUN_00411550(uVar1,0xffc5);
    cVar2 = (*pcVar4)(uVar1);
    if (cVar2 != '\0') {
      local_40 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x40));
      local_40 = local_40 - param_3;
    }
  }
  iVar6 = param_2[1];
  iVar5 = *param_2;
  uVar7 = 0;
  iVar8 = iVar5;
  if (iVar5 < 7) {
    iVar8 = 7;
    uVar7 = 7U - iVar5 >> 1;
  }
  iVar5 = param_2[7];
  if (iVar5 <= param_2[8] + -1) {
    iVar9 = ((param_2[8] + -1) - iVar5) + 1;
    do {
      iVar3 = (**(code **)(param_2 + 10))(*(undefined8 *)(param_2 + 0xc),iVar5);
      iVar6 = iVar6 + iVar3;
      if (param_2[2] < iVar6) break;
      if (((int)(iVar6 - uVar7) <= local_40) && (local_40 <= (int)((iVar6 - uVar7) + iVar8))) {
        **(char **)(param_1 + 0x58) = param_4;
        **(int **)(param_1 + 0x68) = iVar6;
        **(int **)(param_1 + 0x70) = iVar6 - local_40;
        **(int **)(param_1 + 0x60) = iVar5;
        return;
      }
      iVar6 = iVar6 + *param_2;
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar6 = param_2[3];
  if (((param_2[2] == iVar6) && ((int)(iVar6 - uVar7) <= local_40)) && (local_40 <= iVar6)) {
    **(char **)(param_1 + 0x58) = param_4;
    **(int **)(param_1 + 0x68) = iVar6;
    **(int **)(param_1 + 0x70) = iVar6 - local_40;
    **(int **)(param_1 + 0x60) = param_2[4] + 1;
  }
  return;
}

