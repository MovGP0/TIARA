/* Ghidra address: 010e17c0 */
/* Ghidra symbol: FUN_010e17c0 */


undefined8 FUN_010e17c0(char param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_0202f9c0;
  if ((param_1 != '\x01') && (*(longlong *)PTR_DAT_02004e40 != 0)) {
    lVar1 = FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40);
    uVar2 = *(undefined8 *)(lVar1 + 0x9a0);
  }
  return uVar2;
}

