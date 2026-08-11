/* Ghidra address: 0046cb70 */
/* Ghidra symbol: FUN_0046cb70 */


void FUN_0046cb70(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  uint local_34;
  ushort *local_30;
  ushort local_22;
  undefined2 local_20 [4];
  undefined1 local_18 [16];
  
  local_50 = auStack_78;
  cVar1 = FUN_0046c6f0(param_2,&local_22,&local_30);
  if (cVar1 == '\0') {
    FUN_004607e0(0x80070057);
  }
  if (*local_30 != param_3) {
    FUN_004607e0(0x8002000b);
  }
  thunk_FUN_04125dff(local_20);
  local_34 = (uint)(local_22 & 0xfff);
  if (local_34 == 0xc) {
    uVar2 = thunk_FUN_041151fc(local_30,param_4,&local_40);
    FUN_004607e0(uVar2);
    FUN_00461840(local_20,local_40);
  }
  else {
    uVar2 = thunk_FUN_03aa449f(local_30,param_4,local_18);
    FUN_004607e0(uVar2);
    local_20[0] = (undefined2)local_34;
  }
  FUN_00461840(param_1,local_20);
  FUN_00460b80(local_20);
  return;
}

