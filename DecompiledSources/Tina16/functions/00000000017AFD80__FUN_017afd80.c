/* Ghidra address: 017afd80 */
/* Ghidra symbol: FUN_017afd80 */


bool FUN_017afd80(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [3];
  
  (**(code **)(*param_1 + 0x40))(param_1,&local_38);
  if (local_30 < local_38) {
    FUN_017ad610(&local_38,&local_30);
  }
  if (local_2c[0] < local_34) {
    FUN_017ad610(&local_34,local_2c);
  }
  uVar2 = FUN_00498310(param_2,param_3);
  iVar1 = thunk_FUN_03f16006(&local_38,uVar2);
  return iVar1 != 0;
}

