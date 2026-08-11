/* Ghidra address: 006a5320 */
/* Ghidra symbol: FUN_006a5320 */


void FUN_006a5320(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = thunk_FUN_03e425c0(*(undefined8 *)(param_1 + 0x10),*param_2,*(undefined8 *)(param_2 + 2),
                             *(undefined8 *)(param_2 + 4));
  *(undefined8 *)(param_2 + 6) = uVar1;
  return;
}

