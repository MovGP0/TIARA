/* Ghidra address: 01871460 */
/* Ghidra symbol: FUN_01871460 */


void FUN_01871460(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int in_stack_ffffffffffffff88;
  uint uVar5;
  uint in_stack_ffffffffffffff90;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  (**(code **)(*param_1 + 0xe8))(param_1);
  iVar1 = *(int *)((longlong)param_1 + 0x8c);
  iVar4 = *(int *)((longlong)param_1 + 0x84);
  if ((char)param_1[0xe] != '\0') {
    uVar3 = FUN_0180bfb0();
    uVar3 = FUN_01809e30(uVar3);
    FUN_007d6c70(uVar3,param_2,(int)param_1[0x10] + -10,
                 *(int *)((longlong)param_1 + 0x84) + ((iVar1 - iVar4) + -5) / 2,0x6f,1);
    uVar3 = FUN_005ffa40(param_2);
    in_stack_ffffffffffffff88 = *(int *)((longlong)param_1 + 0x8c) + -1;
    in_stack_ffffffffffffff90 = 0x808080;
    FUN_0180c8f0(uVar3,(int)param_1[0x10] + 1,*(int *)((longlong)param_1 + 0x84) + 1,
                 (int)param_1[0x11] + -1,in_stack_ffffffffffffff88,0x808080);
  }
  if (*(char *)((longlong)param_1 + 0x72) != '\0') {
    iVar1 = (**(code **)(*param_1 + 200))(param_1);
    uVar3 = FUN_00498310((int)param_1[0x11] - iVar1,*(int *)((longlong)param_1 + 0x84) + 2);
    local_48._0_4_ = (int)uVar3;
    iVar4 = (int)local_48 + iVar1;
    local_48._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
    iVar1 = local_48._4_4_ + iVar1;
    local_48 = uVar3;
    local_40 = FUN_00498310(iVar4,iVar1);
    uVar2 = FUN_01871610(param_1);
    uVar5 = CONCAT31((int3)((uint)in_stack_ffffffffffffff88 >> 8),2);
    FUN_008263c0(local_58,param_2,&local_48,uVar2,uVar5,in_stack_ffffffffffffff90 & 0xffffff00,0,0);
    FUN_0180e220(param_2,&local_48,0,*(undefined1 *)((longlong)param_1 + 0x71),uVar5 & 0xffffff00);
  }
  return;
}

