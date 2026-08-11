/* Ghidra address: 018599a0 */
/* Ghidra symbol: FUN_018599a0 */


undefined4 FUN_018599a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 unaff_RDI;
  
  uVar1 = FUN_00a3c2e0(param_1);
  if ((byte)uVar1 < 8) {
    uVar3 = (undefined4)
            CONCAT71((int7)((ulonglong)unaff_RDI >> 8),
                     ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << ((byte)uVar1 & 0x1f) & 6U)
                     != 0);
  }
  else {
    uVar3 = 0;
  }
  if ((char)uVar3 != '\0') {
    lVar2 = FUN_00a39e90(param_1);
    if (*(char *)(lVar2 + 0x491) == '\x06') {
      FUN_018597a0(param_1,param_2);
    }
    else {
      uVar1 = FUN_01859130(param_1);
      FUN_018597a0(uVar1,param_2);
      FUN_00410f20(uVar1);
    }
  }
  return uVar3;
}

