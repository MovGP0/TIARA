/* Ghidra address: 013e72b0 */
/* Ghidra symbol: FUN_013e72b0 */


void FUN_013e72b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x770) + 0x90))(*(longlong **)(param_1 + 0x770));
  if (*(char *)(param_1 + 0x798) == '\x01') {
    (**(code **)(**(longlong **)(param_1 + 0x770) + 0x78))
              (*(longlong **)(param_1 + 0x770),&DAT_013e7594);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_28);
    FUN_00416cd0(&local_20,3,&DAT_013e75a8,local_28,&DAT_013e75bc);
    (**(code **)(**(longlong **)(param_1 + 0x770) + 0x78))(*(longlong **)(param_1 + 0x770),local_20)
    ;
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x788) + 0x10) + -1;
  iVar1 = 1;
  if (0 < iVar2) {
    do {
      if (*(char *)(param_1 + 0x798) == '\x01') {
        FUN_0043f750(&local_38,iVar1);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x728),&local_40);
        FUN_00416cd0(&local_30,4,local_38,&DAT_013e75cc,local_40,&DAT_013e75e0);
        (**(code **)(**(longlong **)(param_1 + 0x770) + 0x78))
                  (*(longlong **)(param_1 + 0x770),local_30);
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_50);
        FUN_00416cd0(&local_48,3,&DAT_013e75a8,local_50,&DAT_013e75bc);
        (**(code **)(**(longlong **)(param_1 + 0x770) + 0x78))
                  (*(longlong **)(param_1 + 0x770),local_48);
      }
      else {
        FUN_0043f750(&local_58,iVar1);
        FUN_00416ad0(&local_58,L". X: ");
        (**(code **)(**(longlong **)(param_1 + 0x770) + 0x78))
                  (*(longlong **)(param_1 + 0x770),local_58);
        (**(code **)(**(longlong **)(param_1 + 0x770) + 0x78))
                  (*(longlong **)(param_1 + 0x770),L"  Y:");
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_50);
  FUN_00414480(&local_48);
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  return;
}

