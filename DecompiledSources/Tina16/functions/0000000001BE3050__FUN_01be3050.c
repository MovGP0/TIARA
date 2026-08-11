/* Ghidra address: 01be3050 */
/* Ghidra symbol: FUN_01be3050 */


longlong * FUN_01be3050(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  lVar1 = FUN_01be0910(*(undefined8 *)(*(longlong *)(param_1 + 0x5d0) + 0x648));
  if (*(longlong *)(lVar1 + 0x620) != 0) {
    lVar1 = FUN_01be0910(*(undefined8 *)(*(longlong *)(param_1 + 0x5d0) + 0x648));
    plVar3 = *(longlong **)(lVar1 + 0x620);
    lVar1 = plVar3[0xce];
    plVar3[0xce] = 0;
    FUN_00410f20(lVar1);
    *(undefined1 *)(plVar3 + 0xb2) = 0;
    *(undefined1 *)((longlong)plVar3 + 0x591) = 0;
    (**(code **)(*plVar3 + 400))(plVar3,0,0,0x96,0x32);
  }
  if (plVar3 == (longlong *)0x0) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffab);
    lVar1 = (*pcVar2)(param_1);
    plVar3 = (longlong *)(**(code **)(lVar1 + 0x78))(lVar1,1,param_1);
  }
  FUN_01be0a10(*(undefined8 *)(param_1 + 0x648),plVar3);
  return plVar3;
}

