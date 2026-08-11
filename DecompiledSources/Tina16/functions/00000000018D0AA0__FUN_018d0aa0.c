/* Ghidra address: 018d0aa0 */
/* Ghidra symbol: FUN_018d0aa0 */


void FUN_018d0aa0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_38 [32];
  
  FUN_018cfb30();
  uVar1 = *(undefined8 *)(param_2 + 400);
  cVar2 = FUN_004113d0(uVar1,&DAT_018c4db0);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(uVar1,&PTR_FUN_018764a0);
    if (cVar2 != '\0') {
      FUN_018d07b0(auStack_38,uVar1);
    }
  }
  else {
    FUN_018d0380(auStack_38,param_2,0);
  }
  return;
}

