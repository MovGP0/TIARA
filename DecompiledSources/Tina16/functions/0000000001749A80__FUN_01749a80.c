/* Ghidra address: 01749a80 */
/* Ghidra symbol: FUN_01749a80 */


undefined8
FUN_01749a80(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5
            )

{
  char cVar1;
  
  if (((param_5 != '\0') && (cVar1 = FUN_01d06fe0(param_1[5]), cVar1 != '\0')) &&
     (cVar1 = FUN_01d07320(param_1[5]), -1 < cVar1)) {
    FUN_00498350(param_2,0xffffffd9,0xfffffff5,0x24,5);
    return param_2;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4,param_5);
  return param_2;
}

