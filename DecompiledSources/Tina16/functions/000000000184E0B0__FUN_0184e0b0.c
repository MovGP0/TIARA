/* Ghidra address: 0184e0b0 */
/* Ghidra symbol: FUN_0184e0b0 */


undefined8
FUN_0184e0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            char param_5)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_70 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  longlong *local_40;
  int local_38;
  undefined4 local_34;
  longlong *local_30;
  
  local_50 = auStack_a8;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  if (param_5 == '\0') {
    local_40 = (longlong *)FUN_0184ce20(param_1,param_3);
  }
  else {
    local_50 = auStack_a8;
    local_40 = (longlong *)FUN_0184cde0(param_1,param_3);
  }
  if (local_40 != (longlong *)0x0) {
    cVar1 = FUN_004113d0(local_40,&PTR_FUN_01843fa0);
    if (cVar1 != '\0') {
      local_30 = local_40;
      local_34 = 0xffffffff;
      if ((char)local_40[0x11] != '\0') {
        local_34 = FUN_01848540(local_40);
      }
      cVar1 = FUN_0046ca60(param_4);
      if (cVar1 != '\0') {
        iVar2 = FUN_0046c9e0(param_4,1);
        local_38 = 0;
        if (-1 < iVar2) {
          iVar2 = iVar2 + 1;
          do {
            plVar3 = (longlong *)FUN_01847630(local_30,local_38);
            local_70[0] = local_38;
            FUN_0046cb70(&local_68,param_4,1,local_70);
            (**(code **)(*plVar3 + 8))(plVar3,&local_68);
            local_38 = local_38 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      (**(code **)(*local_30 + 0x10))(local_30,param_2);
      cVar1 = FUN_0046ca60(param_4);
      if (cVar1 != '\0') {
        iVar2 = FUN_0046c9e0(param_4,1);
        local_38 = 0;
        if (-1 < iVar2) {
          iVar2 = iVar2 + 1;
          do {
            plVar3 = (longlong *)FUN_01847630(local_30,local_38);
            (**(code **)(*plVar3 + 0x10))(plVar3,&local_88);
            local_70[0] = local_38;
            FUN_0046ccc0(param_4,&local_88,1,local_70);
            local_38 = local_38 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      FUN_01848710(local_30,local_34,1,0);
      goto code_r0x0184e2b2;
    }
  }
  FUN_0046f180(param_2);
code_r0x0184e2b2:
  FUN_00460ba0(&local_88);
  FUN_00460ba0(&local_68);
  return param_2;
}

