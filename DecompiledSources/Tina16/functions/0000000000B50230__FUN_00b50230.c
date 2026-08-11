/* Ghidra address: 00b50230 */
/* Ghidra symbol: FUN_00b50230 */


void FUN_00b50230(undefined8 param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                 uint param_6,uint param_7,char param_8,char param_9)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  int local_34;
  longlong local_30;
  longlong *local_28;
  int local_1c;
  
  if (((param_4 <= param_5) && (param_2 <= param_3)) &&
     ((param_2 != param_6 || (param_4 != param_7)))) {
    local_34 = FUN_00b4e330(param_1);
    local_48 = FUN_004095c0((longlong)local_34);
    FUN_0040d200(local_48,(longlong)local_34,0);
    if (param_8 == '\0') {
      local_40 = FUN_004095c0((longlong)local_34);
      FUN_0040d200(local_40,(longlong)local_34,0);
      local_28 = (longlong *)FUN_00410e60(&PTR_FUN_00472dd0,1);
      local_1c = 0;
      iVar2 = local_34;
      if (-1 < local_34 + -1) {
        do {
          local_30 = FUN_00b4fc70(param_1,local_1c);
          if ((((*(char *)(local_40 + local_1c) == '\0') &&
               (param_2 <= *(ushort *)(local_30 + 0x48))) &&
              (*(ushort *)(local_30 + 0x48) <= param_3)) &&
             ((param_4 <= *(ushort *)(local_30 + 0x4a) && (*(ushort *)(local_30 + 0x4a) <= param_5))
             )) {
            FUN_00b4fe50(auStack_68);
            FUN_00b4ff50(auStack_68);
          }
          local_1c = local_1c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      (**(code **)(*local_28 + -0x20))(local_28,1);
      FUN_004095f0(local_40);
    }
    else {
      local_1c = 0;
      iVar2 = local_34;
      if (-1 < local_34 + -1) {
        do {
          local_30 = FUN_00b4fc70(param_1,local_1c);
          if (((param_2 <= *(ushort *)(local_30 + 0x48)) &&
              (*(ushort *)(local_30 + 0x48) <= param_3)) &&
             ((param_4 <= *(ushort *)(local_30 + 0x4a) && (*(ushort *)(local_30 + 0x4a) <= param_5))
             )) {
            cVar1 = FUN_00b14cb0((uint)*(ushort *)(local_30 + 0x48) + (param_6 - param_2));
            if ((cVar1 == '\0') ||
               (cVar1 = FUN_00b14cd0((uint)*(ushort *)(local_30 + 0x4a) + (param_7 - param_4)),
               cVar1 == '\0')) {
              *(undefined1 *)(local_48 + local_1c) = 1;
            }
            else {
              FUN_00b4fd90(param_1,local_1c,(uint)*(ushort *)(local_30 + 0x48) + (param_6 - param_2)
                           ,(uint)*(ushort *)(local_30 + 0x4a) + (param_7 - param_4));
            }
          }
          local_1c = local_1c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    FUN_00b50120(auStack_68);
    if (param_9 != '\0') {
      FUN_00b50170(auStack_68);
    }
    FUN_004095f0(local_48);
  }
  return;
}

