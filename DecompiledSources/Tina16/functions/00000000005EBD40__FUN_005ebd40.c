/* Ghidra address: 005ebd40 */
/* Ghidra symbol: FUN_005ebd40 */


void FUN_005ebd40(longlong param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 local_38;
  undefined1 local_30;
  
  uVar3 = FUN_005ea210(param_5);
  uVar1 = FUN_00416740(param_2);
  uVar3 = thunk_FUN_04172861(*(undefined8 *)(param_1 + 8),uVar1,0,uVar3,param_3,param_4);
  cVar2 = FUN_005ea620(param_1,uVar3);
  if (cVar2 == '\0') {
    local_30 = 0x11;
    local_38 = param_2;
    uVar1 = FUN_0044d8d0(&PTR_FUN_005e7568,1,PTR_PTR_02003888,&local_38,param_3 & 0xffffffff00000000
                        );
    FUN_004134c0(uVar1);
  }
  return;
}

