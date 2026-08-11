/* Ghidra address: 00dd6de0 */
/* Ghidra symbol: FUN_00dd6de0 */


undefined4 FUN_00dd6de0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 in_stack_00000030;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar2 = FUN_00410e60(&DAT_00dd6d00,1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2 + 0x10;
  }
  FUN_0041b840(local_20,lVar3);
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x20;
  }
  uVar1 = FUN_00626010(param_2,in_stack_00000030,lVar2);
  FUN_0041b800(local_20);
  return uVar1;
}

