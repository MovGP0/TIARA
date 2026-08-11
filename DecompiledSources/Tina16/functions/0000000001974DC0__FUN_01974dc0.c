/* Ghidra address: 01974dc0 */
/* Ghidra symbol: FUN_01974dc0 */


undefined8 FUN_01974dc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_20;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_20 = 0;
  if (*(longlong *)(param_1 + 0x138) != *(longlong *)(param_1 + 0x130)) {
    uVar2 = FUN_01951400(*(undefined8 *)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0xf8) = uVar2;
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xf8) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xf8),iVar3);
        *(undefined8 *)(param_1 + 0xf0) = uVar2;
        iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 0x10),local_res10[0]);
        if (iVar1 == 0) {
          local_20 = *(undefined8 *)(param_1 + 0xf0);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414480(local_res10);
  return local_20;
}

