/* Ghidra address: 01c3d280 */
/* Ghidra symbol: FUN_01c3d280 */


undefined8 FUN_01c3d280(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f0)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    if (-1 < iVar2) {
      plVar1 = *(longlong **)(param_1 + 0x708);
      uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
      (**(code **)(*(longlong *)plVar1[0x9e] + 0x30))((longlong *)plVar1[0x9e],uVar3);
    }
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x930);
  }
  return uVar4;
}

