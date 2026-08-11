/* Ghidra address: 0069fb00 */
/* Ghidra symbol: FUN_0069fb00 */


void FUN_0069fb00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03abe598(uVar1,&local_28);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar1,&local_38);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_0411b3be(0,uVar1,&local_38,2);
  FUN_00423b50(&local_28,-local_38,-local_34);
  thunk_FUN_041a27b3(param_2,local_28,local_24,local_20,local_1c);
  FUN_00423b50(&local_38,-local_38,-local_34);
  thunk_FUN_03998bad(param_2,&local_38,
                     *(uint *)(&DAT_01dfcd04 + (ulonglong)*(byte *)(param_1 + 0x491) * 4) |
                     *(uint *)(&DAT_01dfcd10 + (ulonglong)*(byte *)(param_1 + 0x492) * 4),
                     (uint)*(byte *)(param_1 + 0x490) |
                     *(uint *)(&DAT_01dfcd1c + (ulonglong)*(byte *)(param_1 + 0x390) * 4) | 0x2000);
  FUN_00428be0(param_2,local_38,local_34,local_30,local_2c);
  uVar1 = FUN_005fdb10(*(undefined8 *)(param_1 + 0x330));
  thunk_FUN_03984819(param_2,&local_38,uVar1);
  return;
}

