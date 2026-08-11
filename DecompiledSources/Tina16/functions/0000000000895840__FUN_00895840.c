/* Ghidra address: 00895840 */
/* Ghidra symbol: FUN_00895840 */


undefined8 FUN_00895840(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_1c [4];
  
  iVar1 = (*(code *)PTR_FUN_01e23590)(param_3,local_1c);
  if (iVar1 == 0) {
    FUN_00891ce0(*(undefined8 *)(param_1 + 0x30),param_2,local_1c,0);
  }
  else {
    FUN_00414480(param_2);
  }
  return param_2;
}

