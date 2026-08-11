/* Ghidra address: 0060be30 */
/* Ghidra symbol: FUN_0060be30 */


void FUN_0060be30(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != *(int *)((longlong)param_1 + 0x54)) {
    if (param_2 == 0x20000000) {
      *(undefined1 *)(param_1 + 0xb) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
    *(int *)((longlong)param_1 + 0x54) = param_2;
    if (1 < *(int *)(param_1[0xc] + 8)) {
      lVar1 = param_1[0xc];
      FUN_0060a460(param_1);
      FUN_00608f90(param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x20),lVar1 + 0x40)
      ;
    }
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

