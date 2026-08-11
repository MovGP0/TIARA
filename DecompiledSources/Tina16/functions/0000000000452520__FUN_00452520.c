/* Ghidra address: 00452520 */
/* Ghidra symbol: FUN_00452520 */


undefined4 FUN_00452520(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_50 = 0;
  local_78 = 0;
  local_80 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  FUN_004167d0(&local_40,param_2);
  FUN_00416dc0(&local_38,local_40,5,4);
  FUN_00416ba0(local_30,&DAT_004527f8,local_38);
  uVar1 = FUN_0043fc00(local_30[0]);
  FUN_004524d0(&local_20,uVar1,3);
  if (local_20 != 0) {
    lVar2 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    }
    FUN_00419260(param_1 + 8,&DAT_004375d0,1,lVar2 + 1);
    lVar2 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    }
    FUN_004524d0(&local_48,uVar1,2);
    FUN_00414ad0(*(longlong *)(param_1 + 8) + (lVar2 + -1) * 0x1c,local_48);
    lVar2 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 8 + (lVar2 + -1) * 0x1c) = uVar1;
    lVar2 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    }
    FUN_00414ad0(*(longlong *)(param_1 + 8) + 0xc + (lVar2 + -1) * 0x1c,local_20);
    lVar2 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8);
    }
    FUN_004524d0(&local_78,uVar1,0x59);
    local_70 = local_78;
    local_68 = 0x11;
    FUN_004524d0(&local_80,uVar1,0x5a);
    local_60 = local_80;
    local_58 = 0x11;
    FUN_00442f70(&local_50,L"%s-%s",&local_70,1);
    FUN_00414ad0(*(longlong *)(param_1 + 8) + 0x14 + (lVar2 + -1) * 0x1c,local_50);
  }
  FUN_00414560(&local_80,2);
  FUN_00414560(&local_50,5);
  FUN_00414480(&local_20);
  return 1;
}

