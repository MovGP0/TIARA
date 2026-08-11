/* Ghidra address: 007474b0 */
/* Ghidra symbol: FUN_007474b0 */


void FUN_007474b0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar2 = FUN_00747560(param_1);
    if ((*(ushort *)(lVar2 + 0x34) & 1) == 0) {
      lVar2 = FUN_00747560(param_1);
      if ((*(ushort *)(lVar2 + 0x34) & 0x40) == 0) {
        lVar2 = FUN_00747560(param_1);
        if ((*(ushort *)(lVar2 + 0x34) & 8) == 0) {
          uVar1 = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 *)(param_1 + 0x18) = 0;
          uVar3 = FUN_00747560(param_1);
          FUN_00654af0(uVar3,uVar1);
          FUN_00410f20(uVar1);
        }
      }
    }
  }
  FUN_004b17c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

