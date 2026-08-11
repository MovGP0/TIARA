/* Ghidra address: 01b8b960 */
/* Ghidra symbol: FUN_01b8b960 */


undefined1 FUN_01b8b960(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_29 = 0;
  FUN_00416ba0(param_1 + 0xd0,*(undefined8 *)(param_1 + 0x108),local_res10[0]);
  FUN_00416cd0(local_20,3,*(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x360),&LAB_01b8bb48,
               local_res10[0]);
  uVar2 = FUN_01603790(local_20[0],0x20);
  *(undefined8 *)(param_1 + 200) = uVar2;
  cVar1 = FUN_01b8b6e0(*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0x108),
                       local_res10[0],*(undefined8 *)(param_1 + 200),param_1 + 0xdc);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x18))
              (*(longlong **)(param_1 + 200),&local_28,*(undefined4 *)(param_1 + 0xdc));
    FUN_00414b50(param_1 + 0xc0,local_28);
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0xd8))
              (*(longlong **)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xc0));
    FUN_00410f20(*(undefined8 *)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    cVar1 = FUN_01b81480(*(undefined8 *)(param_1 + 0xc0));
    if (cVar1 != '\0') {
      uVar2 = FUN_0044d490(&PTR_FUN_01b7f680,1,*(undefined8 *)(param_1 + 0x108));
      FUN_004134c0(uVar2);
    }
    local_29 = 1;
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return local_29;
}

