/* Ghidra address: 01996b80 */
/* Ghidra symbol: FUN_01996b80 */


void FUN_01996b80(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  
  if ((int)param_1[2] < 0x7ffffffe) {
    uVar1 = FUN_01996aa0(0,&PTR_FUN_01984b28,param_2,param_3,param_4,param_5);
    (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  }
  else {
    FUN_00b047e0(8);
  }
  return;
}

