/* Ghidra address: 00813740 */
/* Ghidra symbol: FUN_00813740 */


void FUN_00813740(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_00785c20(param_1,param_2);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    cVar1 = FUN_0065be20(*(longlong *)(param_1 + 0x68));
    if (cVar1 != '\0') {
      if (*(int *)(param_2 + 8) == 0) {
        uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x68));
        thunk_FUN_03ab0e43(uVar2,0);
      }
      else {
        uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x68));
        thunk_FUN_03ab0e43(uVar2,5);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    cVar1 = FUN_0065be20(*(longlong *)(param_1 + 0x48));
    if (cVar1 != '\0') {
      if (*(int *)(param_2 + 8) == 0) {
        uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x48));
        thunk_FUN_03ab0e43(uVar2,0);
      }
      else {
        uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x48));
        thunk_FUN_03ab0e43(uVar2,5);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

