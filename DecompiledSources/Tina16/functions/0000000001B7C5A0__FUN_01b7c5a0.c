/* Ghidra address: 01b7c5a0 */
/* Ghidra symbol: FUN_01b7c5a0 */


void FUN_01b7c5a0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           FUN_01b77240(&PTR_FUN_01b76838,1,*(undefined8 *)PTR_DAT_02004030,
                        *(undefined8 *)(param_1 + 0x808),*(undefined8 *)PTR_DAT_02005010);
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

