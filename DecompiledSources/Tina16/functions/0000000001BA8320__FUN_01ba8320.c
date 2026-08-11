/* Ghidra address: 01ba8320 */
/* Ghidra symbol: FUN_01ba8320 */


void FUN_01ba8320(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c0) + 0x260))(*(longlong **)(param_1 + 0x6c0));
  if (iVar2 == 0) {
    FUN_00414480(param_1 + 0x760);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x6c0);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar3);
    FUN_00414ad0(param_1 + 0x760,local_20[0]);
  }
  FUN_01ba64e0(param_1);
  FUN_00414480(local_20);
  return;
}

