/* Ghidra address: 0069eba0 */
/* Ghidra symbol: FUN_0069eba0 */


ulonglong FUN_0069eba0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00416740(*param_4);
  uVar2 = thunk_FUN_041b2403(param_1,param_2,param_3,uVar1);
  FUN_004169f0(param_4,uVar2 & 0xffffffff);
  return uVar2;
}

