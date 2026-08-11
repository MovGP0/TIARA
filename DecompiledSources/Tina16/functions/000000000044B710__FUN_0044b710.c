/* Ghidra address: 0044b710 */
/* Ghidra symbol: FUN_0044b710 */


undefined8 FUN_0044b710(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 local_218 [512];
  
  iVar1 = thunk_FUN_039c31b1(param_2,param_3,local_218,0x100);
  if (iVar1 < 1) {
    FUN_00414ad0(param_1,param_4);
  }
  else {
    FUN_00414740(param_1,local_218,iVar1 + -1);
  }
  return param_1;
}

