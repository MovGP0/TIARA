/* Ghidra address: 00b53ca0 */
/* Ghidra symbol: FUN_00b53ca0 */


void FUN_00b53ca0(longlong param_1,ushort param_2,ushort param_3,uint param_4,char param_5)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined2 local_78;
  uint local_70;
  undefined4 local_68;
  char local_60;
  undefined1 local_58;
  longlong local_48;
  longlong local_40;
  int local_34;
  longlong local_30;
  longlong *local_28;
  int local_1c;
  
  if ((param_2 <= param_3) && (param_2 != param_4)) {
    local_34 = FUN_00b4e330(param_1);
    if (0 < local_34) {
      local_40 = FUN_004095c0((longlong)local_34);
      FUN_0040d200(local_40,(longlong)local_34,0);
      local_48 = FUN_004095c0((longlong)local_34);
      FUN_0040d200(local_48,(longlong)local_34,0);
      if ((param_5 != '\0') && (local_1c = 0, iVar1 = local_34, -1 < local_34 + -1)) {
        do {
          local_30 = FUN_00b53890(param_1,local_1c);
          if (((*(ushort *)(local_30 + 0x3e) < param_2) || (param_3 < *(ushort *)(local_30 + 0x3e)))
             && (((int)param_4 <= (int)(uint)*(ushort *)(local_30 + 0x3e) &&
                 ((int)(uint)*(ushort *)(local_30 + 0x3e) <=
                  (int)((uint)param_3 + (param_4 - param_2)))))) {
            *(undefined1 *)(local_48 + local_1c) = 1;
          }
          local_1c = local_1c + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      local_28 = (longlong *)FUN_00410e60(&PTR_FUN_00472dd0,1);
      local_1c = 0;
      iVar1 = local_34;
      if (-1 < local_34 + -1) {
        do {
          local_30 = FUN_00b53890(param_1,local_1c);
          if (((*(char *)(local_40 + local_1c) == '\0') && (param_2 <= *(ushort *)(local_30 + 0x3e))
              ) && (*(ushort *)(local_30 + 0x3e) <= param_3)) {
            FUN_00b53950(auStack_98);
            FUN_00b539e0(auStack_98);
          }
          local_1c = local_1c + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00b53b80(auStack_98);
      (**(code **)(*local_28 + -0x20))(local_28,1);
      FUN_004095f0(local_40);
      FUN_004095f0(local_48);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      local_58 = param_5 == '\0';
      local_78 = 0xff;
      local_68 = 0;
      local_60 = param_5;
      local_70 = param_4;
      FUN_00b50230(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),param_2,param_3,0);
    }
    if (param_5 != '\0') {
      FUN_00b53be0(auStack_98);
    }
  }
  return;
}

