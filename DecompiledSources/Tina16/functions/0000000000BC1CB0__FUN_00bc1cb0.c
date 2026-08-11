/* Ghidra address: 00bc1cb0 */
/* Ghidra symbol: FUN_00bc1cb0 */


undefined8 FUN_00bc1cb0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (-1 < param_2) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
    if (param_2 < iVar1) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),param_2);
    }
  }
  return uVar2;
}

