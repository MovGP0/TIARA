/* Ghidra address: 006fdfd0 */
/* Ghidra symbol: FUN_006fdfd0 */


void FUN_006fdfd0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0065b870();
  uVar1 = thunk_FUN_03e425c0(uVar1,*param_2,*(undefined8 *)(param_2 + 2),
                             *(undefined8 *)(param_2 + 4));
  *(undefined8 *)(param_2 + 6) = uVar1;
  return;
}

