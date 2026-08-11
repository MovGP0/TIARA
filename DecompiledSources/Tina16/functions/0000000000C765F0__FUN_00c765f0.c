/* Ghidra address: 00c765f0 */
/* Ghidra symbol: FUN_00c765f0 */


undefined8 FUN_00c765f0(int param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 < 0) {
    uVar1 = thunk_FUN_04186711(DAT_02019d38,param_1,param_2,param_3);
  }
  else if (param_2 == 0x2e) {
    if (*(char *)(*(longlong *)(DAT_02019d30 + 0x220) + 0xc) == '\0') {
      lVar2 = thunk_FUN_041da4fa();
      lVar3 = FUN_00c7a6e0(DAT_02019d30);
      if (lVar2 == lVar3) {
        return 1;
      }
    }
    uVar1 = thunk_FUN_04186711(DAT_02019d38,param_1,0x2e,param_3);
  }
  else {
    uVar1 = thunk_FUN_04186711(DAT_02019d38,param_1,param_2,param_3);
  }
  return uVar1;
}

