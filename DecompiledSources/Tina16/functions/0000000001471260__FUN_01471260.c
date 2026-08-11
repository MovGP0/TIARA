/* Ghidra address: 01471260 */
/* Ghidra symbol: FUN_01471260 */


void FUN_01471260(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_28 = 0;
  local_30 = 0;
  puVar2 = auStack_68;
  if (param_2 != *(int *)(param_1 + 0x80c)) {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_01470ed0(param_1,param_2);
    FUN_00416ba0(&local_28,*(undefined8 *)PTR_DAT_02005360,L"\\Examples\\Python\\");
    FUN_00416ba0(&local_30,local_28,L"nodal\\test_1.csv");
    if (param_2 == 0) {
      FUN_01471150(param_1);
      FUN_00416ba0(&local_30,local_28,L"programs\\bubblesort.py");
      (**(code **)(*local_20 + 0xd8))(local_20,local_30);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
      (**(code **)(*plVar1 + 0x88))(plVar1,local_20);
      FUN_00414ad0(param_1 + 0x7f0,local_30);
      FUN_0146fe10(param_1);
      puVar2 = local_40;
    }
    else {
      cVar3 = FUN_00440a20(local_30,1);
      puVar2 = local_40;
      if (cVar3 != '\0') {
        (**(code **)(*local_20 + 0xd8))(local_20,local_30);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
        (**(code **)(*plVar1 + 0x90))(plVar1);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
        (**(code **)(*plVar1 + 0x88))(plVar1,local_20);
        FUN_00414ad0(param_1 + 0x7f0,local_30);
        FUN_0146fe10(param_1);
        puVar2 = local_40;
      }
    }
  }
  local_40 = puVar2;
  FUN_00410f20(local_20);
  FUN_00414560(&local_30,2);
  return;
}

