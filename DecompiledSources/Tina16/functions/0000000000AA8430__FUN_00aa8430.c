/* Ghidra address: 00aa8430 */
/* Ghidra symbol: FUN_00aa8430 */


undefined8 * FUN_00aa8430(longlong param_1,int param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x2a0) + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      puVar3 = (undefined8 *)FUN_00ac3910(*(undefined8 *)(param_1 + 0x2a0),iVar4);
      iVar1 = (**(code **)*puVar3)(puVar3);
      if (iVar1 <= param_2) {
        uVar2 = (**(code **)*puVar3)(puVar3);
        *param_3 = uVar2;
        *param_4 = iVar4;
        return puVar3;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  return (undefined8 *)0x0;
}

