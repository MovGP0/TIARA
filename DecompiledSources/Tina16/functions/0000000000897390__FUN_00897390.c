/* Ghidra address: 00897390 */
/* Ghidra symbol: FUN_00897390 */


void FUN_00897390(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                 undefined8 param_5,undefined2 param_6,char param_7)

{
  undefined4 uVar1;
  
  if (param_7 == '\0') {
    uVar1 = (**(code **)(*param_1 + 0x130))(param_1,*param_3);
    uVar1 = FUN_00874ab0(uVar1);
    FUN_00874e80(uVar1,param_3,param_4);
  }
  else if (param_7 == '\x01') {
    FUN_00897410(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    FUN_0089bf30();
  }
  return;
}

