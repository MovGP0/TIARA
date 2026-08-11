/* Ghidra address: 01113e30 */
/* Ghidra symbol: FUN_01113e30 */


void FUN_01113e30(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  bool bVar4;
  ulonglong local_60;
  ulonglong uStack_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if ((*(char *)(param_1 + 0x611) != '\0') && (*(char *)(param_1 + 0x617) != '\0')) {
    local_30._4_4_ = (int)(uVar2 >> 0x20);
    bVar4 = local_30._4_4_ == 0;
    local_38 = uVar1;
    local_30 = uVar2;
    if ((bVar4) && (local_30._0_4_ = (int)uVar2, bVar4 = (int)local_30 == 0, bVar4)) {
      local_38._4_4_ = (undefined4)(uVar1 >> 0x20);
      uVar3 = local_38._4_4_;
      FUN_004238d0(&local_60,uVar1 & 0xffffffff,uVar3,*(undefined4 *)(param_1 + 0x648),
                   *(undefined4 *)(param_1 + 0x64c));
      uVar1 = local_60;
      uVar2 = uStack_58;
    }
    uStack_58 = uVar2;
    local_60 = uVar1;
    *(undefined4 *)(param_1 + 0x618) = 0x50000;
    local_48 = local_60;
    uStack_40 = uStack_58;
    uVar3 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x842,0x50000,local_50);
    *(undefined4 *)(param_1 + 0x634) = uVar3;
  }
  return;
}

