/* Ghidra address: 015ddeb0 */
/* Ghidra symbol: FUN_015ddeb0 */


void FUN_015ddeb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_68;
  local_28 = 0;
  FUN_015ca1c0(param_1);
  FUN_015ca200(param_1);
  *(undefined1 *)(param_1 + 0x101) = 0;
  local_11 = *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9);
  *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9) = 0;
  cVar1 = FUN_015e2c80(param_1,param_2,&local_18);
  if (cVar1 == '\0') {
    local_30 = 0x11;
    local_48 = (ulonglong)local_48._4_4_ << 0x20;
    local_40 = param_1;
    local_38 = param_2;
    uVar2 = FUN_015b5d20(&PTR_FUN_015b5818,1,0xf,&local_38);
    FUN_004134c0(uVar2);
  }
  else {
    local_10 = FUN_004ba3c0(&PTR_FUN_0047d288,1,0);
    FUN_004b6dc0(local_10,0);
    local_48 = 0;
    FUN_015d3670(param_1,local_18,local_10,0);
    FUN_004b6dc0(local_10,0);
    FUN_004ba980(local_10,&local_28);
    FUN_00414ad0(param_3,local_28);
    FUN_00410f20(local_10);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9) = local_11;
  FUN_00414480(&local_28);
  return;
}

