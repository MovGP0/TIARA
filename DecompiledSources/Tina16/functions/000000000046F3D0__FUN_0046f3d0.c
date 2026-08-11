/* Ghidra address: 0046f3d0 */
/* Ghidra symbol: FUN_0046f3d0 */


undefined8 FUN_0046f3d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0046af50(param_1,param_2,0x13);
  if ((cVar1 == '\x02') || (cVar1 == '\x01')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

