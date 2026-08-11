/* Ghidra address: 00a17910 */
/* Ghidra symbol: FUN_00a17910 */


void FUN_00a17910(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x80);
  *(undefined8 **)(param_1 + 600) = puVar1;
  *puVar1 = FUN_00a17a00;
  if (0 < *(int *)(param_1 + 0x38)) {
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x58);
    lVar4 = 0;
    do {
      puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x100);
      *puVar3 = puVar2;
      puVar2[0x1e] = 0;
      puVar2[0x1f] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x1d] = 0;
      puVar2[0x1a] = 0;
      puVar2[0x1b] = 0;
      puVar2[0x18] = 0;
      puVar2[0x19] = 0;
      puVar2[0x16] = 0;
      puVar2[0x17] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)((longlong)puVar1 + lVar4 * 4 + 0x58) = 0xffffffff;
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 0xc;
    } while (lVar4 < *(int *)(param_1 + 0x38));
  }
  return;
}

