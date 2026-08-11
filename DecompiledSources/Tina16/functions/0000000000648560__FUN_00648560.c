/* Ghidra address: 00648560 */
/* Ghidra symbol: FUN_00648560 */


undefined8 FUN_00648560(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int local_1c;
  
  iVar1 = thunk_FUN_0417a31e();
  iVar2 = thunk_FUN_039b6ab1(param_1,&local_1c);
  if ((iVar2 == 0) || (local_1c != iVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = thunk_FUN_041b2403(param_1,DAT_020122f0,iVar1,0);
  }
  return uVar3;
}

