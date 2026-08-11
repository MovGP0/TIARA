/* Ghidra address: 007237c0 */
/* Ghidra symbol: FUN_007237c0 */


void FUN_007237c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_20 [2];
  uint local_c;
  
  local_20[0] = 0;
  FUN_00410ae0(**(undefined8 **)(param_1 + 0x10),local_20);
  iVar2 = FUN_00416db0(local_20[0],L"TOpenPictureDialog");
  if (iVar2 == 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x90);
    (**(code **)(*plVar1 + 0x50))(plVar1,&local_c);
    local_c = local_c | 0x40000000;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x90);
    (**(code **)(*plVar1 + 0x48))(plVar1,local_c);
  }
  FUN_00414480(local_20);
  return;
}

