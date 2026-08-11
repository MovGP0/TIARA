/* Ghidra address: 00a17530 */
/* Ghidra symbol: FUN_00a17530 */


void FUN_00a17530(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x30);
  *(undefined8 **)(param_1 + 0x238) = puVar5;
  *puVar5 = FUN_00a175f0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x19c);
    *(undefined4 *)(puVar5 + 4) = uVar4;
    if (param_2 == 0) {
      uVar6 = (**(code **)(*(longlong *)(param_1 + 8) + 0x10))
                        (param_1,1,*(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88),uVar4);
      puVar5[3] = uVar6;
    }
    else {
      pcVar3 = *(code **)(*(longlong *)(param_1 + 8) + 0x20);
      iVar1 = *(int *)(param_1 + 0x90);
      iVar2 = *(int *)(param_1 + 0x88);
      uVar4 = FUN_00a1bc80(*(undefined4 *)(param_1 + 0x8c),uVar4);
      uVar6 = (*pcVar3)(param_1,1,0,iVar1 * iVar2,uVar4,*(undefined4 *)(puVar5 + 4));
      puVar5[2] = uVar6;
    }
  }
  return;
}

