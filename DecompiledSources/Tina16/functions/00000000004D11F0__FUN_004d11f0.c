/* Ghidra address: 004d11f0 */
/* Ghidra symbol: FUN_004d11f0 */


undefined8 FUN_004d11f0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = FUN_0041f930();
  if (*(longlong *)(lVar1 + 0x230) == 0) {
    uVar2 = FUN_004ce3f0(&PTR_FUN_004ce150,1);
    if (DAT_02011658 == 0) {
      lVar3 = FUN_004f5410(&DAT_004d01d0,1);
      lVar1 = 0;
      LOCK();
      if (DAT_02011658 != 0) {
        lVar1 = DAT_02011658;
        lVar3 = DAT_02011658;
      }
      DAT_02011658 = lVar3;
      UNLOCK();
      if (lVar1 != 0) {
        FUN_00410f20();
      }
    }
    FUN_004f5590(DAT_02011658,uVar2);
    lVar1 = FUN_0041f930();
    *(undefined8 *)(lVar1 + 0x230) = uVar2;
  }
  lVar1 = FUN_0041f930();
  return *(undefined8 *)(lVar1 + 0x230);
}

