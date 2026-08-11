/* Ghidra address: 009d4880 */
/* Ghidra symbol: FUN_009d4880 */


void FUN_009d4880(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  cVar1 = (**(code **)*param_3)(param_3);
  if ((cVar1 == '\x02') || (**(int **)(param_1 + 0x48) == 0)) {
    **(uint **)(param_1 + 0x48) = (uint)*(byte *)(param_3 + 10);
    FUN_005894c0(local_20,&DAT_00901fd0,(char)param_3[10]);
    FUN_00414ad0(*(longlong *)(param_1 + 0x48) + 8,local_20[0]);
    FUN_00414b90(*(longlong *)(param_1 + 0x48) + 0x20,param_3[3]);
    uVar2 = (**(code **)(*param_3 + 0x58))(param_3);
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x28) = uVar2;
    uVar2 = (**(code **)(*param_3 + 0x50))(param_3);
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x2c) = uVar2;
    uVar2 = (**(code **)(*param_3 + 0x40))(param_3);
    *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x30) = uVar2;
    (**(code **)(*param_3 + 0x68))(param_3,&local_28);
    FUN_00414b90(*(longlong *)(param_1 + 0x48) + 0x10,local_28);
    *param_4 = 0;
  }
  FUN_00414520(&local_28);
  FUN_00414480(local_20);
  return;
}

