/* Ghidra address: 010b2ec0 */
/* Ghidra symbol: FUN_010b2ec0 */


bool FUN_010b2ec0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)**(undefined8 **)(param_1 + 0x30))(*(undefined8 **)(param_1 + 0x30));
  return lVar1 == 0;
}

