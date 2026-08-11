/* Ghidra address: 01a54930 */
/* Ghidra symbol: FUN_01a54930 */


void FUN_01a54930(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414ad0(*(longlong *)(param_1 + 0x738) + 0x100,&DAT_01a54a84);
  FUN_00414ad0(*(longlong *)(param_1 + 0x738) + 0xe0,L"Text file|*.txt");
  FUN_00724380(*(undefined8 *)(param_1 + 0x738),L"file.txt");
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0xa8))(*(longlong **)(param_1 + 0x738));
  if (cVar1 != '\0') {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
    (**(code **)(*plVar2 + 0x38))(plVar2,&local_20);
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar2 + 0x60))(plVar2,local_20);
    FUN_00724270(*(undefined8 *)(param_1 + 0x738),local_30);
    uVar3 = FUN_0045ae90();
    (**(code **)(*plVar2 + 0x108))(plVar2,local_30[0],uVar3);
    FUN_00410f20(plVar2);
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_20);
  return;
}

