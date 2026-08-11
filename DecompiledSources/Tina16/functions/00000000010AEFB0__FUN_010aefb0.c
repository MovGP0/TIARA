/* Ghidra address: 010aefb0 */
/* Ghidra symbol: FUN_010aefb0 */


void FUN_010aefb0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint local_1c;
  
  cVar1 = FUN_010aed00(param_1,param_2,0xffffffff,&local_1c);
  if (cVar1 == '\0') {
    FUN_010aeba0(param_1,param_2,0xffffffff,0);
  }
  else {
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x40),local_1c);
    cVar1 = FUN_010ae9d0(uVar2);
    if (cVar1 == '\0') {
      FUN_010aecc0(param_1,local_1c);
    }
    else {
      cVar1 = FUN_010ae9c0(uVar2);
      FUN_010ae9a0(uVar2,cVar1 == '\0',4);
    }
  }
  return;
}

