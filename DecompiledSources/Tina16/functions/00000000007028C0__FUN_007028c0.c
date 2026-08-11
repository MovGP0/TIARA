/* Ghidra address: 007028c0 */
/* Ghidra symbol: FUN_007028c0 */


char FUN_007028c0(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  char local_149;
  undefined2 local_13a [129];
  longlong local_38;
  longlong local_30 [2];
  
  local_38 = 0;
  lVar4 = 0;
  if (*(int *)(param_2 + 0x18) < *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10)) {
    lVar4 = FUN_004aeac0(*(longlong *)(param_1 + 0x4b0),*(int *)(param_2 + 0x18));
    local_149 = FUN_004113d0(lVar4,&PTR_FUN_006cb0d0);
  }
  else {
    local_149 = *(longlong *)(param_1 + 0x5a0) != 0;
    if ((bool)local_149) {
      local_30[0] = 0;
      (**(code **)(param_1 + 0x5a0))
                (*(undefined8 *)(param_1 + 0x5a8),param_1,
                 (*(int *)(param_2 + 0x18) - *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10)) +
                 *(int *)(param_1 + 0x53c),local_30);
      lVar4 = local_30[0];
      local_149 = local_30[0] != 0;
      if ((bool)local_149) {
        *(longlong *)(local_30[0] + 0x340) = param_1;
        iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x4b0),local_30[0]);
        if (iVar2 == -1) {
          FUN_004aec30(*(undefined8 *)(param_1 + 0x4b0),*(undefined4 *)(param_2 + 0x18),local_30[0])
          ;
          if (*(longlong *)(param_1 + 0x5d0) != 0) {
            (**(code **)(param_1 + 0x5d0))(*(undefined8 *)(param_1 + 0x5d8),param_1,local_30[0]);
          }
        }
      }
    }
  }
  if (local_149 != '\0') {
    lVar5 = FUN_004113f0(lVar4,&PTR_FUN_006cb0d0);
    if (*(byte *)(lVar5 + 0x33a) < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (*(byte *)(lVar5 + 0x33a) & 0x1f) &
              0x18U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      FUN_0041ddd0(&local_38,PTR_PTR_020012a8);
    }
    else {
      FUN_0064dd90(lVar5,&local_38);
    }
    uVar6 = FUN_00416740(local_38);
    FUN_00442580(*(undefined8 *)(param_2 + 0x48),uVar6,0x80);
    uVar3 = FUN_00414d00(*(undefined8 *)(param_2 + 0x48));
    *(undefined4 *)(param_2 + 0x40) = uVar3;
    FUN_00442580(local_13a,uVar6,0x80);
    iVar2 = 0;
    if (local_38 != 0) {
      iVar2 = *(int *)(local_38 + -4);
    }
    local_13a[iVar2 + 1] = 0;
    if ((*(char *)(param_1 + 0x4dc) == '\0') &&
       ((*(char *)(param_1 + 0x4a0) == '\0' || (*(char *)(lVar5 + 0x33a) != '\x05')))) {
      *(undefined8 *)(param_2 + 0x38) = 0xffffffffffffffff;
    }
    else {
      uVar6 = FUN_0064fca0(param_1,0x44d,0,local_13a);
      *(undefined8 *)(param_2 + 0x38) = uVar6;
    }
    uVar3 = FUN_006fa830(lVar5);
    *(undefined4 *)(param_2 + 0x24) = uVar3;
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar5 + 0x31c);
    *(undefined *)(param_2 + 0x29) = (&DAT_01e023cc)[(ulonglong)*(byte *)(lVar5 + 0x33a) * 2];
    uVar1 = FUN_006f9f70(lVar5);
    *(undefined1 *)(param_2 + 0x28) = uVar1;
    *(longlong *)(param_2 + 0x30) = lVar4;
    if (0xffff < *(longlong *)(param_2 + 0x38)) {
      FUN_00655b90(param_1);
    }
  }
  FUN_00414480(&local_38);
  return local_149;
}

