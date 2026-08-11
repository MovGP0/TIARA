/* Ghidra address: 010e1710 */
/* Ghidra symbol: FUN_010e1710 */


void FUN_010e1710(uint param_1,byte param_2,byte param_3,undefined8 param_4,undefined8 param_5)

{
  longlong lVar1;
  
  if (param_2 == 1) {
    *(undefined8 *)
     (DAT_0202f9c0 + ((ulonglong)param_1 & 0xff) * 0x40 + -0x18 + (ulonglong)param_3 * 8) = param_4;
  }
  else if (*(longlong *)PTR_DAT_02004e40 != 0) {
    lVar1 = FUN_01c8a3c0(*(undefined8 *)PTR_DAT_02004e40,param_5);
    if (lVar1 != 0) {
      *(undefined8 *)
       (*(longlong *)(lVar1 + 0x9a0) + -0x38 + ((ulonglong)param_1 & 0xff) * 0x40 +
        (ulonglong)param_2 * 0x20 + (ulonglong)param_3 * 8) = param_4;
    }
  }
  return;
}

