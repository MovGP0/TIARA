/* Ghidra address: 00465f10 */
/* Ghidra symbol: FUN_00465f10 */


undefined8 FUN_00465f10(undefined8 param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined2 local_48;
  undefined1 *local_30;
  undefined1 local_20 [8];
  undefined8 local_18;
  
  local_30 = auStack_68;
  thunk_FUN_04125dff(local_20);
  local_48 = 8;
  uVar1 = (**(code **)PTR_DAT_02004be8)(local_20,param_2,0x400,0);
  FUN_00460800(uVar1,*param_2,8);
  FUN_00414b90(param_1,local_18);
  FUN_00460b80(local_20);
  return param_1;
}

