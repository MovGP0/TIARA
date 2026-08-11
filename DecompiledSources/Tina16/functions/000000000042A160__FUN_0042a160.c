/* Ghidra address: 0042a160 */
/* Ghidra symbol: FUN_0042a160 */


void FUN_0042a160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_retaddr;
  
  UNRECOVERED_JUMPTABLE = (code *)FUN_0041f8a0(&ImgDelayDescr_0356f040);
                    /* WARNING: Could not recover jumptable at 0x0042a1af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,unaff_retaddr,param_3,param_4);
  return;
}

