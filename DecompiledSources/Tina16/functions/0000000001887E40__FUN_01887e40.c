/* Ghidra address: 01887e40 */
/* Ghidra symbol: FUN_01887e40 */


int FUN_01887e40(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined1 local_35;
  undefined8 local_34;
  int local_2c;
  longlong *local_28;
  char local_19;
  
  local_40 = auStack_68;
  local_35 = 1;
  if (param_3 == *(longlong *)(param_1 + 0x20)) {
    local_35 = 2;
  }
  local_28 = param_2;
  uVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  local_34 = FUN_018880f0(param_1,uVar2,uVar3,local_35);
  iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  uVar1 = local_34;
  if (iVar4 == (int)local_34) {
    iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar4 != local_34._4_4_) goto LAB_01887eda;
  }
  else {
LAB_01887eda:
    if (*(char *)(*(longlong *)(param_1 + 0x48) + 8) != '\0') {
      local_19 = '\x01';
      goto LAB_01887eee;
    }
  }
  local_19 = '\0';
LAB_01887eee:
  if (local_19 != '\0') {
    uVar5 = FUN_018669c0();
    local_28 = (longlong *)FUN_018676f0(uVar5,param_2,uVar1 & 0xffffffff,local_34._4_4_);
  }
  if (local_28 == (longlong *)0x0) {
    local_19 = '\0';
    local_28 = param_2;
  }
  local_2c = FUN_01887a10(param_3,local_28);
  if ((local_19 != '\0') && (0 < local_2c)) {
    uVar2 = (**(code **)(*param_2 + 0x60))(param_2);
    uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    FUN_018879b0(param_3,local_2c,uVar2,uVar3);
  }
  if (local_19 != '\0') {
    FUN_00410f20(local_28);
  }
  return local_2c;
}

