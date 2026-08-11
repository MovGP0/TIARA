/* Ghidra address: 009576b0 */
/* Ghidra symbol: FUN_009576b0 */


longlong FUN_009576b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_20;
  
  lVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar1 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_00901268,1,L"Not found error.");
    FUN_004134c0(uVar2);
  }
  local_20 = lVar1;
  FUN_005974f0(param_1[1] + 8,&local_20);
  return lVar1;
}

