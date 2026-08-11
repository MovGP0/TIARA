/* Ghidra address: 01339b10 */
/* Ghidra symbol: FUN_01339b10 */


void FUN_01339b10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           FUN_01338660(&PTR_FUN_01337c18,1,*(undefined8 *)PTR_DAT_02004030,
                        *(undefined8 *)(param_1 + 0x770));
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

