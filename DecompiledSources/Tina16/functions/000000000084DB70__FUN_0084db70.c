/* Ghidra address: 0084db70 */
/* Ghidra symbol: FUN_0084db70 */


void FUN_0084db70(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = FUN_00410e60(&DAT_0084da88,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(&local_20,lVar2);
  *(undefined4 *)(lVar1 + 0x18) = param_3;
  *(undefined4 *)(lVar1 + 0x1c) = param_2;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x20;
  }
  FUN_0084bcc0(param_1[0xc0],lVar2);
  (**(code **)(*param_1 + 0x180))(param_1);
  FUN_00849ee0(param_1,*(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x18));
  FUN_0041b800(&local_20);
  return;
}

