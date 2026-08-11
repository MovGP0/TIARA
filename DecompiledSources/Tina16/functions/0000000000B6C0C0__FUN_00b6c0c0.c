/* Ghidra address: 00b6c0c0 */
/* Ghidra symbol: FUN_00b6c0c0 */


void FUN_00b6c0c0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  puVar2 = auStack_58;
  if ((char)param_1[0xf] != '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  iVar3 = (**(code **)(param_3 + 0x98))(param_3);
  local_28 = FUN_004095c0((longlong)(iVar3 / 8),(longlong)iVar3 % 8 & 0xffffffff);
  local_20 = (longlong *)(**(code **)(param_3 + 0x78))(param_3,1,param_1);
  (**(code **)(*local_20 + 0xa8))(local_20);
  FUN_00b6be30(local_20,param_2);
  uVar1 = local_28;
  (**(code **)(*local_20 + 0xb0))(local_20,local_28);
  FUN_00410f20(local_20);
  iVar3 = FUN_00b6bfb0(param_1);
  iVar4 = (**(code **)(param_3 + 0x98))(param_3);
  if (iVar3 < iVar4) {
    uVar5 = FUN_00b6bfb0(param_1);
    (**(code **)(*param_1 + 0xa8))(param_1,uVar1,uVar5,0);
  }
  else {
    uVar5 = (**(code **)(param_3 + 0x98))(param_3);
    (**(code **)(*param_1 + 0xa8))(param_1,uVar1,uVar5,0);
  }
  iVar3 = (**(code **)(param_3 + 0x98))(param_3);
  FUN_0040d200(uVar1,(longlong)(iVar3 / 8),0xff);
  FUN_004095f0(local_28);
  return;
}

