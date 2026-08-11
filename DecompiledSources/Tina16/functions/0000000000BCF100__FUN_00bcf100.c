/* Ghidra address: 00bcf100 */
/* Ghidra symbol: FUN_00bcf100 */


void FUN_00bcf100(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_30;
  undefined4 local_20;
  int local_1c;
  
  local_40 = auStack_68;
  local_48 = 0;
  iVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  if (0 < iVar1) {
    *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
    FUN_004b3260(param_1);
    local_1c = (**(code **)(*param_2 + 0x28))(param_2);
    local_1c = (int)param_1[8] + local_1c;
    if (*(int *)((longlong)param_1 + 0x44) < local_1c) {
      (**(code **)(*param_1 + 0x50))(param_1,local_1c + 0xfU & 0xfffffff0);
    }
    local_20 = (undefined4)param_1[8];
    iVar1 = (**(code **)(*param_2 + 0x28))();
    local_1c = 0;
    if (-1 < iVar1 + -1) {
      do {
        local_30 = (undefined8 *)(param_1[7] + (longlong)(int)param_1[8] * 0x28);
        *local_30 = 0;
        (**(code **)(*param_2 + 0x18))(param_2,&local_48,local_1c);
        FUN_00414ad0(local_30,local_48);
        uVar3 = (**(code **)(*param_2 + 0x30))(param_2,local_1c);
        local_30[1] = uVar3;
        local_30[2] = 0xffffffffffffffff;
        *(undefined4 *)(local_30 + 3) = 0xffffffff;
        *(undefined1 *)(local_30 + 4) = 4;
        *(int *)(param_1 + 8) = (int)param_1[8] + 1;
        local_1c = local_1c + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (param_1[0x17] != 0) {
      uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
      (*(code *)param_1[0x17])(param_1[0x18],param_1,local_20,uVar2);
    }
    FUN_004b3390(param_1);
  }
  FUN_00414480(&local_48);
  return;
}

