/* Ghidra address: 017c26d0 */
/* Ghidra symbol: FUN_017c26d0 */


void FUN_017c26d0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = param_1[1];
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  uVar2 = FUN_00b92120(param_3,param_4);
  FUN_017c2e60(param_1,uVar2);
  FUN_017c2bc0(param_1);
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  return;
}

