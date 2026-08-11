/* Ghidra address: 01cc2840 */
/* Ghidra symbol: FUN_01cc2840 */


void FUN_01cc2840(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_01d34e90(param_1,param_2);
  if (*(char *)(param_1 + 0x434) == '\n') {
    FUN_01cb20b0(*(undefined8 *)(param_1 + 0x440),param_2);
  }
  else {
    uVar2 = FUN_01d326b0(*(undefined8 *)(param_1 + 0x438));
    FUN_01d31180(param_2,0x306,0x10,uVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x438);
    uVar2 = FUN_01d326b0(uVar1);
    FUN_01d326d0(param_2,uVar1,uVar2);
  }
  return;
}

