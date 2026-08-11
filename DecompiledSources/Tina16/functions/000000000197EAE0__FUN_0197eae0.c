/* Ghidra address: 0197eae0 */
/* Ghidra symbol: FUN_0197eae0 */


void FUN_0197eae0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int local_54;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_50[0] = 0;
  local_40[0] = 0;
  iVar1 = FUN_0197e8b0();
  local_54 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_0197eaa0(param_1,local_54);
      FUN_00410ae0(*(undefined8 *)(lVar4 + 0x18),local_40);
      lVar4 = FUN_0197eaa0(param_1,local_54);
      lVar4 = *(longlong *)(lVar4 + 8);
      iVar9 = *(int *)(lVar4 + 0x10);
      iVar8 = 0;
      if (-1 < iVar9 + -1) {
        do {
          lVar5 = FUN_0197eaa0(param_1,local_54);
          uVar6 = FUN_004aeac0(lVar4,iVar8);
          FUN_00410ae0(uVar6,local_50);
          lVar7 = FUN_0197eaa0(param_1,local_54);
          uVar2 = FUN_004aeac0(*(undefined8 *)(lVar7 + 0x10),iVar8);
          iVar3 = (**(code **)(*param_2 + 0x20))(param_2,local_40[0],local_50[0],uVar2);
          FUN_004aedb0(*(undefined8 *)(lVar5 + 0x10),iVar8,(longlong)iVar3);
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      local_54 = local_54 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_50);
  FUN_00414480(local_40);
  return;
}

