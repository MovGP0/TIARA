/* Ghidra address: 00d3e970 */
/* Ghidra symbol: FUN_00d3e970 */


int FUN_00d3e970(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [24];
  
  iVar2 = 2;
  FUN_00d3e670(param_1,local_38);
  cVar1 = FUN_00423210(local_38,param_2);
  if (cVar1 != '\0') {
    iVar2 = 0x14;
  }
  FUN_00d3ea50(param_1,local_48);
  cVar1 = FUN_00423210(local_48,param_2);
  if (cVar1 != '\0') {
    iVar2 = 9;
  }
  FUN_00d3ec20(param_1,local_58);
  cVar1 = FUN_00423210(local_58,param_2);
  if (cVar1 != '\0') {
    iVar2 = 8;
  }
  FUN_00d3e7f0(param_1,local_68);
  cVar1 = FUN_00423210(local_68,param_2);
  if (cVar1 != '\0') {
    iVar2 = 0x15;
  }
  if (iVar2 == 2) {
    if ((int)param_1[0x19] != 0) {
      *(undefined4 *)(param_1 + 0x19) = 0;
      (**(code **)(*param_1 + 0x68))(param_1);
    }
  }
  else if ((int)param_1[0x19] != iVar2) {
    *(int *)(param_1 + 0x19) = iVar2;
    (**(code **)(*param_1 + 0x68))(param_1);
  }
  return iVar2;
}

