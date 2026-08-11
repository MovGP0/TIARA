/* Ghidra address: 00c99830 */
/* Ghidra symbol: FUN_00c99830 */


longlong FUN_00c99830(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00416740(param_1);
  lVar2 = FUN_00427c10(DAT_01eaac30,uVar1);
  if (lVar2 == 0) {
    uVar1 = FUN_00416740(param_2);
    lVar2 = FUN_00427c10(DAT_01eaac30,uVar1);
    if ((param_3 & lVar2 == 0) != 0) {
      (**(code **)(*DAT_02019f00 + 0x78))(DAT_02019f00,param_1);
    }
  }
  return lVar2;
}

