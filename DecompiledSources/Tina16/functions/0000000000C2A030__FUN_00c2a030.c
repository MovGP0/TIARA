/* Ghidra address: 00c2a030 */
/* Ghidra symbol: FUN_00c2a030 */


void FUN_00c2a030(longlong param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_2c;
  int local_28;
  uint local_24;
  undefined8 local_20;
  
  local_20 = 0;
  local_38 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  local_24 = param_4;
  FUN_00c29fc0(auStack_58,param_2 + param_4);
  FUN_00c29fc0(auStack_58,local_28 + param_5);
  if ((*(ushort *)(local_38 + 0x4d) == local_24) && (*(ushort *)(local_38 + 0x4f) == param_5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  *(short *)(local_38 + 0x49) = (short)local_2c;
  *(short *)(local_38 + 0x4b) = (short)local_28;
  *(short *)(local_38 + 0x4d) = (short)local_24;
  *(undefined2 *)(local_38 + 0x4f) = (undefined2)param_5;
  if (bVar1) {
    FUN_00c28ba0(local_38);
    FUN_00c28bd0(local_38);
    FUN_00c28a90(local_38);
    FUN_00c28a40(local_38);
  }
  bVar1 = false;
  iVar2 = (**(code **)(**(longlong **)(local_38 + 8) + 0x60))(*(longlong **)(local_38 + 8));
  iVar3 = local_2c + local_24;
  if (iVar2 < iVar3) {
    iVar2 = (**(code **)(**(longlong **)(local_38 + 8) + 0x60))(*(longlong **)(local_38 + 8));
    bVar1 = 0 < iVar2;
    (**(code **)(**(longlong **)(local_38 + 8) + 0x88))(*(longlong **)(local_38 + 8),iVar3);
  }
  iVar2 = (**(code **)(**(longlong **)(local_38 + 8) + 0x48))(*(longlong **)(local_38 + 8));
  iVar3 = local_28 + param_5;
  if (iVar2 < iVar3) {
    iVar2 = (**(code **)(**(longlong **)(local_38 + 8) + 0x48))(*(longlong **)(local_38 + 8));
    if (0 < iVar2) {
      bVar1 = true;
    }
    (**(code **)(**(longlong **)(local_38 + 8) + 0x70))(*(longlong **)(local_38 + 8),iVar3);
  }
  if (bVar1) {
    FUN_0041ddd0(&local_20,PTR_PTR_02002dc0);
    FUN_00c1a780(local_38,1,local_20);
  }
  FUN_00414480(&local_20);
  return;
}

