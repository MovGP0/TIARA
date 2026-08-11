/* Ghidra address: 00699fc0 */
/* Ghidra symbol: FUN_00699fc0 */


void FUN_00699fc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  longlong *local_20;
  
  local_40 = auStack_78;
  plVar4 = (longlong *)FUN_00777cd0();
  cVar1 = (**(code **)(*plVar4 + 0x90))(plVar4);
  if (cVar1 != '\0') {
    local_58 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c);
    FUN_004238d0(local_30,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98));
    iVar2 = FUN_004230a0(local_30);
    if (((iVar2 != 0) && (iVar2 = FUN_004230c0(local_30), iVar2 != 0)) &&
       (*(char *)(*(longlong *)(param_1 + 0x10) + 0x492) != '\0')) {
      local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
      uVar3 = FUN_004230a0(local_30);
      (**(code **)(*local_20 + 0x88))(local_20,uVar3);
      uVar3 = FUN_004230c0(local_30);
      (**(code **)(*local_20 + 0x70))(local_20,uVar3);
      uVar5 = FUN_00777cd0();
      local_38 = FUN_00778bd0(uVar5,0xff000010,0);
      local_34 = local_38;
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x492) == '\x02') {
        uVar5 = FUN_00777cd0();
        local_38 = FUN_00778bd0(uVar5,0xff000014,0);
      }
      uVar5 = FUN_00609e10(local_20);
      local_58 = 1;
      FUN_00741000(uVar5,local_30,local_34,local_38);
      uVar5 = FUN_005ffa40(param_2);
      local_58 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x9c) + -1;
      thunk_FUN_041a27b3(uVar5,1,1,*(int *)(*(longlong *)(param_1 + 0x10) + 0x98) + -1);
      (**(code **)(*param_2 + 0x88))(param_2,0,0,local_20);
      FUN_00410f20(local_20);
    }
  }
  return;
}

