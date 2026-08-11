/* Ghidra address: 00dda130 */
/* Ghidra symbol: FUN_00dda130 */


void FUN_00dda130(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_004d4fa0(&PTR_FUN_0047dd60,1,param_2,0);
  uVar1 = FUN_0041b800(param_1 + 0x48);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x28;
  }
  uVar2 = FUN_00dda4d0(lVar3,0,0xffffffff,&DAT_00dda190,uVar1);
  FUN_006245b0(uVar2);
  return;
}

