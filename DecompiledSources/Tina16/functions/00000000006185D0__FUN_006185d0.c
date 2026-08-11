/* Ghidra address: 006185d0 */
/* Ghidra symbol: FUN_006185d0 */


ulonglong FUN_006185d0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 unaff_RSI;
  undefined7 uVar4;
  ulonglong uVar3;
  ulonglong in_stack_ffffffffffffffc8;
  undefined1 local_1c [4];
  
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(char *)(param_1 + 0x14) == '\0') {
    iVar1 = thunk_FUN_0413f31b(1,param_1 + 8,0xffffffff,param_2 & 0xffffffff,
                               in_stack_ffffffffffffffc8 & 0xffffffff00000000);
    if (iVar1 == -1) {
      uVar3 = CONCAT71(uVar4,3);
      uVar2 = thunk_FUN_03ce33a6();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
    else if (iVar1 == 0) {
      uVar3 = 0;
    }
    else if (iVar1 == 0x80) {
      uVar3 = CONCAT71(uVar4,2);
    }
    else if (iVar1 == 0x102) {
      uVar3 = CONCAT71(uVar4,1);
    }
    else {
      uVar3 = CONCAT71(uVar4,3);
    }
  }
  else {
    iVar1 = FUN_00618380(0,param_2,1,param_1 + 8,local_1c);
    if (iVar1 == -0x7ffefeeb) {
      uVar3 = CONCAT71(uVar4,4);
    }
    else if (iVar1 == -0x7ffefee1) {
      uVar3 = CONCAT71(uVar4,1);
    }
    else if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = CONCAT71(uVar4,3);
      uVar2 = thunk_FUN_03ce33a6();
      *(undefined4 *)(param_1 + 0x10) = uVar2;
    }
  }
  return uVar3 & 0xffffffff;
}

