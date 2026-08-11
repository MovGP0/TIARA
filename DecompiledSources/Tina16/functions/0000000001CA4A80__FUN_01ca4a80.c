/* Ghidra address: 01ca4a80 */
/* Ghidra symbol: FUN_01ca4a80 */


void FUN_01ca4a80(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  plVar1 = *(longlong **)(param_1 + 0x9e0);
  FUN_00414ad0(plVar1 + 0x20,&DAT_01ca4ba8);
  FUN_00414ad0(plVar1 + 0x1c,L"IBIS File|*.IBS");
  *(undefined4 *)(plVar1 + 0x1d) = 1;
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_00724270(plVar1,local_40);
    cVar2 = FUN_01ca4350(param_1,local_40[0],local_20,&local_28,&local_30);
    if (cVar2 != '\0') {
      FUN_01ca4640(param_1,local_20[0],local_28,local_30,1);
    }
  }
  FUN_00414480(local_40);
  FUN_00414560(&local_30,3);
  return;
}

