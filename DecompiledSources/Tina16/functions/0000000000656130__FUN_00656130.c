/* Ghidra address: 00656130 */
/* Ghidra symbol: FUN_00656130 */


void FUN_00656130(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  uint local_48;
  int iStack_44;
  undefined1 local_38 [24];
  
  *(ulonglong *)(param_1 + 0x38) =
       CONCAT44(*(int *)(*(longlong *)(param_1 + 0x68) + 4) - *(int *)((longlong)param_2 + 0x94),
                **(int **)(param_1 + 0x68) - (int)param_2[0x12]);
  (**(code **)(*param_2 + 0xe0))(param_2,local_38);
  cVar1 = FUN_00423210(local_38,param_1 + 0x38);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else if (((*(ushort *)((longlong)param_2 + 0x34) & 0x10) == 0) ||
          ((*(char *)((longlong)param_2 + 0xa9) == '\0' &&
           ((*(uint *)(param_2 + 0x14) & 0x400) != 0)))) {
    if (*(char *)((longlong)param_2 + 0xa9) != '\0') {
      cVar1 = (**(code **)(*param_2 + 0xf0))(param_2);
      if ((cVar1 != '\0') || (*(char *)(param_1 + 0x70) != '\0')) {
        local_48 = (uint)*(undefined8 *)(param_1 + 0x38);
        iStack_44 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
        lVar2 = FUN_0064fca0(param_2,0xb00a,0,(longlong)(int)(local_48 & 0xffff | iStack_44 << 0x10)
                            );
        bVar3 = lVar2 != 0;
        goto LAB_00656210;
      }
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
LAB_00656210:
  if (bVar3) {
    *(longlong **)(param_1 + 0x30) = param_2;
  }
  return;
}

