/* Ghidra address: 0085acc0 */
/* Ghidra symbol: FUN_0085acc0 */


longlong * FUN_0085acc0(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong local_res10 [3];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = (longlong *)
           FUN_0067eb90(&PTR_FUN_00669e80,1,*(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0x88));
  (**(code **)(*plVar1 + 0x130))(plVar1,*(undefined8 *)(param_1 + 0x2d8));
  FUN_0067fec0(plVar1,1);
  if (param_3 == '\0') {
    FUN_005fcc80(plVar1[0x17],*(undefined4 *)(param_1 + 0x2d4));
  }
  else if (*(char *)(param_1 + 0x380) == '\0') {
    FUN_005fcc80(plVar1[0x17],*(int *)(param_1 + 0x2d4) + -4);
    FUN_005fc860(plVar1[0x17],&PTR_FUN_00b00000);
  }
  else {
    FUN_005fcc80(plVar1[0x17],*(int *)(param_1 + 0x2d4) + -2);
    FUN_005fce70(plVar1[0x17],1);
  }
  FUN_0085a610(&local_40,local_res10[0]);
  FUN_00414b50(local_res10,local_40);
  (**(code **)(*plVar1 + 0x118))(plVar1,0);
  local_38 = 0;
  local_34 = 0;
  iVar4 = (*(int *)(param_1 + 0x368) - *(int *)(param_1 + 0x2d0)) + -8;
  local_2c = *(int *)((longlong)plVar1 + 0x9c);
  local_30 = iVar4;
  uVar2 = FUN_005ffa40(plVar1[0x62]);
  uVar5 = 0;
  if (local_res10[0] != 0) {
    uVar5 = *(undefined4 *)(local_res10[0] + -4);
  }
  uVar3 = FUN_00416740(local_res10[0]);
  thunk_FUN_041a24be(uVar2,uVar3,uVar5,&local_38,0x410);
  (**(code **)(*plVar1 + 400))
            (plVar1,*(undefined4 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x2cc),iVar4,local_2c
            );
  FUN_0064de00(plVar1,local_res10[0]);
  iVar4 = FUN_0040c770((double)local_2c);
  *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2cc) + iVar4 + 0x10;
  FUN_00414480(&local_40);
  FUN_00414480(local_res10);
  return plVar1;
}

