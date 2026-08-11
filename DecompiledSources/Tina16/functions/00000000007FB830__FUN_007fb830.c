/* Ghidra address: 007fb830 */
/* Ghidra symbol: FUN_007fb830 */


void FUN_007fb830(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_48;
  local_c = *(int *)(param_2 + 8);
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_007eade0);
  if (cVar1 == '\0') {
    cVar1 = FUN_00410be0(*param_1,L"TCategoryPanelGroup");
    if (cVar1 == '\0') {
      *(undefined8 *)(param_2 + 8) = 1;
    }
  }
  FUN_0065a000(param_1,param_2);
  *(longlong *)(param_2 + 8) = (longlong)local_c;
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    FUN_007f9d60(param_1[0x93]);
    FUN_007fb150(param_1);
  }
  return;
}

