/* Ghidra address: 012e8bf0 */
/* Ghidra symbol: FUN_012e8bf0 */


void FUN_012e8bf0(longlong param_1)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c8),&local_38);
  FUN_00724420(*(undefined8 *)(param_1 + 0x728),local_38);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0xa8))(*(longlong **)(param_1 + 0x728));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x728),&local_40);
    (**(code **)(*local_20 + 0xd8))(local_20,local_40);
    FUN_004b37d0(local_20,&local_48);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_48);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414480(&local_38);
  return;
}

