/* Ghidra address: 006ddee0 */
/* Ghidra symbol: FUN_006ddee0 */


void FUN_006ddee0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_006dc7a0(param_1);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    uVar2 = FUN_006dc7a0(param_1);
    thunk_FUN_041b2403(uVar2,0x1114,0,*(undefined8 *)(param_1 + 0x20));
  }
  return;
}

