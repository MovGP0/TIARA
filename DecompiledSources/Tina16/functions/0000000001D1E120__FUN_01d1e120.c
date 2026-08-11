/* Ghidra address: 01d1e120 */
/* Ghidra symbol: FUN_01d1e120 */


undefined8 FUN_01d1e120(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  puVar3 = (undefined2 *)FUN_00442b60(0x100);
  puVar4 = (undefined2 *)FUN_00442b60(0x100);
  puVar5 = (undefined2 *)FUN_00442b60(0x100);
  *puVar3 = 0;
  *puVar4 = 0;
  *puVar5 = 0;
  uVar6 = FUN_00442620(puVar3,&DAT_01d1e2d0);
  uVar7 = FUN_004424b0(puVar4,&DAT_01d1e2d4);
  uVar8 = FUN_004424b0(puVar5,&DAT_01d1e2e0);
  while (*(char *)(param_1 + 0x98) == '\x01') {
    uVar1 = FUN_01d11ab0(uVar6,local_res10[0]);
    if (0x7fffffff < uVar1) break;
    if (*(char *)(param_1 + 0x78) == '\0') {
      uVar2 = FUN_01d11ab0(uVar6,local_res10[0]);
      FUN_01d11990(uVar7,local_res10,uVar2);
    }
    else {
      uVar2 = FUN_01d11ab0(uVar6,local_res10[0]);
      FUN_01d11990(uVar8,local_res10,uVar2);
    }
    uVar2 = FUN_01d11ab0(uVar6,local_res10[0]);
    FUN_01d11900(local_res10,uVar2,1);
  }
  uVar6 = FUN_00442620(uVar6,&DAT_01d1e2f0);
  uVar7 = FUN_004424b0(uVar7,&LAB_01d1e2f4);
  while (*(char *)(param_1 + 0x98) == '\x01') {
    uVar1 = FUN_01d11ab0(uVar6,local_res10[0]);
    if (0x7fffffff < uVar1) break;
    uVar2 = FUN_01d11ab0(uVar6,local_res10[0]);
    FUN_01d11990(uVar7,local_res10,uVar2);
    uVar2 = FUN_01d11ab0(uVar6,local_res10[0]);
    FUN_01d11900(local_res10,uVar2,1);
  }
  FUN_00442c30(uVar6);
  FUN_00442c30(uVar7);
  FUN_00442c30(uVar8);
  return local_res10[0];
}

