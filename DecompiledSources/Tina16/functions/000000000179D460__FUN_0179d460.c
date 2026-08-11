/* Ghidra address: 0179d460 */
/* Ghidra symbol: FUN_0179d460 */


undefined4 FUN_0179d460(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
  FUN_01797160(param_1,lVar2,0);
  *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0xcb0);
  FUN_00c3f030(*(undefined8 *)(param_1 + 0xca8),lVar2);
  FUN_00c3f1c0(*(undefined8 *)(param_1 + 0xca8));
  if (*(longlong *)(param_1 + 0xca8) != 0) {
    cVar1 = FUN_00c415e0(*(longlong *)(param_1 + 0xca8));
    if (cVar1 == '\0') {
      uVar3 = 0;
      goto LAB_0179d4ca;
    }
  }
  uVar3 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_0179d4ca:
  if ((char)uVar3 == '\0') {
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,
                 L"The device is invalid: most probably pin\rdata or pin order do not match in the\rdifferent versions of the device.\r\rPlease review the pins."
                 ,L"Device Check",0x10);
  }
  return uVar3;
}

