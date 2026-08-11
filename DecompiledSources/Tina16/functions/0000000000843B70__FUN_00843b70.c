/* Ghidra address: 00843b70 */
/* Ghidra symbol: FUN_00843b70 */


void FUN_00843b70(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong *local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_20 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
  local_40 = *(longlong **)(param_1 + 0x490);
  (**(code **)(*local_20 + 0x10))(local_20,local_40[0xf]);
  FUN_005fd670(local_40[0xf],2);
  FUN_005fd640(local_40[0xf],0xe);
  FUN_005fd6d0(local_40[0xf],5);
  if (*(char *)(param_1 + 0x550) == '\x04') {
    FUN_0083f3f0(param_1,&local_34,0,*(undefined4 *)(param_1 + 0x500));
    if (*(int *)(param_1 + 0x4fc) < *(int *)(param_1 + 0x500)) {
      local_24 = local_28;
    }
    else {
      local_24 = local_30;
    }
    (**(code **)(*local_40 + 200))(local_40,0,local_24);
    uVar2 = FUN_0064d0b0(param_1);
    (**(code **)(*local_40 + 0xc0))(local_40,uVar2,local_24);
  }
  else {
    FUN_0083f3f0(param_1,&local_34,*(undefined4 *)(param_1 + 0x500),0);
    if (*(int *)(param_1 + 0x4fc) < *(int *)(param_1 + 0x500)) {
      pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
      cVar1 = (*pcVar3)(param_1);
      if (cVar1 == '\0') {
        local_24 = local_2c;
      }
      else {
        local_24 = local_34;
      }
    }
    else {
      pcVar3 = (code *)FUN_00411550(param_1,0xffc5);
      cVar1 = (*pcVar3)(param_1);
      if (cVar1 == '\0') {
        local_24 = local_34;
      }
      else {
        local_24 = local_2c;
      }
    }
    (**(code **)(*local_40 + 200))(local_40,local_24,0);
    uVar2 = FUN_0064d120(param_1);
    (**(code **)(*local_40 + 0xc0))(local_40,local_24,uVar2);
  }
  FUN_005ff8a0(*(undefined8 *)(param_1 + 0x490),local_20);
  FUN_00410f20(local_20);
  return;
}

