/* Ghidra address: 01c3d430 */
/* Ghidra symbol: FUN_01c3d430 */


undefined8 FUN_01c3d430(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730))
    ;
    if (iVar1 == 0) {
      FUN_00414ad0(param_2,&DAT_01c3d4b4);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),param_2);
    }
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x948));
  }
  return param_2;
}

