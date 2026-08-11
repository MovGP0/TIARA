/* Ghidra address: 017b8380 */
/* Ghidra symbol: FUN_017b8380 */


void FUN_017b8380(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 200))(*(longlong **)(param_1 + 0x40),lVar1);
  FUN_00409a70(*(undefined8 *)(lVar1 + 8),local_res10[0],(longlong)*(int *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_017b1970(local_res10,*(undefined4 *)(param_1 + 0x58));
    FUN_004b9ec0(lVar1);
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x110))(*(longlong **)(param_1 + 0x50),lVar1);
    FUN_00409a70(*(undefined8 *)(lVar1 + 8),local_res10[0],(longlong)*(int *)(param_1 + 0x5c));
  }
  FUN_00410f20(lVar1);
  return;
}

