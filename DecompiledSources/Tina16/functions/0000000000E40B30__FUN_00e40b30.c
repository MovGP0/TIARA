/* Ghidra address: 00e40b30 */
/* Ghidra symbol: FUN_00e40b30 */


undefined8 FUN_00e40b30(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined1 local_70 [24];
  undefined1 local_58 [8];
  undefined8 local_50 [6];
  
  FUN_00e3b2d0(param_3,0,param_2,local_50,local_58,param_1 + 0x510);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x9c0) + 0x68);
  if (*(uint *)(lVar1 + 0x10) <= param_4) {
    FUN_00594f90();
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)param_4 * 8);
  FUN_016764f0(local_70,param_2,param_3,*(undefined8 *)(param_1 + 0x5b8));
  FUN_005980d0(lVar1 + 8,local_70);
  return local_50[0];
}

