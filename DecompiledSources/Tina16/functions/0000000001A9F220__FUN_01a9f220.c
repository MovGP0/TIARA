/* Ghidra address: 01a9f220 */
/* Ghidra symbol: FUN_01a9f220 */


undefined8 FUN_01a9f220(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar2 = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    if (*(char *)(param_1 + 0xd0) == '\x01') {
      local_48 = **(undefined8 **)(param_1 + 200);
      local_40 = (*(undefined8 **)(param_1 + 200))[1];
    }
    else {
      local_48 = **(undefined8 **)(param_1 + 200);
      local_40 = (*(undefined8 **)(param_1 + 200))[1];
    }
    local_30 = FUN_01a9cdf0(*(undefined8 *)(param_1 + 0xa0),&local_48);
    local_38 = FUN_01a9cdf0(*(undefined8 *)(param_1 + 0xa0),&local_40);
    FUN_01a98380(*(undefined8 *)(param_1 + 0xa0),local_30 & 0xffffffff,local_30._4_4_,&local_30,
                 (longlong)&local_30 + 4);
    FUN_01a98380(*(undefined8 *)(param_1 + 0xa0),local_38 & 0xffffffff,local_38._4_4_,&local_38,
                 (longlong)&local_38 + 4);
    FUN_00498350(local_58,local_30 & 0xffffffff,local_30._4_4_,local_38 & 0xffffffff,
                 local_38 >> 0x20);
    uVar2 = thunk_FUN_0411fefb(local_58);
    for (iVar4 = 2; iVar4 <= (int)(uint)*(byte *)(param_1 + 0xd0); iVar4 = iVar4 + 1) {
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 200) + -0x10 + (longlong)iVar4 * 0x10);
      local_48 = *puVar1;
      local_40 = puVar1[1];
      local_30 = FUN_01a9cdf0(*(undefined8 *)(param_1 + 0xa0),&local_48);
      local_38 = FUN_01a9cdf0(*(undefined8 *)(param_1 + 0xa0),&local_40);
      FUN_01a98380(*(undefined8 *)(param_1 + 0xa0),local_30 & 0xffffffff,local_30._4_4_,&local_30,
                   (longlong)&local_30 + 4);
      FUN_01a98380(*(undefined8 *)(param_1 + 0xa0),local_38 & 0xffffffff,local_38._4_4_,&local_38,
                   (longlong)&local_38 + 4);
      FUN_00498350(local_58,local_30 & 0xffffffff,local_30._4_4_,local_38 & 0xffffffff,
                   local_38 >> 0x20);
      uVar3 = thunk_FUN_0411fefb(local_58);
      thunk_FUN_04199bfe(uVar2,uVar2,uVar3,2);
    }
  }
  return uVar2;
}

