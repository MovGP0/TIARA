/* Ghidra address: 00782380 */
/* Ghidra symbol: FUN_00782380 */


void FUN_00782380(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  longlong *local_68 [2];
  longlong local_58;
  longlong *local_20 [2];
  
  local_90 = 0;
  local_58 = DAT_02012590 + 8;
  local_20[0] = param_2;
  iVar1 = FUN_00596a10(local_58,local_20);
  if (iVar1 == -1) {
    local_68[0] = param_2;
    FUN_00597e50(DAT_02012590 + 8,local_68);
  }
  else {
    (**(code **)(*param_2 + 0xa0))(param_2,&local_90);
    local_88 = local_90;
    local_80 = 0x11;
    uVar2 = FUN_0044d8d0(&PTR_FUN_00777890,1,PTR_PTR_02002370,&local_88,0);
    FUN_004134c0(uVar2);
  }
  FUN_00414480(&local_90);
  return;
}

