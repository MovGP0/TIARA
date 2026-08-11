/* Ghidra address: 010a3d40 */
/* Ghidra symbol: FUN_010a3d40 */


void FUN_010a3d40(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_010a3860(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x960) + 0x180))(*(longlong **)(param_1 + 0x960));
  FUN_010a6dc0(param_1,*(undefined4 *)(param_1 + 0x980));
  FUN_00bfcc50(*(longlong *)(param_1 + 0x960),
               *(int *)(param_1 + 0x980) - *(int *)(*(longlong *)(param_1 + 0x960) + 0x508) / 2);
  if (*(char *)(param_1 + 0xa2a) == '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a70) + 0x78);
    FUN_00b8fd60(local_20,*(undefined8 *)(lVar1 + 0x13a20),*(undefined1 *)(lVar1 + 0x94),0,1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x850),local_20[0]);
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x850),L"<end sim>");
  }
  uVar2 = FUN_010a6d20(param_1);
  FUN_0043f750(&local_28,uVar2);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x940),local_28);
  FUN_010a3b00(param_1);
  FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
  FUN_00414560(&local_28,2);
  return;
}

