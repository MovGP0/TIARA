/* Ghidra address: 00f39bf0 */
/* Ghidra symbol: FUN_00f39bf0 */


void FUN_00f39bf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  lVar1 = FUN_00410e60(&DAT_00f3e728,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(&local_28,lVar2);
  *(longlong *)(lVar1 + 0x18) = param_1;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x20;
  }
  FUN_0041b840(&local_20,lVar1);
  FUN_0059b100(param_1 + 8,local_20);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  return;
}

