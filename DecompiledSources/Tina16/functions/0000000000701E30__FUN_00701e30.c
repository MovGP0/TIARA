/* Ghidra address: 00701e30 */
/* Ghidra symbol: FUN_00701e30 */


void FUN_00701e30(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((*(longlong *)(param_1 + 0x610) != 0) && (*(longlong *)(param_1 + 0x618) != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x618) + 0x328) != 0)) &&
     (*(longlong *)(param_1 + 0x608) != 0)) {
    iVar1 = FUN_007e2ef0(*(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x80));
    iVar1 = iVar1 + -1;
    if (-1 < iVar1) {
      do {
        uVar2 = FUN_007e2f10(*(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x80),iVar1);
        FUN_007e3300(*(undefined8 *)(*(longlong *)(param_1 + 0x608) + 0x80),iVar1);
        FUN_007e31e0(*(undefined8 *)(param_1 + 0x610),0,uVar2);
        iVar1 = iVar1 + -1;
      } while (iVar1 != -1);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x608));
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined8 *)(param_1 + 0x618) = 0;
    *(undefined8 *)(param_1 + 0x610) = 0;
  }
  return;
}

