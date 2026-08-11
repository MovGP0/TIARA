/* Ghidra address: 007fd450 */
/* Ghidra symbol: FUN_007fd450 */


void FUN_007fd450(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  FUN_00654400(param_1);
  local_1c = *(int *)((longlong)param_1 + 0x2cc);
  cVar1 = FUN_007fd350(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x170))(param_1,0x60);
  }
  else {
    uVar2 = FUN_0065acb0(param_1,0);
    (**(code **)(*param_1 + 0x170))(param_1,uVar2);
  }
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  if (local_1c == *(int *)((longlong)param_1 + 0x2cc)) {
    FUN_007fb540(param_1,1,1);
    FUN_0065ad90(param_1,1,1);
  }
  FUN_0064fca0(param_1,0xb03d,0,0);
  FUN_00654410(param_1);
  return;
}

