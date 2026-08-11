/* Ghidra address: 0147c380 */
/* Ghidra symbol: FUN_0147c380 */


int FUN_0147c380(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_38 = param_3;
  local_34 = FUN_0064dc90(param_1);
  local_30 = FUN_00416740(param_2);
  iVar1 = FUN_0064fca0(param_1,0x438,1,&local_38);
  if (iVar1 != -1) {
    iVar2 = FUN_0064fca0(param_1,0xc9,(longlong)iVar1,0);
    iVar2 = FUN_0064fca0(param_1,0xbb,(longlong)(iVar2 + param_4),0);
    if (iVar2 == -1) {
      (**(code **)(*param_1 + 0x290))(param_1,iVar1);
    }
    else {
      (**(code **)(*param_1 + 0x290))(param_1,iVar2);
    }
    (**(code **)(*param_1 + 0x288))(param_1,0);
    (**(code **)(*param_1 + 600))(param_1);
  }
  return iVar1;
}

