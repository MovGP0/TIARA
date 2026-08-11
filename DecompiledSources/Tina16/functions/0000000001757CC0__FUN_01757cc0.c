/* Ghidra address: 01757cc0 */
/* Ghidra symbol: FUN_01757cc0 */


undefined8
FUN_01757cc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  byte bVar2;
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
  bVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))(*(longlong **)(param_1 + 0x28));
  if (bVar2 < 0x4a) {
    if (bVar2 == 0x49) {
      FUN_00498350(param_2,0xb,0xffffffdb,0x1c,CONCAT44(uVar3,0xffffffe8));
    }
    else if (bVar2 == 0x46) {
      FUN_00498350(param_2,0xb,0xffffffe3,0x1c,CONCAT44(uVar3,0xffffffe8));
    }
    else if (bVar2 == 0x47) {
      FUN_00498350(param_2,10,0xffffffe3,0x1c,CONCAT44(uVar3,0xffffffea));
    }
    else if (bVar2 == 0x48) {
      FUN_00498350(param_2,0xb,0xffffffe3,0x1c,CONCAT44(uVar3,0xffffffe8));
    }
  }
  else if (bVar2 == 0x4e) {
    FUN_00498350(param_2,0xb,0xffffffe8,0x1c,CONCAT44(uVar3,0xffffffd3));
  }
  else if (bVar2 == 0x67) {
    FUN_00498350(param_2,0xc,0xffffffda,0x1c,CONCAT44(uVar3,0xffffffde));
  }
  return param_2;
}

