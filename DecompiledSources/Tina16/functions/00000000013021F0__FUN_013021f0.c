/* Ghidra address: 013021f0 */
/* Ghidra symbol: FUN_013021f0 */


undefined8 FUN_013021f0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_20;
  
  local_res10[0] = param_2;
  FUN_00414610();
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xaf8) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3);
        cVar1 = FUN_012e5690(uVar2,local_res10[0]);
        if (cVar1 != '\0') {
          local_20 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar3);
          goto LAB_0130227b;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  local_20 = 0;
LAB_0130227b:
  FUN_00414480(local_res10);
  return local_20;
}

