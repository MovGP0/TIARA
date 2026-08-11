/* Ghidra address: 01bf8a60 */
/* Ghidra symbol: FUN_01bf8a60 */


void FUN_01bf8a60(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x118) == 0) {
    uVar1 = FUN_004b26d0(&PTR_FUN_01beda10,1,param_1,&PTR_FUN_01bed778);
    *(undefined8 *)(param_1 + 0x118) = uVar1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x118) + 0x10))(*(longlong **)(param_1 + 0x118),param_2);
  return;
}

