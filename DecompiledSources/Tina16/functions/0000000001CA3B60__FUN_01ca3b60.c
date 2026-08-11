/* Ghidra address: 01ca3b60 */
/* Ghidra symbol: FUN_01ca3b60 */


void FUN_01ca3b60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)
           FUN_0143a6e0(&PTR_FUN_014399c8,1,*(undefined8 *)PTR_DAT_02004030,0,
                        *(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0x438),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0x438));
  (**(code **)(*plVar1 + 0x2d0))(plVar1);
  FUN_00410f20(plVar1);
  return;
}

