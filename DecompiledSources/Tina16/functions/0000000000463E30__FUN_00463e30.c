/* Ghidra address: 00463e30 */
/* Ghidra symbol: FUN_00463e30 */


bool FUN_00463e30(undefined2 *param_1)

{
  undefined4 uVar1;
  undefined1 local_30 [8];
  short local_28;
  
  thunk_FUN_04125dff(local_30);
  uVar1 = (**(code **)PTR_DAT_02004be8)(local_30,param_1,0x400,0,0xb);
  FUN_00460800(uVar1,*param_1,0xb);
  return local_28 != 0;
}

