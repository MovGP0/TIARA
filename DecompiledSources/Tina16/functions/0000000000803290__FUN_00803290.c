/* Ghidra address: 00803290 */
/* Ghidra symbol: FUN_00803290 */


void FUN_00803290(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(int *)(param_2 + 8) == 2) && (*(char *)((longlong)param_1 + 0xff) == '\x01')) &&
     ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
    uVar3 = FUN_0065b870(param_1);
    iVar2 = FUN_007f9220(uVar3);
    if (iVar2 == 0) {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_041cc6e2(uVar3,0,0,0,0,0,7);
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_0413e052(uVar3,0xa2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
      if (*(char *)((longlong)param_1 + 0x4d5) == '\0') {
        return;
      }
      cVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
      FUN_0064e9e0(param_1,cVar1 == '\0',0xffffffff);
      return;
    }
  }
  FUN_00650b00(param_1,param_2);
  return;
}

