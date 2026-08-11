/* Ghidra address: 01bea650 */
/* Ghidra symbol: FUN_01bea650 */


void FUN_01bea650(longlong *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  FUN_01c042a0(param_1);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x334);
  uVar2 = (**(code **)(*param_1 + 0x210))(param_1);
  *(ulonglong *)((longlong)param_1 + 0x32c) =
       CONCAT44((*(int *)((longlong)param_1 + 0x9c) / 2 -
                (int)((longlong)((ulonglong)(uint)((longlong)uVar2 >> 0x3f) << 0x20 | uVar2 >> 0x20)
                     / 2)) + 1,uVar1);
  return;
}

