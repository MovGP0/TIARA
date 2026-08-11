/* Ghidra address: 015ddd10 */
/* Ghidra symbol: FUN_015ddd10 */


void FUN_015ddd10(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 *local_20;
  undefined4 local_18;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_68;
  FUN_015ca1c0(param_1);
  FUN_015ca200(param_1);
  *(undefined1 *)(param_1 + 0x101) = 0;
  local_11 = *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9);
  *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9) = 0;
  cVar1 = FUN_015e2c80(param_1,param_2,&local_18);
  if (cVar1 == '\0') {
    local_28 = 0x11;
    local_48 = (ulonglong)local_48._4_4_ << 0x20;
    local_40 = param_1;
    local_30 = param_2;
    uVar2 = FUN_015b5d20(&PTR_FUN_015b5818,1,0xf,&local_30);
    FUN_004134c0(uVar2);
  }
  else {
    local_10 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004b6dc0(local_10,0);
    local_48 = param_5;
    FUN_015d3670(param_1,local_18,local_10,param_4);
    if (param_5 == 0) {
      FUN_004b6dc0(local_10,0);
    }
    FUN_004b84c0(local_10,param_3,(longlong)param_4);
    FUN_00410f20(local_10);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9) = local_11;
  return;
}

