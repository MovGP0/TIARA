/* Ghidra address: 00f8e540 */
/* Ghidra symbol: FUN_00f8e540 */


ulonglong FUN_00f8e540(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined1 local_20 [8];
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  cVar1 = FUN_00f8d130(param_1);
  if (cVar1 == '\0') goto LAB_00f8e600;
  uVar4 = _get_mcu_status(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x3468) = uVar4;
  uVar2 = FUN_00f90b40(param_1,uVar4);
  iVar3 = FUN_00f8b5a0(param_1,uVar2);
  uVar2 = FUN_00f60310(*(undefined8 *)PTR_DAT_02002ba8,iVar3 + 1,local_20);
  if ((char)uVar2 == '\0') {
    cVar1 = FUN_00f8df50(param_1);
    if (cVar1 != '\0') goto LAB_00f8e5b1;
  }
  else {
LAB_00f8e5b1:
    _MCU_SetRunUntil(*(undefined8 *)(param_1 + 0x60),0,0);
    FUN_00f90ab0(param_1,0,0);
    FUN_00f8d0e0(param_1,1);
    FUN_00f8d2f0(param_1,0);
    FUN_00f8d6e0(param_1);
    if (*(char *)(param_1 + 0x3472) != '\0') {
      FUN_00f8d8a0(param_1);
    }
  }
  uVar5 = (ulonglong)CONCAT31((int3)((uint)uVar2 >> 8),(char)uVar2 == '\0');
LAB_00f8e600:
  return uVar5 & 0xffffffff;
}

