/* Ghidra address: 0068fc80 */
/* Ghidra symbol: FUN_0068fc80 */


void FUN_0068fc80(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_00785c20(param_1,param_2);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    cVar1 = FUN_0065be20(*(longlong *)(param_1 + 0x40));
    if (cVar1 != '\0') {
      if (*(int *)(param_2 + 8) == 0) {
        uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
        thunk_FUN_03ab0e43(uVar2,0);
      }
      else {
        uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
        thunk_FUN_03ab0e43(uVar2,5);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

