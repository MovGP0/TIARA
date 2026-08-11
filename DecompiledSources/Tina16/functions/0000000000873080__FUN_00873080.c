/* Ghidra address: 00873080 */
/* Ghidra symbol: FUN_00873080 */


undefined8 FUN_00873080(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00872920(param_2,param_3,param_4);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1,lVar1,param_4);
  }
  return uVar2;
}

