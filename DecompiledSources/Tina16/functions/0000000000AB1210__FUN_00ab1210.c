/* Ghidra address: 00ab1210 */
/* Ghidra symbol: FUN_00ab1210 */


void FUN_00ab1210(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x168) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00ac4a60(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x168),iVar2);
      param_3 = FUN_00aab7e0(uVar1,*(undefined8 *)(param_1 + 0x58),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x18),
                             *(undefined8 *)(param_1 + 0x60),
                             *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x158),param_2,param_3,
                             param_4,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x138),
                             *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x13c),
                             0 < *(int *)(*(longlong *)(param_1 + 0x50) + 0x174),
                             *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x140),
                             *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x144),iVar2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

