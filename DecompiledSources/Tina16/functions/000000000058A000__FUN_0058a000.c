/* Ghidra address: 0058a000 */
/* Ghidra symbol: FUN_0058a000 */


int FUN_0058a000(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 local_818 [1024];
  undefined1 local_418 [1032];
  
  FUN_0041d770(local_418,0x200,param_2 + 1,*param_2);
  FUN_0041d770(local_818,0x200,param_3 + 1,*param_3);
  iVar1 = FUN_004277a0(0x400,1,local_418,0xffffffff,local_818,0xffffffff);
  return iVar1 + -2;
}

