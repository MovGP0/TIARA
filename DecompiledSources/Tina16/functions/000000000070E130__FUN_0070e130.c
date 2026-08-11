/* Ghidra address: 0070e130 */
/* Ghidra symbol: FUN_0070e130 */


void FUN_0070e130(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x10) == -0x2c6) {
    uVar1 = FUN_00786090(param_1);
    if (*(uint *)(param_2 + 8) == uVar1) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x18);
      (**(code **)(*param_1 + 0x58))(param_1);
      *(undefined4 *)((longlong)param_1 + 0x44) = 0xffffffff;
      FUN_00785c20(param_1,param_2);
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      (**(code **)(*param_1 + 0x58))(param_1);
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}

