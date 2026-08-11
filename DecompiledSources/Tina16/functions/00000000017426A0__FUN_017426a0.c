/* Ghidra address: 017426a0 */
/* Ghidra symbol: FUN_017426a0 */


undefined8
FUN_017426a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  short sVar2;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  if (((param_5 != '\0') && (cVar1 = FUN_01d06fe0(*(undefined8 *)(param_1 + 0x28)), cVar1 != '\0'))
     && (cVar1 = FUN_01d07320(*(undefined8 *)(param_1 + 0x28)), -1 < cVar1)) {
    FUN_01cfc7b0(*(undefined8 *)(param_1 + 0x28),param_3,param_4,param_5,&local_38);
    FUN_01d04970(*(undefined8 *)(param_1 + 0x28),local_38,local_34,&local_38,&local_34,1);
    FUN_01d04970(*(undefined8 *)(param_1 + 0x28),local_30,local_2c,&local_30,&local_2c,1);
    FUN_00498350(param_2,local_38,local_34,local_30,local_2c);
    return param_2;
  }
  sVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(*(longlong **)(param_1 + 0x28));
  if (sVar2 == 0x2c) {
    FUN_00498350(param_2,0xc,0xfffffff7,0x1d,CONCAT44(uVar3,8));
  }
  else if (sVar2 == 0x71) {
    FUN_00498350(param_2,8,0xfffffff8,0x18,CONCAT44(uVar3,8));
  }
  else if ((ushort)(sVar2 - 0x19aU) < 3) {
    FUN_00498350(param_2,0x14,0xfffffff7,0x25,CONCAT44(uVar3,0x28));
  }
  else if (sVar2 == 0x19d) {
    FUN_00498350(param_2,0x14,0xffffffe7,0x25,CONCAT44(uVar3,0x18));
  }
  else {
    FUN_00498350(param_2,0xc,0xfffffff7,0x1c,CONCAT44(uVar3,9));
  }
  return param_2;
}

