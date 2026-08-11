/* Ghidra address: 010e1630 */
/* Ghidra symbol: FUN_010e1630 */


undefined8 FUN_010e1630(uint param_1,byte param_2,byte param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = (ulonglong)param_1;
  uVar3 = 0;
  if (param_2 == 1) {
    uVar3 = *(undefined8 *)(DAT_0202f9c0 + (uVar2 & 0xff) * 0x40 + -0x18 + (ulonglong)param_3 * 8);
  }
  else if (*(longlong *)PTR_DAT_02004e40 == 0) {
    uVar3 = *(undefined8 *)
             (DAT_0202f9c0 + -0x38 + (uVar2 & 0xff) * 0x40 + (ulonglong)param_2 * 0x20 +
             (ulonglong)param_3 * 8);
  }
  else {
    lVar1 = FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,param_4);
    if (lVar1 != 0) {
      uVar3 = *(undefined8 *)
               (*(longlong *)(lVar1 + 0x9a0) + -0x38 + (uVar2 & 0xff) * 0x40 +
                (ulonglong)param_2 * 0x20 + (ulonglong)param_3 * 8);
    }
  }
  return uVar3;
}

