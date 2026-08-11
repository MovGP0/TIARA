/* Ghidra address: 00844000 */
/* Ghidra symbol: FUN_00844000 */


void FUN_00844000(longlong param_1,ulonglong *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auStack_e8 [32];
  int *local_c8;
  int *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  int local_98;
  undefined1 local_70 [16];
  int local_60;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  local_c8 = (int *)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_004238d0(&local_b8,0,0,0);
  *(undefined8 *)param_3 = local_b8;
  *(undefined8 *)(param_3 + 2) = uStack_b0;
  if (((int)local_38 <= (int)local_30) && (local_38._4_4_ <= local_30._4_4_)) {
    FUN_00841d10(param_1,local_a8);
    if (((int)local_38 <= local_98 + 1) && (local_38._4_4_ <= local_60 + 1)) {
      local_c0 = param_3 + 2;
      local_c8 = param_3;
      cVar2 = FUN_00843ed0(auStack_e8,local_a8,local_38 & 0xffffffff,local_30 & 0xffffffff);
      if (cVar2 != '\0') {
        local_c8 = param_3 + 1;
        local_c0 = param_3 + 3;
        FUN_00843ed0(auStack_e8,local_70,local_38._4_4_,local_30._4_4_);
      }
      pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
      cVar2 = (*pcVar4)(param_1);
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(**(longlong **)(param_1 + 0x490) + 0x18))
                          (*(longlong **)(param_1 + 0x490));
        if (cVar2 == '\0') {
          iVar1 = *param_3;
          iVar3 = FUN_0064d0b0(param_1);
          *param_3 = iVar3 - param_3[2];
          iVar3 = FUN_0064d0b0(param_1);
          param_3[2] = iVar3 - iVar1;
        }
      }
    }
  }
  return;
}

