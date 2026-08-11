/* Ghidra address: 0080e790 */
/* Ghidra symbol: FUN_0080e790 */


void FUN_0080e790(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x100) != 0) {
    cVar1 = FUN_0065be20(*(longlong *)(param_1 + 0x100));
    if (cVar1 != '\0') {
      uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x100));
      iVar2 = thunk_FUN_0419e3da(uVar3);
      if (iVar2 != 0) {
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x280))
                          (*(longlong **)(param_1 + 0x100));
        if (cVar1 == '\0') {
          FUN_0080e4f0(param_1,*(undefined4 *)(param_1 + 0xf0),1);
        }
        else {
          uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x100));
          thunk_FUN_03ab0e43(uVar3,0);
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x100),0);
        }
      }
    }
  }
  return;
}

