/* Ghidra address: 0080fbb0 */
/* Ghidra symbol: FUN_0080fbb0 */


void FUN_0080fbb0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_38 [24];
  
  if ((*(ushort *)(*(longlong *)(param_1 + 8) + 0x34) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1);
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    iVar2 = FUN_0064d0b0(uVar1);
    iVar3 = FUN_0064d120(*(undefined8 *)(param_1 + 8));
    FUN_004238d0(local_38,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                 iVar2 - *(int *)(param_1 + 0x1c),iVar3 - *(int *)(param_1 + 0x20));
    FUN_00806e80(uVar1,local_38);
  }
  return;
}

