/* Ghidra address: 01163ad0 */
/* Ghidra symbol: FUN_01163ad0 */


void FUN_01163ad0(undefined8 param_1,undefined1 param_2,undefined4 param_3,char param_4,char param_5
                 ,undefined8 *param_6,double *param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined7 uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  double dVar9;
  ulonglong in_stack_ffffffffffffff68;
  undefined8 local_68 [3];
  int local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  double local_38;
  int local_30;
  
  puVar7 = local_68;
  for (lVar5 = 8; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *param_6;
    param_6 = param_6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(int *)(param_7 + 4) = local_50;
  if (local_50 < 2) {
    local_50 = 2;
    *local_48 = 0;
    *local_40 = 0;
    local_48[1] = 0x41cdcd6500000000;
    local_40[1] = (double)local_48[1] * 0.0012566370614359172;
  }
  param_7[5] = (double)local_48;
  param_7[6] = (double)local_40;
  uVar8 = FUN_00b90650(0x3fe0000000000000,local_38);
  local_38 = (double)FUN_00b90620(uVar8,0x3d719799812dea11);
  if ((local_30 == 0) && (iVar2 = 0, iVar6 = local_50, -1 < local_50 + -1)) {
    do {
      if ((double)local_48[iVar2 + 1] - (double)local_48[iVar2] < local_38 * 2.0) {
        local_30 = 1;
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  param_7[7] = local_38;
  dVar9 = (double)FUN_00b90620(local_68[0],0x3d719799812dea11);
  param_7[2] = dVar9;
  dVar9 = (double)FUN_00b90620(local_68[1],0x3eb0c6f7a0b5ed8d);
  param_7[3] = dVar9;
  *(int *)(param_7 + 8) = local_30;
  uVar4 = (undefined7)((ulonglong)param_7 >> 8);
  uVar8 = CONCAT71(uVar4,3);
  if (param_4 == '\0') {
    uVar8 = CONCAT71(uVar4,2);
  }
  uVar3 = (undefined4)uVar8;
  if (param_5 == '\0') {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),(char)uVar8 + -1);
  }
  bVar1 = FUN_016e9e80(param_1,uVar3);
  *(uint *)(param_7 + 9) = (uint)bVar1;
  *(undefined1 *)((longlong)param_7 + 0x44) = param_2;
  *(char *)((longlong)param_7 + 0x45) = (char)param_3;
  *(char *)((longlong)param_7 + 0x46) = param_5;
  FUN_016ebe60(param_1,bVar1 + 1,param_2,param_3,in_stack_ffffffffffffff68 & 0xffffffffffffff00);
  dVar9 = (double)FUN_01163590(param_7);
  param_7[1] = dVar9;
  if (param_4 != '\0') {
    FUN_016ec420(param_1,*(char *)(param_7 + 9) + '\x02',param_2,param_3,param_4,0,1);
    FUN_016ed320(param_1,*(char *)(param_7 + 9) + '\x02',0,1.0 / param_7[3],0);
  }
  if (param_5 != '\0') {
    FUN_016ec420(param_1,*(char *)(param_7 + 9) + '\x03',param_2,param_3,param_5,0,0);
    FUN_016ed320(param_1,*(char *)(param_7 + 9) + '\x03',0,0,0);
  }
  *param_7 = param_7[3] / (param_7[2] * 1.2566370614359173e-06);
  FUN_016ed320(param_1,*(char *)(param_7 + 9) + '\x01',0,param_7[1] / *param_7,0);
  return;
}

