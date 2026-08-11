/* Ghidra address: 01bf68f0 */
/* Ghidra symbol: FUN_01bf68f0 */


longlong * FUN_01bf68f0(undefined8 param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 local_res10;
  longlong local_res18;
  byte local_res20;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_50;
  longlong local_48;
  longlong local_30;
  int local_24;
  longlong *local_20;
  
  local_60 = auStack_88;
  local_30 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_20 = (longlong *)0x0;
  if (local_res18 != 0) {
    FUN_01bf67c0(&local_30,param_1,local_res10);
    local_48 = FUN_01bf8df0(param_1);
    iVar4 = *(int *)(*(longlong *)(local_48 + 0x10) + 0x10);
    local_24 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar1 = FUN_01bf8df0(param_1);
        lVar2 = FUN_01bf95e0(uVar1,local_24);
        FUN_01bf67c0(&local_30,*(undefined8 *)(lVar2 + 0x18),local_res10);
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    pcVar3 = (code *)FUN_00411550(param_1,0xffec);
    lVar2 = (*pcVar3)(param_1);
    local_20 = (longlong *)(**(code **)(lVar2 + 0x38))(lVar2,1,0);
    FUN_01bfdfd0(local_20,local_res10);
    (**(code **)(*local_20 + 0x20))(local_20,*(undefined8 *)(local_res18 + 8));
    iVar4 = FUN_004b1870(local_res18);
    (**(code **)(*local_20 + 0x28))(local_20,iVar4 + (uint)local_res20);
    local_50 = local_30;
    if (local_30 != 0) {
      local_50 = *(longlong *)(local_30 + -8);
    }
    local_24 = 0;
    iVar4 = (int)local_50;
    if (-1 < (int)local_50 + -1) {
      do {
        uVar1 = FUN_01bfaa70(local_20);
        uVar1 = FUN_01bfb850(uVar1);
        FUN_01bfde30(uVar1,*(undefined8 *)(local_30 + (longlong)local_24 * 8));
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    (**(code **)(*(longlong *)local_20[0x10] + 0x128))((longlong *)local_20[0x10],1);
  }
  FUN_00419430(&local_30,&DAT_01bf6778);
  FUN_00414480(&local_res10);
  return local_20;
}

