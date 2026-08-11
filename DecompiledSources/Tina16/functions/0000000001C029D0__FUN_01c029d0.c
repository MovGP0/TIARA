/* Ghidra address: 01c029d0 */
/* Ghidra symbol: FUN_01c029d0 */


void FUN_01c029d0(longlong *param_1)

{
  code *pcVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) &&
     (*(char *)((longlong)param_1 + 0x525) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x525) = 1;
    pcVar1 = (code *)FUN_00411550(param_1,0xffee);
    (*pcVar1)(param_1);
    (**(code **)(*param_1 + 0x318))(param_1,0);
    (**(code **)(*param_1 + 0x358))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x525) = 0;
  }
  return;
}

