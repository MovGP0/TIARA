/* Ghidra address: 01ca3b10 */
/* Ghidra symbol: FUN_01ca3b10 */


void FUN_01ca3b10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           FUN_01c480a0(&PTR_FUN_01c474b8,1,*(undefined8 *)PTR_DAT_02004030,
                        *(undefined8 *)(param_1 + 0x2788));
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

