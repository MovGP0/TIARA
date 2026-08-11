/* Ghidra address: 01ae2980 */
/* Ghidra symbol: FUN_01ae2980 */


void FUN_01ae2980(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 local_40 [3];
  
  if ((param_2 != '\0') && (*(longlong *)(param_1 + 0xf0) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0xf0);
    plVar2 = (longlong *)plVar1[0xb];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x108))(plVar2,plVar1);
    }
    FUN_01ac1cf0(plVar1,*(undefined8 *)(param_1 + 0x80),1);
    local_40[0] = FUN_00498310(0,0);
    (**(code **)(*plVar1 + 0xd8))
              (plVar1,*(undefined8 *)(param_1 + 0x78),local_40,*(undefined8 *)(param_1 + 0x80));
    FUN_00410f20(plVar1);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  if ((param_2 == '\0') && (*(longlong *)(param_1 + 0xf8) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0xf8);
    plVar2 = (longlong *)plVar1[0xb];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x108))(plVar2,plVar1);
    }
    FUN_01ac1cf0(plVar1,*(undefined8 *)(param_1 + 0x80),1);
    local_40[0] = FUN_00498310(0,0);
    (**(code **)(*plVar1 + 0xd8))
              (plVar1,*(undefined8 *)(param_1 + 0x78),local_40,*(undefined8 *)(param_1 + 0x80));
    FUN_00410f20(plVar1);
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return;
}

