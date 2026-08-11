/* Ghidra address: 018c1a90 */
/* Ghidra symbol: FUN_018c1a90 */


void FUN_018c1a90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0xa0) + 0x20) + 0x210);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
    FUN_0064e770(*(undefined8 *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0xa0) + 0x20) + 0x210
                  ));
  }
  if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0xa8) + 0xc1) == '\0') {
    lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0xa0) + 0x20);
    if (*(char *)(*(longlong *)(lVar2 + 0x1a8) + 0x20) == '\0') {
      if (*(longlong *)(lVar2 + 0x428) != 0) {
        (**(code **)(lVar2 + 0x428))(*(undefined8 *)(lVar2 + 0x430),lVar2,1,0);
      }
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  else {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x70) + 0xa0) + 0x20);
    (**(code **)(*plVar1 + 0x268))(plVar1,1);
  }
  FUN_0197b6a0(*(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xa8));
  return;
}

