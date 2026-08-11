/* Ghidra address: 00b66790 */
/* Ghidra symbol: FUN_00b66790 */


void FUN_00b66790(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong local_20;
  
  local_20 = 0;
  lVar3 = FUN_00b598d0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                       *(undefined4 *)(param_1 + 0x48));
  iVar1 = FUN_00b353c0(*(undefined8 *)(lVar3 + 0x70));
  if (iVar1 != 0) {
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x1b2);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x12);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),4);
    FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),0);
    FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),0);
    FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),0xffffffff);
    FUN_00b62d00(*(undefined8 *)(param_1 + 0x40),iVar1);
    iVar5 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar3 = FUN_00b598d0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x18) + 8),
                             *(undefined4 *)(param_1 + 0x48));
        uVar4 = FUN_00b353d0(*(undefined8 *)(lVar3 + 0x70),iVar5);
        FUN_00b356f0(&local_20,uVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x70));
        FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),0x1be);
        uVar2 = 0;
        if (local_20 != 0) {
          uVar2 = *(undefined4 *)(local_20 + -4);
        }
        FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),uVar2);
        uVar4 = FUN_00414df0(&local_20);
        uVar2 = 0;
        if (local_20 != 0) {
          uVar2 = *(undefined4 *)(local_20 + -4);
        }
        FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),uVar4,uVar2);
        iVar5 = iVar5 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_004144d0(&local_20);
  return;
}

