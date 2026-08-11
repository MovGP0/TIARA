/* Ghidra address: 0159a6e0 */
/* Ghidra symbol: FUN_0159a6e0 */


undefined8 FUN_0159a6e0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint local_60;
  uint local_58;
  undefined4 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  do {
    if (*(uint *)((longlong)param_1 + 0x8d) < 0x106) {
      FUN_01599370(param_1);
      if ((*(uint *)((longlong)param_1 + 0x8d) < 0x106) && (param_2 == 0)) {
        return 0;
      }
      if (*(int *)((longlong)param_1 + 0x8d) == 0) {
        if (*(int *)((longlong)param_1 + 0x81) != 0) {
          bVar5 = *(byte *)(*(longlong *)((longlong)param_1 + 0x45) +
                           (ulonglong)(*(int *)((longlong)param_1 + 0x85) - 1));
          *(undefined2 *)
           (*(longlong *)((longlong)param_1 + 0x16d6) +
           (ulonglong)*(uint *)((longlong)param_1 + 0x16d2) * 2) = 0;
          *(byte *)(*(longlong *)((longlong)param_1 + 0x16c6) +
                   (ulonglong)*(uint *)((longlong)param_1 + 0x16d2)) = bVar5;
          *(int *)((longlong)param_1 + 0x16d2) = *(int *)((longlong)param_1 + 0x16d2) + 1;
          *(short *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0xad) =
               *(short *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0xad) + 1;
          *(undefined4 *)((longlong)param_1 + 0x81) = 0;
        }
        if (*(uint *)((longlong)param_1 + 0x85) < 2) {
          local_40 = *(undefined4 *)((longlong)param_1 + 0x85);
        }
        else {
          local_40 = 2;
        }
        *(undefined4 *)((longlong)param_1 + 0x16ea) = local_40;
        if (param_2 != 4) {
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
    *(undefined4 *)((longlong)param_1 + 0x91) = *(undefined4 *)((longlong)param_1 + 0x79);
    *(undefined4 *)((longlong)param_1 + 0x7d) = *(undefined4 *)((longlong)param_1 + 0x89);
    *(undefined4 *)((longlong)param_1 + 0x79) = 2;
    if (((local_60 != 0) &&
        (*(uint *)((longlong)param_1 + 0x91) < *(uint *)((longlong)param_1 + 0x99))) &&
       (*(int *)((longlong)param_1 + 0x85) - local_60 <= *(int *)((longlong)param_1 + 0x39) - 0x106U
       )) {
      uVar8 = FUN_0159c330(param_1);
      *(undefined4 *)((longlong)param_1 + 0x79) = uVar8;
      if ((*(uint *)((longlong)param_1 + 0x79) < 6) &&
         ((*(int *)((longlong)param_1 + 0xa1) == 1 ||
          ((*(int *)((longlong)param_1 + 0x79) == 3 &&
           (0x1000 < (uint)(*(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x89))
           )))))) {
        *(undefined4 *)((longlong)param_1 + 0x79) = 2;
      }
    }
    if ((*(uint *)((longlong)param_1 + 0x91) < 3) ||
       (*(uint *)((longlong)param_1 + 0x91) < *(uint *)((longlong)param_1 + 0x79))) {
      if (*(int *)((longlong)param_1 + 0x81) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x81) = 1;
        *(int *)((longlong)param_1 + 0x85) = *(int *)((longlong)param_1 + 0x85) + 1;
        *(int *)((longlong)param_1 + 0x8d) = *(int *)((longlong)param_1 + 0x8d) + -1;
      }
      else {
        bVar5 = *(byte *)(*(longlong *)((longlong)param_1 + 0x45) +
                         (ulonglong)(*(int *)((longlong)param_1 + 0x85) - 1));
        *(undefined2 *)
         (*(longlong *)((longlong)param_1 + 0x16d6) +
         (ulonglong)*(uint *)((longlong)param_1 + 0x16d2) * 2) = 0;
        *(byte *)(*(longlong *)((longlong)param_1 + 0x16c6) +
                 (ulonglong)*(uint *)((longlong)param_1 + 0x16d2)) = bVar5;
        *(int *)((longlong)param_1 + 0x16d2) = *(int *)((longlong)param_1 + 0x16d2) + 1;
        *(short *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0xad) =
             *(short *)((longlong)param_1 + (ulonglong)bVar5 * 4 + 0xad) + 1;
        if (*(int *)((longlong)param_1 + 0x16d2) == *(int *)((longlong)param_1 + 0x16ce) + -1) {
          if (*(int *)((longlong)param_1 + 0x75) < 0) {
            local_28 = 0;
          }
          else {
            local_28 = *(longlong *)((longlong)param_1 + 0x45) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x75);
          }
          FUN_015a1bd0(param_1,local_28,
                       *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),0);
          *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
          FUN_0159c110(*param_1);
        }
        *(int *)((longlong)param_1 + 0x85) = *(int *)((longlong)param_1 + 0x85) + 1;
        *(int *)((longlong)param_1 + 0x8d) = *(int *)((longlong)param_1 + 0x8d) + -1;
        if (*(int *)(*param_1 + 0x18) == 0) {
          return 0;
        }
      }
    }
    else {
      iVar1 = *(int *)((longlong)param_1 + 0x85);
      iVar2 = *(int *)((longlong)param_1 + 0x8d);
      bVar5 = (char)*(undefined4 *)((longlong)param_1 + 0x91) - 3;
      sVar6 = ((short)*(undefined4 *)((longlong)param_1 + 0x85) + -1) -
              (short)*(undefined4 *)((longlong)param_1 + 0x7d);
      *(short *)(*(longlong *)((longlong)param_1 + 0x16d6) +
                (ulonglong)*(uint *)((longlong)param_1 + 0x16d2) * 2) = sVar6;
      *(byte *)(*(longlong *)((longlong)param_1 + 0x16c6) +
               (ulonglong)*(uint *)((longlong)param_1 + 0x16d2)) = bVar5;
      *(int *)((longlong)param_1 + 0x16d2) = *(int *)((longlong)param_1 + 0x16d2) + 1;
      uVar7 = sVar6 - 1;
      *(short *)((longlong)param_1 +
                (longlong)(int)((byte)(&DAT_01f691f0)[bVar5] + 0x101) * 4 + 0xad) =
           *(short *)((longlong)param_1 +
                     (longlong)(int)((byte)(&DAT_01f691f0)[bVar5] + 0x101) * 4 + 0xad) + 1;
      if (uVar7 < 0x100) {
        bVar5 = (&DAT_01f692f0)[uVar7];
      }
      else {
        bVar5 = (&DAT_01f692f0)[((int)(uint)uVar7 >> 7) + 0x100];
      }
      local_58 = (uint)bVar5;
      *(short *)((longlong)param_1 + (longlong)(int)local_58 * 4 + 0x9a1) =
           *(short *)((longlong)param_1 + (longlong)(int)local_58 * 4 + 0x9a1) + 1;
      iVar3 = *(int *)((longlong)param_1 + 0x16ce);
      iVar4 = *(int *)((longlong)param_1 + 0x16d2);
      *(int *)((longlong)param_1 + 0x8d) =
           *(int *)((longlong)param_1 + 0x8d) - (*(int *)((longlong)param_1 + 0x91) + -1);
      *(int *)((longlong)param_1 + 0x91) = *(int *)((longlong)param_1 + 0x91) + -2;
      do {
        uVar9 = *(int *)((longlong)param_1 + 0x85) + 1;
        *(uint *)((longlong)param_1 + 0x85) = uVar9;
        if (uVar9 <= (uint)(iVar1 + -3 + iVar2)) {
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
        }
        iVar10 = *(int *)((longlong)param_1 + 0x91) + -1;
        *(int *)((longlong)param_1 + 0x91) = iVar10;
      } while (iVar10 != 0);
      *(undefined4 *)((longlong)param_1 + 0x81) = 0;
      *(undefined4 *)((longlong)param_1 + 0x79) = 2;
      *(int *)((longlong)param_1 + 0x85) = *(int *)((longlong)param_1 + 0x85) + 1;
      if (iVar4 == iVar3 + -1) {
        if (*(int *)((longlong)param_1 + 0x75) < 0) {
          local_20 = 0;
        }
        else {
          local_20 = *(longlong *)((longlong)param_1 + 0x45) +
                     (ulonglong)*(uint *)((longlong)param_1 + 0x75);
        }
        FUN_015a1bd0(param_1,local_20,
                     *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),0);
        *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
        FUN_0159c110(*param_1);
        if (*(int *)(*param_1 + 0x18) == 0) {
          return 0;
        }
      }
    }
  } while( true );
}

