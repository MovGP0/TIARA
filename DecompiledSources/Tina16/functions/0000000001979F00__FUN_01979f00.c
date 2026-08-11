/* Ghidra address: 01979f00 */
/* Ghidra symbol: FUN_01979f00 */


void FUN_01979f00(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_0197d480(param_1[0x19],param_2,0);
  if (lVar2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0xa8))(param_1,lVar2);
    if (cVar1 != '\0') {
      FUN_00410f20(lVar2);
    }
  }
  return;
}

