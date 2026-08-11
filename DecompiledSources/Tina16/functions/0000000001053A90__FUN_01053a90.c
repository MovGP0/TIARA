/* Ghidra address: 01053a90 */
/* Ghidra symbol: FUN_01053a90 */


void FUN_01053a90(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x840) + 0x100,&DAT_01053c50);
  FUN_00414ad0(*(longlong *)(param_1 + 0x840) + 0xe0,L"LST File|*.lst");
  FUN_015fc650(local_30);
  FUN_00724420(*(undefined8 *)(param_1 + 0x840),local_30[0]);
  FUN_00724380(*(undefined8 *)(param_1 + 0x840),0);
  FUN_00f8f540(*(undefined8 *)(param_1 + 0x9d8),&local_38);
  FUN_00f8bba0(*(undefined8 *)(param_1 + 0x9d8),&local_40);
  FUN_00416cd0(&local_20,3,local_38,local_40,L".lst");
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0xa8))(*(longlong **)(param_1 + 0x840));
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0xd8))(plVar2,local_20);
    FUN_00724270(*(undefined8 *)(param_1 + 0x840),&local_48);
    (**(code **)(*plVar2 + 0x100))(plVar2,local_48);
  }
  FUN_00410f20(plVar2);
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_20);
  return;
}

