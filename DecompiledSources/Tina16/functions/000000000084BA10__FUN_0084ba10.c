/* Ghidra address: 0084ba10 */
/* Ghidra symbol: FUN_0084ba10 */


void FUN_0084ba10(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = FUN_00410e60(&DAT_0084b920,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(local_20,lVar2);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined4 *)(lVar1 + 0x18) = 0xffffffff;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x28;
  }
  FUN_0084b6a0(*(undefined8 *)(lVar1 + 0x20),lVar2);
  *(undefined4 *)(*(longlong *)(lVar1 + 0x20) + 0x18) = *(undefined4 *)(lVar1 + 0x18);
  FUN_0041b800(local_20);
  return;
}

