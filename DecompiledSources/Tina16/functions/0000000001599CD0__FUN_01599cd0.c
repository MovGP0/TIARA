/* Ghidra address: 01599cd0 */
/* Ghidra symbol: FUN_01599cd0 */


undefined8 FUN_01599cd0(longlong *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  uint local_60;
  uint local_5c;
  undefined4 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  do {
    if (*(uint *)((longlong)param_1 + 0x8d) < 0x106) {
      FUN_01599370(param_1);
      if ((*(uint *)((longlong)param_1 + 0x8d) < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (*(int *)((longlong)param_1 + 0x8d) == 0) {
        if (*(uint *)((longlong)param_1 + 0x85) < 2) {
          local_48 = *(undefined4 *)((longlong)param_1 + 0x85);
        }
        else {
          local_48 = 2;
        }
        *(undefined4 *)((longlong)param_1 + 0x16ea) = local_48;
        if (param_2 == 4) {
          if (*(int *)((longlong)param_1 + 0x75) < 0) {
            local_38 = 0;
          }
          else {
            local_38 = *(longlong *)((longlong)param_1 + 0x45) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x75);
          }
          FUN_015a1bd0(param_1,local_38,
                       *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),1);
          *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
          FUN_0159c110(*param_1);
          if (*(int *)(*param_1 + 0x18) == 0) {
            return 2;
          }
          return 3;
        }
        if (*(int *)((longlong)param_1 + 0x16d2) != 0) {
          if (*(int *)((longlong)param_1 + 0x75) < 0) {
            local_30 = 0;
          }
          else {
            local_30 = *(longlong *)((longlong)param_1 + 0x45) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x75);
          }
          FUN_015a1bd0(param_1,local_30,
                       *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),0);
          *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
          FUN_0159c110(*param_1);
          if (*(int *)(*param_1 + 0x18) == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
    local_60 = 0;
    if (2 < *(uint *)((longlong)param_1 + 0x8d)) {
      *(uint *)((longlong)param_1 + 0x61) =
           (*(int *)((longlong)param_1 + 0x61) <<
            ((byte)*(undefined4 *)((longlong)param_1 + 0x71) & 0x1f) ^
           (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x45) +
                          (ulonglong)(*(int *)((longlong)param_1 + 0x85) + 2))) &
           *(uint *)((longlong)param_1 + 0x6d);
      *(undefined2 *)
       (*(longlong *)((longlong)param_1 + 0x51) +
       (ulonglong)(*(uint *)((longlong)param_1 + 0x85) & *(uint *)((longlong)param_1 + 0x41)) * 2) =
           *(undefined2 *)
            (*(longlong *)((longlong)param_1 + 0x59) +
            (ulonglong)*(uint *)((longlong)param_1 + 0x61) * 2);
      local_60 = (uint)*(ushort *)
                        (*(longlong *)((longlong)param_1 + 0x51) +
                        (ulonglong)
                        (*(uint *)((longlong)param_1 + 0x85) & *(uint *)((longlong)param_1 + 0x41))
                        * 2);
      *(undefined2 *)
       (*(longlong *)((longlong)param_1 + 0x59) + (ulonglong)*(uint *)((longlong)param_1 + 0x61) * 2
       ) = *(undefined2 *)((longlong)param_1 + 0x85);
    }
    if ((local_60 != 0) &&
       (*(int *)((longlong)param_1 + 0x85) - local_60 <= *(int *)((longlong)param_1 + 0x39) - 0x106U
       )) {
      uVar4 = FUN_0159c330(param_1);
      *(undefined4 *)((longlong)param_1 + 0x79) = uVar4;
    }
    if (*(uint *)((longlong)param_1 + 0x79) < 3) {
      bVar1 = *(byte *)(*(longlong *)((longlong)param_1 + 0x45) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x85));
      *(undefined2 *)
       (*(longlong *)((longlong)param_1 + 0x16d6) +
       (ulonglong)*(uint *)((longlong)param_1 + 0x16d2) * 2) = 0;
      *(byte *)(*(longlong *)((longlong)param_1 + 0x16c6) +
               (ulonglong)*(uint *)((longlong)param_1 + 0x16d2)) = bVar1;
      *(int *)((longlong)param_1 + 0x16d2) = *(int *)((longlong)param_1 + 0x16d2) + 1;
      *(short *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xad) =
           *(short *)((longlong)param_1 + (ulonglong)bVar1 * 4 + 0xad) + 1;
      bVar6 = *(int *)((longlong)param_1 + 0x16d2) != *(int *)((longlong)param_1 + 0x16ce) + -1;
      *(int *)((longlong)param_1 + 0x8d) = *(int *)((longlong)param_1 + 0x8d) + -1;
      *(int *)((longlong)param_1 + 0x85) = *(int *)((longlong)param_1 + 0x85) + 1;
    }
    else {
      bVar1 = (char)*(undefined4 *)((longlong)param_1 + 0x79) - 3;
      sVar2 = (short)*(undefined4 *)((longlong)param_1 + 0x85) -
              (short)*(undefined4 *)((longlong)param_1 + 0x89);
      *(short *)(*(longlong *)((longlong)param_1 + 0x16d6) +
                (ulonglong)*(uint *)((longlong)param_1 + 0x16d2) * 2) = sVar2;
      *(byte *)(*(longlong *)((longlong)param_1 + 0x16c6) +
               (ulonglong)*(uint *)((longlong)param_1 + 0x16d2)) = bVar1;
      *(int *)((longlong)param_1 + 0x16d2) = *(int *)((longlong)param_1 + 0x16d2) + 1;
      uVar3 = sVar2 - 1;
      *(short *)((longlong)param_1 +
                (longlong)(int)((byte)(&DAT_01f691f0)[bVar1] + 0x101) * 4 + 0xad) =
           *(short *)((longlong)param_1 +
                     (longlong)(int)((byte)(&DAT_01f691f0)[bVar1] + 0x101) * 4 + 0xad) + 1;
      if (uVar3 < 0x100) {
        bVar1 = (&DAT_01f692f0)[uVar3];
      }
      else {
        bVar1 = (&DAT_01f692f0)[((int)(uint)uVar3 >> 7) + 0x100];
      }
      local_5c = (uint)bVar1;
      *(short *)((longlong)param_1 + (longlong)(int)local_5c * 4 + 0x9a1) =
           *(short *)((longlong)param_1 + (longlong)(int)local_5c * 4 + 0x9a1) + 1;
      bVar6 = *(int *)((longlong)param_1 + 0x16d2) != *(int *)((longlong)param_1 + 0x16ce) + -1;
      *(int *)((longlong)param_1 + 0x8d) =
           *(int *)((longlong)param_1 + 0x8d) - *(int *)((longlong)param_1 + 0x79);
      if ((*(uint *)((longlong)param_1 + 0x99) < *(uint *)((longlong)param_1 + 0x79)) ||
         (*(uint *)((longlong)param_1 + 0x8d) < 3)) {
        *(int *)((longlong)param_1 + 0x85) =
             *(int *)((longlong)param_1 + 0x85) + *(int *)((longlong)param_1 + 0x79);
        *(undefined4 *)((longlong)param_1 + 0x79) = 0;
        *(uint *)((longlong)param_1 + 0x61) =
             (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x45) +
                            (ulonglong)*(uint *)((longlong)param_1 + 0x85));
        *(uint *)((longlong)param_1 + 0x61) =
             (*(int *)((longlong)param_1 + 0x61) <<
              ((byte)*(undefined4 *)((longlong)param_1 + 0x71) & 0x1f) ^
             (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x45) +
                            (ulonglong)(*(int *)((longlong)param_1 + 0x85) + 1))) &
             *(uint *)((longlong)param_1 + 0x6d);
      }
      else {
        *(int *)((longlong)param_1 + 0x79) = *(int *)((longlong)param_1 + 0x79) + -1;
        do {
          *(int *)((longlong)param_1 + 0x85) = *(int *)((longlong)param_1 + 0x85) + 1;
          *(uint *)((longlong)param_1 + 0x61) =
               (*(int *)((longlong)param_1 + 0x61) <<
                ((byte)*(undefined4 *)((longlong)param_1 + 0x71) & 0x1f) ^
               (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x45) +
                              (ulonglong)(*(int *)((longlong)param_1 + 0x85) + 2))) &
               *(uint *)((longlong)param_1 + 0x6d);
          *(undefined2 *)
           (*(longlong *)((longlong)param_1 + 0x51) +
           (ulonglong)(*(uint *)((longlong)param_1 + 0x85) & *(uint *)((longlong)param_1 + 0x41)) *
           2) = *(undefined2 *)
                 (*(longlong *)((longlong)param_1 + 0x59) +
                 (ulonglong)*(uint *)((longlong)param_1 + 0x61) * 2);
          *(undefined2 *)
           (*(longlong *)((longlong)param_1 + 0x59) +
           (ulonglong)*(uint *)((longlong)param_1 + 0x61) * 2) =
               *(undefined2 *)((longlong)param_1 + 0x85);
          iVar5 = *(int *)((longlong)param_1 + 0x79) + -1;
          *(int *)((longlong)param_1 + 0x79) = iVar5;
        } while (iVar5 != 0);
        *(int *)((longlong)param_1 + 0x85) = *(int *)((longlong)param_1 + 0x85) + 1;
      }
    }
    if (!bVar6) {
      if (*(int *)((longlong)param_1 + 0x75) < 0) {
        local_40 = 0;
      }
      else {
        local_40 = *(longlong *)((longlong)param_1 + 0x45) +
                   (ulonglong)*(uint *)((longlong)param_1 + 0x75);
      }
      FUN_015a1bd0(param_1,local_40,
                   *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),0);
      *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
      FUN_0159c110(*param_1);
      if (*(int *)(*param_1 + 0x18) == 0) {
        return 0;
      }
    }
  } while( true );
}

