/* Ghidra address: 00f6dee0 */
/* Ghidra symbol: FUN_00f6dee0 */


undefined8 FUN_00f6dee0(undefined4 param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = (char)param_1;
  if ((cVar2 == '\b') || (cVar2 == '\t')) {
    uVar1 = FUN_00f74170(&PTR_FUN_00f6bf08,1,param_1);
  }
  else if ((cVar2 == '\x01') || (cVar2 == '\x02')) {
    uVar1 = FUN_00f70760(&PTR_FUN_00f6b230,1,param_1);
  }
  else if (((((cVar2 == '\x03') || (cVar2 == '\x04')) || (cVar2 == '\x05')) ||
           ((cVar2 == '\v' || (cVar2 == '\f')))) || (cVar2 == '\r')) {
    uVar1 = FUN_00f71110(&PTR_FUN_00f6b680,1,param_1);
  }
  else if ((cVar2 == '\x06') || (cVar2 == '\a')) {
    uVar1 = FUN_00f73960(&PTR_FUN_00f6bb18,1,param_1);
  }
  else if (cVar2 == '\n') {
    uVar1 = FUN_00f6fdf0(&PTR_FUN_00f6a950,1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

