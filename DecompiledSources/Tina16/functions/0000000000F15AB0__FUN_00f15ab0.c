/* Ghidra address: 00f15ab0 */
/* Ghidra symbol: FUN_00f15ab0 */


undefined8 FUN_00f15ab0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 local_30;
  undefined8 local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    plVar2 = (longlong *)FUN_01a5d940(&PTR_FUN_01a5c280,1);
    *(longlong **)(param_1 + 0xf8) = plVar2;
    plVar2[0x11] = *(longlong *)(param_1 + 0x78);
    lVar3 = plVar2[0x12];
    *(undefined1 *)(lVar3 + 0x98) = 1;
    FUN_005fcd80(*(undefined8 *)(lVar3 + 0x80),L"Courier New");
    lVar3 = (**(code **)(**(longlong **)(plVar2[0x11] + 0xd8) + 0x30))
                      (*(longlong **)(plVar2[0x11] + 0xd8),0);
    FUN_005fce30(*(undefined8 *)(plVar2[0x12] + 0x80),*(int *)(lVar3 + 0x90) + -2);
    *(undefined1 *)((longlong)plVar2 + 0x99) = 0;
    *(undefined1 *)(plVar2 + 0x14) = 0;
    FUN_00f149f0(param_1,param_2,param_3);
    (**(code **)(*plVar2 + 0xe8))(plVar2);
    FUN_01a5f250(plVar2);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0xe0);
    (**(code **)(*plVar1 + 0x80))(plVar1,L"Text for Vector Arc",plVar2);
    local_30 = *(undefined8 *)(param_1 + 0xf8);
  }
  else {
    FUN_00f149f0(param_1,param_2,param_3);
    local_30 = *(undefined8 *)(param_1 + 0xf8);
  }
  FUN_00414480(&local_20);
  return local_30;
}

