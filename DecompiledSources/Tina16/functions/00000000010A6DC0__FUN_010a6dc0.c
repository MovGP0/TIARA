/* Ghidra address: 010a6dc0 */
/* Ghidra symbol: FUN_010a6dc0 */


void FUN_010a6dc0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 local_30 [2];
  
  iVar1 = *(int *)(param_1 + 0x980);
  if (iVar1 != param_2) {
    if (0 < iVar1) {
      FUN_00bf3780(*(undefined8 *)(param_1 + 0x960),iVar1);
      FUN_00c0dc30(*(undefined8 *)(param_1 + 0x960),*(undefined4 *)(param_1 + 0x980));
    }
    if ((0 < param_2) && (*(int *)(*(longlong *)(param_1 + 0x960) + 0x4cc) != param_2)) {
      local_30[0] = FUN_00bb7750(1,param_2);
      (**(code **)(**(longlong **)(param_1 + 0x960) + 0x2b0))
                (*(longlong **)(param_1 + 0x960),local_30);
    }
    FUN_00bf3780(*(undefined8 *)(param_1 + 0x960),param_2);
    FUN_00c0dc30(*(undefined8 *)(param_1 + 0x960),param_2);
  }
  return;
}

