/* Ghidra address: 00440110 */
/* Ghidra symbol: FUN_00440110 */


bool FUN_00440110(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_818 [2056];
  
  uVar1 = thunk_FUN_039b3fd2(param_1,*param_2,local_818,0x400);
  FUN_00414740(param_2 + 2,local_818,uVar1);
  return *(longlong *)(param_2 + 2) == 0;
}

