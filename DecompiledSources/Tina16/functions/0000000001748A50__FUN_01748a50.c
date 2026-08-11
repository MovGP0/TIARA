/* Ghidra address: 01748a50 */
/* Ghidra symbol: FUN_01748a50 */


undefined8
FUN_01748a50(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5
            )

{
  char cVar1;
  
  if (((param_5 != '\0') && (cVar1 = FUN_01d06fe0(param_1[5]), cVar1 != '\0')) &&
     (cVar1 = FUN_01d07320(param_1[5]), -1 < cVar1)) {
    FUN_00498350(param_2,0xffffffe9,0xffffffeb,9,0);
    return param_2;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4,param_5);
  return param_2;
}

