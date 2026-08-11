/* Ghidra address: 01c81430 */
/* Ghidra symbol: FUN_01c81430 */


void FUN_01c81430(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  puVar1 = (undefined8 *)FUN_01c8a3c0(param_1,0);
  plVar2 = (longlong *)
           FUN_01badfb0(&PTR_FUN_01bad888,1,*(undefined8 *)PTR_DAT_02004030,*puVar1,
                        *(undefined8 *)(param_1 + 0x2788),*(undefined8 *)(param_1 + 0x2770));
  (**(code **)(*plVar2 + 0x2d0))(plVar2);
  FUN_00410f20(plVar2);
  FUN_00414480(local_20);
  return;
}

