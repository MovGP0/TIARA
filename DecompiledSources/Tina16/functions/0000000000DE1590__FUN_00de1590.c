/* Ghidra address: 00de1590 */
/* Ghidra symbol: FUN_00de1590 */


undefined8 FUN_00de1590(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = FUN_0065b4a0();
  *param_2 = lVar1;
  if (*param_2 == 0) {
    uVar2 = 0x80004005;
  }
  return uVar2;
}

