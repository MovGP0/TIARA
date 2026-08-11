/* Ghidra address: 00747590 */
/* Ghidra symbol: FUN_00747590 */


void FUN_00747590(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x18) != param_2) {
    lVar1 = FUN_00747560(param_1);
    if (param_2 == lVar1) {
      FUN_0041ddd0(&local_10,PTR_PTR_02004d78);
      uVar2 = FUN_0044d490(&PTR_FUN_00737098,1,local_10);
      FUN_004134c0(uVar2);
    }
    *(longlong *)(param_1 + 0x18) = param_2;
    FUN_004b1830(param_1,0);
  }
  FUN_00414480(&local_10);
  return;
}

