/* Ghidra address: 013eb510 */
/* Ghidra symbol: FUN_013eb510 */


void FUN_013eb510(longlong param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x6f0),iVar3);
      FUN_004095f0(uVar1);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x10))(*(longlong **)(param_1 + 0x6f0));
  pcVar2 = (char *)FUN_004095c0(0x29);
  *(char **)(param_1 + 0x6f8) = pcVar2;
  *pcVar2 = *(char *)(*(longlong *)(param_1 + 0x6b0) + 0x4a8) + '\x01';
  FUN_0040d200(pcVar2 + 1,0x28,0);
  if (**(char **)(param_1 + 0x6f8) == '\x01') {
    uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
    *(undefined8 *)(*(longlong *)(param_1 + 0x6f8) + 1) = uVar1;
    uVar1 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
    *(undefined8 *)(*(longlong *)(param_1 + 0x6f8) + 9) = uVar1;
  }
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0x6f0),*(undefined8 *)(param_1 + 0x6f8));
  return;
}

