/* Ghidra address: 013675b0 */
/* Ghidra symbol: FUN_013675b0 */


void FUN_013675b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x58));
    cVar1 = (**(code **)(*param_2 + 0x90))(param_2,uVar2,param_1 + 0x48);
    if (cVar1 != '\0') {
      uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x58));
      (**(code **)(*param_2 + 0xb0))(param_2,uVar2,0);
      cVar1 = (**(code **)(*param_2 + 0x118))(param_2);
      if (cVar1 != '\0') {
        FUN_017ff4f0(param_2,&local_28);
        FUN_00416cd0(local_20,3,L"SelectPart(",local_28,&LAB_013676ec);
        FUN_01b1e860(local_20[0],1);
      }
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

