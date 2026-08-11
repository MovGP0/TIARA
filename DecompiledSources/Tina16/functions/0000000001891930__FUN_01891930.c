/* Ghidra address: 01891930 */
/* Ghidra symbol: FUN_01891930 */


void FUN_01891930(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
  int local_1c;
  undefined8 local_10;
  
  local_30 = auStack_58;
  uVar1 = FUN_0065b870(param_1);
  local_10 = thunk_FUN_0411fe47(uVar1);
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar1,&local_20);
  FUN_00423b50(&local_20,-local_20,-local_1c);
  FUN_00423b10(&local_20,0,0);
  if (*(char *)(param_1 + 0x4b8) == '\0') {
    uVar1 = thunk_FUN_0412b593(5);
    FUN_00429590(local_10,&local_20,uVar1);
  }
  else {
    uVar1 = thunk_FUN_0412b593(0xd);
    FUN_00429590(local_10,&local_20,uVar1);
  }
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_041a9b5c(uVar1,local_10);
  return;
}

