/* Ghidra address: 01c99090 */
/* Ghidra symbol: FUN_01c99090 */


void FUN_01c99090(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*PTR_DAT_02001560 != '\0') {
    plVar1 = (longlong *)FUN_01993ec0(*(undefined8 *)(param_1 + 0x27a8));
    if ((plVar1 != (longlong *)0x0) && ((undefined **)*plVar1 == &PTR_FUN_01cf10a8)) {
      uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      FUN_01d072c0(plVar1,uVar2);
      uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
      (**(code **)(*plVar1 + 0xa0))(plVar1,uVar2);
    }
  }
  return;
}

