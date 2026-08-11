/* Ghidra address: 009ebb00 */
/* Ghidra symbol: FUN_009ebb00 */


void FUN_009ebb00(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  FUN_00410f20(uVar1);
  (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x90))(*(longlong **)(param_1 + 0x4e8));
  uVar1 = *(undefined8 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  FUN_00410f20(uVar1);
  FUN_00682a40(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

