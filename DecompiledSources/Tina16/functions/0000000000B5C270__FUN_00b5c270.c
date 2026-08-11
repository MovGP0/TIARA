/* Ghidra address: 00b5c270 */
/* Ghidra symbol: FUN_00b5c270 */


ulonglong FUN_00b5c270(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  if (*(char *)(param_1 + 0x44) == '\0') {
    *(char *)(param_1 + 0x45) = *(char *)(param_1 + 0x45) + '\x01';
    if (1 < *(byte *)(param_1 + 0x45)) {
      uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Error: BIFF record can not be processed");
      FUN_004134c0(uVar4);
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    uVar1 = FUN_00b5b0a0(*(undefined8 *)(param_1 + 0x70));
    uVar5 = (ulonglong)uVar1;
    *(undefined1 *)(param_1 + 0x44) = 0;
    *(undefined1 *)(param_1 + 0x45) = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      iVar2 = FUN_00b5ad20(*(undefined8 *)(param_1 + 0x70));
      if (iVar2 == 0) {
        (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),0x3ff0000000000000);
      }
      else {
        iVar3 = FUN_00b5ad40(*(undefined8 *)(param_1 + 0x70));
        (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),(double)iVar3 / (double)iVar2)
        ;
      }
    }
  }
  return uVar5 & 0xffffffff;
}

