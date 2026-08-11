/* Ghidra address: 01887000 */
/* Ghidra symbol: FUN_01887000 */


longlong * FUN_01887000(longlong param_1,longlong param_2,longlong *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  int local_30;
  int local_2c;
  undefined8 *local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_20 = param_3;
  FUN_00618d20(*(undefined8 *)(param_1 + 0x30));
  if (((0 < param_4) && (iVar1 = FUN_01888a70(*(undefined8 *)(param_1 + 8)), param_4 <= iVar1)) &&
     (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) != 0)) {
    iVar1 = param_4 + -1;
    lVar2 = FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar1);
    if (*(int *)(lVar2 + 8) != 1) {
      piVar3 = (int *)FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar1);
      local_34 = *piVar3;
      lVar2 = FUN_01888b80(*(undefined8 *)(param_1 + 8),iVar1);
      local_30 = *(int *)(lVar2 + 4);
      local_28 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),local_34);
      iVar1 = FUN_01888a70(*(undefined8 *)(param_1 + 8));
      if ((param_4 < iVar1) &&
         (piVar3 = (int *)FUN_01888b80(*(undefined8 *)(param_1 + 8),param_4), *piVar3 == local_34))
      {
        lVar2 = FUN_01888b80(*(undefined8 *)(param_1 + 8),param_4);
        local_2c = *(int *)(lVar2 + 4) - local_30;
      }
      else {
        local_2c = (**(code **)*local_28)(local_28);
        local_2c = local_2c - local_30;
      }
      FUN_004b6dc0(local_28,(longlong)local_30);
      if (*(char *)(param_1 + 0x28) == '\0') {
        *(int *)(local_28 + 5) = local_30 + local_2c;
      }
      else {
        *(int *)(local_28 + 3) = local_30 + local_2c;
      }
      if (param_3 == (longlong *)0x0) {
        if (param_2 == 0) {
          uVar4 = FUN_018669c0();
          local_20 = (longlong *)FUN_01867490(uVar4,local_28);
        }
        else {
          uVar4 = FUN_018669c0();
          FUN_01867540(uVar4,param_2,local_28);
        }
      }
      else {
        (**(code **)(*param_3 + 0xc0))(param_3,local_28);
      }
      if (*(char *)(param_1 + 0x28) == '\0') {
        *(undefined4 *)(local_28 + 5) = 0;
      }
      else {
        *(undefined4 *)(local_28 + 3) = 0;
      }
      if (param_2 != 0) {
        local_20 = *(longlong **)(param_2 + 0x18);
      }
      FUN_00618d40(*(undefined8 *)(param_1 + 0x30));
      return local_20;
    }
  }
  FUN_01887270(0,local_40);
  return local_20;
}

