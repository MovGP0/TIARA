/* Ghidra address: 01beb640 */
/* Ghidra symbol: FUN_01beb640 */


void FUN_01beb640(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_01bd3d50(param_1,param_2);
  lVar1 = FUN_007f9b70(*(undefined8 *)(param_1 + 0x78),1);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x4d6) == '\x02')) {
    uVar2 = FUN_01c07120(param_1);
    lVar1 = FUN_01c00de0(uVar2,*(undefined2 *)(param_2 + 8));
    if (lVar1 != 0) {
      (**(code **)(**(longlong **)(lVar1 + 0x80) + 600))(*(longlong **)(lVar1 + 0x80),1);
      uVar2 = FUN_01beb450(param_1);
      uVar2 = FUN_0065b870(uVar2);
      thunk_FUN_0413e052(uVar2,0xb403,0,*(undefined8 *)(lVar1 + 0x80));
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
  }
  return;
}

