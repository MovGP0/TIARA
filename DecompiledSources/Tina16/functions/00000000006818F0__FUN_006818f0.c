/* Ghidra address: 006818f0 */
/* Ghidra symbol: FUN_006818f0 */


void FUN_006818f0(longlong *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_006805f0(param_1);
  *(undefined1 *)((longlong)param_1 + 0x4a3) = uVar1;
  uVar2 = (**(code **)(*param_1 + 0x270))(param_1);
  *(undefined4 *)(param_1 + 0x97) = uVar2;
  uVar2 = (**(code **)(*param_1 + 0x278))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar2;
  FUN_00655750(param_1);
  return;
}

