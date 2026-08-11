/* Ghidra address: 00a41330 */
/* Ghidra symbol: FUN_00a41330 */


undefined1 FUN_00a41330(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*(longlong *)param_2[1] + 0x48))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      puVar3 = (undefined1 *)(**(code **)*param_2)(param_2,iVar4);
      iVar2 = (**(code **)(*(longlong *)param_2[1] + 0x60))();
      if (-1 < iVar2 + -1) {
        do {
          FUN_00a41470(param_1,param_1 + 8,puVar3[2],puVar3[1],*puVar3,
                       *(undefined4 *)(param_1 + 0x5c),0,param_1 + 0x10,param_1 + 0x18);
          while (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x10)) {
            FUN_00a416c0(param_1,*(undefined4 *)(param_1 + 0x5c),param_1 + 0x10,param_1 + 0x18);
          }
          puVar3 = puVar3 + 3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 1;
}

