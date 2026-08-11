/* Ghidra address: 00662b30 */
/* Ghidra symbol: FUN_00662b30 */


void FUN_00662b30(longlong param_1,undefined8 param_2,longlong param_3,byte param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar1 = FUN_006591f0(*(undefined8 *)(param_1 + 0x28));
  if (((param_3 == 0) || (*(char *)(param_3 + 0x100) == '\0')) || (iVar1 < 2)) {
    uVar2 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x28));
    uVar3 = FUN_0064d120(*(undefined8 *)(param_1 + 0x28));
    FUN_004238d0(&local_38,0,0,uVar2,uVar3);
    *(undefined8 *)param_5 = local_38;
    *(undefined8 *)(param_5 + 2) = uStack_30;
    if (0 < iVar1) {
      if (param_4 == 1) {
        param_5[3] = param_5[3] / 2;
      }
      else if (param_4 == 2) {
        param_5[1] = param_5[3] / 2;
      }
      else if (param_4 == 3) {
        param_5[2] = param_5[2] / 2;
      }
      else if (param_4 == 4) {
        *param_5 = param_5[2] / 2;
      }
    }
  }
  else {
    iVar1 = *(int *)(param_3 + 0x90);
    iVar7 = *(int *)(param_3 + 0x94);
    iVar4 = *(int *)(param_3 + 0x98);
    iVar5 = *(int *)(param_3 + 0x9c);
    if (param_4 < 8) {
      bVar8 = ((int)CONCAT71((int7)((ulonglong)param_3 >> 8),1) << (param_4 & 0x1f) & 0x18U) != 0;
    }
    else {
      bVar8 = false;
    }
    if (bVar8) {
      iVar4 = iVar4 / 2;
    }
    else {
      if (param_4 < 8) {
        bVar8 = ((int)CONCAT71((uint7)(uint3)((uint)iVar4 >> 8),1) << (param_4 & 0x1f) & 6U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        iVar5 = iVar5 / 2;
      }
    }
    if (param_4 == 2) {
      iVar7 = iVar7 + iVar5;
    }
    else if (param_4 == 4) {
      iVar1 = iVar1 + iVar4;
    }
    FUN_00423b80(&local_38,iVar1,iVar7,iVar4,iVar5);
    *(undefined8 *)param_5 = local_38;
    *(undefined8 *)(param_5 + 2) = uStack_30;
  }
  uVar6 = FUN_0065b870(*(undefined8 *)(param_1 + 0x28));
  thunk_FUN_0411b3be(uVar6,0,param_5,2);
  return;
}

