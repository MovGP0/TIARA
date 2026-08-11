/* Ghidra address: 018228f0 */
/* Ghidra symbol: FUN_018228f0 */


undefined1 FUN_018228f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_0184cde0(param_2,param_1);
  if (lVar2 == 0) {
    uVar1 = 5;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x48);
  }
  return uVar1;
}

