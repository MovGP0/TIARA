/* Ghidra address: 00c22000 */
/* Ghidra symbol: FUN_00c22000 */


ulonglong FUN_00c22000(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 unaff_RBX;
  int iVar4;
  
  iVar1 = (**(code **)(*(longlong *)param_2[1] + 0x48))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      puVar3 = (undefined1 *)(**(code **)*param_2)(param_2,iVar4);
      iVar2 = (**(code **)(*(longlong *)param_2[1] + 0x60))();
      if (-1 < iVar2 + -1) {
        do {
          FUN_00c21e10(param_1,puVar3[2],puVar3[1],*puVar3);
          puVar3 = puVar3 + 3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

