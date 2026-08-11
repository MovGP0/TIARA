/* Ghidra address: 0159b390 */
/* Ghidra symbol: FUN_0159b390 */


/* WARNING: Removing unreachable block (ram,0x0159b74b) */

undefined8 FUN_0159b390(longlong *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  byte bVar4;
  bool bVar5;
  char *local_58;
  uint local_44;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  do {
    if (*(uint *)((longlong)param_1 + 0x8d) < 0x103) {
      FUN_01599370(param_1);
      if ((*(uint *)((longlong)param_1 + 0x8d) < 0x103) && (param_2 == 0)) {
        return 0;
      }
      if (*(int *)((longlong)param_1 + 0x8d) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x16ea) = 0;
        if (param_2 == 4) {
          if (*(int *)((longlong)param_1 + 0x75) < 0) {
            local_28 = 0;
          }
          else {
            local_28 = *(longlong *)((longlong)param_1 + 0x45) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x75);
          }
          FUN_015a1bd0(param_1,local_28,
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
            local_18 = 0;
          }
          else {
            local_18 = *(longlong *)((longlong)param_1 + 0x45) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x75);
          }
          FUN_015a1bd0(param_1,local_18,
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
    *(undefined4 *)((longlong)param_1 + 0x79) = 0;
    if ((2 < *(uint *)((longlong)param_1 + 0x8d)) && (*(int *)((longlong)param_1 + 0x85) != 0)) {
      local_58 = (char *)(*(longlong *)((longlong)param_1 + 0x45) + -1 +
                         (ulonglong)*(uint *)((longlong)param_1 + 0x85));
      cVar2 = *local_58;
      if ((cVar2 == local_58[1]) &&
         ((cVar2 == local_58[2] && (local_58 = local_58 + 3, cVar2 == *local_58)))) {
        pcVar1 = (char *)(*(longlong *)((longlong)param_1 + 0x45) + 0x102 +
                         (ulonglong)*(uint *)((longlong)param_1 + 0x85));
        do {
          pcVar3 = local_58 + 1;
          if (((((cVar2 != local_58[1]) || (pcVar3 = local_58 + 2, cVar2 != local_58[2])) ||
               (pcVar3 = local_58 + 3, cVar2 != local_58[3])) ||
              ((pcVar3 = local_58 + 4, cVar2 != local_58[4] ||
               (pcVar3 = local_58 + 5, cVar2 != local_58[5])))) ||
             ((pcVar3 = local_58 + 6, cVar2 != local_58[6] ||
              ((pcVar3 = local_58 + 7, cVar2 != local_58[7] ||
               (local_58 = local_58 + 8, pcVar3 = local_58, cVar2 != *local_58)))))) break;
        } while (local_58 < pcVar1);
        local_58 = pcVar3;
        *(int *)((longlong)param_1 + 0x79) = 0x102 - ((int)pcVar1 - (int)local_58);
        if (*(uint *)((longlong)param_1 + 0x8d) < *(uint *)((longlong)param_1 + 0x79)) {
          *(undefined4 *)((longlong)param_1 + 0x79) = *(undefined4 *)((longlong)param_1 + 0x8d);
        }
      }
    }
    if (*(uint *)((longlong)param_1 + 0x79) < 3) {
      bVar4 = *(byte *)(*(longlong *)((longlong)param_1 + 0x45) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x85));
      *(undefined2 *)
       (*(longlong *)((longlong)param_1 + 0x16d6) +
       (ulonglong)*(uint *)((longlong)param_1 + 0x16d2) * 2) = 0;
      *(byte *)(*(longlong *)((longlong)param_1 + 0x16c6) +
               (ulonglong)*(uint *)((longlong)param_1 + 0x16d2)) = bVar4;
      *(int *)((longlong)param_1 + 0x16d2) = *(int *)((longlong)param_1 + 0x16d2) + 1;
      *(short *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0xad) =
           *(short *)((longlong)param_1 + (ulonglong)bVar4 * 4 + 0xad) + 1;
      bVar5 = *(int *)((longlong)param_1 + 0x16d2) != *(int *)((longlong)param_1 + 0x16ce) + -1;
      *(int *)((longlong)param_1 + 0x8d) = *(int *)((longlong)param_1 + 0x8d) + -1;
      *(int *)((longlong)param_1 + 0x85) = *(int *)((longlong)param_1 + 0x85) + 1;
    }
    else {
      bVar4 = (char)*(undefined4 *)((longlong)param_1 + 0x79) - 3;
      *(undefined2 *)
       (*(longlong *)((longlong)param_1 + 0x16d6) +
       (ulonglong)*(uint *)((longlong)param_1 + 0x16d2) * 2) = 1;
      *(byte *)(*(longlong *)((longlong)param_1 + 0x16c6) +
               (ulonglong)*(uint *)((longlong)param_1 + 0x16d2)) = bVar4;
      *(int *)((longlong)param_1 + 0x16d2) = *(int *)((longlong)param_1 + 0x16d2) + 1;
      *(short *)((longlong)param_1 +
                (longlong)(int)((byte)(&DAT_01f691f0)[bVar4] + 0x101) * 4 + 0xad) =
           *(short *)((longlong)param_1 +
                     (longlong)(int)((byte)(&DAT_01f691f0)[bVar4] + 0x101) * 4 + 0xad) + 1;
      local_44 = (uint)DAT_01f692f0;
      *(short *)((longlong)param_1 + (longlong)(int)local_44 * 4 + 0x9a1) =
           *(short *)((longlong)param_1 + (longlong)(int)local_44 * 4 + 0x9a1) + 1;
      bVar5 = *(int *)((longlong)param_1 + 0x16d2) != *(int *)((longlong)param_1 + 0x16ce) + -1;
      *(int *)((longlong)param_1 + 0x8d) =
           *(int *)((longlong)param_1 + 0x8d) - *(int *)((longlong)param_1 + 0x79);
      *(int *)((longlong)param_1 + 0x85) =
           *(int *)((longlong)param_1 + 0x85) + *(int *)((longlong)param_1 + 0x79);
      *(undefined4 *)((longlong)param_1 + 0x79) = 0;
    }
    if (!bVar5) {
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
  } while( true );
}

