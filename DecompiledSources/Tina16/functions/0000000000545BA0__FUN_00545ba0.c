/* Ghidra address: 00545ba0 */
/* Ghidra symbol: FUN_00545ba0 */


undefined8 FUN_00545ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_28 [3];
  
  local_28[0] = 0;
  lVar1 = FUN_00410e60(&DAT_005457a8,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(local_28,lVar2);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x30;
  }
  FUN_0041b840(param_2,lVar1);
  FUN_0041b800(local_28);
  return param_2;
}

