/* Ghidra address: 00dde210 */
/* Ghidra symbol: FUN_00dde210 */


void FUN_00dde210(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_28 [16];
  
  FUN_00ddd3d0(param_1);
  if ((*(uint *)(param_1 + 0x4f0) & 0x400) == 0) {
    uVar2 = FUN_0065b4a0(param_1);
    FUN_0064d000(param_1,local_28);
    if (param_1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = param_1 + 0x570;
    }
    (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x58))
              (*(longlong **)(param_1 + 0x4b0),0xfffffffb,0,lVar3,0,uVar2,local_28);
    if (*(longlong *)(param_1 + 0x4d8) == 0) {
      uVar2 = FUN_0044d710(&PTR_FUN_00620870,1,PTR_PTR_02003128);
      FUN_004134c0(uVar2);
    }
    FUN_00ddf580(param_1);
    if (*(char *)(param_1 + 0xa9) == '\0') {
      uVar2 = FUN_0065b870(param_1);
      iVar1 = thunk_FUN_0419e3da(uVar2);
      if (iVar1 != 0) {
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_03ab0e43(uVar2,0);
      }
    }
  }
  else {
    FUN_00655080(param_1);
  }
  return;
}

