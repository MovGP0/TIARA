/* Ghidra address: 00874360 */
/* Ghidra symbol: FUN_00874360 */


undefined8 FUN_00874360(undefined8 param_1,ushort param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)param_2;
  if (uVar1 < 0x4ea0) {
    if (uVar1 == 0x4e9f) {
      FUN_008745f0(param_1);
      return param_1;
    }
    if (uVar1 == 0x4b0) {
      FUN_00874790(param_1);
      return param_1;
    }
    lVar2 = uVar1 - 0x4b1;
    if (lVar2 == 0) {
      FUN_008746c0(param_1);
      return param_1;
    }
  }
  else {
    if (uVar1 == 65000) {
      FUN_00874860(param_1);
      return param_1;
    }
    lVar2 = uVar1 - 0xfde9;
    if (lVar2 == 0) {
      FUN_00874930(param_1);
      return param_1;
    }
  }
  lVar2 = FUN_00873600(&PTR_FUN_00870b20,CONCAT71((int7)((ulonglong)lVar2 >> 8),1) & 0xffffffff,
                       param_2);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x20;
  }
  FUN_0041b840(param_1,lVar2);
  return param_1;
}

