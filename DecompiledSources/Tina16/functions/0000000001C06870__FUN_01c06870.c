/* Ghidra address: 01c06870 */
/* Ghidra symbol: FUN_01c06870 */


void FUN_01c06870(longlong *param_1,char param_2)

{
  undefined1 local_28 [16];
  
  if (*(char *)((longlong)param_1 + 0x329) != param_2) {
    FUN_004238d0(local_28,0,0,(int)param_1[0x13],*(undefined4 *)((longlong)param_1 + 0x9c));
    *(char *)((longlong)param_1 + 0x329) = param_2;
    (**(code **)(*param_1 + 0x260))(param_1);
    (**(code **)(*param_1 + 0x108))(param_1);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

