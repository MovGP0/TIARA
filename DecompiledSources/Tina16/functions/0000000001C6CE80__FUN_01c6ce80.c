/* Ghidra address: 01c6ce80 */
/* Ghidra symbol: FUN_01c6ce80 */


void FUN_01c6ce80(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x27a8) != 0) &&
     (lVar1 = FUN_0198d430(*(longlong *)(param_1 + 0x27a8)), lVar1 != 0)) {
    uVar2 = FUN_0198d430(*(undefined8 *)(param_1 + 0x27a8));
    FUN_01a9a4e0(uVar2,param_2,param_3);
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

