/* Ghidra address: 0096dca0 */
/* Ghidra symbol: FUN_0096dca0 */


void FUN_0096dca0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_2 == 0) {
    uVar1 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Encoding must be specified.");
    FUN_004134c0(uVar1);
  }
  plVar2 = (longlong *)FUN_008e5de0(&PTR_FUN_008d2398,param_2);
  if (plVar2 == (longlong *)0x0) {
    uVar1 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Encoding not supported error.");
    FUN_004134c0(uVar1);
  }
  plVar2[5] = (longlong)param_1;
  plVar2[4] = *(longlong *)(*param_1 + 0x20);
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined1 *)(param_1[6] + 0xd));
  FUN_00414ad0(param_1 + 7,param_2);
  FUN_00410f20(param_1[6]);
  param_1[6] = (longlong)plVar2;
  return;
}

