/* Ghidra address: 010b00f0 */
/* Ghidra symbol: FUN_010b00f0 */


void FUN_010b00f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 *local_80;
  int local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_80 = auStack_a8;
  local_88 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_38 = *(longlong **)(param_1 + 0x20);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(*local_38 + 0x28))(local_38);
  if (2 < iVar2) {
    (**(code **)(*local_38 + 0x18))(local_38,&local_88,2);
    FUN_004b4b10(local_20,local_88);
    iVar2 = (**(code **)(*local_20 + 0x28))();
    local_24 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*local_20 + 0x18))(local_20,&local_68,local_24);
        local_28 = FUN_004170c0(&LAB_010b0328,local_68,1);
        FUN_00416dc0(&local_58,local_68,1,local_28 + -1);
        local_70 = 0;
        if (local_68 != 0) {
          local_70 = *(int *)(local_68 + -4);
        }
        FUN_00416dc0(&local_60,local_68,local_28 + 1,local_70 - local_28);
        cVar1 = FUN_010b13a0(param_1,local_58,&local_40,0);
        if (cVar1 != '\0') {
          uVar3 = FUN_0043fc00(local_60);
          *(undefined4 *)(local_40 + 0x4c) = uVar3;
        }
        local_24 = local_24 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_88);
  FUN_00414560(&local_68,5);
  return;
}

