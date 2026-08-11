/* Ghidra address: 00465790 */
/* Ghidra symbol: FUN_00465790 */


undefined8 FUN_00465790(undefined2 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined2 local_40 [4];
  undefined8 local_38;
  
  thunk_FUN_04125dff(local_40);
  local_40[0] = 5;
  local_38 = param_2;
  uVar1 = (**(code **)PTR_DAT_02004be8)(local_40,local_40,0x400,0,6);
  FUN_00460800(uVar1,*param_1,6);
  return local_38;
}

