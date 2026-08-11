/* Ghidra address: 00c7abe0 */
/* Ghidra symbol: FUN_00c7abe0 */


void FUN_00c7abe0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  cVar2 = FUN_00b96de0(param_2);
  if ((cVar2 == '\0') && (iVar3 = FUN_0044f900(&LAB_00c7ad04,param_2), iVar3 != 1)) {
    return;
  }
  local_20 = FUN_00442b60(0x105);
  local_30 = thunk_FUN_041da4fa();
  local_28 = FUN_00c78d60(param_1);
  thunk_FUN_03c244fb(local_28);
  uVar1 = local_20;
  thunk_FUN_041b2403(local_28,0xd,0x104,local_20);
  uVar4 = FUN_00416740(param_2);
  thunk_FUN_041b2403(local_28,0xc,0,uVar4);
  uVar4 = thunk_FUN_03a99535(*(undefined8 *)(param_1 + 0x298),1);
  thunk_FUN_041b2403(uVar4,0xf5,0,0);
  thunk_FUN_041b2403(local_28,0xc,0,uVar1);
  thunk_FUN_03c244fb(local_30);
  FUN_00442c30(local_20);
  return;
}

