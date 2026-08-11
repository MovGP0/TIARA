/* Ghidra address: 019c2dd0 */
/* Ghidra symbol: FUN_019c2dd0 */


undefined1 FUN_019c2dd0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_99;
  undefined1 local_98 [40];
  longlong local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong local_38;
  longlong lStack_30;
  
  local_40 = *param_2;
  local_38 = param_2[1];
  lStack_30 = param_2[2];
  local_58 = *param_3;
  local_50 = param_3[1];
  lStack_48 = param_3[2];
  FUN_004179d0(&local_40,&DAT_019bf1e0);
  FUN_004179d0(&local_58,&DAT_019bf1e0);
  FUN_00417580(local_98,&DAT_019bf638);
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x78) + -8);
  }
  iVar1 = 0;
  if (iVar2 - 1U < 0x80000000) {
    do {
      FUN_00417c40(local_98,*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 0x40,&DAT_019bf638);
      if (((((local_70 == local_40) && (local_60 == (int)local_38)) && (local_68 == local_58)) &&
          (local_5c == (int)local_50)) ||
         (((local_70 == local_58 && (local_60 == (int)local_50)) &&
          ((local_68 == local_40 && (local_5c == (int)local_38)))))) {
        local_99 = 1;
        goto LAB_019c2ef1;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_99 = 0;
LAB_019c2ef1:
  FUN_00417740(local_98,&DAT_019bf638);
  FUN_00417840(&local_58,&DAT_019bf1e0,2);
  return local_99;
}

