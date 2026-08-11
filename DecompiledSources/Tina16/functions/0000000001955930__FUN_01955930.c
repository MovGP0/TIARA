/* Ghidra address: 01955930 */
/* Ghidra symbol: FUN_01955930 */


void FUN_01955930(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_00640c18);
  if (cVar2 != '\0') {
    FUN_0065bce0(uVar1,param_2);
  }
  return;
}

