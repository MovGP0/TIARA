/* Ghidra address: 00ddeeb0 */
/* Ghidra symbol: FUN_00ddeeb0 */


void FUN_00ddeeb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  int local_38 [2];
  undefined8 local_30;
  uint local_24;
  longlong *local_20 [2];
  
  local_40 = 0;
  local_48 = 0;
  local_20[0] = (longlong *)0x0;
  FUN_00ddd3d0(param_1);
  (**(code **)(*param_2 + 0x90))(param_2);
  uVar2 = FUN_0041b800(local_20);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x60))
                    (*(longlong **)(param_1 + 0x4b0),uVar2);
  if (iVar1 == 0x40000) {
    uVar2 = FUN_0041b800(local_20);
    iVar1 = thunk_FUN_0411e060(*(undefined8 *)(param_1 + 0x490),uVar2);
  }
  if (iVar1 == 0) {
    while (iVar1 = (**(code **)(*local_20[0] + 0x18))(local_20[0],1,local_38,0), iVar1 == 0) {
      if ((local_24 & 2) != 0) {
        FUN_004167d0(&local_48,local_30);
        FUN_007e8d80(&local_40,local_48);
        (**(code **)(*param_2 + 0x80))(param_2,local_40,(longlong)local_38[0]);
      }
    }
  }
  FUN_00414560(&local_48,2);
  FUN_0041b800(local_20);
  return;
}

