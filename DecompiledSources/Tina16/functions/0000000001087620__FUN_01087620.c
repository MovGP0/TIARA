/* Ghidra address: 01087620 */
/* Ghidra symbol: FUN_01087620 */


void FUN_01087620(longlong param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  byte local_19;
  
  local_30[0] = 0;
  local_38 = 0;
  iVar2 = 2;
  if ((*(char *)(param_1 + 0x4c34) == '\0') && (*(longlong *)(param_1 + 0xb20) != 0)) {
    _SetPCChanged(*(undefined8 *)(param_1 + 0xb20),0);
    bVar3 = 0;
    while( true ) {
      cVar1 = _IsPCChanged(*(undefined8 *)(param_1 + 0xb20));
      if ((cVar1 != '\0') || (iVar2 == 0)) break;
      iVar2 = _step_simulation_new
                        (*(undefined8 *)(param_1 + 0xb20),&local_19,1,0xffffffffffffffff,1);
      bVar3 = bVar3 | local_19;
      FUN_01085d30(param_1);
    }
    FUN_00f85520(*(undefined8 *)PTR_DAT_020019c8,bVar3);
    if (iVar2 == 0) {
      *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5a) = 0;
      FUN_015f8f20(local_30,*(undefined8 *)(param_1 + 0xb20));
      FUN_00416880(&local_38,local_30[0]);
      FUN_016fd940(local_38);
      thunk_FUN_0413e052(*(undefined8 *)(*(longlong *)PTR_DAT_020019c8 + 0xd70),0x123f,0,0);
    }
  }
  FUN_00414480(&local_38);
  FUN_004144d0(local_30);
  return;
}

