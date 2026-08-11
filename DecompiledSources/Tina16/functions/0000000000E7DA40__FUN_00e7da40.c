/* Ghidra address: 00e7da40 */
/* Ghidra symbol: FUN_00e7da40 */


void FUN_00e7da40(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_38 [32];
  
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    cVar1 = FUN_016eacf0(param_1,6,3);
  }
  uVar2 = 0;
  FUN_016ebb00(param_1,1,local_38,0x20);
  if ((byte)(cVar1 - 1U) == 0xff) {
    FUN_00e7d1b0(param_1,1,2,CONCAT11(uVar2,3),4,5,local_38);
  }
  else if ((byte)(cVar1 - 1U) < 2) {
    FUN_00e7d6b0(param_1,1,2,CONCAT11(uVar2,3),4,5,local_38,cVar1);
  }
  return;
}

