/* Ghidra address: 00a0e0b0 */
/* Ghidra symbol: FUN_00a0e0b0 */


undefined8 FUN_00a0e0b0(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x24) != 0xcc) {
    (*(code *)**(undefined8 **)(param_1 + 0x220))(param_1);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0xcc;
  }
  lVar5 = *(longlong *)(param_1 + 0x220);
  if (*(int *)(lVar5 + 0x10) != 0) {
    uVar2 = *(uint *)(param_1 + 0xa8);
    do {
      uVar4 = *(uint *)(param_1 + 0x8c);
      if (uVar2 < uVar4) {
        do {
          puVar1 = *(undefined8 **)(param_1 + 0x10);
          uVar3 = uVar2;
          if (puVar1 != (undefined8 *)0x0) {
            *(uint *)(puVar1 + 1) = uVar2;
            *(uint *)((longlong)puVar1 + 0xc) = uVar4;
            (*(code *)*puVar1)(param_1);
            uVar3 = *(uint *)(param_1 + 0xa8);
          }
          (**(code **)(*(longlong *)(param_1 + 0x228) + 8))(param_1,0,param_1 + 0xa8,0);
          uVar2 = *(uint *)(param_1 + 0xa8);
          if (uVar2 == uVar3) {
            return 0;
          }
          uVar4 = *(uint *)(param_1 + 0x8c);
        } while (uVar2 < uVar4);
        lVar5 = *(longlong *)(param_1 + 0x220);
      }
      (**(code **)(lVar5 + 8))(param_1);
      (*(code *)**(undefined8 **)(param_1 + 0x220))(param_1);
      *(undefined4 *)(param_1 + 0xa8) = 0;
      lVar5 = *(longlong *)(param_1 + 0x220);
      uVar2 = 0;
    } while (*(int *)(lVar5 + 0x10) != 0);
  }
  *(uint *)(param_1 + 0x24) = 0xce - (uint)(*(int *)(param_1 + 0x5c) == 0);
  return 1;
}

