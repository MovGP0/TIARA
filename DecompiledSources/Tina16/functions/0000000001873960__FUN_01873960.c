/* Ghidra address: 01873960 */
/* Ghidra symbol: FUN_01873960 */


undefined8 FUN_01873960(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  FUN_004144d0(param_1);
  iVar1 = 0x10;
  do {
    FUN_018738f0(&local_28,*param_2);
    FUN_0061d750(&local_20,local_28);
    FUN_004155b0(param_1,local_20);
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00414590(&local_28,2);
  return param_1;
}

