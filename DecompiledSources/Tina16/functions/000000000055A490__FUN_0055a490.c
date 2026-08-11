/* Ghidra address: 0055a490 */
/* Ghidra symbol: FUN_0055a490 */


undefined8 FUN_0055a490(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00546050(*(undefined8 *)(param_1 + 0x50),&PTR_FUN_00528c20,0,param_2);
  }
  return uVar1;
}

