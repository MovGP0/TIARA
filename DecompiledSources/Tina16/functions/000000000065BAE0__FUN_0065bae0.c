/* Ghidra address: 0065bae0 */
/* Ghidra symbol: FUN_0065bae0 */


void FUN_0065bae0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_041cc6e2(uVar2,0,0,0,(int)param_1[0x13],*(undefined4 *)((longlong)param_1 + 0x9c),
                         0x16);
      (**(code **)(*param_1 + 0x108))(param_1);
    }
  }
  return;
}

