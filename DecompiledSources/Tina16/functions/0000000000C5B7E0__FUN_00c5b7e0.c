/* Ghidra address: 00c5b7e0 */
/* Ghidra symbol: FUN_00c5b7e0 */


void FUN_00c5b7e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  if ((param_2 == *(longlong *)(param_1 + 0x6d8)) || (param_2 == *(longlong *)(param_1 + 0x6d0))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = *(undefined4 *)(param_1 + 0x7e0);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x7e4);
  }
  plVar3 = (longlong *)FUN_00724d70(&PTR_FUN_0071a4d0,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined4 *)(plVar3 + 0x1a) = uVar4;
  cVar2 = (**(code **)(*plVar3 + 0xa8))(plVar3);
  if (cVar2 != '\0') {
    uVar4 = (undefined4)plVar3[0x1a];
  }
  FUN_00410f20(plVar3);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x7e0) = uVar4;
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x180))(*(longlong **)(param_1 + 0x6d0));
  }
  else {
    *(undefined4 *)(param_1 + 0x7e4) = uVar4;
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x180))(*(longlong **)(param_1 + 0x708));
    (**(code **)(**(longlong **)(param_1 + 0x758) + 0x180))(*(longlong **)(param_1 + 0x758));
  }
  return;
}

