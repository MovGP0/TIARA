/* Ghidra address: 00c243e0 */
/* Ghidra symbol: FUN_00c243e0 */


void FUN_00c243e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1e [14];
  
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30[0] = 0;
  local_38 = 0;
  iVar1 = FUN_004b6da0(param_2);
  FUN_00c1a3e0(param_2,local_1e,6);
  FUN_00416800(&local_38,local_1e,3);
  FUN_0043e130(local_30,local_38);
  iVar2 = FUN_00416db0(local_30[0],&DAT_00c245c8);
  if (iVar2 != 0) {
    FUN_004b6dc0(param_2,(longlong)iVar1);
    (**(code **)(*param_2 + 0x48))(param_2,4,1);
    FUN_00c1a3e0(param_2,local_1e,6);
    FUN_00416800(&local_48,local_1e,3);
    FUN_0043e130(&local_40,local_48);
    iVar1 = FUN_00416db0(local_40,&DAT_00c245c8);
    if (iVar1 != 0) {
      FUN_0041ddd0(&local_50,PTR_PTR_02003aa0);
      FUN_00c1a320(local_50);
    }
  }
  FUN_00c1a3e0(param_2,param_1 + 0x10,7);
  if ((*(byte *)(param_1 + 0x14) & 0x80) == 0x80) {
    iVar1 = 2 << (*(byte *)(param_1 + 0x14) & 7);
    if ((iVar1 < 2) || (0x100 < iVar1)) {
      FUN_0041ddd0(&local_58,PTR_PTR_02002c10);
      FUN_00c1a320(local_58);
    }
    FUN_00c22ec0(*(undefined8 *)(param_1 + 0x18),param_2,iVar1);
  }
  else {
    FUN_00c22da0(*(undefined8 *)(param_1 + 0x18));
  }
  FUN_00414560(&local_58,6);
  return;
}

