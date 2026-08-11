/* Ghidra address: 00a0de50 */
/* Ghidra symbol: FUN_00a0de50 */


undefined8 FUN_00a0de50(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  puVar1 = (undefined8 *)param_1[5];
  lVar3 = FUN_00a09b20(puVar1[8],1,0x1000,puVar1[7]);
  if (lVar3 == 0) {
    if (*(int *)(puVar1 + 9) != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 0x2a;
      (*(code *)*puVar2)(param_1);
    }
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0x78;
    (**(code **)(lVar3 + 8))(param_1,0xffffffff);
    *(undefined1 *)puVar1[8] = 0xff;
    *(undefined1 *)(puVar1[8] + 1) = 0xd9;
    lVar3 = 2;
  }
  *puVar1 = puVar1[8];
  puVar1[1] = lVar3;
  *(undefined4 *)(puVar1 + 9) = 0;
  return 1;
}

