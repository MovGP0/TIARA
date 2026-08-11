/* Ghidra address: 01cfdb30 */
/* Ghidra symbol: FUN_01cfdb30 */


undefined8 FUN_01cfdb30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 local_48 [48];
  
  lVar1 = FUN_01d06f90();
  if (lVar1 == 0) {
    FUN_0043f750(param_2,param_3);
  }
  else {
    FUN_00c3d330(lVar1,local_48,param_3);
    FUN_004169a0(param_2,local_48);
  }
  return param_2;
}

