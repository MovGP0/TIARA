/* Ghidra address: 01ce36a0 */
/* Ghidra symbol: FUN_01ce36a0 */


void FUN_01ce36a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  cVar1 = (char)param_2[0x24];
  iVar4 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  if (cVar1 != '\0') {
    iVar4 = *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x48) = iVar4;
  *(int *)(param_1 + 0x4c) =
       *(int *)(*(longlong *)(param_1 + 0xe0) + 0x18) + *(int *)((longlong)param_2 + 0x94);
  iVar4 = *(int *)(param_1 + 0x58);
  if (cVar1 != '\0') {
    iVar4 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 0x50) = iVar4;
  uVar3 = FUN_0040c770((double)(*(int *)(*(longlong *)(param_1 + 0xe0) + 0x20) -
                               *(int *)(param_1 + 0x44)));
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  if (cVar1 == '\0') {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0xe0) + 0x58);
  if (bVar2 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xe0) >> 8),1) <<
             (bVar2 & 0x1f) & 0x60U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x14);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x1c);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 10;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)((longlong)param_2 + 0x94) + 5;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -5;
  }
  (**(code **)(*param_2 + 0xb0))(param_2,param_1 + 0x48);
  (**(code **)(*param_2 + 0xc0))
            (param_2,*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
  return;
}

