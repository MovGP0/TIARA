/* Ghidra address: 00a16120 */
/* Ghidra symbol: FUN_00a16120 */


void FUN_00a16120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x228);
  if (*(int *)(lVar2 + 0x60) == 0) {
    iVar3 = (**(code **)(*(longlong *)(param_1 + 0x230) + 0x18))(param_1,lVar2 + 0x10);
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(lVar2 + 0x60) = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x1a0);
  (**(code **)(*(longlong *)(param_1 + 0x238) + 8))
            (param_1,lVar2 + 0x10,lVar2 + 100,uVar1,param_2,param_3,param_4);
  if (uVar1 <= *(uint *)(lVar2 + 100)) {
    *(undefined8 *)(lVar2 + 0x60) = 0;
  }
  return;
}

