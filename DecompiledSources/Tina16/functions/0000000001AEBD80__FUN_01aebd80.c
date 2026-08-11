/* Ghidra address: 01aebd80 */
/* Ghidra symbol: FUN_01aebd80 */


void FUN_01aebd80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    lVar1 = FUN_0065b870(param_1);
    lVar2 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
    if (((lVar1 != lVar2) && (*(longlong *)(param_1 + 0x6b0) != 0)) &&
       (*(longlong *)(param_2 + 8) == 1)) {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_03ab0e43(uVar3,0);
      *(undefined8 *)(param_2 + 0x18) = 0;
      return;
    }
  }
  FUN_007fb610(param_1,param_2);
  return;
}

