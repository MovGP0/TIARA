/* Ghidra address: 01c4a760 */
/* Ghidra symbol: FUN_01c4a760 */


undefined8 FUN_01c4a760(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  local_30 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x780) + 0x4f0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  if (1 < iVar2) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x780) + 0x260))(*(longlong **)(param_1 + 0x780))
    ;
    if (iVar2 != 0) {
      plVar1 = *(longlong **)(param_1 + 0x780);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_30,uVar3);
      local_28 = local_30;
      local_20 = 0x11;
      FUN_00442f70(param_2,L"manufacturer[@name=\'%s\']/converter",&local_28,0);
      goto code_r0x01c4a81f;
    }
  }
  FUN_00414ad0(param_2,L"manufacturer/converter");
code_r0x01c4a81f:
  FUN_00414480(&local_30);
  return param_2;
}

