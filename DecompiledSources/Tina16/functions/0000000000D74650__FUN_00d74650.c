/* Ghidra address: 00d74650 */
/* Ghidra symbol: FUN_00d74650 */


undefined8 FUN_00d74650(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  iVar1 = FUN_004170c0(&LAB_00d747b8,param_2,1);
  if (0 < iVar1) {
    FUN_00416dc0(local_30,param_2,1,iVar1 + -1);
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = *(undefined4 *)(param_2 + -4);
    }
    FUN_00416dc0(&local_38,param_2,iVar1 + 1,uVar2);
  }
  iVar6 = 0;
  iVar7 = *(int *)(*(longlong *)(param_1 + 0xb8) + 0x10);
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_00d74900(param_1,iVar6);
      iVar3 = FUN_0043e420(*(undefined8 *)(lVar4 + 0x10),param_2);
      if (iVar3 == 0) {
        local_40 = FUN_00d74900(param_1,iVar6);
        goto LAB_00d74769;
      }
      if (0 < iVar1) {
        lVar4 = FUN_00d74900(param_1,iVar6);
        iVar3 = FUN_0043e420(*(undefined8 *)(lVar4 + 0x10),local_30[0]);
        if (iVar3 == 0) {
          uVar5 = FUN_00d74900(param_1,iVar6);
          local_40 = FUN_00d77610(uVar5,local_38);
          goto LAB_00d74769;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_40 = 0;
LAB_00d74769:
  FUN_00414560(&local_38,2);
  return local_40;
}

