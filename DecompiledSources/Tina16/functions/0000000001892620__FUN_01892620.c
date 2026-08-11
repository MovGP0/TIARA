/* Ghidra address: 01892620 */
/* Ghidra symbol: FUN_01892620 */


void FUN_01892620(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  int local_38;
  int local_34;
  int local_30;
  
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar1,&local_38);
  FUN_00423b50(&local_38,-local_38,-local_34);
  if (param_3 == '\0') {
    uVar1 = thunk_FUN_0412b593(0xf);
    FUN_00429590(param_2,&local_38,uVar1);
  }
  else {
    uVar1 = thunk_FUN_0412b593(0xd);
    FUN_00429590(param_2,&local_38,uVar1);
  }
  FUN_00423b10(&local_38,0xffffffff,0xffffffff);
  uVar1 = thunk_FUN_0412b593(5);
  FUN_00429590(param_2,&local_38,uVar1);
  FUN_00423b10(&local_38,0xffffffff,0xffffffff);
  local_30 = (local_30 - *(int *)(param_1 + 0x588)) + -2;
  uVar1 = thunk_FUN_0412b593(5);
  FUN_00429590(param_2,&local_38,uVar1);
  return;
}

