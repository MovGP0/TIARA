/* Ghidra address: 01ba2180 */
/* Ghidra symbol: FUN_01ba2180 */


void FUN_01ba2180(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined1 *in_stack_ffffffffffffff60;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_1c [4];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30 = 0;
  if (*(char *)(param_1 + 0x9b0) != '\0') {
    if (param_2 == 1) {
      FUN_00414c70(&local_30,"prev_");
    }
    else {
      FUN_004144d0(&local_30);
    }
    FUN_004156b0(local_40,local_30,PTR_s_piece_01fdce48);
    uVar2 = FUN_004425e0(param_1 + 0x134,local_40[0]);
    uVar6 = CONCAT44(uVar7,2);
    cVar1 = _Debug_GetSymbolValue
                      (*(undefined8 *)(param_1 + 0x968),*(undefined4 *)(param_1 + 0x538),uVar2,
                       &local_28,uVar6,local_1c);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (cVar1 == '\0') {
      uVar7 = 0;
      FUN_00415980(&local_48,3,local_30,PTR_s_piece_01fdce48,": elf variable not found");
      FUN_00416880(&local_50,local_48);
      FUN_01ba2120(param_1,local_50);
    }
    FUN_004156b0(&local_58,local_30,PTR_s_piece_01fdce48);
    FUN_01ba1e60(param_1,local_28,local_58);
    FUN_004156b0(&local_60,local_30,PTR_s_color_01fdce50);
    uVar2 = FUN_004425e0(param_1 + 0x134,local_60);
    in_stack_ffffffffffffff58 = CONCAT44(uVar7,2);
    in_stack_ffffffffffffff60 = local_1c;
    cVar1 = _Debug_GetSymbolValue
                      (*(undefined8 *)(param_1 + 0x968),*(undefined4 *)(param_1 + 0x538),uVar2,
                       &local_28,in_stack_ffffffffffffff58,in_stack_ffffffffffffff60);
    if (cVar1 == '\0') {
      in_stack_ffffffffffffff58 = 0;
      FUN_00415980(&local_68,3,local_30,PTR_s_color_01fdce50,": elf variable not found");
      FUN_00416880(&local_70,local_68);
      FUN_01ba2120(param_1,local_70);
    }
    FUN_004156b0(&local_78,local_30,PTR_s_color_01fdce50);
    FUN_01ba1e60(param_1,local_28,local_78);
  }
  iVar4 = 0;
  do {
    iVar5 = 0;
    do {
      cVar1 = FUN_01ba1620(param_1,iVar4,iVar5);
      if (cVar1 == '\0') {
        FUN_01ba1c20(param_1,iVar4,iVar5);
      }
      else {
        FUN_01ba1b80(param_1,iVar4,iVar5);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 8);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 8);
  lVar3 = FUN_00609e10(*(undefined8 *)(param_1 + 8));
  FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),*(undefined4 *)(param_1 + 0x130));
  iVar4 = 0;
  do {
    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    FUN_00416780(&local_80,iVar4 + 0x61);
    in_stack_ffffffffffffff58 = CONCAT44(uVar7,8);
    in_stack_ffffffffffffff60 =
         (undefined1 *)((ulonglong)in_stack_ffffffffffffff60 & 0xffffffffffffff00);
    FUN_01ba2d70(param_1,iVar4 * 0x33 + 0x19,*(int *)(param_1 + 0x73c) + 0x198,local_80,
                 in_stack_ffffffffffffff58,in_stack_ffffffffffffff60);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 8);
  iVar4 = 0;
  do {
    uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
    FUN_00416780(&local_88,0x38 - iVar4);
    in_stack_ffffffffffffff58 = CONCAT44(uVar7,8);
    in_stack_ffffffffffffff60 =
         (undefined1 *)((ulonglong)in_stack_ffffffffffffff60 & 0xffffffffffffff00);
    FUN_01ba2d70(param_1,0x19d,iVar4 * 0x33 + *(int *)(param_1 + 0x73c) + 0x14,local_88,
                 in_stack_ffffffffffffff58,in_stack_ffffffffffffff60);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 8);
  if (*(longlong *)(param_1 + 0x988) != 0) {
    FUN_01ba1cf0(param_1,*(undefined8 *)(param_1 + 0x988),0xff);
  }
  if (*(longlong *)(param_1 + 0x990) != 0) {
    FUN_01ba1cf0(param_1,*(undefined8 *)(param_1 + 0x990),0xff0000);
  }
  FUN_00414560(&local_88,2);
  FUN_004144d0(&local_78);
  FUN_00414480(&local_70);
  FUN_00414590(&local_68,3);
  FUN_00414480(&local_50);
  FUN_00414590(&local_48,2);
  FUN_004144d0(&local_30);
  return;
}

