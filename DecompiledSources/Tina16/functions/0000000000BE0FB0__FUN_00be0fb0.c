/* Ghidra address: 00be0fb0 */
/* Ghidra symbol: FUN_00be0fb0 */


undefined8 * FUN_00be0fb0(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (*(uint *)(lVar4 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 8) + (longlong)(int)param_3 * 0x14);
  uVar3 = puVar1[1];
  uVar2 = *(undefined4 *)(puVar1 + 2);
  *param_2 = *puVar1;
  param_2[1] = uVar3;
  *(undefined4 *)(param_2 + 2) = uVar2;
  return param_2;
}

