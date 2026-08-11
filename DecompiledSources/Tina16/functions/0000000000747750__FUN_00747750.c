/* Ghidra address: 00747750 */
/* Ghidra symbol: FUN_00747750 */


void FUN_00747750(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int local_20 [2];
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(int *)(param_1 + 0x24) != param_2) {
    lVar2 = FUN_00747560(param_1);
    if ((*(ushort *)(lVar2 + 0x34) & 1) == 0) {
      if (param_2 < 0) {
        bVar1 = true;
      }
      else {
        lVar2 = FUN_00747560(param_1);
        bVar1 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x4b0) + 0x10) + 0x10) + -1 < param_2;
      }
      if (bVar1) {
        FUN_0041ddd0(&local_10,PTR_PTR_02004128);
        local_18 = 0;
        local_20[0] = param_2;
        uVar3 = FUN_0044d530(&PTR_FUN_00737098,1,local_10,local_20,0);
        FUN_004134c0(uVar3);
      }
      FUN_007496c0(param_1,*(undefined4 *)(param_1 + 0x20),param_2,0,1);
    }
    else {
      *(int *)(param_1 + 0x24) = param_2;
    }
  }
  FUN_00414480(&local_10);
  return;
}

