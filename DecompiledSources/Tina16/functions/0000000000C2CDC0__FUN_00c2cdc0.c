/* Ghidra address: 00c2cdc0 */
/* Ghidra symbol: FUN_00c2cdc0 */


int * FUN_00c2cdc0(longlong param_1,int *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))(*(longlong **)(param_1 + 8));
  local_3c = (int)((ulonglong)uVar2 >> 0x20);
  local_44 = (int)((ulonglong)uVar1 >> 0x20);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))(*(longlong **)(param_1 + 8));
  local_40 = (int)uVar2;
  local_48 = (int)uVar1;
  iVar5 = thunk_FUN_03f3ed25(*(undefined2 *)(param_1 + 0x49),local_40 - local_48,uVar4);
  *param_2 = local_48 + iVar5;
  iVar5 = thunk_FUN_03f3ed25(*(undefined2 *)(param_1 + 0x4b),local_3c - local_44,uVar3);
  param_2[1] = local_44 + iVar5;
  iVar5 = thunk_FUN_03f3ed25((uint)*(ushort *)(param_1 + 0x49) + (uint)*(ushort *)(param_1 + 0x4d),
                             local_40 - local_48,uVar4);
  param_2[2] = local_48 + iVar5;
  iVar5 = thunk_FUN_03f3ed25((uint)*(ushort *)(param_1 + 0x4b) + (uint)*(ushort *)(param_1 + 0x4f),
                             local_3c - local_44,uVar3);
  param_2[3] = local_44 + iVar5;
  return param_2;
}

