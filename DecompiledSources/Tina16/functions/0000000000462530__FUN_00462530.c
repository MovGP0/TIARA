/* Ghidra address: 00462530 */
/* Ghidra symbol: FUN_00462530 */


undefined4 FUN_00462530(undefined2 *param_1)

{
  undefined4 uVar1;
  undefined1 local_30 [8];
  undefined4 local_28;
  
  thunk_FUN_04125dff(local_30);
  uVar1 = (**(code **)PTR_DAT_02004be8)(local_30,param_1,0x400,0,3);
  FUN_00460800(uVar1,*param_1,3);
  return local_28;
}

