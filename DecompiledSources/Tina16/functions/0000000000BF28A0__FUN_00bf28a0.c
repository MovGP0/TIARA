/* Ghidra address: 00bf28a0 */
/* Ghidra symbol: FUN_00bf28a0 */


void FUN_00bf28a0(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_20;
  
  *(int *)((longlong)param_1 + 0x514) = *(int *)((longlong)param_1 + 0x514) + -1;
  if (*(int *)((longlong)param_1 + 0x514) == 0) {
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      if ((*(ushort *)(param_1 + 199) & 2) != 0) {
        FUN_00bfd160(param_1);
      }
      cVar2 = FUN_00c10e70(param_1);
      if ((cVar2 != '\0') && ((*(ushort *)((longlong)param_1 + 0x63e) & 6) != 0)) {
        local_20 = FUN_00bfaa90(param_1);
        iVar4 = (int)param_1[0x9a] + 1;
        if ((iVar4 < (int)local_20) && (0 < (int)param_1[0x9a])) {
          if ((char)param_1[0xc1] == '\0') {
            if ((*(ushort *)((longlong)param_1 + 0x63e) & 4) != 0) {
              uVar1 = (ulonglong)local_20 >> 0x20;
              local_20 = CONCAT44((int)uVar1,iVar4);
              uVar3 = FUN_00c0ee50(param_1,&local_20);
              *(undefined4 *)((longlong)param_1 + 0x4c4) = uVar3;
              *(ushort *)((longlong)param_1 + 0x63e) = *(ushort *)((longlong)param_1 + 0x63e) | 2;
              FUN_00bfac10(param_1);
            }
          }
          else {
            *(undefined1 *)(param_1 + 0xc1) = 0;
          }
          *(ushort *)(param_1 + 199) = *(ushort *)(param_1 + 199) | 1;
        }
      }
      if ((*(ushort *)(param_1 + 199) & 1) != 0) {
        FUN_00bfd020(param_1);
      }
      if (*(short *)((longlong)param_1 + 0x63e) != 0) {
        (**(code **)(*param_1 + 800))(param_1,*(undefined2 *)((longlong)param_1 + 0x63e));
      }
    }
  }
  return;
}

