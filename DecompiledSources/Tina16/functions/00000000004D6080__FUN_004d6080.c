/* Ghidra address: 004d6080 */
/* Ghidra symbol: FUN_004d6080 */


bool FUN_004d6080(undefined8 param_1)

{
  bool bVar1;
  
  bVar1 = PTR_FUN_01dc64d0 != (undefined *)0x0;
  if (bVar1) {
    (*(code *)PTR_FUN_01dc64d0)(DAT_01dc64d8,param_1);
  }
  return bVar1;
}

