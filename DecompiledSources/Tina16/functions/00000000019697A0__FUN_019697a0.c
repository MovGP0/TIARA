/* Ghidra address: 019697a0 */
/* Ghidra symbol: FUN_019697a0 */


undefined8 * FUN_019697a0(longlong param_1,undefined8 *param_2)

{
  FUN_01951d20(param_1,param_2);
  if (*(char *)(param_1 + 0x250) != '\0') {
    FUN_00416cd0(param_2,4,*param_2,L" DrillName=\"",*(undefined8 *)(param_1 + 0x248),&LAB_01969830)
    ;
  }
  return param_2;
}

