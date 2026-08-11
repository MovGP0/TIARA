/* Ghidra address: 01880c30 */
/* Ghidra symbol: FUN_01880c30 */


undefined8 FUN_01880c30(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = param_2;
  uVar1 = FUN_0187fde0(param_1);
  if (uVar1 < 0x10) {
    bVar4 = ((int)CONCAT62((int6)((ulonglong)uVar3 >> 0x10),1) << ((byte)uVar1 & 0x1f) & 0x7fffU) !=
            0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    lVar2 = FUN_0187fde0(param_1);
    FUN_00414ad0(param_2,(&PTR_u_mrNone_01fb0cc8)[lVar2]);
  }
  else {
    FUN_01880320(param_1,param_2);
  }
  return param_2;
}

