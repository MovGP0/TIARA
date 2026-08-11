/* Ghidra address: 009803f0 */
/* Ghidra symbol: FUN_009803f0 */


undefined1 FUN_009803f0(longlong *param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_20 = (longlong *)FUN_0096cf90(&PTR_FUN_00917fd0,1,param_2,param_1[0x13]);
  local_20[0xd] = (longlong)param_1;
  local_20[0xc] = *(longlong *)(*param_1 + 0xb8);
  local_20[0xf] = (longlong)param_1;
  local_20[0xe] = *(longlong *)(*param_1 + 0xc0);
  (**(code **)(*local_20 + 0xb8))(local_20,param_4);
  if (local_20 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = local_20 + 0x13;
  }
  (**(code **)(*param_1 + 0xe0))(param_1,plVar3,*(undefined8 *)(param_2 + 0x110),param_3);
  cVar1 = (**(code **)(*local_20 + 0x18))(local_20);
  if (cVar1 == '\0') {
    FUN_0097ff70(param_1,local_20);
  }
  else {
    uVar2 = (**(code **)(*local_20 + 0x18))(local_20);
    (**(code **)(*local_20 + 8))(local_20,&local_38);
    if (local_20 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = local_20 + 0x13;
    }
    local_48 = local_38;
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
      goto LAB_009805e7;
    }
  }
  local_21 = 0;
LAB_009805e7:
  FUN_00414520(&local_38);
  return local_21;
}

