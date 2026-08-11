/* Ghidra address: 01bf65b0 */
/* Ghidra symbol: FUN_01bf65b0 */


void FUN_01bf65b0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x130) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_00410f20(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_00410f20(uVar1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x158));
  FUN_00410f20();
  if (*(longlong *)(param_1 + 0x120) != 0) {
    iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x120) + 0x10) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar2 = FUN_01bfb5f0(*(undefined8 *)(param_1 + 0x120),iVar3);
        *(undefined8 *)(lVar2 + 0x18) = 0;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(*(undefined8 *)(param_1 + 0x120));
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x118));
  }
  FUN_0061cdd0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

