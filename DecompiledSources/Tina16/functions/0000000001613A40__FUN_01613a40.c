/* Ghidra address: 01613a40 */
/* Ghidra symbol: FUN_01613a40 */


undefined8 FUN_01613a40(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x10) <= param_2) {
    FUN_01613110(L"GetParamValue");
  }
  lVar1 = FUN_004aeac0(param_1,param_2);
  return *(undefined8 *)(lVar1 + 0x10);
}

