/* Ghidra address: 019a4600 */
/* Ghidra symbol: FUN_019a4600 */


undefined8 FUN_019a4600(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    uVar1 = (**(code **)(*(longlong *)PTR_DAT_02004e40 + 0x27f8))
                      (*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2800));
  }
  return uVar1;
}

