/* Ghidra address: 01419180 */
/* Ghidra symbol: FUN_01419180 */


void FUN_01419180(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x768) = 0;
  *(undefined1 *)(param_1 + 0x769) = 0;
  *(undefined1 *)(param_1 + 0x76a) = 0;
  uVar3 = FUN_00b89270();
  FUN_00b8ac60(uVar3,param_1,*(undefined8 *)(param_1 + 0x700));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_20,0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,2);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4a0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,3);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
  (**(code **)(*plVar1 + 0x78))(plVar1,local_38);
  (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))(*(longlong **)(param_1 + 0x728),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),1);
  if (*(int *)(param_1 + 0xfc0) == 0x100) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x700) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,4);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_40);
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x128))(*(longlong **)(param_1 + 0x738),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x738),1);
  }
  cVar2 = FUN_01419110(param_1);
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x718),1);
  }
  *(undefined1 *)(param_1 + 0xfa9) = 1;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x740) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x748) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x750) = uVar3;
  uVar3 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(param_1 + 0x760) = uVar3;
  FUN_0064cf60(param_1,0x49d);
  FUN_00414560(&local_40,5);
  return;
}

