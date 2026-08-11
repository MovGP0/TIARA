/* Ghidra address: 0146ba00 */
/* Ghidra symbol: FUN_0146ba00 */


void FUN_0146ba00(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x760),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x768),1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x8e0) + 0x99) = 1;
  plVar2 = (longlong *)FUN_00724d70(&PTR_FUN_0071a4d0,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined4 *)(plVar2 + 0x1a) = *(undefined4 *)(*(longlong *)(param_1 + 0x8e0) + 0x9c);
  *(undefined1 *)(plVar2 + 0xf) = 1;
  cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  if (cVar1 != '\0') {
    *(int *)(*(longlong *)(param_1 + 0x8e0) + 0x9c) = (int)plVar2[0x1a];
  }
  FUN_00410f20(plVar2);
  return;
}

