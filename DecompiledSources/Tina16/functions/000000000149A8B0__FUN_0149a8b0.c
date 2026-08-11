/* Ghidra address: 0149a8b0 */
/* Ghidra symbol: FUN_0149a8b0 */


void FUN_0149a8b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x818),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x820),1);
  *(undefined1 *)(param_1 + 0xbd0) = 1;
  plVar2 = (longlong *)FUN_00724d70(&PTR_FUN_0071a4d0,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined4 *)(plVar2 + 0x1a) = *(undefined4 *)(param_1 + 0xbd4);
  *(undefined1 *)(plVar2 + 0xf) = 1;
  cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0xbd4) = (int)plVar2[0x1a];
  }
  FUN_00410f20(plVar2);
  return;
}

