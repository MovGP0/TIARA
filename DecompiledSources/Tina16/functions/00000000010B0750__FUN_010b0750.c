/* Ghidra address: 010b0750 */
/* Ghidra symbol: FUN_010b0750 */


undefined4 FUN_010b0750(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  int local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  longlong *local_40;
  int local_34;
  int local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_70 = auStack_98;
  local_78 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_24 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = *(longlong **)(param_1 + 0x20);
  iVar1 = (**(code **)(*local_40 + 0x28))(local_40);
  if (2 < iVar1) {
    (**(code **)(*local_40 + 0x18))(local_40,&local_78,2);
    FUN_004b4b10(local_20,local_78);
    iVar1 = (**(code **)(*local_20 + 0x28))();
    local_28 = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_60,local_28);
        local_34 = FUN_004170c0(&LAB_010b0984,local_60,1);
        FUN_00416dc0(local_50,local_60,1,local_34 + -1);
        local_68 = 0;
        if (local_60 != 0) {
          local_68 = *(int *)(local_60 + -4);
        }
        FUN_00416dc0(&local_58,local_60,local_34 + 1,local_68 - local_34);
        iVar2 = FUN_00416db0(local_50[0],local_res10[0]);
        if (iVar2 == 0) {
          local_24 = FUN_0043fc00(local_58);
          FUN_010b0920(0,local_70);
          goto LAB_010b08ed;
        }
        local_28 = local_28 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00410f20(local_20);
LAB_010b08ed:
  FUN_00414480(&local_78);
  FUN_00414560(&local_60,3);
  FUN_00414480(local_res10);
  return local_24;
}

