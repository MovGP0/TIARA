/* Ghidra address: 013f76a0 */
/* Ghidra symbol: FUN_013f76a0 */


void FUN_013f76a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x90))(*(longlong **)(param_1 + 0x770));
  lVar1 = *(longlong *)(param_1 + 0x750);
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x78))
            (*(longlong **)(param_1 + 0x770),&DAT_013f7878);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_20,0x465);
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x78))(*(longlong **)(param_1 + 0x770),local_20);
  iVar4 = *(int *)(lVar1 + 0x10) + -1;
  iVar3 = 1;
  if (0 < iVar4) {
    do {
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,&local_30,0x466);
      FUN_0043f750(&local_38,iVar3);
      FUN_00416cd0(&local_28,3,local_30,&DAT_013f788c,local_38);
      (**(code **)(**(longlong **)(param_1 + 0x770) + 0x78))
                (*(longlong **)(param_1 + 0x770),local_28);
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,&local_48,0x467);
      FUN_0043f750(&local_50,iVar3);
      FUN_00416cd0(&local_40,3,local_48,&LAB_013f78a0,local_50);
      (**(code **)(**(longlong **)(param_1 + 0x770) + 0x78))
                (*(longlong **)(param_1 + 0x770),local_40);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_50,7);
  return;
}

