/* Ghidra address: 0174f2d0 */
/* Ghidra symbol: FUN_0174f2d0 */


undefined4 *
FUN_0174f2d0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,char param_5
            )

{
  char cVar1;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar2;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  if (((param_5 != '\0') && (cVar1 = FUN_01d06fe0(*(undefined8 *)(param_1 + 0x28)), cVar1 != '\0'))
     && (cVar1 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), -1 < cVar1)) {
    FUN_01cfc7b0(*(undefined8 *)(param_1 + 0x28),param_3,param_4,param_5,&local_48);
    FUN_01d04970(*(undefined8 *)(param_1 + 0x28),local_48,local_44,&local_48,&local_44,1);
    FUN_01d04970(*(undefined8 *)(param_1 + 0x28),local_40,local_3c,&local_40,&local_3c,1);
    FUN_00498350(param_2,local_48,local_44,local_40,local_3c);
    return param_2;
  }
  FUN_00498350(&local_38,3,0xfffffff3,0x26,CONCAT44(uVar2,0xd));
  *param_2 = local_38;
  param_2[2] = local_30;
  param_2[1] = local_34;
  param_2[3] = local_2c;
  return param_2;
}

