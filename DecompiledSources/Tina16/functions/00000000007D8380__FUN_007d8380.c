/* Ghidra address: 007d8380 */
/* Ghidra symbol: FUN_007d8380 */


void FUN_007d8380(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  byte local_1b;
  byte local_1a;
  char local_19;
  longlong *local_18;
  longlong local_10;
  
  local_30 = auStack_58;
  local_10 = FUN_004d4fa0(&PTR_FUN_0047dd60,1,param_2,0);
  if (local_10 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = local_10 + 0x28;
  }
  uVar2 = thunk_FUN_039d3ff1(lVar3);
  FUN_007d5670(param_1,uVar2);
  FUN_00410f20(local_10);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    local_19 = '\0';
    local_18 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004b6dc0(param_2,0);
    FUN_004b9ef0(local_18,param_2);
    FUN_004b6dc0(local_18,0x12);
    iVar1 = (**(code **)(*local_18 + 0x18))(local_18,&local_1a,1);
    if ((iVar1 == 1) && (local_1a == 1)) {
      FUN_004b6dc0(local_18,0x38);
      iVar1 = (**(code **)(*local_18 + 0x18))(local_18,&local_1b,1);
      if (iVar1 == 1) {
        local_1a = local_1a | local_1b;
        FUN_004b6dc0(local_18,0x12);
        iVar1 = (**(code **)(*local_18 + 0x20))(local_18,&local_1a,1);
        local_19 = iVar1 == 1;
      }
    }
    if (local_19 != '\0') {
      FUN_004b6dc0(local_18,0);
      local_10 = FUN_004d4fa0(&PTR_FUN_0047dd60,1,local_18,0);
      if (local_10 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = local_10 + 0x28;
      }
      uVar2 = thunk_FUN_039d3ff1(lVar3);
      FUN_007d5670(param_1,uVar2);
      FUN_00410f20(local_10);
    }
    FUN_00410f20(local_18);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      uVar2 = FUN_0044d710(&PTR_FUN_00471c70,1,PTR_PTR_02004620);
      FUN_004134c0(uVar2);
    }
  }
  return;
}

