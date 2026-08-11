/* Ghidra address: 00a0c030 */
/* Ghidra symbol: FUN_00a0c030 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00a0c030(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar9 = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar7 = 1;
  switch(uVar9) {
  case 200:
    break;
  case 0xc9:
    goto switchD_00a0c05f_caseD_c9;
  case 0xca:
    goto switchD_00a0c05f_caseD_ca;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
                    /* WARNING: Could not recover jumptable at 0x00a0c072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)param_1[0x48])(param_1);
    return uVar7;
  default:
    lVar5 = *param_1;
    *(undefined4 *)(lVar5 + 0x28) = 0x14;
    *(undefined4 *)(lVar5 + 0x2c) = uVar9;
    (**(code **)*param_1)(param_1);
    uVar7 = 0;
    goto switchD_00a0c05f_caseD_ca;
  }
  (**(code **)(param_1[0x48] + 8))(param_1);
  (**(code **)(param_1[5] + 0x10))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xc9;
switchD_00a0c05f_caseD_c9:
  uVar7 = (**(code **)param_1[0x48])(param_1);
  if ((int)uVar7 != 1) {
    return uVar7;
  }
  iVar2 = (int)param_1[7];
  if (iVar2 == 4) {
    uVar9 = 4;
    if (((int)param_1[0x30] == 0) || (bVar1 = *(byte *)((longlong)param_1 + 0x184), bVar1 == 0)) {
      uVar8 = 4;
    }
    else {
      if (bVar1 != 2) {
        lVar5 = *param_1;
        *(undefined4 *)(lVar5 + 0x28) = 0x72;
        *(uint *)(lVar5 + 0x2c) = (uint)bVar1;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
      }
      uVar8 = 5;
    }
  }
  else if (iVar2 == 3) {
    uVar9 = 2;
    uVar8 = 3;
    if (*(int *)((longlong)param_1 + 0x174) == 0) {
      if ((int)param_1[0x30] == 0) {
        piVar6 = (int *)param_1[0x26];
        iVar2 = *piVar6;
        iVar3 = piVar6[0x18];
        iVar4 = piVar6[0x30];
        if (((iVar2 != 1) || (iVar3 != 2)) || (iVar4 != 3)) {
          uVar9 = 2;
          if (((iVar2 == 0x52) && (iVar3 == 0x47)) && (iVar4 == 0x42)) goto LAB_00a0c230;
          lVar5 = *param_1;
          *(int *)(lVar5 + 0x2c) = iVar2;
          *(int *)(lVar5 + 0x30) = iVar3;
          *(int *)(lVar5 + 0x34) = iVar4;
          *(undefined4 *)(lVar5 + 0x28) = 0x6f;
          (**(code **)(lVar5 + 8))(param_1,1);
        }
      }
      else {
        bVar1 = *(byte *)((longlong)param_1 + 0x184);
        uVar9 = 2;
        if (bVar1 == 0) {
LAB_00a0c230:
          uVar9 = 2;
          uVar8 = 2;
        }
        else if (bVar1 != 1) {
          lVar5 = *param_1;
          *(undefined4 *)(lVar5 + 0x28) = 0x72;
          *(uint *)(lVar5 + 0x2c) = (uint)bVar1;
          (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        }
      }
    }
  }
  else {
    uVar8 = 0;
    uVar9 = 0;
    if (iVar2 == 1) {
      uVar8 = 1;
      uVar9 = 1;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar8;
  *(undefined4 *)(param_1 + 8) = uVar9;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x100000001;
  param_1[10] = 0x3ff0000000000000;
  lVar5 = lRam0000000001e6ebd8;
  param_1[0xb] = _DAT_01e6ebd0;
  param_1[0xc] = lVar5;
  lVar5 = lRam0000000001e6ebe8;
  param_1[0xd] = _DAT_01e6ebe0;
  param_1[0xe] = lVar5;
  param_1[0xf] = 0x100;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0xca;
  uVar7 = 1;
switchD_00a0c05f_caseD_ca:
  return uVar7;
}

