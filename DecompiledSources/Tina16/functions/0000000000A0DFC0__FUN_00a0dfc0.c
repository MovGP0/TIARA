/* Ghidra address: 00a0dfc0 */
/* Ghidra symbol: FUN_00a0dfc0 */


undefined8 FUN_00a0dfc0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 != 0xcc) {
    if (iVar1 != 0xcb) {
      if (iVar1 != 0xca) {
        lVar2 = *param_1;
        *(undefined4 *)(lVar2 + 0x28) = 0x14;
        *(int *)(lVar2 + 0x2c) = iVar1;
        (**(code **)*param_1)(param_1);
        goto LAB_00a0e096;
      }
      FUN_00a0e730(param_1);
      if ((int)param_1[0xb] != 0) {
        *(undefined4 *)((longlong)param_1 + 0x24) = 0xcf;
        return 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x24) = 0xcb;
    }
    if (*(int *)(param_1[0x48] + 0x20) != 0) {
      puVar5 = (undefined8 *)param_1[2];
      while( true ) {
        if (puVar5 != (undefined8 *)0x0) {
          (*(code *)*puVar5)(param_1);
        }
        uVar3 = (**(code **)param_1[0x48])(param_1);
        if (uVar3 == 0) {
          return 0;
        }
        if (uVar3 == 2) break;
        puVar5 = (undefined8 *)param_1[2];
        if (((uVar3 | 2) == 3) && (puVar5 != (undefined8 *)0x0)) {
          iVar1 = *(int *)(puVar5 + 1);
          *(int *)(puVar5 + 1) = iVar1 + 1;
          if (*(int *)((longlong)puVar5 + 0xc) <= iVar1 + 1) {
            *(int *)((longlong)puVar5 + 0xc) =
                 *(int *)((longlong)puVar5 + 0xc) + *(int *)((longlong)param_1 + 0x1a4);
          }
        }
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_1 + 0xac);
  }
LAB_00a0e096:
  uVar4 = FUN_00a0e0b0(param_1);
  return uVar4;
}

