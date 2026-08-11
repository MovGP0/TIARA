/* Ghidra address: 0197eeb0 */
/* Ghidra symbol: FUN_0197eeb0 */


void FUN_0197eeb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int local_54;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_50[0] = 0;
  local_40[0] = 0;
  iVar1 = FUN_0197e8b0();
  local_54 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_0197eaa0(param_1,local_54);
      FUN_00410ae0(*(undefined8 *)(lVar3 + 0x18),local_40);
      lVar3 = FUN_0197eaa0(param_1,local_54);
      lVar3 = *(longlong *)(lVar3 + 8);
      iVar7 = *(int *)(lVar3 + 0x10);
      iVar6 = 0;
      if (-1 < iVar7 + -1) {
        do {
          uVar4 = FUN_004aeac0(lVar3,iVar6);
          FUN_00410ae0(uVar4,local_50);
          lVar5 = FUN_0197eaa0(param_1,local_54);
          uVar2 = FUN_004aeac0(*(undefined8 *)(lVar5 + 0x10),iVar6);
          (**(code **)(*param_2 + 0x28))(param_2,local_40[0],local_50[0],uVar2);
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      local_54 = local_54 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_50);
  FUN_00414480(local_40);
  return;
}

