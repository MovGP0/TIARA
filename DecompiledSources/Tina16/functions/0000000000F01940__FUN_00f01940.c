/* Ghidra address: 00f01940 */
/* Ghidra symbol: FUN_00f01940 */


void FUN_00f01940(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  
  if (param_3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x528) + 0xe0))(*(longlong **)(param_1 + 0x528),local_28)
    ;
    uVar2 = FUN_00498310(param_5,param_6);
    iVar1 = thunk_FUN_03f16006(local_28,uVar2);
    FUN_00f012b0(param_1,iVar1 != 0);
  }
  return;
}

