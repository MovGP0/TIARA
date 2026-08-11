/* Ghidra address: 00acb9e0 */
/* Ghidra symbol: FUN_00acb9e0 */


void FUN_00acb9e0(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 local_30;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_30 = 0;
  FUN_00a99cd0(param_1,param_2,param_3,param_4);
  cVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar2 != '\0') {
    FUN_00498350(&local_28,param_3,param_4,param_3 + *(int *)(param_1[0x2b] + 0x98),
                 CONCAT44(uVar3,param_4 + *(int *)(param_1[0x2b] + 0x9c)));
    FUN_00a71ed0(param_2,local_28,local_24,local_20,local_1c,0,*(undefined1 *)(param_1[3] + 0xb2),0,
                 *(undefined4 *)(param_1[0x2b] + 200),*(undefined1 *)(param_1[3] + 0x90));
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
    FUN_005ff880(param_2,*(undefined8 *)(param_1[0x2b] + 0xb8));
    uVar3 = *(undefined4 *)(*(longlong *)(param_1[0x2b] + 0xb8) + 0x28);
    if (((*(byte *)(param_1[3] + 0x90) & 1) != 0) && (cVar2 = FUN_00781870(), cVar2 != '\0')) {
      uVar4 = FUN_00781840();
      uVar3 = FUN_007793c0(uVar4,uVar3);
    }
    uVar3 = FUN_005fbf20(uVar3);
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),uVar3);
    uVar4 = FUN_005ffa40(param_2);
    thunk_FUN_041afa90(uVar4,0);
    thunk_FUN_04176532(&local_28,0xfffffffc,0xfffffffc);
    local_1c = local_1c + 5;
    plVar1 = (longlong *)param_1[0x2b];
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_30,uVar3);
    FUN_009ec490(param_2,&local_28,local_28,local_24,local_30);
  }
  FUN_00414480(&local_30);
  return;
}

