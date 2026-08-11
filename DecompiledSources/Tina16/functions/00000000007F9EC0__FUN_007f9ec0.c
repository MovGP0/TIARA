/* Ghidra address: 007f9ec0 */
/* Ghidra symbol: FUN_007f9ec0 */


void FUN_007f9ec0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (*(char *)((longlong)plVar1 + 0x494) != '\0') {
    cVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
    if (cVar2 == '\0') {
      FUN_007fa850(param_1,0);
    }
    else {
      local_1c = 0;
      local_20 = 0;
      iVar3 = FUN_00654c00();
      iVar5 = 0;
      if (-1 < iVar3 + -1) {
        do {
          if (*(char *)(param_1 + 0x20) == '\0') {
            uVar4 = FUN_00654bc0(*(undefined8 *)(param_1 + 8),iVar5);
            FUN_007f9db0(auStack_48,uVar4);
          }
          else {
            uVar4 = FUN_00654bc0(*(undefined8 *)(param_1 + 8),iVar5);
            FUN_007f9e40(auStack_48,uVar4);
          }
          iVar5 = iVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_007fa850(param_1,local_1c + local_20 + (uint)*(ushort *)(param_1 + 0x22));
    }
  }
  return;
}

