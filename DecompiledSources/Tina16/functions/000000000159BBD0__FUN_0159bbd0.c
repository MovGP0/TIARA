/* Ghidra address: 0159bbd0 */
/* Ghidra symbol: FUN_0159bbd0 */


undefined8 FUN_0159bbd0(longlong *param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong local_20;
  longlong local_18;
  
  while ((*(int *)((longlong)param_1 + 0x8d) != 0 ||
         (FUN_01599370(param_1), *(int *)((longlong)param_1 + 0x8d) != 0))) {
    *(undefined4 *)((longlong)param_1 + 0x79) = 0;
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
    *(int *)((longlong)param_1 + 0x8d) = *(int *)((longlong)param_1 + 0x8d) + -1;
    *(int *)((longlong)param_1 + 0x85) = *(int *)((longlong)param_1 + 0x85) + 1;
    if (*(int *)((longlong)param_1 + 0x16d2) == *(int *)((longlong)param_1 + 0x16ce) + -1) {
      if (*(int *)((longlong)param_1 + 0x75) < 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = *(longlong *)((longlong)param_1 + 0x45) +
                (ulonglong)*(uint *)((longlong)param_1 + 0x75);
      }
      FUN_015a1bd0(param_1,lVar2,
                   *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),0,bVar1,1
                   ,lVar2);
      *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
      FUN_0159c110(*param_1);
      if (*(int *)(*param_1 + 0x18) == 0) {
        return 0;
      }
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x16ea) = 0;
  if (param_2 != 4) {
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
  if (*(int *)((longlong)param_1 + 0x75) < 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(longlong *)((longlong)param_1 + 0x45) +
               (ulonglong)*(uint *)((longlong)param_1 + 0x75);
  }
  FUN_015a1bd0(param_1,local_20,
               *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),1);
  *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
  FUN_0159c110(*param_1);
  if (*(int *)(*param_1 + 0x18) == 0) {
    return 2;
  }
  return 3;
}

