/* Ghidra address: 0053aba0 */
/* Ghidra symbol: FUN_0053aba0 */


undefined4 FUN_0053aba0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_40 [8];
  undefined1 local_38 [24];
  
  FUN_00417580(param_3,&DAT_00527bf8);
  uVar3 = FUN_00589390(param_2);
  FUN_005882e0(uVar3,local_38);
  cVar1 = FUN_0043e030(local_38,PTR_DAT_02003150);
  if (cVar1 == '\0') {
    uVar2 = FUN_00411110(*(undefined8 *)(param_1 + 0x10),local_38,local_40);
    if ((char)uVar2 != '\0') {
      uVar3 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538200(local_40,param_2,uVar3,0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

