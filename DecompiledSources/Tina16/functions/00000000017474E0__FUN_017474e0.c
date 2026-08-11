/* Ghidra address: 017474e0 */
/* Ghidra symbol: FUN_017474e0 */


undefined8
FUN_017474e0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5
            )

{
  char cVar1;
  
  if (((param_5 != '\0') && (cVar1 = FUN_01d06fe0(param_1[5]), cVar1 != '\0')) &&
     (cVar1 = FUN_01d07320(param_1[5]), -1 < cVar1)) {
    FUN_00498350(param_2,0xffffffe7,0xffffffe8,0x18,0x1a);
    return param_2;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4,param_5);
  return param_2;
}

