/* Ghidra address: 00c2e030 */
/* Ghidra symbol: FUN_00c2e030 */


void FUN_00c2e030(longlong *param_1,longlong *param_2)

{
  undefined1 local_1a;
  undefined1 local_19;
  
  local_1a = 0x21;
  local_19 = (**(code **)(*param_1 + 0x38))(param_1);
  (**(code **)(*param_2 + 0x20))(param_2,&local_1a,2);
  return;
}

