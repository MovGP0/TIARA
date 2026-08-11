/* Ghidra address: 00465060 */
/* Ghidra symbol: FUN_00465060 */


undefined8 FUN_00465060(undefined2 *param_1)

{
  undefined4 uVar1;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  thunk_FUN_04125dff(local_30);
  uVar1 = (**(code **)PTR_DAT_02004be8)(local_30,param_1,0x400,0,7);
  FUN_00460800(uVar1,*param_1,7);
  return local_28;
}

