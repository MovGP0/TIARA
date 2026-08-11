/* Ghidra address: 0041d630 */
/* Ghidra symbol: FUN_0041d630 */


int FUN_0041d630(int param_1)

{
  undefined8 unaff_retaddr;
  
  if (param_1 < 0) {
    if (PTR_FUN_02006058 != (undefined *)0x0) {
      (*(code *)PTR_FUN_02006058)(param_1,unaff_retaddr);
    }
    FUN_00409880(0x18,unaff_retaddr);
  }
  return param_1;
}

