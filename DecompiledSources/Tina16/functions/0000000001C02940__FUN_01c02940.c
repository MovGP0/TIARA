/* Ghidra address: 01c02940 */
/* Ghidra symbol: FUN_01c02940 */


void FUN_01c02940(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (*(char *)((longlong)param_1 + 0x525) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x525) = 1;
    (**(code **)(*param_1 + 0x318))(param_1,0);
    (**(code **)(*param_1 + 0x358))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x525) = 0;
  }
  return;
}

