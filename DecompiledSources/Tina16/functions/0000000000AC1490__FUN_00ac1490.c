/* Ghidra address: 00ac1490 */
/* Ghidra symbol: FUN_00ac1490 */


undefined8
FUN_00ac1490(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5,
            undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*(char *)(param_1 + 0x40) == '\x11') {
    uVar4 = 0;
  }
  else {
    iVar2 = param_5 + *(int *)(param_1 + 0x484) + *(int *)(param_1 + 0x4a4) +
            *(int *)(param_1 + 0x494);
    iVar3 = iVar2 + -2;
    plVar1 = *(longlong **)(param_1 + 0x560);
    iVar5 = *(int *)(param_1 + 0x74) - *(int *)(*(longlong *)(param_1 + 0x18) + 0x94);
    local_38 = CONCAT44(iVar5,iVar3);
    local_30 = CONCAT44(iVar5 + (int)plVar1[0xb],iVar3 + *(int *)((longlong)plVar1 + 0x5c) + 4);
    (**(code **)(*plVar1 + 0x38))
              (plVar1,param_2,param_3,*(undefined4 *)(param_1 + 0x514),iVar2,
               *(int *)(param_1 + 0x74),param_6,param_7);
    FUN_00a71980(&local_48,param_2,&local_38,*(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x92));
    local_38 = local_48;
    local_30 = uStack_40;
    uVar4 = FUN_005ffa40(param_2);
    thunk_FUN_041a27b3(uVar4,local_38 & 0xffffffff,local_38._4_4_,local_30 & 0xffffffff,
                       local_30._4_4_);
    uVar4 = FUN_00aa0630(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return uVar4;
}

