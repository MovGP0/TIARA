/* Ghidra address: 00a33040 */
/* Ghidra symbol: FUN_00a33040 */


void FUN_00a33040(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if (DAT_020133c8 == 0) {
    DAT_020133c8 = FUN_00a336d0(&PTR_FUN_00a2eaf8,1,0);
  }
  puVar1 = (undefined8 *)FUN_004095c0(8);
  *puVar1 = param_1;
  FUN_00a33850(DAT_020133c8,puVar1);
  return;
}

