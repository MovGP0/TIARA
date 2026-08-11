/* Ghidra address: 00680510 */
/* Ghidra symbol: FUN_00680510 */


void FUN_00680510(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(param_1[0x99],param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x99,param_2);
    if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
      (**(code **)(*param_1 + 0x268))(param_1,param_1[0x99]);
    }
  }
  return;
}

