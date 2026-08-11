/* Ghidra address: 009800b0 */
/* Ghidra symbol: FUN_009800b0 */


undefined1 FUN_009800b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_98;
  local_58 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20 = (longlong *)FUN_0096cdc0(&PTR_FUN_00917d70,1,param_2,param_1[0x13]);
  local_20[0xd] = (longlong)param_1;
  local_20[0xc] = *(longlong *)(*param_1 + 0xb8);
  local_20[0xf] = (longlong)param_1;
  local_20[0xe] = *(longlong *)(*param_1 + 0xc0);
  (**(code **)(*param_2 + 0x40))(param_2,&local_38);
  FUN_004168e0(&local_40,local_38);
  FUN_004168e0(&local_48,param_2[0x27]);
  FUN_004168e0(&local_50,param_2[0x25]);
  if (local_20 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = local_20 + 0x13;
  }
  local_78 = param_2[0x22];
  local_70 = local_48;
  local_68 = local_50;
  (**(code **)(*param_1 + 0xd8))(param_1,plVar3,local_40,param_2[0x20]);
  cVar1 = (**(code **)(*local_20 + 0x18))(local_20);
  if (cVar1 == '\0') {
    FUN_0097ff70(param_1,local_20);
  }
  else {
    uVar2 = (**(code **)(*local_20 + 0x18))(local_20);
    (**(code **)(*local_20 + 8))(local_20,&local_58);
    if (local_20 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = local_20 + 0x13;
    }
    local_78 = local_58;
    (**(code **)(*param_1 + 0x90))(param_1,uVar2,plVar3,0);
  }
  if (local_20 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = local_20 + 0x13;
  }
  (**(code **)(*param_1 + 0xd0))(param_1,plVar3);
  FUN_00410f20(local_20);
  cVar1 = (**(code **)(*param_1 + 0xb0))(param_1);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xa8))(param_1);
    if (cVar1 == '\0') {
      local_21 = 1;
      goto LAB_00980356;
    }
  }
  local_21 = 0;
LAB_00980356:
  FUN_004145c0(&local_58,4);
  FUN_00414480(&local_38);
  return local_21;
}

