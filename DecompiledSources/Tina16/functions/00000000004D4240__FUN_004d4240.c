/* Ghidra address: 004d4240 */
/* Ghidra symbol: FUN_004d4240 */


undefined8 FUN_004d4240(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar2 = FUN_00410e60(&DAT_004d4158,1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2 + 0x10;
  }
  FUN_0041b840(local_20,lVar3);
  *(longlong *)(lVar2 + 0x18) = param_1;
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar3 = FUN_004da3e0(&PTR_FUN_00484fd8,1);
    *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x40) = lVar3;
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar2 + 0x28;
    }
    FUN_0041b840(lVar3 + 0x10,lVar4);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar2 + 0x20;
    }
    FUN_0041b840(*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x40) + 0x18,lVar3);
  }
  uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x40);
  FUN_0041b800(local_20);
  return uVar1;
}

