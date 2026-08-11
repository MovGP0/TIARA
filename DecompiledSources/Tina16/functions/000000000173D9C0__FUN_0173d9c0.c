/* Ghidra address: 0173d9c0 */
/* Ghidra symbol: FUN_0173d9c0 */


undefined8
FUN_0173d9c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5
            )

{
  char cVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (((param_5 != '\0') && (cVar1 = FUN_01d06fe0(param_1[5]), cVar1 != '\0')) &&
     (cVar1 = FUN_01d07320(param_1[5]), -1 < cVar1)) {
    FUN_01cfce60(param_1[5],&local_38,param_4,param_5);
    FUN_01d04970(param_1[5],local_38,local_34,&local_38,&local_34,0);
    FUN_01d04970(param_1[5],local_30,local_2c,&local_30,&local_2c,0);
    FUN_00498350(param_2,local_38,local_34,local_30,local_2c);
    return param_2;
  }
  (**(code **)(*param_1 + 8))(param_1,param_2,param_3,param_4,param_5);
  return param_2;
}

