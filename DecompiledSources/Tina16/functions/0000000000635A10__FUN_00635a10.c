/* Ghidra address: 00635a10 */
/* Ghidra symbol: FUN_00635a10 */


void FUN_00635a10(longlong *param_1,uint param_2,undefined8 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 local_48 [3];
  undefined8 local_30;
  
  local_30 = *param_3;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(undefined4 *)(*(longlong *)(param_1[0x10] + 0x18) + 0x28);
    FUN_005fdab0(param_1[0x10],*(undefined4 *)(*(longlong *)(param_1[0xf] + 0x18) + 0x28));
    iVar5 = 3;
    puVar3 = &DAT_01df58c8;
    puVar4 = local_48;
    do {
      *puVar4 = CONCAT44(*(int *)(puVar3 + ((ulonglong)param_2 & 0xff) * 0x18 + 4) * param_4 +
                         local_30._4_4_,
                         *(int *)(puVar3 + ((ulonglong)param_2 & 0xff) * 0x18) * param_4 +
                         (int)local_30);
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 8;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1[0xf] + 0x18) + 0x2c);
    FUN_005fd6d0(param_1[0xf],1);
    (**(code **)(*param_1 + 0xd8))(param_1,local_48,2);
    FUN_005fd6d0(param_1[0xf],uVar2);
    FUN_005fdab0(param_1[0x10],uVar1);
  }
  return;
}

