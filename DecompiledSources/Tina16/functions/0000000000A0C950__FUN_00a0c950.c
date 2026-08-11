/* Ghidra address: 00a0c950 */
/* Ghidra symbol: FUN_00a0c950 */


void FUN_00a0c950(longlong *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  if (param_2 != 1) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xe;
    *(int *)(lVar2 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar3 = (undefined8 *)FUN_00a0c4e0(param_1,param_2,0x98);
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 1) = param_5;
  *(undefined4 *)((longlong)puVar3 + 0xc) = param_4;
  *(undefined4 *)(puVar3 + 2) = param_6;
  *(undefined4 *)((longlong)puVar3 + 0x24) = param_3;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  puVar3[6] = *(undefined8 *)(lVar1 + 0x80);
  *(undefined8 **)(lVar1 + 0x80) = puVar3;
  return;
}

