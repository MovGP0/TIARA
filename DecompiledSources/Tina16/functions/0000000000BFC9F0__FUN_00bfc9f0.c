/* Ghidra address: 00bfc9f0 */
/* Ghidra symbol: FUN_00bfc9f0 */


void FUN_00bfc9f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  
  if ((*(short **)(param_1 + 0x80) != (short *)0x0) && (**(short **)(param_1 + 0x80) != 0)) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x4cc);
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x4c4);
    cVar1 = *(char *)(param_1 + 0x78);
    if (cVar1 == '\0') {
      iVar3 = FUN_00bfba50(auStack_48);
    }
    else if (cVar1 == '\x01') {
      iVar3 = FUN_00bfc660(auStack_48);
    }
    else if (cVar1 == '\x02') {
      iVar3 = FUN_00bfc1f0(auStack_48);
    }
    else {
      iVar3 = 0;
    }
    if (0 < iVar3) {
      if ((*(char *)(param_1 + 0x78) == '\0') && (1 < iVar2)) {
        iVar4 = iVar4 + 1;
      }
      FUN_00c0f130(*(undefined8 *)(param_1 + 0x70),iVar4,iVar3);
    }
    local_20 = FUN_00bfaa10(*(undefined8 *)(param_1 + 0x70));
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x2a8))(*(longlong **)(param_1 + 0x70),&local_20)
    ;
  }
  return;
}

