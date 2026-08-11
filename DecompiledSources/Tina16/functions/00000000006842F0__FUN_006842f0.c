/* Ghidra address: 006842f0 */
/* Ghidra symbol: FUN_006842f0 */


void FUN_006842f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(param_1[0xb0],param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0xb0,param_2);
    if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
      (**(code **)(*param_1 + 0x300))(param_1);
    }
  }
  return;
}

