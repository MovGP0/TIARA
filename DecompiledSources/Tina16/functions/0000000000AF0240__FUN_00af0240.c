/* Ghidra address: 00af0240 */
/* Ghidra symbol: FUN_00af0240 */


void FUN_00af0240(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  FUN_00af9760(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x928));
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x920) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x920) + 0x30))
                        (*(longlong **)(param_1 + 0x920),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x920));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x748));
  *(ushort *)(param_1 + 0x8a0) = *(ushort *)(param_1 + 0x8a0) & 0xfeff;
  if ((*(ushort *)(param_1 + 0x8a0) & 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x10))(*(longlong **)(param_1 + 0x8b0));
    FUN_00410f20(*(undefined8 *)(*(longlong *)(param_1 + 0x8b0) + 0x2a8));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8b0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8a8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x770));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x778));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8f0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x8c8));
  FUN_00652b60(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

