/* Ghidra address: 00c0a950 */
/* Ghidra symbol: FUN_00c0a950 */


void FUN_00c0a950(longlong *param_1,ushort param_2)

{
  *(ushort *)((longlong)param_1 + 0x63e) = *(ushort *)((longlong)param_1 + 0x63e) | param_2;
  if (*(int *)((longlong)param_1 + 0x514) == 0) {
    (**(code **)(*param_1 + 800))(param_1,*(undefined2 *)((longlong)param_1 + 0x63e));
  }
  return;
}

