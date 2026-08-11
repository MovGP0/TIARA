/* Ghidra address: 00c997d0 */
/* Ghidra symbol: FUN_00c997d0 */


longlong FUN_00c997d0(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00416740(param_1);
  lVar2 = FUN_00427c10(DAT_01eaac30,uVar1);
  if ((param_2 & lVar2 == 0) != 0) {
    (**(code **)(*DAT_02019f00 + 0x78))(DAT_02019f00,param_1);
  }
  return lVar2;
}

