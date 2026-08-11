/* Ghidra address: 01bd6470 */
/* Ghidra symbol: FUN_01bd6470 */


longlong * FUN_01bd6470(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 local_38 [24];
  
  plVar1 = (longlong *)FUN_01bffb60(param_1);
  if (plVar1 != (longlong *)0x0) {
    FUN_01c06820(plVar1,3);
    FUN_004238d0(local_38,4,4,4,4);
    FUN_01c067b0(plVar1,local_38);
    if (*(longlong *)(param_1 + 0x498) != 0) {
      (**(code **)(*plVar1 + 0x250))(plVar1,*(undefined1 *)(*(longlong *)(param_1 + 0x498) + 0x71));
      lVar2 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x498));
      FUN_01c07890(plVar1,*(undefined1 *)(lVar2 + 0x49));
    }
  }
  return plVar1;
}

