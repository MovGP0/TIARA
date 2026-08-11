/* Ghidra address: 01c7d310 */
/* Ghidra symbol: FUN_01c7d310 */


void FUN_01c7d310(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_01b71b88,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*(longlong *)local_20[0xda] + 0x268))((longlong *)local_20[0xda],0);
  FUN_0064de00(local_20[0xd8],0);
  iVar1 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar1 == 1) {
    uVar3 = FUN_01c7d9d0(param_1);
    uVar2 = (**(code **)(*(longlong *)local_20[0xda] + 0x260))((longlong *)local_20[0xda]);
    FUN_0064dd90(local_20[0xd8],&local_38);
    FUN_012beb90(uVar3,uVar2,local_38);
    FUN_01c7cf40(param_1);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

