/* Ghidra address: 01966bf0 */
/* Ghidra symbol: FUN_01966bf0 */


void FUN_01966bf0(longlong param_1,byte param_2,byte param_3,undefined8 param_4)

{
  int iVar1;
  undefined7 uVar2;
  
  uVar2 = (undefined7)((ulonglong)param_4 >> 8);
  if (param_3 == 0) {
    if (param_2 < 8) {
      *(byte *)(param_1 + 0x2a8) =
           *(byte *)(param_1 + 0x2a8) & ~(byte)((int)CONCAT71(uVar2,1) << (param_2 & 0x1f));
    }
  }
  else if (param_2 < 8) {
    *(byte *)(param_1 + 0x2a8) =
         *(byte *)(param_1 + 0x2a8) | (byte)((int)CONCAT71(uVar2,1) << (param_2 & 0x1f));
  }
  if (((param_3 & param_2 == 0) != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x18) != 0)
     ) {
    iVar1 = FUN_00605610(*(undefined8 *)(param_1 + 0x2c8));
    *(double *)(param_1 + 0xa8) = (double)iVar1;
    iVar1 = FUN_00605640(*(undefined8 *)(param_1 + 0x2c8));
    *(double *)(param_1 + 0xb0) = (double)iVar1;
  }
  return;
}

