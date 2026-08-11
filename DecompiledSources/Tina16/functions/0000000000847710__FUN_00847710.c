/* Ghidra address: 00847710 */
/* Ghidra symbol: FUN_00847710 */


void FUN_00847710(longlong *param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined1 local_98 [16];
  int local_88;
  undefined1 local_60 [16];
  int local_50;
  
  FUN_00841d10(param_1,local_98);
  cVar2 = (char)param_1[0xaa];
  if (cVar2 != '\x01') {
    if ((byte)(cVar2 - 2U) < 2) {
      FUN_00842b00(param_1,local_98);
      if ((char)param_1[0xaa] == '\x02') {
        *(int *)((longlong)param_1 + 0x4f4) = param_4 + (int)param_1[0x9f];
      }
      else {
        *(int *)((longlong)param_1 + 0x4f4) = param_3 + (int)param_1[0x9f];
      }
      FUN_00842b00(param_1,local_98);
      uVar3 = local_a0;
      goto LAB_00847a58;
    }
    if (1 < (byte)(cVar2 - 4U)) {
      if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
        return;
      }
      uVar3 = FUN_008417f0(param_1,param_3,param_4,local_98);
      local_a0 = uVar3;
      if ((((*(uint *)((longlong)param_1 + 0x4d4) & 0x10000) == 0) ||
          (local_a0._4_4_ = (int)(uVar3 >> 0x20), (int)param_1[0x98] <= local_a0._4_4_)) &&
         (((*(uint *)((longlong)param_1 + 0x4d4) & 0x8000) == 0 ||
          (local_a0._0_4_ = (int)uVar3, *(int *)((longlong)param_1 + 0x4bc) <= (int)local_a0)))) {
        if ((*(int *)((longlong)param_1 + 0x564) != -1) || ((int)param_1[0xad] != -1)) {
          FUN_00844240(param_1,(longlong)param_1 + 0x564);
          *(undefined8 *)((longlong)param_1 + 0x564) = DAT_01e19060;
          *(undefined8 *)((longlong)param_1 + 0x56c) = DAT_01e19068;
          *(undefined1 *)(param_1 + 0xac) = 0;
          uVar3 = local_a0;
        }
      }
      else {
        if ((*(int *)((longlong)param_1 + 0x564) != -1) || ((int)param_1[0xad] != -1)) {
          FUN_00844240(param_1,(longlong)param_1 + 0x564);
        }
        cVar2 = FUN_0083d5d0(local_a0 & 0xffffffff,local_a0._4_4_,(longlong)param_1 + 0x564);
        uVar3 = local_a0;
        if (cVar2 == '\0') {
          (**(code **)(*param_1 + 0x278))(param_1,&local_c8,&local_a0);
          *(undefined8 *)((longlong)param_1 + 0x564) = local_c8;
          *(undefined8 *)((longlong)param_1 + 0x56c) = uStack_c0;
          *(undefined1 *)(param_1 + 0xac) = 0;
          FUN_00844240(param_1,(longlong)param_1 + 0x564);
          uVar3 = local_a0;
        }
      }
      goto LAB_00847a58;
    }
  }
  uVar3 = FUN_008417f0(param_1,param_3,param_4,local_98);
  local_a0._0_4_ = (int)uVar3;
  if ((((*(int *)((longlong)param_1 + 0x4bc) <= (int)local_a0) &&
       (local_a0._4_4_ = (int)(uVar3 >> 0x20), iVar1 = local_a0._4_4_,
       (int)param_1[0x98] <= local_a0._4_4_)) && ((int)local_a0 <= local_88 + 1)) &&
     (local_a0._4_4_ <= local_50 + 1)) {
    cVar2 = (char)param_1[0xaa];
    local_a0 = uVar3;
    if (cVar2 == '\x01') {
      if (((int)local_a0 != (int)param_1[0x93]) ||
         (local_a0._4_4_ != *(int *)((longlong)param_1 + 0x49c))) {
        FUN_00844ac0(param_1,&local_a0);
        uVar3 = local_a0;
      }
    }
    else if (cVar2 == '\x04') {
      local_b0 = param_3;
      local_ac = param_4;
      FUN_00848040(param_1,param_4,iVar1,local_98,local_60,1,&local_b0);
      uVar3 = local_a0;
    }
    else if (cVar2 == '\x05') {
      local_a8 = param_3;
      local_a4 = param_4;
      FUN_00848040(param_1,param_3,uVar3 & 0xffffffff,local_98,local_98,0,&local_a8);
      uVar3 = local_a0;
    }
  }
LAB_00847a58:
  local_a0 = uVar3;
  FUN_00650d70(param_1,param_2,param_3,param_4);
  return;
}

