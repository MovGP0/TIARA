/* Ghidra address: 01610130 */
/* Ghidra symbol: FUN_01610130 */


undefined4 FUN_01610130(undefined8 *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)*param_1;
  FUN_00b909d0(param_1,4);
  *param_2 = *param_2 + 4;
  return uVar1;
}

