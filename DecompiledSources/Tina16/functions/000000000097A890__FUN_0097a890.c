/* Ghidra address: 0097a890 */
/* Ghidra symbol: FUN_0097a890 */


void FUN_0097a890(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *local_28;
  undefined8 local_20;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  FUN_00978130(param_1,5,lVar1);
  *(int *)(param_1 + 0x1a) = (int)param_1[0x1a] + 1;
  *(undefined1 *)((longlong)param_1 + 0x79) = 1;
  local_28 = &LAB_0097a920;
  local_20 = *(undefined8 *)(param_2 + 0x88);
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,&local_28,1,0);
  return;
}

