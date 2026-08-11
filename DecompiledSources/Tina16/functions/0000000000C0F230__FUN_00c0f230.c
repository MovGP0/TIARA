/* Ghidra address: 00c0f230 */
/* Ghidra symbol: FUN_00c0f230 */


void FUN_00c0f230(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x668) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x668) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        puVar1 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x668),iVar2);
        (**(code **)*puVar1)(puVar1,param_2,param_3,param_4,param_5);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

