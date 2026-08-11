/* Ghidra address: 0197aa20 */
/* Ghidra symbol: FUN_0197aa20 */


longlong FUN_0197aa20(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  if (lVar3 == 0) {
    uVar2 = (**(code **)(PTR_PTR_01fb7e00 + -0x30))(PTR_PTR_01fb7e00);
    *(undefined8 *)(param_1 + 0xc0) = uVar2;
    FUN_01979e40(uVar2,0xff);
    plVar1 = *(longlong **)(param_1 + 0xc0);
    *(undefined1 *)(plVar1 + 0x17) = *(undefined1 *)(param_1 + 0xb8);
    (**(code **)(*plVar1 + 0xb8))(plVar1);
    lVar3 = *(longlong *)(param_1 + 0xc0);
  }
  return lVar3;
}

