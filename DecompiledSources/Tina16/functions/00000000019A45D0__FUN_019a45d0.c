/* Ghidra address: 019a45d0 */
/* Ghidra symbol: FUN_019a45d0 */


undefined8 FUN_019a45d0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    uVar1 = (**(code **)(*(longlong *)PTR_DAT_02004e40 + 0x2808))
                      (*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x2810));
  }
  return uVar1;
}

