/* Ghidra address: 0185a830 */
/* Ghidra symbol: FUN_0185a830 */


undefined4 FUN_0185a830(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = 0x1fffffff;
  lVar3 = FUN_00a3c1b0(param_2,0);
  if (lVar3 == 0) {
    cVar1 = FUN_00a3c2e0(param_2);
    if (cVar1 == '\x01') {
      uVar2 = FUN_00a3c5c0(param_2);
    }
  }
  return uVar2;
}

