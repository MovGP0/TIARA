/* Ghidra address: 00acbde0 */
/* Ghidra symbol: FUN_00acbde0 */


void FUN_00acbde0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00ac9d80(*(undefined8 *)(param_1 + 0x140),local_30,iVar3);
      iVar2 = FUN_0043e420(param_3,local_30[0]);
      if (iVar2 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x158) + 0x268))
                  (*(longlong **)(param_1 + 0x158),iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_30);
  return;
}

