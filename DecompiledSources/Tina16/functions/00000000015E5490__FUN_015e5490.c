/* Ghidra address: 015e5490 */
/* Ghidra symbol: FUN_015e5490 */


void FUN_015e5490(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8));
  if (-1 < iVar2) {
    plVar1 = *(longlong **)(param_1 + 0x6c8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],local_20,uVar3);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0xb0))
                      (*(longlong **)(param_1 + 0x6f8),local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x98))(*(longlong **)(param_1 + 0x6f8),uVar3);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6c8) + 0x4a0);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x6f8));
  }
  FUN_00414480(local_20);
  return;
}

