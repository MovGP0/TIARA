/* Ghidra address: 010b6620 */
/* Ghidra symbol: FUN_010b6620 */


void FUN_010b6620(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  if (param_2 == *(longlong *)(param_1 + 0x728)) {
    uVar3 = *(undefined4 *)(param_1 + 0x798);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x79c);
  }
  plVar2 = (longlong *)FUN_00724d70(&PTR_FUN_0071a4d0,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined4 *)(plVar2 + 0x1a) = uVar3;
  cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  if (cVar1 != '\0') {
    uVar3 = (undefined4)plVar2[0x1a];
  }
  FUN_00410f20(plVar2);
  if (param_2 == *(longlong *)(param_1 + 0x728)) {
    *(undefined4 *)(param_1 + 0x798) = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x180))(*(longlong **)(param_1 + 0x720));
  }
  else {
    *(undefined4 *)(param_1 + 0x79c) = uVar3;
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x180))(*(longlong **)(param_1 + 0x738));
  }
  return;
}

