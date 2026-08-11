/* Ghidra address: 01677dd0 */
/* Ghidra symbol: FUN_01677dd0 */


void FUN_01677dd0(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined1 local_70 [80];
  
  FUN_01674760(param_3,0,param_2,param_1 + 0x4b0,param_1 + 0x490,param_1 + 0x498,param_1 + 0x4a0,
               param_1 + 0x408);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x5e0) + 0x68);
  if (*(uint *)(lVar1 + 0x10) <= param_4) {
    FUN_00594f90();
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_4 * 8);
  FUN_016764f0(local_70,param_2,param_3,*(undefined8 *)(param_1 + 0x4b0));
  FUN_005980d0(lVar1 + 8,local_70);
  return;
}

