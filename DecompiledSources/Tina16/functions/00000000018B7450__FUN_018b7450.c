/* Ghidra address: 018b7450 */
/* Ghidra symbol: FUN_018b7450 */


void FUN_018b7450(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_34;
  undefined8 local_30 [2];
  int local_1c;
  
  local_30[0] = 0;
  local_40 = param_2;
  local_34 = param_3;
  if (param_2 != 0) {
    iVar1 = FUN_01804370(*(undefined8 *)(param_2 + 0x28),param_2);
    iVar2 = FUN_01803a10(*(undefined8 *)(local_40 + 0x28));
    if (iVar1 + 1 < iVar2) {
      local_40 = FUN_018039f0(*(undefined8 *)(local_40 + 0x28),iVar1 + 1);
      FUN_01803cc0(local_40,local_30,&DAT_018b7514);
      local_1c = FUN_0043fc00(local_30[0]);
      local_1c = local_34 - local_1c;
      FUN_018b72f0(auStack_68,local_40);
    }
  }
  FUN_00414480(local_30);
  return;
}

