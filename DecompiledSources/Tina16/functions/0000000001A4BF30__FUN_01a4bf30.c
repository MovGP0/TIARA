/* Ghidra address: 01a4bf30 */
/* Ghidra symbol: FUN_01a4bf30 */


undefined8 FUN_01a4bf30(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00414ad0(param_2,L"Filter parameters: ");
  iVar1 = 0;
  do {
    if ((1 << ((byte)iVar1 & 0x1f) & *(uint *)(param_1 + 0x940)) != 0) {
      if (iVar1 == 0) {
        local_48 = *(undefined8 *)(param_1 + 0x960);
      }
      if (iVar1 == 1) {
        local_48 = *(undefined8 *)(param_1 + 0x970);
      }
      if (iVar1 == 2) {
        local_48 = *(undefined8 *)(param_1 + 0x980);
      }
      if (iVar1 == 3) {
        local_48 = *(undefined8 *)(param_1 + 0x990);
      }
      FUN_00b8fd60(&local_28,local_48,*PTR_DAT_02005310,0,1);
      if ((iVar1 == 0) || (iVar1 == 1)) {
        FUN_00414b50(&local_30,&PTR_DAT_01a4c16c);
      }
      if ((iVar1 == 2) || (iVar1 == 3)) {
        FUN_00414b50(&local_30,&DAT_01a4c180);
      }
      (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x18))
                (*(longlong **)(param_1 + 0x8f8),local_40,iVar1);
      FUN_00416cd0(&local_20,5,local_40[0],&DAT_01a4c194,local_28,local_30,&DAT_01a4c1a4);
      FUN_00416ad0(param_2,local_20);
      if (iVar1 < 3) {
        FUN_00416ad0(param_2,&DAT_01a4c1b4);
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  FUN_00416ad0(param_2,&LAB_01a4c1c8);
  FUN_00414480(local_40);
  FUN_00414560(&local_30,3);
  return param_2;
}

