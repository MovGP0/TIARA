/* Ghidra address: 018335a0 */
/* Ghidra symbol: FUN_018335a0 */


longlong FUN_018335a0(longlong param_1,longlong param_2,undefined8 param_3,int param_4,short param_5
                     )

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 in_stack_fffffffffffff8c8;
  undefined4 uVar7;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  longlong *local_6c8;
  int local_6c0 [2];
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  longlong *local_6a0;
  undefined1 local_698 [8];
  undefined8 local_690;
  undefined8 local_688;
  undefined8 local_680;
  undefined1 local_658 [1536];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined *local_40;
  int local_38;
  undefined4 local_34;
  undefined4 local_2c [3];
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffff8c8 >> 0x20);
  local_6d0 = 0;
  local_6d8 = 0;
  local_6e0 = 0;
  local_6e8 = 0;
  local_6c8 = (longlong *)0x0;
  local_6b8 = 0;
  uStack_6b0 = 0;
  uStack_6a8 = 0;
  local_6a0 = (longlong *)0x0;
  local_50 = 0;
  local_58 = 0;
  FUN_00417600(local_658,&DAT_004013d8,0x40);
  FUN_00417580(local_698,&DAT_00470720);
  FUN_00414520(&local_58);
  FUN_004168e0(&local_50,*(undefined8 *)(param_1 + 0x20));
  FUN_00468450(&local_6a0,param_1 + 0x90);
  uVar1 = thunk_FUN_04195d02();
  (**(code **)(*local_6a0 + 0x28))
            (local_6a0,PTR_DAT_02003140,&local_50,1,CONCAT44(uVar7,uVar1),local_2c);
  iVar3 = 0;
  if (-1 < param_4 + -1) {
    puVar5 = local_658;
    iVar6 = param_4;
    do {
      local_6c0[0] = (param_4 - iVar3) + -1;
      FUN_0046cb70(&local_6b8,param_3,1,local_6c0);
      FUN_00461840(puVar5,&local_6b8);
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 0x18;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_48 = local_658;
  local_40 = (undefined *)0x0;
  local_34 = 0;
  if ((param_5 == 4) || (param_5 == 8)) {
    local_40 = &DAT_01fab6fc;
    local_34 = 1;
  }
  if (((*(char *)(param_1 + 0x28) == '\0') || (param_5 == 4)) || (lVar4 = param_2, param_5 == 8)) {
    lVar4 = 0;
  }
  local_38 = param_4;
  if (lVar4 != 0) {
    FUN_00460b80(lVar4);
  }
  if ((param_5 == 1) && (lVar4 != 0)) {
    param_5 = 3;
  }
  FUN_00468450(&local_6c8,param_1 + 0x90);
  iVar3 = (**(code **)(*local_6c8 + 0x30))
                    (local_6c8,local_2c[0],PTR_DAT_02003140,0,param_5,&local_48,lVar4,local_698,0);
  if (iVar3 != 0) {
    iVar6 = FUN_00416420(local_690,0);
    if (iVar6 != 0) {
      FUN_00416020(&local_58,L"\r\nSource        ::  ",local_690);
    }
    iVar6 = FUN_00416420(local_688,0);
    if (iVar6 != 0) {
      FUN_00416310(&local_58,4,local_58,&DAT_01833ae8,L"Description ::  ",local_688);
    }
    iVar6 = FUN_00416420(local_680,0);
    if (iVar6 != 0) {
      FUN_00416310(&local_58,4,local_58,&DAT_01833ae8,L"Help File     ::  ",local_680);
    }
    FUN_0043fba0(&local_6d8,iVar3,8);
    FUN_0044b630(&local_6e0,iVar3,0);
    FUN_004168b0(&local_6e8,local_58);
    FUN_00416cd0(&local_6d0,7,L"OLE error ",local_6d8,&LAB_01833b74,*(undefined8 *)(param_1 + 0x20),
                 &LAB_01833b74,local_6e0,local_6e8);
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_6d0);
    FUN_004134c0(uVar2);
  }
  FUN_00414560(&local_6e8,4);
  FUN_0041b800(&local_6c8);
  FUN_00460ba0(&local_6b8);
  FUN_0041b800(&local_6a0);
  FUN_00417740(local_698,&DAT_00470720);
  FUN_00417840(local_658,&DAT_004013d8,0x40);
  FUN_004145c0(&local_58,2);
  return param_2;
}

