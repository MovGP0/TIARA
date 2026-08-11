/* Ghidra address: 01994280 */
/* Ghidra symbol: FUN_01994280 */


void FUN_01994280(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if ((param_2 != (longlong *)0x0) && (param_2 != *(longlong **)(param_1 + 0x48))) {
    cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0xb8))(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x210))
      ;
      cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
      if (cVar1 != '\0') {
        FUN_017ff4f0(param_2,&local_28);
        FUN_00416cd0(local_20,3,L"SelectPart(",local_28,&LAB_019943ac);
        FUN_01b1e860(local_20[0],1);
      }
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

