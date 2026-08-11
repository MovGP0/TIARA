/* Ghidra address: 00996b00 */
/* Ghidra symbol: FUN_00996b00 */


longlong * FUN_00996b00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_0098cda0(&PTR_FUN_00926660,1);
  (**(code **)(*plVar1 + 0xf0))(plVar1,*(undefined1 *)(param_1 + 0x30));
  if (param_2 != 0) {
    (**(code **)(*plVar1 + 0x140))(plVar1,param_2);
  }
  return plVar1;
}

