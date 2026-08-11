/* Ghidra address: 01870ec0 */
/* Ghidra symbol: FUN_01870ec0 */


ulonglong FUN_01870ec0(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  
  plVar3 = (longlong *)FUN_01870e20(param_1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x350))(plVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x4a0));
    plVar1 = *(longlong **)(param_1 + 0x78);
    uVar2 = (**(code **)(*(longlong *)plVar1[0x94] + 0xb0))
                      ((longlong *)plVar1[0x94],*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1a8))
    ;
    (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
  }
  return CONCAT71((int7)((ulonglong)unaff_RSI >> 8),plVar3 != (longlong *)0x0) & 0xffffffff;
}

