/* Ghidra address: 00b67980 */
/* Ghidra symbol: FUN_00b67980 */


void FUN_00b67980(longlong param_1)

{
  int iVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined8 local_70;
  undefined2 local_68;
  undefined6 local_66;
  undefined2 uStack_60;
  undefined2 local_58;
  undefined6 local_56;
  undefined2 uStack_50;
  undefined8 local_48;
  undefined2 uStack_40;
  undefined8 local_38;
  longlong local_30 [2];
  
  local_70 = 0;
  local_68 = 0;
  local_66 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_56 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  iVar1 = FUN_00b1f850(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
  iVar5 = 0x24;
  if (0x23 < iVar1 + -1) {
    iVar1 = iVar1 + -0x24;
    do {
      FUN_00415d10(local_30,5,0);
      FUN_00b1f820(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),&local_48,iVar5);
      puVar2 = (undefined2 *)FUN_00414df0(local_30);
      *puVar2 = (undefined2)local_48;
      FUN_00b1f820(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),&local_58,iVar5);
      uVar6 = 0;
      if (CONCAT26(uStack_50,local_56) != 0) {
        uVar6 = (undefined2)(*(uint *)(CONCAT26(uStack_50,local_56) + -4) >> 1);
      }
      lVar3 = FUN_00414df0(local_30);
      *(undefined2 *)(lVar3 + 2) = uVar6;
      lVar3 = FUN_00414df0(local_30);
      *(undefined1 *)(lVar3 + 4) = 1;
      FUN_00b1f820(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),&local_68,iVar5);
      FUN_00414be0(&local_38,CONCAT26(uStack_60,local_66));
      FUN_00b15100(&local_70,local_38);
      FUN_004155b0(local_30,local_70);
      FUN_00b62ce0(param_1,0x41e);
      uVar7 = 0;
      if (local_30[0] != 0) {
        uVar7 = *(undefined4 *)(local_30[0] + -4);
      }
      FUN_00b62ce0(param_1,uVar7);
      uVar4 = FUN_00414df0(local_30);
      FUN_00b62d20(param_1,uVar4);
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004144d0(&local_70);
  FUN_00417740(&local_68,&DAT_00b1be28);
  FUN_00417740(&local_58,&DAT_00b1be28);
  FUN_00417740(&local_48,&DAT_00b1be28);
  FUN_00414520(&local_38);
  FUN_004144d0(local_30);
  return;
}

