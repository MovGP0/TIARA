/* Ghidra address: 00802680 */
/* Ghidra symbol: FUN_00802680 */


void FUN_00802680(longlong param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  
  *(byte *)(param_1 + 0x4d5) = param_2;
  if (*(longlong *)(param_1 + 0x550) != 0) {
    FUN_0064fca0(*(longlong *)(param_1 + 0x550),0xb02b,(longlong)(char)param_2,0);
  }
  if (param_2 != 0) {
    if ((*(longlong *)(param_1 + 0x4c0) == 0) && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
      local_28 = 0;
      uVar3 = FUN_0065c060(param_1,0,1,1);
      FUN_00801e40(param_1,uVar3);
    }
    FUN_008027e0(param_1,1);
    cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0x4c0),&PTR_FUN_006718f0);
    if (cVar2 == '\0') {
      FUN_00802550(param_1);
    }
    else {
      FUN_008025f0(auStack_48);
    }
    plVar1 = *(longlong **)(param_1 + 0x4b8);
    if ((param_2 & plVar1 != (longlong *)0x0) != 0) {
      (**(code **)(*plVar1 + 0xb8))(plVar1);
    }
  }
  return;
}

