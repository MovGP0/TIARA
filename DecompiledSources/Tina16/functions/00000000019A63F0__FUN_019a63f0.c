/* Ghidra address: 019a63f0 */
/* Ghidra symbol: FUN_019a63f0 */


/* WARNING: Type propagation algorithm not settling */

void FUN_019a63f0(undefined8 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000058;
  longlong *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined1 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined8 local_d8;
  char local_cd;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [3];
  longlong *local_30;
  
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_70[0] = 0;
  local_78 = 0;
  local_80 = 0;
  local_48[1] = 0;
  local_48[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_d8 = param_1;
  local_cd = param_2;
  FUN_0041b910(in_stack_00000068);
  FUN_00414610(in_stack_00000078);
  FUN_01440040(local_d8,&PTR_DAT_019a6974,0);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined1 *)((longlong)local_30 + 0x49) = 1;
  FUN_019a5b40(auStack_108,local_d8);
  if (in_stack_00000058 == 0) {
    (**(code **)(*local_30 + 0x150))(local_30,FUN_01b1fc70);
  }
  else {
    (**(code **)(*local_30 + 0x148))(local_30);
  }
  local_48[2] = FUN_004b6930(&PTR_FUN_00478280,1);
  if (local_cd == '\0') {
    FUN_00414480(local_48);
    iVar3 = 1;
    iVar1 = (**(code **)(*local_30 + 0x28))();
    local_cc = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_30 + 0x18))(local_30,&local_88,local_cc);
        FUN_00648720(&local_58,local_88);
        FUN_0043ea00(&local_90,local_58);
        if ((local_90 == 0) || (iVar2 = FUN_00416db0(local_58,local_60), iVar2 != 0)) {
          if (local_48[0] != 0) {
            FUN_0043f750(&local_b0,iVar3);
            local_e8 = local_48[0];
            FUN_00416cd0(&local_a8,3,local_b0,&DAT_019a699c);
            FUN_019a6230(auStack_108,local_a8);
          }
          (**(code **)(*local_30 + 0x18))(local_30,&local_b8,local_cc);
          FUN_00648780(local_48,local_b8);
          iVar3 = 1;
        }
        else {
          iVar3 = iVar3 + 1;
          (**(code **)(*local_30 + 0x18))(local_30,&local_98,local_cc);
          FUN_00648780(&local_50,local_98);
          iVar2 = 0;
          do {
            if (in_stack_00000058 != iVar2) {
              FUN_019a58e0(auStack_108,&local_a0,local_50,iVar2);
              FUN_019a59b0(auStack_108,local_48,iVar2,local_a0);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 != 7);
        }
        FUN_00414b50(&local_60,local_58);
        local_cc = local_cc + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if (local_48[0] != 0) {
      FUN_0043f750(&local_c8,iVar3);
      local_e8 = local_48[0];
      FUN_00416cd0(&local_c0,3,local_c8,&DAT_019a699c);
      FUN_019a6230(auStack_108,local_c0);
    }
  }
  else {
    iVar1 = (**(code **)(*local_30 + 0x28))();
    local_cc = 0;
    if (-1 < iVar1 + -1) {
      do {
        (**(code **)(*local_30 + 0x18))(local_30,&local_80,local_cc);
        FUN_00648780(&local_78,local_80);
        FUN_00416ba0(local_70,&DAT_019a6988,local_78);
        FUN_019a6230(auStack_108,local_70[0]);
        local_cc = local_cc + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  (**(code **)(*in_stack_00000060 + 0x10))(in_stack_00000060,local_48[2]);
  FUN_00410f20(local_48[2]);
  FUN_00410f20(local_30);
  FUN_00414560(&local_c8,0xc);
  FUN_00414560(&local_60,4);
  FUN_0041b800(local_48 + 1);
  FUN_0041b800(&stack0x00000068);
  FUN_00414480(&stack0x00000078);
  return;
}

