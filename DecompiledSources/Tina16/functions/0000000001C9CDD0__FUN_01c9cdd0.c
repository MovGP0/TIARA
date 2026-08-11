/* Ghidra address: 01c9cdd0 */
/* Ghidra symbol: FUN_01c9cdd0 */


void FUN_01c9cdd0(longlong param_1,undefined8 param_2,char param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined4 local_24;
  undefined8 local_20;
  
  if ((param_3 == '\0') && (*(longlong *)(param_1 + 7000) != 0)) {
    cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 7000),&PTR_FUN_0135f8e0);
    if (cVar1 != '\0') {
      local_20 = CONCAT44(param_6,param_5);
      local_20 = FUN_0064d1f0(*(undefined8 *)(param_1 + 0x700),&local_20);
      uVar3 = FUN_0064d3a0(*(undefined8 *)(param_1 + 0xa10),&local_20);
      local_20._0_2_ = (undefined2)uVar3;
      local_20._4_2_ = (undefined2)((ulonglong)uVar3 >> 0x20);
      local_24 = CONCAT22(local_20._4_2_,(undefined2)local_20);
      local_20 = uVar3;
      uVar2 = FUN_01b1fd10(param_4);
      uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
      thunk_FUN_0413e052(uVar3,0x202,uVar2,(longlong)local_24);
    }
  }
  return;
}

