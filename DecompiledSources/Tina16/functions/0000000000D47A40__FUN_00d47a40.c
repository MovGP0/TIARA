/* Ghidra address: 00d47a40 */
/* Ghidra symbol: FUN_00d47a40 */


void FUN_00d47a40(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 *local_50;
  undefined1 local_3c [12];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_50 = auStack_88;
  uVar5 = FUN_005ffa40(param_2);
  local_1c = thunk_FUN_03b57162(uVar5);
  FUN_00d478c0(param_1,&local_2c);
  uVar5 = FUN_005ffa40(param_2);
  local_68 = CONCAT44(local_68._4_4_,local_20);
  thunk_FUN_041a27b3(uVar5,local_2c,local_28,local_24);
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  uVar5 = FUN_005ffa40(param_2);
  thunk_FUN_0402759f(uVar5,local_1c);
  iVar2 = FUN_00d47910();
  local_30 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_00d47cc0(param_1,param_2,local_30);
      local_30 = local_30 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  cVar1 = FUN_00d47950(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_00787fa0(param_1[3]);
    iVar3 = FUN_00787c80(param_1[3]);
    thunk_FUN_04176532(&local_2c,iVar2 - local_24,iVar3 - local_20);
  }
  else if (cVar1 == '\x01') {
    thunk_FUN_04176532(&local_2c,local_2c,local_28);
  }
  else if (cVar1 == '\x02') {
    iVar2 = FUN_00787fa0(param_1[3]);
    iVar3 = FUN_00787c80(param_1[3]);
    thunk_FUN_04176532(&local_2c,iVar2 - local_24,iVar3 - local_20);
  }
  else if (cVar1 == '\x03') {
    thunk_FUN_04176532(&local_2c,local_2c,local_28);
  }
  plVar6 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar6 + 0x90))(plVar6);
  if (cVar1 != '\0') {
    plVar6 = (longlong *)FUN_00781840();
    (**(code **)(*plVar6 + 0x1c0))(plVar6,local_3c,0x2a);
    uVar5 = FUN_00781840();
    uVar7 = FUN_005ffa40(param_2);
    local_68 = 0;
    local_60 = 0;
    FUN_00778dc0(uVar5,uVar7,local_3c,&local_2c);
  }
  iVar2 = FUN_00d47930(param_1);
  if (-1 < iVar2) {
    uVar4 = FUN_00d47930(param_1);
    FUN_00d47cc0(param_1,param_2,uVar4);
  }
  return;
}

